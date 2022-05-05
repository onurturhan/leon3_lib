/* Common C routines used in Leon code execution */
#include "leon_routines.h"
#include "mem_routines.h"

void enable_eth(void)
{
    int tmp;
    tmp = loadmem(unlreg);
    tmp |= clk_eth;
    storemem(unlreg, tmp); /* unlock register */
    tmp = loadmem(clkres);
    tmp |= clk_eth;
    storemem(unlreg, tmp); /* reset core */
    tmp = loadmem(clkenb);
    tmp |= clk_eth;
    storemem(clkenb, tmp); /* enable clock */
    tmp = loadmem(clkres);
    tmp &= ~clk_eth;
    storemem(clkres, tmp); /* reset core */
    tmp = loadmem(unlreg);
    tmp &= ~clk_eth;
    storemem(unlreg, tmp); /* lock register */
}
void enable_can(void)
{
    int tmp;
    tmp = loadmem(unlreg);
    tmp |= clk_can;
    storemem(unlreg, tmp); /* unlock register */
    tmp = loadmem(clkres);
    tmp |= clk_can;
    storemem(unlreg, tmp); /* reset core */
    tmp = loadmem(clkenb);
    tmp |= clk_can;
    storemem(clkenb, tmp); /* enable clock */
    tmp = loadmem(clkres);
    tmp &= ~clk_can;
    storemem(clkres, tmp); /* reset core */
    tmp = loadmem(unlreg);
    tmp &= ~clk_can;
    storemem(unlreg, tmp); /* lock register */
}
void enable_pci(void)
{
    int tmp;
    tmp = loadmem(unlreg);
    tmp |= clk_pci;
    storemem(unlreg, tmp); /* unlock register */
    tmp = loadmem(clkres);
    tmp |= clk_pci;
    storemem(unlreg, tmp); /* reset core */
    tmp = loadmem(clkenb);
    tmp |= clk_pci;
    storemem(clkenb, tmp); /* enable clock */
    tmp = loadmem(clkres);
    tmp &= ~clk_pci;
    storemem(clkres, tmp); /* reset core */
    tmp = loadmem(unlreg);
    tmp &= ~clk_pci;
    storemem(unlreg, tmp); /* lock register */
}
void enable_spw0(void)
{
    int tmp;
    tmp = loadmem(unlreg);
    tmp |= clk_spw0;
    storemem(unlreg, tmp); /* unlock register */
    tmp = loadmem(clkres);
    tmp |= clk_spw0;
    storemem(unlreg, tmp); /* reset core */
    tmp = loadmem(clkenb);
    tmp |= clk_spw0;
    storemem(clkenb, tmp); /* enable clock */
    tmp = loadmem(clkres);
    tmp &= ~clk_spw0;
    storemem(clkres, tmp); /* reset core */
    tmp = loadmem(unlreg);
    tmp &= ~clk_spw0;
    storemem(unlreg, tmp); /* lock register */
}
void enable_spw1(void)
{
    int tmp;
    tmp = loadmem(unlreg);
    tmp |= clk_spw1;
    storemem(unlreg, tmp); /* unlock register */
    tmp = loadmem(clkres);
    tmp |= clk_spw1;
    storemem(unlreg, tmp); /* reset core */
    tmp = loadmem(clkenb);
    tmp |= clk_spw1;
    storemem(clkenb, tmp); /* enable clock */
    tmp = loadmem(clkres);
    tmp &= ~clk_spw1;
    storemem(clkres, tmp); /* reset core */
    tmp = loadmem(unlreg);
    tmp &= ~clk_spw1;
    storemem(unlreg, tmp); /* lock register */
}
void enable_spw2(void)
{
    int tmp;
    tmp = loadmem(unlreg);
    tmp |= clk_spw2;
    storemem(unlreg, tmp); /* unlock register */
    tmp = loadmem(clkres);
    tmp |= clk_spw2;
    storemem(unlreg, tmp); /* reset core */
    tmp = loadmem(clkenb);
    tmp |= clk_spw2;
    storemem(clkenb, tmp); /* enable clock */
    tmp = loadmem(clkres);
    tmp &= ~clk_spw2;
    storemem(clkres, tmp); /* reset core */
    tmp = loadmem(unlreg);
    tmp &= ~clk_spw2;
    storemem(unlreg, tmp); /* lock register */
}
void enable_spw3(void)
{
    int tmp;
    tmp = loadmem(unlreg);
    tmp |= clk_spw3;
    storemem(unlreg, tmp); /* unlock register */
    tmp = loadmem(clkres);
    tmp |= clk_spw3;
    storemem(unlreg, tmp); /* reset core */
    tmp = loadmem(clkenb);
    tmp |= clk_spw3;
    storemem(clkenb, tmp); /* enable clock */
    tmp = loadmem(clkres);
    tmp &= ~clk_spw3;
    storemem(clkres, tmp); /* reset core */
    tmp = loadmem(unlreg);
    tmp &= ~clk_spw3;
    storemem(unlreg, tmp); /* lock register */
}
void disable_eth(void)
{
    int tmp;
    tmp = loadmem(unlreg);
    tmp |= clk_eth;
    storemem(unlreg, tmp); /* unlock register */
    tmp = loadmem(clkenb);
    tmp &= ~clk_eth;
    storemem(clkenb, tmp); /* disable clock */
    tmp = loadmem(unlreg);
    tmp &= ~clk_eth;
    storemem(unlreg, tmp); /* lock register */
}
void disable_can(void)
{
    int tmp;
    tmp = loadmem(unlreg);
    tmp |= clk_can;
    storemem(unlreg, tmp); /* unlock register */
    tmp = loadmem(clkenb);
    tmp &= ~clk_can;
    storemem(clkenb, tmp); /* disable clock */
    tmp = loadmem(unlreg);
    tmp &= ~clk_can;
    storemem(unlreg, tmp); /* lock register */
}
void disable_pci(void)
{
    int tmp;
    tmp = loadmem(unlreg);
    tmp |= clk_pci;
    storemem(unlreg, tmp); /* unlock register */
    tmp = loadmem(clkenb);
    tmp &= ~clk_pci;
    storemem(clkenb, tmp); /* disable clock */
    tmp = loadmem(unlreg);
    tmp &= ~clk_pci;
    storemem(unlreg, tmp); /* lock register */
}
void disable_spw0(void)
{
    int tmp;
    tmp = loadmem(unlreg);
    tmp |= clk_spw0;
    storemem(unlreg, tmp); /* unlock register */
    tmp = loadmem(clkenb);
    tmp &= ~clk_spw0;
    storemem(clkenb, tmp); /* disable clock */
    tmp = loadmem(unlreg);
    tmp &= ~clk_spw0;
    storemem(unlreg, tmp); /* lock register */
}
void disable_spw1(void)
{
    int tmp;
    tmp = loadmem(unlreg);
    tmp |= clk_spw1;
    storemem(unlreg, tmp); /* unlock register */
    tmp = loadmem(clkenb);
    tmp &= ~clk_spw1;
    storemem(clkenb, tmp); /* disable clock */
    tmp = loadmem(unlreg);
    tmp &= ~clk_spw1;
    storemem(unlreg, tmp); /* lock register */
}
void disable_spw2(void)
{
    int tmp;
    tmp = loadmem(unlreg);
    tmp |= clk_spw2;
    storemem(unlreg, tmp); /* unlock register */
    tmp = loadmem(clkenb);
    tmp &= ~clk_spw2;
    storemem(clkenb, tmp); /* disable clock */
    tmp = loadmem(unlreg);
    tmp &= ~clk_spw2;
    storemem(unlreg, tmp); /* lock register */
}
void disable_spw3(void)
{
    int tmp;
    tmp = loadmem(unlreg);
    tmp |= clk_spw3;
    storemem(unlreg, tmp); /* unlock register */
    tmp = loadmem(clkenb);
    tmp &= ~clk_spw3;
    storemem(clkenb, tmp); /* disable clock */
    tmp = loadmem(unlreg);
    tmp &= ~clk_spw3;
    storemem(unlreg, tmp); /* lock register */
}

