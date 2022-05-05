/* Inline assembly routines that store data to memory
 * and load data from memory. The routines are callable
 * as C functions.
 *
 * ASI definitions:
 * 0x01 forced cache miss
 * 0x02 system control registers
 * 0x08 user instruction
 * 0x09 supervisor instruction
 * 0x0A user data
 * 0x0B supervisor instruction
 * 0x0C instruction cache tags
 * 0x0D instruction cache data
 * 0x0E data cache tags
 * 0x0F data cache data
 * 0x10 flush instruction cache
 * 0x11 flush data cache
 * 0x1C Leon bypass */

#include "mem_routines.h"
inline void storemem(int addr, int val)
{
    asm volatile(" st %0, [%1] "       // store val to addr
                 :                     // output
                 : "r"(val), "r"(addr) // inputs
    );
}
inline int loadmem(int addr)
{
    int tmp;                     // used for returned value
    asm volatile(" ld [%1], %0 " // load tmp from addr
                 : "=r"(tmp)     // output
                 : "r"(addr)     // input
    );
    return tmp;
}
inline void storemem_asi_01(int addr, int val)
{
    asm volatile(" sta %0, [%1] 0x01 " // store val to addr at ASI 0x01
                 :                     // output
                 : "r"(val), "r"(addr) // inputs
    );
}
inline int loadmem_asi_01(int addr)
{
    int tmp;                           // used for returned value
    asm volatile(" lda [%1] 0x01, %0 " // load tmp from addr at ASI 0x01
                 : "=r"(tmp) // output
                 : "r"(addr) // input
    );
    return tmp;
}
inline void storemem_asi_02(int addr, int val)
{
    asm volatile(" sta %0, [%1] 0x02 " // store val to addr at ASI 0x02
                 :                     // output
                 : "r"(val), "r"(addr) // inputs
    );
}
inline int loadmem_asi_02(int addr)
{
    int tmp;                           // used for returned value
    asm volatile(" lda [%1] 0x02, %0 " // load tmp from addr at ASI 0x02
                 : "=r"(tmp) // output
                 : "r"(addr) // input
    );
    return tmp;
}
inline void storemem_asi_0c(int addr, int val)
{
    asm volatile(" sta %0, [%1] 0x0c " // store val to addr at ASI 0x0c
                 :                     // output
                 : "r"(val), "r"(addr) // inputs
    );
}
inline int loadmem_asi_0c(int addr)
{
    int tmp;                           // used for returned value
    asm volatile(" lda [%1] 0x0c, %0 " // load tmp from addr at ASI 0x0c
                 : "=r"(tmp) // output
                 : "r"(addr) // input
    );
    return tmp;
}

inline void storemem_asi_0d(int addr, int val)
{
    asm volatile(" sta %0, [%1] 0x0d " // store val to addr at ASI 0x0d
                 :                     // output
                 : "r"(val), "r"(addr) // inputs
    );
}
inline int loadmem_asi_0d(int addr)
{
    int tmp;                           // used for returned value
    asm volatile(" lda [%1] 0x0d, %0 " // load tmp from addr at ASI 0x0d
                 : "=r"(tmp) // output
                 : "r"(addr) // input
    );
    return tmp;
}
inline void storemem_asi_0e(int addr, int val)
{
    asm volatile(" sta %0, [%1] 0x0e " // store val to addr at ASI 0x0e
                 :                     // output
                 : "r"(val), "r"(addr) // inputs
    );
}
inline int loadmem_asi_0e(int addr)
{
    int tmp;                           // used for returned value
    asm volatile(" lda [%1] 0x0e, %0 " // load tmp from addr at ASI 0x0e
                 : "=r"(tmp) // output
                 : "r"(addr) // input
    );
    return tmp;
}
inline void storemem_asi_0f(int addr, int val)
{
    asm volatile(" sta %0, [%1] 0x0f " // store val to addr at ASI 0x0f
                 :                     // output
                 : "r"(val), "r"(addr) // inputs
    );
}
inline int loadmem_asi_0f(int addr)
{
    int tmp;                           // used for returned value
    asm volatile(" lda [%1] 0x0f, %0 " // load tmp from addr at ASI 0x0f
                 : "=r"(tmp) // output
                 : "r"(addr) // input
    );
    return tmp;
}
inline void storemem_asi_10(int addr, int val)
{
    asm volatile(" sta %0, [%1] 0x10 " // store val to addr at ASI 0x10
                 :                     // output
                 : "r"(val), "r"(addr) // inputs
    );
}
inline void storemem_asi_11(int addr, int val)
{
    asm volatile(" sta %0, [%1] 0x11 " // store val to addr at ASI 0x11
                 :                     // output
                 : "r"(val), "r"(addr) // inputs
    );
}
inline void storemem_asi_1c(int addr, int val)
{
    asm volatile(" sta %0, [%1] 0x1c " // store val to addr at ASI 0x11
                 :                     // output
                 : "r"(val), "r"(addr) // inputs
    );
}
