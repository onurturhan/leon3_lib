#ifndef MEM_ROUTINES_H_
#define MEM_ROUTINES_H_

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
inline void storemem(int addr, int val);
inline int loadmem(int addr);
inline void storemem_asi_01(int addr, int val);
inline int loadmem_asi_01(int addr);
inline void storemem_asi_02(int addr, int val);
inline int loadmem_asi_02(int addr);
inline void storemem_asi_08(int addr, int val);
inline int loadmem_asi_08(int addr);
inline void storemem_asi_09(int addr, int val);
inline int loadmem_asi_09(int addr);
inline void storemem_asi_0a(int addr, int val);
inline int loadmem_asi_0a(int addr);
inline void storemem_asi_0b(int addr, int val);
inline int loadmem_asi_0b(int addr);
inline void storemem_asi_0c(int addr, int val);
inline int loadmem_asi_0c(int addr);
inline void storemem_asi_0d(int addr, int val);
inline int loadmem_asi_0d(int addr);
inline void storemem_asi_0e(int addr, int val);
inline int loadmem_asi_0e(int addr);
inline void storemem_asi_0f(int addr, int val);
inline int loadmem_asi_0f(int addr);

inline void storemem_asi_10(int addr, int val);
inline void storemem_asi_11(int addr, int val);
inline void storemem_asi_1c(int addr, int val);

#endif /*MEM_ROUTINES_H_*/