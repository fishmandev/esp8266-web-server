// Load Wi-Fi library
#include <ESP8266WiFi.h>
#include "ESP8266WebServer.h"

// Set web server port number to 80
ESP8266WebServer server(80);

// Variable to store the HTTP request
String header;

void handleRootPath() {
  server.send(200, "text/plain", "Hello world");
}

void setup() {
  Serial.begin(115200);
  
  server.on("/", handleRootPath);
  server.begin();
}

void loop() {
  server.handleClient(); //Handling of incoming requests  
}
