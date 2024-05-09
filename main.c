#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void) {
	// Configured PB1 (Pin 9 on Arduino Uno) as output
	DDRB |= (1 << PORTB1);
	
	// Configured Fast PWM mode + Clear on compare match
	TCCR1A |= (1 << COM1A1) | (1 << WGM10);

	// Configured timer with prescaler 64
	TCCR1B |= (1 << CS11) | (1 << CS10) | (1 << WGM12);

	while (1) {
		for (uint8_t i = 0; i < 255; i++) {
			OCR1A = i;
			_delay_ms(20); // I tested multiple different values for the delay
						   // it will appear in the attached videos.
		}
		
		for (uint8_t i = 255; i > 0; i--) {
			OCR1A = i;
			_delay_ms(20);
		}
	}
	return 0;
}