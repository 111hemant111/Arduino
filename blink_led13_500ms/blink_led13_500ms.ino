int main()
{
  DDRB=0b10000000;     	//Setting the data direction of PORTD where motors are connected
 while(1)
 {
   PORTB=0b00000000;
   _delay_ms(500);
   PORTB=0b10000000;
   _delay_ms(500);
 }
}
