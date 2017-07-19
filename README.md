# NodeMCU OLED Hello World

__This is work in progress. I've just uploaded my CRUD project files for now. Please be patient with me.__

### TL;DR

* Hook up your OLED screen: `SDA` = `D1` and `SCL` = `D2`.
* Run a couple of commands:
```bash
$ pio lib install "ESP8266_SSD1306"
```

Upload and run your code:
```bash
$ pio run -e nodemcuv2 -t upload && pio serialports monitor -b 115200
```

Over The Air updates:
```bash
$ pio run -e nodemcuv2 -t upload --upload-port 192.168.1.6 && pio serialports monitor -b 115200
```

Weee :-)

... more to come.


## Other resources

* [Getting started with NodeMCU, Arduino or Wemos D1 mini](https://github.com/5orenso/arduino-getting-started)
* [NodeMCU code for the toilet sensors integrated with AWS IoT](https://github.com/5orenso/nodemcu-mqtt-toilet-project)
* [NodeMCU code for the toilet lights integrated with AWS IoT](https://github.com/5orenso/nodemcu-mqtt-toilet-project-display)
* [NodeMCU code for home sensors integrated with AWS IoT](https://github.com/5orenso/nodemcu-mqtt-home-sensors)
* [NodeMCU code for BME280 sensor integrated with AWS IoT](https://github.com/5orenso/nodemcu-mqtt-bme280)
* [NodeMCU code for DallasTemperature sensor integrated with AWS IoT](https://github.com/5orenso/nodemcu-mqtt-dallastemperature)
* [Arduino code for Neopixel animations](https://github.com/5orenso/nodemcu-neopixel-animations)
* [AMI for MQTT Broker](https://github.com/5orenso/aws-ami-creation)
* [All PlatforIO.org libs by Sorenso](http://platformio.org/lib/search?query=author%253A%2522Sorenso%2522)

## Contribute

Please contribute with pull-requests.
