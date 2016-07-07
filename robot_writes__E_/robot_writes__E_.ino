
#define left PORTH=0x20
#define lspin PORTH=0x28
#define rspin PORTH=0x50
#define angle90 528
#define angle180 1042
#define right PORTH=0x10
#define f1 700
#define f2 1400
#define f3 2100
#define f4 2800

int main()
{
  DDRH=0x78;     	//Setting the data direction of PORTD where motors are connected
 while(1)
 {
   PORTH=0x00;
   _delay_ms(f3);
   
   PORTH=0x30;   	//moving ROBOT forward
   _delay_ms(f1);
   
   lspin;      //moving ROBOT left
   _delay_ms(angle90);
   
   PORTH=0x30;   	//moving ROBOT forward
   _delay_ms(f1);
   
   lspin;      //moving ROBOT left
   _delay_ms(angle90+1);
   
   PORTH=0x30;   	//moving ROBOT forward
   _delay_ms(f1);   
   
   lspin;      //moving ROBOT left
   _delay_ms(angle180+2);
   
   PORTH=0x30;   	//moving ROBOT forward
   _delay_ms(f1);
   
   lspin;    //moving ROBOT left
   _delay_ms(angle90+3);
   
   PORTH=0x30;   	//moving ROBOT forward
   _delay_ms(f1);
   
   lspin;    //moving ROBOT left
   _delay_ms(angle90+4);
   
   PORTH=0x30;   	//moving ROBOT forward
   _delay_ms(f3);
   
   /************E************/
 }
}
