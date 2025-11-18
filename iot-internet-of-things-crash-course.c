/*
 * Course: Iot Internet Of Things Crash Course
 * Platform: Embedded Systems
 * Author: Ashraf S A AlMadhoun
 * 
 * Description:
 * This code demonstrates the core concepts taught in the "Iot Internet Of Things Crash Course" course.
 * It provides a practical implementation that students can study, modify, and
 * use as a foundation for their own projects.
 * 
 * Learning Objectives:
 * - Understand the fundamental principles covered in this course
 * - Practice implementing the concepts with real code
 * - Build a working example that can be extended
 * 
 * Hardware Requirements:
 * - Development board (Embedded Systems)
 * - Components as specified in CIRCUIT.md
 * - USB cable for programming
 * 
 * Pin Connections:
 * Refer to CIRCUIT.md for detailed wiring diagrams and pin assignments.
 * 
 * Usage:
 * 1. Review the code structure and comments
 * 2. Connect hardware according to CIRCUIT.md
 * 3. Upload code to your development board
 * 4. Monitor serial output for debugging
 * 
 * Course Link: https://www.udemy.com/course/iot-internet-of-things-crash-course/
 * Repository: https://github.com/engasm89/iot-internet-of-things-crash-course
 * 
 * Copyright (c) 2025 Ashraf S A AlMadhoun
 * Licensed under MIT License
 */

// Demonstrate IoT loop with MQTT/HTTP style logs
#include <stdio.h> // Logs
#include <unistd.h> // Timing

int main(void) { // Program entry point
  printf("IoT Internet of Things Crash Course\n"); // Title
  for (int i = 1; i <= 12; ++i) { // 12 frames
    int temp = 20 + (i % 6); // Sim temp
    int hum = 40 + (i % 8); // Sim hum
    printf("MQTT PUBLISH topic=/course/sensors payload={\"t\":%d,\"h\":%d}\n", temp, hum); // MQTT
    printf("HTTP POST /ingest body={\"t\":%d,\"h\":%d}\n", temp, hum); // HTTP
    usleep(200000); // Delay
  } // End loop
  return 0; // Exit
} // End of main function
