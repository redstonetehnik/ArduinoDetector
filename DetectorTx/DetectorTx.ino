/#include <VirtualWire.h>
/*
 This is transmitter code, it just sends pulses every .3 seconds.
 */
const int tx_pin = 12;
int delay_time = 30;
const int pot_pin = 11;
const char msgChar[] =  "A";

void setup()
{
 vw_set_tx_pin  (uint8_t tx_pin);
 pinMode(pot_pin, OUTPUT);
}

void loop()
{
  delay_time = pot_read(); //comment this line if potentiometer is not used/needed
  vw_send((uint8_t *)msgChar, strlen(msgChar));
  delay (delay_time);
}

void pot_read()
{
  int pot = analogRead(pot_pin);
  pot = map(pot, 0, 1023, 50, 0);
  return(pot);
}

