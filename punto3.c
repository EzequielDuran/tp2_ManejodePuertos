//Diseñar una solución programable de manera tal que en el Puerto A se visualice el complemento a 2 del Puerto B.
#include "MKL25Z4.h"
int main() {
    int primerBit = PTA ->PDIR&(1<<0);
SIM->SCGC5|=SIM_SCGCS_PORTA_MASK|SIM_SCGCS_PORTB_MASK;
for(int i = 0; i < 32; i++)
{
    PORTA -> PCR[i] = PORT_PCR_MUX(1);
    PORTB -> PCR[i] = PORT_PCR_MUX(0);
}
for(int i = 0; i < 32; i++)
{   
    if(PTA ->PDIR&(1<<i) == PTB ->PDIR&(1<<i))
    {
        PTA -> PSOR|=(∼(PTB ->PDIR&(1<<i))u<<i); 
    }
}
primerBit++;
}