/*
 * CopyLeft (C) nie950@gmail.com
 */

#ifndef __BYTE_ORDER_H_INCLUDED__
#define __BYTE_ORDER_H_INCLUDED__

#define BYTE_LITTLE_ENDIAN   0
#define BYTE_BIG_ENDIAN      1

#define byte_make_ulong2(b)                         \
    ((((uint16_t)(((uint8_t*)(b))[0]) << 8) )       \
   | (((uint16_t)(((uint8_t*)(b))[1]))      ))

#define byte_make_ulong3(b)                         \
    ((((uint32_t)(((uint8_t*)(b))[0]) << 16) )      \
   | (((uint32_t)(((uint8_t*)(b))[1]) <<  8) )      \
   | (((uint32_t)(((uint8_t*)(b))[2]))       ))

#define byte_make_ulong4(b)                         \
    ((((uint32_t)(((uint8_t*)(b))[0]) << 24))       \
   | (((uint32_t)(((uint8_t*)(b))[1]) << 16))       \
   | (((uint32_t)(((uint8_t*)(b))[2]) <<  8))       \
   | (((uint32_t)(((uint8_t*)(b))[3]))      ))

#define byte_make_ulong8(b)                         \
    ((((uint64_t)(((uint8_t*)(b))[0]) << 56))       \
   | (((uint64_t)(((uint8_t*)(b))[1]) << 48))       \
   | (((uint64_t)(((uint8_t*)(b))[2]) << 40))       \
   | (((uint64_t)(((uint8_t*)(b))[3]) << 32))       \
   | (((uint64_t)(((uint8_t*)(b))[4]) << 24))       \
   | (((uint64_t)(((uint8_t*)(b))[5]) << 16))       \
   | (((uint64_t)(((uint8_t*)(b))[6]) <<  8))       \
   | (((uint64_t)(((uint8_t*)(b))[7]))      ))

#define byte_make_ulong2_l(b)                       \
    ((((uint16_t)(((uint8_t*)(b))[1]) << 8))        \
   | (((uint16_t)(((uint8_t*)(b))[0]))     ))

#define byte_make_ulong3_l(b)                       \
    ((((uint32_t)(((uint8_t*)(b))[2]) << 16))       \
   | (((uint32_t)(((uint8_t*)(b))[1]) <<  8))       \
   | (((uint32_t)(((uint8_t*)(b))[0]))      ))

#define byte_make_ulong4_l(b)                       \
    ((((uint32_t)(((uint8_t*)(b))[3]) << 24))       \
   | (((uint32_t)(((uint8_t*)(b))[2]) << 16))       \
   | (((uint32_t)(((uint8_t*)(b))[1]) <<  8))       \
   | (((uint32_t)(((uint8_t*)(b))[0]))      ))

#define byte_make_ulong8_l(b)                       \
    ((((uint64_t)(((uint8_t*)(b))[7]) << 56))       \
   | (((uint64_t)(((uint8_t*)(b))[6]) << 48))       \
   | (((uint64_t)(((uint8_t*)(b))[5]) << 40))       \
   | (((uint64_t)(((uint8_t*)(b))[4]) << 32))       \
   | (((uint64_t)(((uint8_t*)(b))[3]) << 24))       \
   | (((uint64_t)(((uint8_t*)(b))[2]) << 16))       \
   | (((uint64_t)(((uint8_t*)(b))[1]) <<  8))       \
   | (((uint64_t)(((uint8_t*)(b))[0]))      ))

#define ulong_make_byte2(b,u)                               \
    ((uint8_t*)(b))[0] = (uint8_t)(((uint32_t)(u) >> 8));   \
    ((uint8_t*)(b))[1] = (uint8_t)(((uint32_t)(u)     ))

#define ulong_make_byte3(b,u)                               \
    ((uint8_t*)(b))[0] = (uint8_t)(((uint32_t)(u) >> 16));  \
    ((uint8_t*)(b))[1] = (uint8_t)(((uint32_t)(u) >>  8));  \
    ((uint8_t*)(b))[2] = (uint8_t)(((uint32_t)(u)      ))

#define ulong_make_byte4(b,u)                               \
    ((uint8_t*)(b))[0] = (uint8_t)(((uint32_t)(u) >> 24));  \
    ((uint8_t*)(b))[1] = (uint8_t)(((uint32_t)(u) >> 16));  \
    ((uint8_t*)(b))[2] = (uint8_t)(((uint32_t)(u) >>  8));  \
    ((uint8_t*)(b))[3] = (uint8_t)(((uint32_t)(u)      ))

#define ulong_make_byte8(b,u)                               \
    ((uint8_t*)(b))[0] = (uint8_t)(((uint64_t)(u) >> 56));  \
    ((uint8_t*)(b))[1] = (uint8_t)(((uint64_t)(u) >> 48));  \
    ((uint8_t*)(b))[2] = (uint8_t)(((uint64_t)(u) >> 40));  \
    ((uint8_t*)(b))[3] = (uint8_t)(((uint64_t)(u) >> 32));  \
    ((uint8_t*)(b))[4] = (uint8_t)(((uint64_t)(u) >> 24));  \
    ((uint8_t*)(b))[5] = (uint8_t)(((uint64_t)(u) >> 16));  \
    ((uint8_t*)(b))[6] = (uint8_t)(((uint64_t)(u) >>  8));  \
    ((uint8_t*)(b))[7] = (uint8_t)(((uint64_t)(u)      ))

#define ulong_make_byte2_l(b,u)                             \
    ((uint8_t*)(b))[1] = (uint8_t)(((uint32_t)(u) >> 8));   \
    ((uint8_t*)(b))[0] = (uint8_t)(((uint32_t)(u)     ))

#define ulong_make_byte3_l(b,u)                             \
    ((uint8_t*)(b))[2] = (uint8_t)(((uint32_t)(u) >> 16));  \
    ((uint8_t*)(b))[1] = (uint8_t)(((uint32_t)(u) >>  8));  \
    ((uint8_t*)(b))[0] = (uint8_t)(((uint32_t)(u)      ))

#define ulong_make_byte4_l(b,u)                             \
    ((uint8_t*)(b))[3] = (uint8_t)(((uint32_t)(u) >> 24));  \
    ((uint8_t*)(b))[2] = (uint8_t)(((uint32_t)(u) >> 16));  \
    ((uint8_t*)(b))[1] = (uint8_t)(((uint32_t)(u) >>  8));  \
    ((uint8_t*)(b))[0] = (uint8_t)(((uint32_t)(u)      ))

#define ulong_make_byte8_l(b,u)                             \
    ((uint8_t*)(b))[7] = (uint8_t)(((uint64_t)(u) >> 56));  \
    ((uint8_t*)(b))[6] = (uint8_t)(((uint64_t)(u) >> 48));  \
    ((uint8_t*)(b))[5] = (uint8_t)(((uint64_t)(u) >> 40));  \
    ((uint8_t*)(b))[4] = (uint8_t)(((uint64_t)(u) >> 32));  \
    ((uint8_t*)(b))[3] = (uint8_t)(((uint64_t)(u) >> 24));  \
    ((uint8_t*)(b))[2] = (uint8_t)(((uint64_t)(u) >> 16));  \
    ((uint8_t*)(b))[1] = (uint8_t)(((uint64_t)(u) >>  8));  \
    ((uint8_t*)(b))[0] = (uint8_t)(((uint64_t)(u)      ))

static void byte_fill_random(uint8_t *c,size_t l) 
{
    while (l > 0) {
        c[l-1] = (uint32_t)rand() % 255;
        l--;
    }
}

#endif
