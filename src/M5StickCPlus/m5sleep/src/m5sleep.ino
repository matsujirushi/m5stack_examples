#include <M5StickCPlus.h>

void setup()
{
  M5.begin();
  pinMode(M5_LED, OUTPUT);
}

void loop()
{
  BlinkLED(2);
  M5.Axp.LightSleep(SLEEP_SEC(5));  // 3.7V, 16.29mA

  BlinkLED(3);
  M5.Axp.DeepSleep(SLEEP_SEC(5));   // 3.7V, 2.14mA
}

static void BlinkLED(int num)
{
  for (int i = 0; i < num; ++i)
  {
    digitalWrite(M5_LED, LOW);
    delay(100);
    digitalWrite(M5_LED, HIGH);
    delay(100);
  }
}
