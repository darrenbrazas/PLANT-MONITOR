//Include The Necessary Libraries

#include <Wire.h>
#include <BH1750.h>
#include <DHT.h>
#include <Adafruit_SSD1306.h>
#include <Adafruit_GFX.h>

//Define The Pins

//DHT SENSOR

#define DHTPIN 2
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

//SOIL MOISTURE SENSOR

#define SOILMOISTUREPIN A0

//LIGHT SENSOR BH1750

BH1750 lightMeter(0x23);

//OLED DISPLAY
//A4(SDA) A5(SCL)
#define SCREEN_WIDTH 128  
#define SCREEN_HEIGHT 64
#define OLED_RESET    -1
#define SCREEN_ADDRESS 0x3C
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);


void setup() {
  // put your setup code here, to run once:
  //Initialize Serial Monitor
  Serial.begin(9600);
  
  //Initialize Sensors

  dht.begin();
  Wire.begin();

  if(lightMeter.begin(BH1750::CONTINUOUS_HIGH_RES_MODE)){
    Serial.println(F("BH1750 Advanced Begin"));
  } else {
    Serial.println(F("Error initializing BH1750"));
  }

  //Initialize OLED

  if(!display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS)){
    Serial.println(F("SSD1306 allocation failed"));
    for(;;);
  }

  

  //clear buffer
  display.clearDisplay();
  display.println("Sensors Initizalized");
  display.display();
  delay(2000);

}

void loop() {
  // put your main code here, to run repeatedly:
  //Read Temperature and Humidity from DHT

  //temperature read
  float temperature = dht.readTemperature();
  if (isnan(temperature)){

    Serial.println(F("Error reading temperature"));
  } else {

    Serial.print(F("Temperature is: "));
    Serial.print(temperature);
    Serial.print(F(" degrees celcius"));
  
  }

  //now read humidity

  float humidity = dht.readHumidity();
  if (isnan(humidity)){

    Serial.println(F("Error reading humidity"));
  } else {

    Serial.print(F("Humidity is: "));
    Serial.print(humidity);
    Serial.print(F("%"));
  
  }


  //Read Soil Moisture

  float soilMoisture = analogRead(SOILMOISTUREPIN);
  Serial.print("The soil moisture is currently: ");
  Serial.print(soilMoisture);

  
  //Read Light Intensity From BH1750

float lightLevel = lightMeter.readLightLevel();
  if(lightMeter.measurementReady()){

    
    Serial.print("Light Level is currently: ");
    Serial.print(lightLevel);
    Serial.print(" lux");

  }


  //Print Values to Serial Monitor for Testing

  //Display On OLED

  display.clearDisplay();

  //set text size
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);

  //display temperature
  display.print("Temperature: ");
  display.print(temperature);
  display.print("C");

  //display humidity
  display.println("");
  display.print("Humidity: ");
  display.print(humidity);
  display.print("%");

  //display moisture
  display.println("");
  display.print("Mois Level: ");
  display.print(soilMoisture);
  
  //display light level
  display.println("");
  display.print("Light: ");
  display.print(lightLevel);
  display.print("lux");

  display.display();


}
