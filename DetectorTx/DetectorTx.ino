/#include <VirtualWire.h>
/*
 This is transmitter code, it just sends pulses every .3 seconds.
 */
const int tx_pin = 12;
int delay_time = 30


void setup()
{
 vw_set_tx_pin  (uint8_t tx_pin);
}

void loop()
{
  ...
  const char msgChar[] =  "A";
 
  vw_send((uint8_t *)msgChar, strlen(msgChar));
  delay (delay_time);
}
