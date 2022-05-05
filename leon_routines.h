/* Header file for leon_routines.c */
#define clk_spw0 0x01 /* clock gating bit for SpW0 */
#define clk_spw1 0x02 /* clock gating bit for SpW1 */
#define clk_spw2 0x04 /* clock gating bit for SpW2 */
#define clk_spw3 0x08 /* clock gating bit for SpW3 */
#define clk_can 0x10  /* clock gating bit for CAN0 and CAN1 \
                                                            \
 #define clk_eth 0x20 /* clock gating bit for Ethernet */
#define clk_pci 0x40  /* clock gating bit for pci */
#define FD 0x00400000 /* flush data cache bit */
#define FI 0x00200000 /* flush instruction cache bit */
#define IB 0x00010000 /* instruction burst fetch bit */
/* Registers */
#define unlreg 0x80000600 /* clock gating unlock register */
#define clkenb 0x80000604 /* clock gating enable register */
#define clkres 0x80000608 /* clock gating reset register */
/* Function prototypes */
void enable_eth(void);
void enable_can(void);
void enable_pci(void);
void enable_spw0(void);
void enable_spw1(void);
void enable_spw2(void);
void enable_spw3(void);
void disable_eth(void);
void disable_can(void);
void disable_pci(void);
void disable_spw0(void);
void disable_spw1(void);
void disable_spw2(void);
void disable_spw3(void);
void iCacheEnable(void);
void dCacheEnable(void);
void iCacheDisable(void);
void dCacheDisable(void);
void iCacheFlush(void);
void dCacheFlush(void);
void burstFetchEnable(void);
void burstFetchDisable(void);
void doNothing(void);
