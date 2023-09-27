#include <M5StickCPlus.h>

void setup()
{
  M5.begin();
  pinMode(M5_LED, OUTPUT);
}

void loop()
{
  M5.update();
  digitalWrite(M5_LED, millis() % 1000 <= 200 ? LOW : HIGH);

  if (M5.BtnA.wasPressed())
  {
    M5.Axp.DeepSleep(SLEEP_SEC(5));   // 3.7V, 2.14mA
  }

  delay(100);
}
