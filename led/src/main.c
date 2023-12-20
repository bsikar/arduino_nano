#include <avr/io.h>
#include <util/delay.h>

int main(void) {
  // Set pin 13 as an output
  DDRB |= (1 << DDB5);

  while (1) {
    // Turn the LED on
    PORTB |= (1 << PORTB5);
    _delay_ms(3000); // Wait for 3000 milliseconds

    // Turn the LED off
    PORTB &= ~(1 << PORTB5);
    _delay_ms(3000); // Wait for 3000 milliseconds
  }

  return 0;
}
