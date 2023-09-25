#include <iostream>
using namespace std;

// Forward declarations
class TemperatureSensor;
class HumiditySensor;

class TemperatureSensor {
    int temperature;

public:
    void setTemperature(int value) {
        temperature = value;
    }

    friend void reportWeather(TemperatureSensor, HumiditySensor);
};

class HumiditySensor {
    int humidity;

public:
    void setHumidity(int value) {
        humidity = value;
    }

    friend void reportWeather(TemperatureSensor, HumiditySensor);
};

void reportWeather(TemperatureSensor tempSensor, HumiditySensor humiditySensor) {
    cout << "Today's Weather Report:" << endl;
    cout << "Temperature: " << tempSensor.temperature << " degrees Celsius" << endl;
    cout << "Humidity: " << humiditySensor.humidity << "%" << endl;
}

int main() {
    TemperatureSensor temperatureSensor;
    HumiditySensor humiditySensor;

    temperatureSensor.setTemperature(28);
    humiditySensor.setHumidity(60);

    // Calling the friend function to report the weather
    reportWeather(temperatureSensor, humiditySensor);

    return 0;
}
