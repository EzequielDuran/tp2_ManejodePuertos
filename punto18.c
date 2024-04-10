//Diseñar una solución programable de manera tal que las salidas A0, A1, A2 y A3 se activen si B0 está activo; y las salidas A4, A5, A6 y A7 se activen si B0 está inactivo.
#include "MKL25Z4.h"
int main() {
    int Pares[4] = {0, 1, 2, 3};
    int Impares[4] = {4, 5, 6, 7};  
SIM->SCGC5|=SIM_SCGCS_PORTB_MASK;

if((PTB->PDIR&(1<<0))== 0)
{
    for(int i = 0; i < 4; i++)
    {
        PORTA -> PCR[Pares[i]]=PORT_PCR_MUX(1);
    }
} else {
    for(int i = 0; i < 4; i++)
    {
        PORTA -> PCR[Impares[i]]=PORT_PCR_MUX(1);
    }
}
}