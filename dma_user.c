/*
 * dma_user.c
 *
 *  Created on: Apr 10, 2023
 *      Author: oscar
 */

#include "dma_user.h"

void DMA_setup(void) {
	RCC->AHB1ENR |= (RCC_AHB1ENR_DMA2EN);

	DMA2_Stream0->CR &= ~(DMA_SxCR_DIR_0);
	DMA2_Stream0->CR |= (DMA_SxCR_DIR_1);
	DMA2_Stream0->CR |= (DMA_SxCR_PSIZE_0);
	DMA2_Stream0->CR &= ~(DMA_SxCR_PSIZE_1);
	DMA2_Stream0->CR |= (DMA_SxCR_MSIZE_0);
	DMA2_Stream0->CR &= ~(DMA_SxCR_MSIZE_1);
	DMA2_Stream0->CR |= (DMA_SxCR_PINC);
	DMA2_Stream0->CR |= (DMA_SxCR_MINC);
	DMA2_Stream0->CR |= (DMA_SxCR_PL);
}
