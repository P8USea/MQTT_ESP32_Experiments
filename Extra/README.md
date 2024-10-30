This is a test I use MQTT with broker Mosquitto. I install mosquitto-client via apt, start the service and work with PlatformIO where I use "PubSubClient.h" library for configuring my MQTT Server. I use my ESP32 to publish to topic "test" a message "Hello, it's Phuc" every 5s and receive it by subcribing to the same topic, which have been shown on my node-red.
![Img] (./image.png)
