#include "stm32f4xx.h"
#include "clk_user.h"
#include "dma_user.h"

#define MEMSIZE 3

uint16_t source[MEMSIZE] = { 1, 2, 3 };
uint16_t dest[MEMSIZE];

int main(void) {
	clk_user();
	DMA_setup();
	DMA2_Stream0->NDTR = MEMSIZE;

	DMA2_Stream0->PAR = (uint32_t) source;
	DMA2_Stream0->M0AR = (uint32_t) dest;
	DMA2_Stream0->CR |= (DMA_SxCR_EN);

	while (1) {

	}

}

