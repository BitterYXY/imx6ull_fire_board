#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "bintoimx.h"

#define BIN_OFFSET		(3072)		//3K Bytes

/*
 *Description:	Add IVT(Image Vector Table) + Boot Data + DCD(Device configuration data) 
 *				at the head of .bin file.
 *Usage:		./bintoimx <-512m|-256m> suorce_bin
 *				Note, ddr size <-512m|-256m>, default 512m;
*/

/*
 * print the basic information
*/
void message_print(void)
{	
	printf("I.MX6ULL ...\r\n");
	printf("Convert .bin file to .imx file...");
}

int main(int argc, char *argv[])
{
	FILE *fp;
	unsigned char *buf;
	unsigned char *cmdbuf;
	int nbytes, filelen;
	int i = 0, j = 0;
	int ddrsize = 0;   //ddr size: 0, 512M; 1, 256M;
	unsigned char *name_buf;
	size_t name_len;

	message_print();

	if((argc != 2) && (argc != 3)){
		printf("Error Usage! Reference Below:\r\n");
		printf("sudo ./%s <-512m or -256m> source_bin\r\n", argv[0]);
		return -1;
	}

	//check ddr size 
	for(i = 0; i < argc; i++)
	{
		char *param = argv[i];
		if(param[0] != '-')
			continue;
		if(strcmp(param, "-256m") == 0)			//256M
			ddrsize = 1;
		else if(strcmp(param, "-512m") == 0)	//512M
			ddrsize = 0;
	}
	if(argc == 2)
		ddrsize = 0;
	
	// open .bin file on binary read "rb" mode
	fp = fopen(argv[1], "rb");
	if(fp == NULL){
		printf("Can't Open file %s\r\n", argv[1]);
		return -1;
	}

	//get .bin file length
	fseek(fp, 0L, SEEK_END);
	filelen = ftell(fp);
	fseek(fp, 0L, SEEK_SET);
	printf("file %s size = %dBytes\r\n", argv[1], filelen);

	//malloc buffer
	buf = malloc(filelen + BIN_OFFSET);
	if(buf == NULL){
		printf("Mem Malloc Failed!\r\n");
		fclose(fp);
		return -1;
	}
	memset(buf, 0, filelen + BIN_OFFSET);		//clear buffer
	//read .bin file to buffer
	fread(buf + BIN_OFFSET, 1, filelen, fp);

	//close .bin file
	fclose(fp);

	//add IVT + boot data + DCD information
	if(ddrsize == 0) {			//512M
		printf("Board DDR SIZE: 512MB\r\n");
		memcpy(buf, imx6_512mb_ivtdcd_table, sizeof(imx6_512mb_ivtdcd_table));
	}
	else if (ddrsize == 1) {	//256M
		printf("Board DDR SIZE: 256MB\r\n");
		memcpy(buf, imx6_256mb_ivtdcd_table, sizeof(imx6_256mb_ivtdcd_table));
	}

	name_len = strlen(argv[1]);
	name_buf = malloc(name_len);
	if(name_buf == NULL){
		printf("Mem Malloc Failed!\r\n");
		free(buf);
		return -1;
	}
	memset(name_buf, 0, name_len);
	memcpy(name_buf, argv[1], name_len);
	name_buf[name_len-3] = 'i';
	name_buf[name_len-2] = 'm';
	name_buf[name_len-1] = 'x';

	fp = fopen(name_buf, "wb");		//create and open .imx file
	if(fp == NULL){
		printf("Cant't Open load.imx!!!\r\n");
		free(buf);
		free(name_buf);
		return -1;
	}
	nbytes = fwrite(buf, 1, filelen + BIN_OFFSET, fp);
	if(nbytes != (filelen + BIN_OFFSET)){
		printf("File Write Error!\r\n");
		free(buf);
		free(name_buf);
		fclose(fp);
		return -1;
	}
	free(buf);
	free(name_buf);
	fclose(fp);	

	return 0;	
}
