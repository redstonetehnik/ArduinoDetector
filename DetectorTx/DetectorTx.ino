/*
 This is transmitter code, it just sends pulses every .3 seconds.
 */
const int tx_pin = 12; //pin with transmitter
int delay_time = 30; //default delay between pulses
const int pot_pin = 11; //pin with potentiometer

void setup()
{
 pinMode(tx_pin, OUTPUT);
 pinMode(pot_pin, INPUT);
}

void loop()
{
  delay_time = pot_read(); //comment this line if potentiometer is not used/needed
  digitalWrite(tx_pin, HIGH); //pulses for one ms
  delay(1);
  digitalWrite(tx_pin, LOW);
  delay (delay_time); //waits delay time
}

int pot_read() //reads value on potentiometer and changes it to delay
{
  int pot = analogRead(pot_pin);
  pot = map(pot, 0, 1023, 50, 1);
  return(pot);
}

