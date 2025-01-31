#include <DHT.h>

// Define the DHT sensor type
#define DHTPIN 4        // GPIO4 (Change if using another pin)
#define DHTTYPE DHT22   // DHT22 sensor

DHT dht(DHTPIN, DHTTYPE);

void setup() {
    Serial.begin(115200);
    Serial.println("DHT22 Sensor Reading...");
    dht.begin();
}

void loop() {
    float temperature = dht.readTemperature(); // Read temperature in Celsius
    float humidity = dht.readHumidity();       // Read humidity

    if (isnan(temperature) || isnan(humidity)) {
        Serial.println("Failed to read from DHT sensor!");
        return;
    }

    Serial.print("Temperature: ");
    Serial.print(temperature);
    Serial.print("°C  |  Humidity: ");
    Serial.print(humidity);
    Serial.println("%");

    delay(2000);  // Wait 2 seconds before next reading
}
