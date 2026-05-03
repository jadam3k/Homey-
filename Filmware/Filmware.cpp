#include <ETH.h>
#include <Adafruit_NeoPixel.h>
#include <ESP32Servo.h>

#define ETH_ADDR          0
#define ETH_POWER_PIN    -1 
#define ETH_MDC_PIN       23
#define ETH_MDIO_PIN      18
#define ETH_TYPE          ETH_PHY_LAN8720
#define ETH_CLK_MODE      ETH_CLOCK_GPIO0_IN

const int relays[] = {16, 17, 14, 13};
const int inputs[] = {33, 37, 34, 35};

#define PIN_SERVO1 2
#define PIN_SERVO2 15
#define PIN_BUZZER 32
#define PIN_LED    4

Adafruit_NeoPixel strip(1, PIN_LED, NEO_GRB + NEO_KHZ800);
Servo s1, s2;

void WiFiEvent(WiFiEvent_t event) {
  switch (event) {
    case ARDUINO_EVENT_ETH_GOT_IP:
      Serial.println(ETH.localIP());
      break;
    default: break;
  }
}

void setup() {
  Serial.begin(115200);

  WiFi.onEvent(WiFiEvent);
  ETH.begin(ETH_ADDR, ETH_POWER_PIN, ETH_MDC_PIN, ETH_MDIO_PIN, ETH_TYPE, ETH_CLK_MODE);

  for(int i=0; i<4; i++) {
    pinMode(relays[i], OUTPUT);
    digitalWrite(relays[i], LOW);
  }

  for(int i=0; i<4; i++) {
    pinMode(inputs[i], INPUT);
  }

  pinMode(PIN_BUZZER, OUTPUT);
  s1.attach(PIN_SERVO1);
  s2.attach(PIN_SERVO2);

  strip.begin();
  strip.show();
}

void loop() {
  if (digitalRead(37) == LOW) {
    digitalWrite(16, HIGH);
  } else {
    digitalWrite(16, LOW);
  }
  delay(50);
}