
struct TIMx_CR1_BITS {
	uint32_t CEN:1;
	uint32_t UDIS:1;
	uint32_t URS:1;
	uint32_t OPM:1;
	uint32_t DIR:1;
	uint32_t CMS:2;
	uint32_t ARPE:1;
	uint32_t CKD:2;
	uint32_t :6;
	uint32_t :16;
};

struct TIMx_CR2_BITS {
        uint32_t :3;
	uint32_t CCDS:1;
	uint32_t MMS:3;
	uint32_t TI1S:1;
        uint32_t :8;
	uint32_t :16;
};

struct TIMx_SMCR_BITS {
	uint32_t SMS:3;
	uint32_t :1;
	uint32_t TS:3;
	uint32_t MSM:1;
	uint32_t ETF:4;
	uint32_t ETPS:2;
	uint32_t ECE:1;
	uint32_t ETP:1;
	uint32_t :16;
};

struct TIMx_DIER_BITS {
	uint32_t UIE:1;
	uint32_t CC1IE:1;
	uint32_t CC2IE:1;
	uint32_t CC3IE:1;
	uint32_t CC4IE:1;
	uint32_t :1;
	uint32_t TIE:1;
	uint32_t :1;
	uint32_t UDE:1;
	uint32_t CC1DE:1;
	uint32_t CC2DE:1;
	uint32_t CC3DE:1;
	uint32_t CC4DE:1;
	uint32_t :1;
	uint32_t TDE:1;
	uint32_t :1;
        uint32_t :16;
};

struct TIMx_SR_BITS {
	uint32_t UIF:1;
	uint32_t CC1IF:1;
	uint32_t CC2IF:1;
	uint32_t CC3IF:1;
	uint32_t CC4IF:1;
	uint32_t :1;
	uint32_t TIF:1;
	uint32_t :2;
	uint32_t CC1OF:1;
	uint32_t CC2OF:1;
	uint32_t CC3OF:1;
	uint32_t CC4OF:1;
	uint32_t :3;
	uint32_t :16;
};

struct TIMx_EGR_BITS {
	uint32_t UG:1;
	uint32_t CC1G:1;
	uint32_t CC2G:1;
	uint32_t CC3G:1;
	uint32_t CC4G:1;
        uint32_t :1;
	uint32_t TG:1;
	uint32_t :9;
	uint32_t :16;
};

union TIMx_CCMR1_BITS {
	struct {
		uint32_t CC1S:2;
		uint32_t IC1PSC:2;
		uint32_t IC1F:4;
		uint32_t CC2S:2;
		uint32_t IC2PSC:2;
		uint32_t IC2F:4;
		uint32_t :16;
	} input_bits;
		
	struct {
		uint32_t CC1S:2;
		uint32_t OC1FE:1;
		uint32_t OC1PE:1;
		uint32_t OC1M:3;
		uint32_t OC1CE:1;
		uint32_t CC2S:2;
		uint32_t OC2FE:1;
		uint32_t OC2PE:1;
		uint32_t OC2M:3;
		uint32_t OC2CE:1;			
		uint32_t :16;
	} output_bits;
};

union TIMx_CCMR2_BITS {
	struct {
		uint32_t CC3S:2;
		uint32_t IC3PSC:2;
		uint32_t IC3F:4;
		uint32_t CC4S:2;
		uint32_t IC4PSC:2;
		uint32_t IC4F:4;
	        uint32_t :16;
	} input_bits;
		
	struct {
		uint32_t CC3S:2;
		uint32_t OC3FE:1;
		uint32_t OC3PE:1;
		uint32_t OC3M:3;
		uint32_t OC3CE:1;
		uint32_t CC4S:2;
		uint32_t OC4FE:1;
		uint32_t OC4PE:1;
		uint32_t OC4M:3;
		uint32_t OC4CE:1;			
		uint32_t :16;
	} output_bits;
};

struct TIMx_CCER_BITS {
	uint32_t CCIE:1;
	uint32_t CC1P:1;
	uint32_t :1;
	uint32_t CC1NP:1;
	uint32_t CC2E:1;
	uint32_t CC2P:1;
	uint32_t :1;
	uint32_t CC2NP:1;
	uint32_t CC3E:1;
	uint32_t CC3P:1;
	uint32_t :1;
	uint32_t CC3NP:1;
	uint32_t CC4E:1;
	uint32_t CC4P:1;
	uint32_t :1;
	uint32_t CC4NP:1;
	uint32_t :16;
};

