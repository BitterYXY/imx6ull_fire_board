#ifndef __COMMON_H__
#define __COMMON_H__

#define     __I     volatile
#define     __O     volatile
#define     __IO    volatile
#define     __IM    volatile
#define     __OM    volatile
#define     __IOM   volatile

#define     ON      1
#define     OFF     0

#define     TRUE    1
#define     FALSE   0

#ifndef NULL
#define     NULL    ((void *)0)
#endif

typedef     signed char             int8_t;
typedef     unsigned char           uint8_t;
typedef     signed short int        int16_t;
typedef     unsigned short int      uint16_t;
typedef     signed int              int32_t;
typedef     unsigned int            uint32_t;
typedef     unsigned long long      uint64_t;

typedef     unsigned char           uchar_t;
typedef     unsigned int            uint_t;

typedef     unsigned long int       size_t;          

typedef enum _bool
{
    false   = 0U,
    true    = 1U,
} bool;


#endif