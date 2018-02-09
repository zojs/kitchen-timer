char number_map={};
int switch_delay=50;

void setup()
{
  DDRD=B11111100;
  DDRB|=1;
  pinMode(11,OUTPUT); //display1
  pinMode(12,OUTPUT); //display2
}

void to_register(char num)
{
  PORTD&=~(0<<2);
  PORTD|=(num<<2);
  
  PORTB&=~(0>>7);
  PORTB|=(num>>7);
}

void pulsenum(int num1, int num2)
{
  digitalWrite(11,HIGH);
  to_register(number_map[num1]);
  delay(switch_delay);
  digitalWrite(11,LOW);

  digitalWrite(12,HIGH);
  to_register(number_map[num2]);
  delay(switch_delay);
  digitalWrite(12,LOW);

}

void loop()
{
  int set_v=0;
  int num1=0;
  int num2=0;
}