union TIMx_CNT_BITS {
	struct {
		uint32_t CNT:32;
	} TIMER2;
		
	struct {
		uint32_t CNT:16;
		uint32_t :16;
	} TIMER3;

	struct {
		uint32_t CNT:16;
		uint32_t :16;
	} TIMER4;

	struct {
		uint32_t CNT:32;
	} TIMER5;
};

struct TIMx_PSC_BITS {
	uint32_t PSC:16;
        uint32_t :16;
};

union TIMx_ARR_BITS {
	struct {
		uint32_t ARR:32;
	} TIMER2;
		
	struct {
		uint32_t ARR:16;
		uint32_t :16;
	} TIMER3;

	struct {
		uint32_t ARR:16;
		uint32_t :16;
	} TIMER4;

	struct {
		uint32_t ARR:32;
	} TIMER5;
};

union TIMx_CCR1_BITS {
	struct {
		uint32_t CCR1:32;
	} TIMER2;
		
	struct {
		uint32_t CCR1:16;
		uint32_t :16;
	} TIMER3;

	struct {
		uint32_t CCR1:16;
		uint32_t :16;
	} TIMER4;

	struct {
		uint32_t CCR1:32;
	} TIMER5;
};

union TIMx_CCR2_BITS {
	struct {
		uint32_t CCR2:32;
	} TIMER2;
		
	struct {
		uint32_t CCR2:16;
		uint32_t :16;
	} TIMER3;

	struct {
		uint32_t CCR2:16;
		uint32_t :16;
	} TIMER4;

	struct {
		uint32_t CCR2:32;
	} TIMER5;
};

union TIMx_CCR3_BITS {
	struct {
		uint32_t CCR3:32;
	} TIMER2;
		
	struct {
		uint32_t CCR3:16;
		uint32_t :16;
	} TIMER3;

	struct {
		uint32_t CCR3:16;
		uint32_t :16;
	} TIMER4;

	struct {
		uint32_t CCR3:32;
	} TIMER5;
};

union TIMx_CCR4_BITS {
	struct {
		uint32_t CCR4:32;
	} TIMER2;
		
	struct {
		uint32_t CCR4:16;
		uint32_t :16;
	} TIMER3;

	struct {
		uint32_t CCR4:16;
		uint32_t :16;
	} TIMER4;

	struct {
		uint32_t CCR4:32;
	} TIMER5;
};

struct TIMx_DCR_BITS {
	uint32_t DBA:5;
        uint32_t :3;
	uint32_t DBL:5;
        uint32_t :3;
        uint32_t :16;
};

struct TIMx_DMAR_BITS {
	uint32_t DMAB:16;
        uint32_t :16;
};

union TIMx_OR_BITS {
	struct {
	        uint32_t :10;
		uint32_t ITR1_RMP:2;
	        uint32_t :4;
                uint32_t :16;
	} TIMER2_OR;
		
	struct {
	        uint32_t :6;
		uint32_t TI4_RMP:2;
	        uint32_t :8;
                uint32_t :16;
	} TIMER5_OR;
};

struct TIMx {
	struct TIMx_CR1_BITS   TIMx_CR1;
	struct TIMx_CR2_BITS   TIMx_CR2;
	struct TIMx_SMCR_BITS  TIMx_SMCR;
	struct TIMx_DIER_BITS  TIMx_DIER;
	struct TIMx_SR_BITS    TIMx_SR;
	struct TIMx_EGR_BITS   TIMx_EGR;
	union  TIMx_CCMR1_BITS TIMx_CCMR1;
	union  TIMx_CCMR2_BITS TIMx_CCMR2;
	struct TIMx_CCER_BITS  TIMx_CCER;
	union  TIMx_CNT_BITS   TIMx_CNT;
	struct TIMx_PSC_BITS   TIMx_PSC;	
	union  TIMx_ARR_BITS   TIMx_ARR;
	union  TIMx_CCR1_BITS  TIMx_CCR1;
	union  TIMx_CCR2_BITS  TIMx_CCR2;
	union  TIMx_CCR3_BITS  TIMx_CCR3;
	union  TIMx_CCR4_BITS  TIMx_CCR4;
	struct TIMx_DCR_BITS   TIMx_DCR;
	struct TIMx_DMAR_BITS  TIMx_DMAR;
	union  TIMx_OR_BITS    TIMx_OR;
};
