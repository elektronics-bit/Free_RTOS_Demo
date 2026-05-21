#include <Arduino_FreeRTOS.h>

// Task 1 - Built-in LED (pin 13) blinks every 500ms
void TaskBlink1(void *pvParameters) {
  pinMode(13, OUTPUT);
  for (;;) {
    digitalWrite(13, HIGH);
    vTaskDelay(500 / portTICK_PERIOD_MS);
    digitalWrite(13, LOW);
    vTaskDelay(500 / portTICK_PERIOD_MS);
  }
}

// Task 2 - Red LED (pin 8) blinks every 200ms
void TaskBlink2(void *pvParameters) {
  pinMode(8, OUTPUT);
  for (;;) {
    digitalWrite(8, HIGH);
    vTaskDelay(200 / portTICK_PERIOD_MS);
    digitalWrite(8, LOW);
    vTaskDelay(200 / portTICK_PERIOD_MS);
  }
}

void setup() {
  xTaskCreate(TaskBlink1, "Blink1", 64, NULL, 1, NULL);
  xTaskCreate(TaskBlink2, "Blink2", 64, NULL, 1, NULL);
  vTaskStartScheduler();
}

void loop() {}