void iCacheEnable(void)
{
    int tmp;
    tmp = loadmem_asi_02(0x00);
    tmp |= 0x00000003;
    asm(" nop ");
    asm(" nop ");
    asm(" nop ");
    storemem_asi_02(0x00, tmp);
    asm(" nop ");
    asm(" nop ");
    asm(" nop ");
}
void dCacheEnable(void)
{
    int tmp;
    tmp = loadmem_asi_02(0x00);
    tmp |= 0x0000000c;
    asm(" nop ");
    asm(" nop ");
    asm(" nop ");
    storemem_asi_02(0x00, tmp);
    asm(" nop ");
    asm(" nop ");
    asm(" nop ");
}
void iCacheDisable(void)
{
    int tmp;
    tmp = loadmem_asi_02(0x00);
    tmp &= 0xfffffffc;
    asm(" nop ");
    asm(" nop ");
    asm(" nop ");
    storemem_asi_02(0x00, tmp);
    asm(" nop ");
    asm(" nop ");
    asm(" nop ");
}
void dCacheDisable(void)
{
    int tmp;
    tmp = loadmem_asi_02(0x00);
    tmp &= 0xfffffff3;
    asm(" nop ");
    asm(" nop ");
    asm(" nop ");
    storemem_asi_02(0x00, tmp);
    asm(" nop ");
    asm(" nop ");
    asm(" nop ");
}
void iCacheFlush(void)
{
    int tmp, cnt;
    tmp = loadmem_asi_02(0x00) | FI;
    asm(" nop ");
    asm(" nop ");
    asm(" nop ");
    storemem_asi_02(0x00, tmp);
    for (cnt = 0; cnt < 8192; cnt++) /* Wait the correct amount of time until */
        doNothing();                 /* the bit IP in the CCR is cleared */
}
void dCacheFlush(void)
{
    int tmp, cnt;
    tmp = loadmem_asi_02(0x00) | FD;
    asm(" nop ");
    asm(" nop ");
    asm(" nop ");
    storemem_asi_02(0x00, tmp);
    for (cnt = 0; cnt < 8192; cnt++) /* Wait the correct amount of time until */
        doNothing();                 /* the bit DP in the CCR is cleared */
}
void burstFetchEnable(void)
{
    int tmp;
    tmp = loadmem_asi_02(0x00) | IB;
    asm(" nop ");
    asm(" nop ");
    asm(" nop ");
    storemem_asi_02(0x00, tmp);
    asm(" nop ");
    asm(" nop ");
    asm(" nop ");
}
void burstFetchDisable(void)
{
    int tmp;
    tmp = loadmem_asi_02(0x00) & ~IB;
    asm(" nop ");
    asm(" nop ");
    asm(" nop ");
    storemem_asi_02(0x00, tmp);
    asm(" nop ");
    asm(" nop ");
    asm(" nop ");
}
void doNothing(void)
{
    asm(" nop ");
}
