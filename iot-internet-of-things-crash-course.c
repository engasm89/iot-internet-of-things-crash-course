// Demonstrate IoT loop with MQTT/HTTP style logs
#include <stdio.h> // Logs
#include <unistd.h> // Timing

int main(void) { // Entry
  printf("IoT Internet of Things Crash Course\n"); // Title
  for (int i = 1; i <= 12; ++i) { // 12 frames
    int temp = 20 + (i % 6); // Sim temp
    int hum = 40 + (i % 8); // Sim hum
    printf("MQTT PUBLISH topic=/course/sensors payload={\"t\":%d,\"h\":%d}\n", temp, hum); // MQTT
    printf("HTTP POST /ingest body={\"t\":%d,\"h\":%d}\n", temp, hum); // HTTP
    usleep(200000); // Delay
  } // End loop
  return 0; // Exit
} // End main
