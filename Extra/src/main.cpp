#include <WiFi.h>
#include <PubSubClient.h>

const char* ssid = "HoangFuc07";
const char* password = "1highbar45678";
const char* mqtt_server = "localhost:1883";

WiFiClient espClient;
PubSubClient client(espClient);

void setup() {
  Serial.begin(115200);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("WiFi connected");

  client.setServer(mqtt_server, 1883);

  while (!client.connected()) {
    Serial.println("Connecting to MQTT...");
    if (client.connect("ESP32Client")) {
      Serial.println("Connected");
    } else {
      delay(5000);
    }
  }
}

void loop() {
  if (client.connected()) {
    client.publish("test", "Hello, it's Phuc");
  }
  delay(5000);
}
