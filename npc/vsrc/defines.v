`define RFREG_NUM	32
`define XLEN        32
`define FLEN        32
`define RFIDX_WIDTH 5
`define PC_SIZE     32
`define INSTR_SIZE  32
`define ADDR_SIZE   32
`define DECINFO_WIDTH       33

`define DECINFO_GRP_WIDTH   3
`define DECINFO_GRP_ALU     `DECINFO_GRP_WIDTH'd0
`define DECINFO_GRP_AGU     `DECINFO_GRP_WIDTH'd1
`define DECINFO_GRP_BJP     `DECINFO_GRP_WIDTH'd2

`define ALU_ADDER_WIDTH     (`XLEN+1)

`define DECINFO_GRP_LSB     0
`define DECINFO_GRP_MSB     (`DECINFO_GRP_LSB+`DECINFO_GRP_WIDTH-1)
`define DECINFO_GRP         `DECINFO_GRP_MSB:`DECINFO_GRP_LSB
`define DECINFO_RV32_LSB    (`DECINFO_GRP_MSB+1)
`define DECINFO_RV32_MSB    (`DECINFO_RV32_LSB+1-1)
`define DECINFO_RV32        `DECINFO_RV32_MSB:`DECINFO_RV32_LSB

`define DECINFO_SUBDECINFO_LSB  (`DECINFO_RV32_MSB+1)

`define DECINFO_ALU_ADD_LSB    		`DECINFO_SUBDECINFO_LSB
`define DECINFO_ALU_ADD_MSB    		(`DECINFO_ALU_ADD_LSB+1-1)
`define DECINFO_ALU_ADD    			`DECINFO_ALU_ADD_MSB :`DECINFO_ALU_ADD_LSB 
`define DECINFO_ALU_SUB_LSB    		(`DECINFO_ALU_ADD_MSB+1)
`define DECINFO_ALU_SUB_MSB    		(`DECINFO_ALU_SUB_LSB+1-1)
`define DECINFO_ALU_SUB    			`DECINFO_ALU_SUB_MSB :`DECINFO_ALU_SUB_LSB 
`define DECINFO_ALU_XOR_LSB    		(`DECINFO_ALU_SUB_MSB+1)
`define DECINFO_ALU_XOR_MSB    		(`DECINFO_ALU_XOR_LSB+1-1)
`define DECINFO_ALU_XOR    			`DECINFO_ALU_XOR_MSB :`DECINFO_ALU_XOR_LSB 
`define DECINFO_ALU_SLL_LSB    		(`DECINFO_ALU_XOR_MSB+1)
`define DECINFO_ALU_SLL_MSB    		(`DECINFO_ALU_SLL_LSB+1-1)
`define DECINFO_ALU_SLL    			`DECINFO_ALU_SLL_MSB :`DECINFO_ALU_SLL_LSB 
`define DECINFO_ALU_SRL_LSB    		(`DECINFO_ALU_SLL_MSB+1)
`define DECINFO_ALU_SRL_MSB    		(`DECINFO_ALU_SRL_LSB+1-1)
`define DECINFO_ALU_SRL    			`DECINFO_ALU_SRL_MSB :`DECINFO_ALU_SRL_LSB 
`define DECINFO_ALU_SRA_LSB    		(`DECINFO_ALU_SRL_MSB+1)
`define DECINFO_ALU_SRA_MSB    		(`DECINFO_ALU_SRA_LSB+1-1)
`define DECINFO_ALU_SRA    			`DECINFO_ALU_SRA_MSB :`DECINFO_ALU_SRA_LSB 
`define DECINFO_ALU_OR_LSB    		(`DECINFO_ALU_SRA_MSB+1)
`define DECINFO_ALU_OR_MSB    		(`DECINFO_ALU_OR_LSB+1-1)
`define DECINFO_ALU_OR     			`DECINFO_ALU_OR_MSB  :`DECINFO_ALU_OR_LSB  
`define DECINFO_ALU_AND_LSB    		(`DECINFO_ALU_OR_MSB+1)
`define DECINFO_ALU_AND_MSB    		(`DECINFO_ALU_AND_LSB+1-1)
`define DECINFO_ALU_AND    			`DECINFO_ALU_AND_MSB :`DECINFO_ALU_AND_LSB 
`define DECINFO_ALU_SLT_LSB    		(`DECINFO_ALU_AND_MSB+1)
`define DECINFO_ALU_SLT_MSB    		(`DECINFO_ALU_SLT_LSB+1-1)
`define DECINFO_ALU_SLT    			`DECINFO_ALU_SLT_MSB :`DECINFO_ALU_SLT_LSB 
`define DECINFO_ALU_SLTU_LSB    	(`DECINFO_ALU_SLT_MSB+1)
`define DECINFO_ALU_SLTU_MSB    	(`DECINFO_ALU_SLTU_LSB+1-1)
`define DECINFO_ALU_SLTU   			`DECINFO_ALU_SLTU_MSB:`DECINFO_ALU_SLTU_LSB
`define DECINFO_ALU_LUI_LSB    		(`DECINFO_ALU_SLTU_MSB+1)
`define DECINFO_ALU_LUI_MSB    		(`DECINFO_ALU_LUI_LSB+1-1)
`define DECINFO_ALU_LUI    			`DECINFO_ALU_LUI_MSB :`DECINFO_ALU_LUI_LSB 
`define DECINFO_ALU_OP2IMM_LSB    	(`DECINFO_ALU_LUI_MSB+1)
`define DECINFO_ALU_OP2IMM_MSB    	(`DECINFO_ALU_OP2IMM_LSB+1-1)
`define DECINFO_ALU_OP2IMM    		`DECINFO_ALU_OP2IMM_MSB :`DECINFO_ALU_OP2IMM_LSB 
`define DECINFO_ALU_OP1PC_LSB    	(`DECINFO_ALU_OP2IMM_MSB+1)
`define DECINFO_ALU_OP1PC_MSB    	(`DECINFO_ALU_OP1PC_LSB+1-1)
`define DECINFO_ALU_OP1PC    		`DECINFO_ALU_OP1PC_MSB :`DECINFO_ALU_OP1PC_LSB 
`define DECINFO_ALU_NOP_LSB    		(`DECINFO_ALU_OP1PC_MSB+1)
`define DECINFO_ALU_NOP_MSB    		(`DECINFO_ALU_NOP_LSB+1-1)
`define DECINFO_ALU_NOP    			`DECINFO_ALU_NOP_MSB :`DECINFO_ALU_NOP_LSB 
`define DECINFO_ALU_ECAL_LSB  		(`DECINFO_ALU_NOP_MSB+1)
`define DECINFO_ALU_ECAL_MSB  		(`DECINFO_ALU_ECAL_LSB+1-1)
`define DECINFO_ALU_ECAL   			`DECINFO_ALU_ECAL_MSB:`DECINFO_ALU_ECAL_LSB 
`define DECINFO_ALU_EBRK_LSB  		(`DECINFO_ALU_ECAL_MSB+1)
`define DECINFO_ALU_EBRK_MSB  		(`DECINFO_ALU_EBRK_LSB+1-1)
`define DECINFO_ALU_EBRK   			`DECINFO_ALU_EBRK_MSB:`DECINFO_ALU_EBRK_LSB 
`define DECINFO_ALU_WFI_LSB  		(`DECINFO_ALU_EBRK_MSB+1)
`define DECINFO_ALU_WFI_MSB  		(`DECINFO_ALU_WFI_LSB+1-1)
`define DECINFO_ALU_WFI   			`DECINFO_ALU_WFI_MSB:`DECINFO_ALU_WFI_LSB 

`define DECINFO_ALU_WIDTH    		(`DECINFO_ALU_WFI_MSB+1)

 //AGU group
`define DECINFO_AGU_LOAD_LSB      `DECINFO_SUBDECINFO_LSB
`define DECINFO_AGU_LOAD_MSB      (`DECINFO_AGU_LOAD_LSB+1-1)   
`define DECINFO_AGU_LOAD      `DECINFO_AGU_LOAD_MSB   :`DECINFO_AGU_LOAD_LSB   
`define DECINFO_AGU_STORE_LSB      (`DECINFO_AGU_LOAD_MSB+1)
`define DECINFO_AGU_STORE_MSB      (`DECINFO_AGU_STORE_LSB+1-1)   
`define DECINFO_AGU_STORE     `DECINFO_AGU_STORE_MSB  :`DECINFO_AGU_STORE_LSB  
`define DECINFO_AGU_SIZE_LSB      (`DECINFO_AGU_STORE_MSB+1)
`define DECINFO_AGU_SIZE_MSB      (`DECINFO_AGU_SIZE_LSB+2-1)   
`define DECINFO_AGU_SIZE      `DECINFO_AGU_SIZE_MSB   :`DECINFO_AGU_SIZE_LSB   
`define DECINFO_AGU_USIGN_LSB      (`DECINFO_AGU_SIZE_MSB+1)
`define DECINFO_AGU_USIGN_MSB      (`DECINFO_AGU_USIGN_LSB+1-1)   
`define DECINFO_AGU_USIGN     `DECINFO_AGU_USIGN_MSB  :`DECINFO_AGU_USIGN_LSB  
`define DECINFO_AGU_EXCL_LSB      (`DECINFO_AGU_USIGN_MSB+1)
`define DECINFO_AGU_EXCL_MSB      (`DECINFO_AGU_EXCL_LSB+1-1)   
`define DECINFO_AGU_EXCL      `DECINFO_AGU_EXCL_MSB   :`DECINFO_AGU_EXCL_LSB   
`define DECINFO_AGU_AMO_LSB      (`DECINFO_AGU_EXCL_MSB+1)
`define DECINFO_AGU_AMO_MSB      (`DECINFO_AGU_AMO_LSB+1-1)   
`define DECINFO_AGU_AMO       `DECINFO_AGU_AMO_MSB    :`DECINFO_AGU_AMO_LSB    
`define DECINFO_AGU_AMOSWAP_LSB      (`DECINFO_AGU_AMO_MSB+1)
`define DECINFO_AGU_AMOSWAP_MSB      (`DECINFO_AGU_AMOSWAP_LSB+1-1)   
`define DECINFO_AGU_AMOSWAP   `DECINFO_AGU_AMOSWAP_MSB:`DECINFO_AGU_AMOSWAP_LSB
`define DECINFO_AGU_AMOADD_LSB      (`DECINFO_AGU_AMOSWAP_MSB+1)
`define DECINFO_AGU_AMOADD_MSB      (`DECINFO_AGU_AMOADD_LSB+1-1)   
`define DECINFO_AGU_AMOADD    `DECINFO_AGU_AMOADD_MSB :`DECINFO_AGU_AMOADD_LSB 
`define DECINFO_AGU_AMOAND_LSB      (`DECINFO_AGU_AMOADD_MSB+1)
`define DECINFO_AGU_AMOAND_MSB      (`DECINFO_AGU_AMOAND_LSB+1-1)   
`define DECINFO_AGU_AMOAND    `DECINFO_AGU_AMOAND_MSB :`DECINFO_AGU_AMOAND_LSB 
`define DECINFO_AGU_AMOOR_LSB      (`DECINFO_AGU_AMOAND_MSB+1)
`define DECINFO_AGU_AMOOR_MSB      (`DECINFO_AGU_AMOOR_LSB+1-1)   
`define DECINFO_AGU_AMOOR     `DECINFO_AGU_AMOOR_MSB  :`DECINFO_AGU_AMOOR_LSB  
`define DECINFO_AGU_AMOXOR_LSB      (`DECINFO_AGU_AMOOR_MSB+1)
`define DECINFO_AGU_AMOXOR_MSB      (`DECINFO_AGU_AMOXOR_LSB+1-1)   
`define DECINFO_AGU_AMOXOR    `DECINFO_AGU_AMOXOR_MSB :`DECINFO_AGU_AMOXOR_LSB 
`define DECINFO_AGU_AMOMAX_LSB      (`DECINFO_AGU_AMOXOR_MSB+1)
`define DECINFO_AGU_AMOMAX_MSB      (`DECINFO_AGU_AMOMAX_LSB+1-1)   
`define DECINFO_AGU_AMOMAX    `DECINFO_AGU_AMOMAX_MSB :`DECINFO_AGU_AMOMAX_LSB 
`define DECINFO_AGU_AMOMIN_LSB      (`DECINFO_AGU_AMOMAX_MSB+1)
`define DECINFO_AGU_AMOMIN_MSB      (`DECINFO_AGU_AMOMIN_LSB+1-1)   
`define DECINFO_AGU_AMOMIN    `DECINFO_AGU_AMOMIN_MSB :`DECINFO_AGU_AMOMIN_LSB 
`define DECINFO_AGU_AMOMAXU_LSB      (`DECINFO_AGU_AMOMIN_MSB+1)
`define DECINFO_AGU_AMOMAXU_MSB      (`DECINFO_AGU_AMOMAXU_LSB+1-1)   
`define DECINFO_AGU_AMOMAXU   `DECINFO_AGU_AMOMAXU_MSB:`DECINFO_AGU_AMOMAXU_LSB
`define DECINFO_AGU_AMOMINU_LSB      (`DECINFO_AGU_AMOMAXU_MSB+1)
`define DECINFO_AGU_AMOMINU_MSB      (`DECINFO_AGU_AMOMINU_LSB+1-1)   
`define DECINFO_AGU_AMOMINU   `DECINFO_AGU_AMOMINU_MSB:`DECINFO_AGU_AMOMINU_LSB
`define DECINFO_AGU_OP2IMM_LSB      (`DECINFO_AGU_AMOMINU_MSB+1)
`define DECINFO_AGU_OP2IMM_MSB      (`DECINFO_AGU_OP2IMM_LSB+1-1)   
`define DECINFO_AGU_OP2IMM   `DECINFO_AGU_OP2IMM_MSB:`DECINFO_AGU_OP2IMM_LSB

`define DECINFO_AGU_WIDTH    (`DECINFO_AGU_OP2IMM_MSB+1)

//Bxx group
`define DECINFO_BJP_JUMP_LSB 		`DECINFO_SUBDECINFO_LSB
`define DECINFO_BJP_JUMP_MSB 		(`DECINFO_BJP_JUMP_LSB+1-1)
`define DECINFO_BJP_JUMP   			`DECINFO_BJP_JUMP_MSB :`DECINFO_BJP_JUMP_LSB 
`define DECINFO_BJP_BPRDT_LSB 		(`DECINFO_BJP_JUMP_MSB+1)
`define DECINFO_BJP_BPRDT_MSB 		(`DECINFO_BJP_BPRDT_LSB+1-1)
`define DECINFO_BJP_BPRDT  			`DECINFO_BJP_BPRDT_MSB:`DECINFO_BJP_BPRDT_LSB
`define DECINFO_BJP_BEQ_LSB 		(`DECINFO_BJP_BPRDT_MSB+1)
`define DECINFO_BJP_BEQ_MSB 		(`DECINFO_BJP_BEQ_LSB+1-1)
`define DECINFO_BJP_BEQ    			`DECINFO_BJP_BEQ_MSB  :`DECINFO_BJP_BEQ_LSB  
`define DECINFO_BJP_BNE_LSB 		(`DECINFO_BJP_BEQ_MSB+1)
`define DECINFO_BJP_BNE_MSB 		(`DECINFO_BJP_BNE_LSB+1-1)
`define DECINFO_BJP_BNE    			`DECINFO_BJP_BNE_MSB  :`DECINFO_BJP_BNE_LSB  
`define DECINFO_BJP_BLT_LSB 		(`DECINFO_BJP_BNE_MSB+1)
`define DECINFO_BJP_BLT_MSB 		(`DECINFO_BJP_BLT_LSB+1-1)
`define DECINFO_BJP_BLT    			`DECINFO_BJP_BLT_MSB  :`DECINFO_BJP_BLT_LSB  
`define DECINFO_BJP_BGT_LSB 		(`DECINFO_BJP_BLT_MSB+1)
`define DECINFO_BJP_BGT_MSB 		(`DECINFO_BJP_BGT_LSB+1-1)
`define DECINFO_BJP_BGT    			`DECINFO_BJP_BGT_MSB  :`DECINFO_BJP_BGT_LSB  
`define DECINFO_BJP_BLTU_LSB 		(`DECINFO_BJP_BGT_MSB+1)
`define DECINFO_BJP_BLTU_MSB 		(`DECINFO_BJP_BLTU_LSB+1-1)
`define DECINFO_BJP_BLTU   			`DECINFO_BJP_BLTU_MSB :`DECINFO_BJP_BLTU_LSB 
`define DECINFO_BJP_BGTU_LSB 		(`DECINFO_BJP_BLTU_MSB+1)
`define DECINFO_BJP_BGTU_MSB 		(`DECINFO_BJP_BGTU_LSB+1-1)
`define DECINFO_BJP_BGTU   			`DECINFO_BJP_BGTU_MSB :`DECINFO_BJP_BGTU_LSB 
`define DECINFO_BJP_BXX_LSB  		(`DECINFO_BJP_BGTU_MSB+1)
`define DECINFO_BJP_BXX_MSB  		(`DECINFO_BJP_BXX_LSB+1-1)
`define DECINFO_BJP_BXX    			`DECINFO_BJP_BXX_MSB :`DECINFO_BJP_BXX_LSB
`define DECINFO_BJP_MRET_LSB  		(`DECINFO_BJP_BXX_MSB+1)
`define DECINFO_BJP_MRET_MSB  		(`DECINFO_BJP_MRET_LSB+1-1)
`define DECINFO_BJP_MRET    		`DECINFO_BJP_MRET_MSB :`DECINFO_BJP_MRET_LSB
`define DECINFO_BJP_DRET_LSB  		(`DECINFO_BJP_MRET_MSB+1)
`define DECINFO_BJP_DRET_MSB  		(`DECINFO_BJP_DRET_LSB+1-1)
`define DECINFO_BJP_DRET    		`DECINFO_BJP_DRET_MSB :`DECINFO_BJP_DRET_LSB
`define DECINFO_BJP_FENCE_LSB  		(`DECINFO_BJP_DRET_MSB+1)
`define DECINFO_BJP_FENCE_MSB  		(`DECINFO_BJP_FENCE_LSB+1-1)
`define DECINFO_BJP_FENCE    		`DECINFO_BJP_FENCE_MSB :`DECINFO_BJP_FENCE_LSB
`define DECINFO_BJP_FENCEI_LSB  	(`DECINFO_BJP_FENCE_MSB+1)
`define DECINFO_BJP_FENCEI_MSB  	(`DECINFO_BJP_FENCEI_LSB+1-1)
`define DECINFO_BJP_FENCEI    		`DECINFO_BJP_FENCEI_MSB :`DECINFO_BJP_FENCEI_LSB

`define DECINFO_BJP_WIDTH  			(`DECINFO_BJP_FENCEI_MSB+1)

