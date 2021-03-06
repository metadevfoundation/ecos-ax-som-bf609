// eCos memory layout

#ifndef __ASSEMBLER__
#include <cyg/infra/cyg_type.h>
#include <stddef.h>

#endif
#define CYGMEM_REGION_sram_l (0x20000000 - CYGHWR_HAL_KINETIS_SRAM_BANK_SIZE)
#define CYGMEM_REGION_sram_l_SIZE (CYGHWR_HAL_KINETIS_SRAM_BANK_SIZE-CYGNUM_HAL_COMMON_INTERRUPTS_STACK_SIZE)
#define CYGMEM_REGION_sram_l_ATTR (CYGMEM_REGION_ATTR_R | CYGMEM_REGION_ATTR_W)

#define CYGMEM_REGION_sram_u (0x20000000)
#define CYGMEM_REGION_sram_u_SIZE (CYGHWR_HAL_KINETIS_SRAM_BANK_SIZE)
#define CYGMEM_REGION_sram_u_ATTR (CYGMEM_REGION_ATTR_R | CYGMEM_REGION_ATTR_W)

#ifndef __ASSEMBLER__
extern char CYG_LABEL_NAME (__heap1) [];
#endif
#define CYGMEM_SECTION_heap1 (CYG_LABEL_NAME (__heap1))
#define CYGMEM_SECTION_heap1_SIZE (CYGMEM_REGION_sram_u+CYGMEM_REGION_sram_u_SIZE - (size_t) CYG_LABEL_NAME (__heap1))


