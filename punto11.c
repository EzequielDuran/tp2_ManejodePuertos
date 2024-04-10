//Diseñar una solución programable de manera tal que en el Puerto A se obtenga el resultado de la operación xnor entre el Puerto B y el literal 0x23.
int main() {
    int V[32];
SIM->SCGC5|=SIM_SCGCS_PORTA_MASK|SIM_SCGCS_PORTB_MASK;
for(int i = 0; i < 32; i++)
{
    PORTA -> PCR[i] = PORT_PCR_MUX(1);
    PORTB -> PCR[i] = PORT_PCR_MUX(0);
}
    int PuertoB = PTB -> PDIR;
    PTA -> PDOR |= ~(PuertoB ^ 0x23);
} 