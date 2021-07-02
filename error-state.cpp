#include <Arduino.h>

#include "error-state.h"

void error_state(uint32_t morse) {
  while (true) {
    for (int i = 31; i >= 0; i--) {
      // Serial.println((morse & (1L << i)) ? "1" : "0");
      digitalWrite(LED_BUILTIN, (morse & (1L << i) ? HIGH : LOW));
      delay(333);
    }
    digitalWrite(LED_BUILTIN, LOW);
    delay(2000);
  }
}
