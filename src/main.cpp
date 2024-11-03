/*
 * Blink
 * Turns on an LED on for one second,
 * then off for one second, repeatedly.
 */

#include <Arduino.h>
#include "Constants.h"

void setup()
{
  // initialize LED digital pin as an output.
  pinMode(LED_BUILTIN, OUTPUT);

}

void loop()
{
  digitalWrite(STEPPER1_DIR_PIN, HIGH);

  delay(2);
  digitalWrite(LED_BUILTIN, HIGH);
  digitalWrite(STEPPER1_STEP_PIN, HIGH);

  delay(2);
  digitalWrite(LED_BUILTIN, LOW);
  digitalWrite(STEPPER1_STEP_PIN, LOW);
}