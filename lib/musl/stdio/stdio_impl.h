#ifndef		__STDIO_IMPL_H__
#define		__STDIO_IMPL_H__

#include "stdio.h"

#define UNGET 8

#define FFINALLOCK(f) ((f)->lock>=0 ? __lockfile((f)) : 0)
#define FLOCK(f) int __need_unlock = ((f)->lock>=0 ? __lockfile((f)) : 0)
#define FUNLOCK(f) do { if (__need_unlock) __unlockfile((f)); } while (0)

#define F_PERM 1
#define F_NORD 4
#define F_NOWR 8
#define F_EOF 16
#define F_ERR 32
#define F_SVB 64
#define F_APP 128

extern FILE *volatile __stdin_used;
extern FILE *volatile __stdout_used;
extern FILE *volatile __stderr_used;

int __lockfile(FILE *);
void __unlockfile(FILE *);

size_t __stdio_read(FILE *, unsigned char *, size_t);
size_t __stdio_write(FILE *, const unsigned char *, size_t);
size_t __stdout_write(FILE *, const unsigned char *, size_t);
off_t __stdio_seek(FILE *, off_t, int);
int __stdio_close(FILE *);

int __toread(FILE *);
int __towrite(FILE *);

void __stdio_exit(void);
void __stdio_exit_needed(void);

int __overflow(FILE *, int), __uflow(FILE *);

int __fseeko(FILE *, off_t, int);
int __fseeko_unlocked(FILE *, off_t, int);
off_t __ftello(FILE *);
off_t __ftello_unlocked(FILE *);
size_t __fwritex(const unsigned char *, size_t, FILE *);
int __putc_unlocked(int, FILE *);

FILE *__fdopen(int, const char *);
int __fmodeflags(const char *);

FILE *__ofl_add(FILE *f);
FILE **__ofl_lock(void);
void __ofl_unlock(void);

struct __pthread;
void __register_locked_file(FILE *, struct __pthread *);
void __unlist_locked_file(FILE *);
void __do_orphaned_stdio_locks(void);

#define MAYBE_WAITERS 0x40000000

void __getopt_msg(const char *, const char *, const char *, size_t);

#define feof(f) ((f)->flags & F_EOF)
#define ferror(f) ((f)->flags & F_ERR)

#define getc_unlocked(f) \
	( ((f)->rpos != (f)->rend) ? *(f)->rpos++ : __uflow((f)) )

#define putc_unlocked(c, f) \
	( (((unsigned char)(c)!=(f)->lbf && (f)->wpos!=(f)->wend)) \
	? *(f)->wpos++ = (unsigned char)(c) \
	: __overflow((f),(unsigned char)(c)) )

/* Caller-allocated FILE * operations */
FILE *__fopen_rb_ca(const char *, FILE *, unsigned char *, size_t);
int __fclose_ca(FILE *);

#endif
