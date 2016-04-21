/*
 * main implementation: use this 'C' sample to create your own application
 *
 */

#include "derivative.h" /* include peripheral declarations */
#include "mylibrary.h"
extern void xcptn_xmpl(void);

void hw_init(void)
{
#if defined(TURN_ON_CPU1)
    /* Start the second core */
    SSCM.DPMBOOT.R = (unsigned long)0x180800;
    SSCM.DPMKEY.R  = (unsigned long)0x00005AF0;
    SSCM.DPMKEY.R  = (unsigned long)0x0000A50F;
#endif	
}

int main(void)
{
	int counter = my_add(3,5);

	xcptn_xmpl ();              /* Configure and Enable Interrupts */

	/* Loop forever */
	for(;;) {	   
	   	counter++;
	}
}
