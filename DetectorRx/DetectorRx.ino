#include <VirtualWire.h>

const int rx_pin = 12;
const int total = 100;
int count = 0;
int time_start;
int time_total;
int time_est = 30 * total;

void setup()
{
  vw_set_rx_pin (uint8_t pin);
}

void loop()
{
  time_start = millis();
  while (count < total + 1){
    if (vw_get_message(buf, &buflen)) // Counts how many messages it recieved
    {
      count++;
    }
  }
  time_total = millis() - time_start;
  float percentage = time_total/time_est;
}
