//Diseñar una solución programable de manera tal que las salidas A0, A2, A4 y A6 se activen si B0 está inactivo; y las salidas A1, A3, A5 y A7 se activen si B0 está activo.
#include "MKL25Z4.h"
int main() {
    int Pares[4] = {0, 2, 4, 8};
    int Impares[4] = {1, 3, 5, 7};
SIM->SCGC5|=SIM_SCGCS_PORTB_MASK;

if((PTB->PDIR&(1<<0))== 1)
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