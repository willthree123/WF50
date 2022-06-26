#include "wf50p.h"
void matrix_init_kb(void) {

	DDRD &= ~(1<<5);
	PORTD &= ~(1<<5);

	DDRB &= ~(1<<0);
	PORTB &= ~(1<<0);
};
