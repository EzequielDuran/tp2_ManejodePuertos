//Diseñar una solución programable de manera tal que las salidas A0 y A1 se activen si B0 está activo, las salidas A2 y A3 se activen si B1 está activo, las salidas A4 y A5 se activen si B2 está activo, las salidas A6 y A7 se activen si B3 está activo.
#include "MKL25Z4.h"
int main() {
    int Nums1[2] = {0, 1};
    int Nums2[2] = {2, 3}; 
    int Nums3[2] = {4, 5}; 
    int Nums4[2] = {6, 7};  
SIM->SCGC5|=SIM_SCGCS_PORTB_MASK;

if((PTB->PDIR&(1<<0))== 1)
{
    for(int i = 0; i < 2; i++)
    {
        PORTA -> PCR[Nums1[i]]=PORT_PCR_MUX(1);
    }
} else if((PTB->PDIR&(1<<1))== 1){
    for(int i = 0; i < 2; i++)
    {
        PORTA -> PCR[Nums2[i]]=PORT_PCR_MUX(1);
    }

} else if((PTB->PDIR&(1<<2))== 1){
    for(int i = 0; i < 2; i++)
    {
        PORTA -> PCR[Nums3[i]]=PORT_PCR_MUX(1);
    }
    
} else if((PTB->PDIR&(1<<3))== 1){
    for(int i = 0; i < 2; i++)
    {
        PORTA -> PCR[Nums4[i]]=PORT_PCR_MUX(1);
    }
    
}
}