#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>


//Blynk auth token
char auth[] = "d74d8d51a9254ff3899f23be9d554efb";

//wifi Credentials
char ssid[] = "OPTIMUS";
char pass[] = "tu8P@cVNG1";

//Moisture sensing variables
int WET= 16; // Wet Indicator at Digital pin D0
int DRY= 5;  // Dry Indicator at Digital pin D1
int AUTO_TURNOFF = 4; //Digital pin D2 manages auto-turnoff ----- HIGH = ON and LOW = OFF
int sense_Pin = 0; // sensor input at Analog pin A0
int sensorData = 0;
int moisturePercentage = 0;
int pump = 14; //D5

void setup()
{
  Serial.begin(9600);
  pinMode(WET, OUTPUT);
  pinMode(DRY, OUTPUT);
  pinMode(AUTO_TURNOFF, INPUT);
  pinMode(pump, OUTPUT);
  Blynk.begin(auth, ssid, pass);
  delay(2000);
}

void loop()
{
  Blynk.run();
  Serial.print("MOISTURE LEVEL : ");
  sensorData = map(analogRead(A0), 0, 1024, 100, 0);  //reading the sensor on A0
  Serial.println(sensorData);

  if(sensorData>50){
    digitalWrite(WET, HIGH);
    digitalWrite(DRY,LOW);
    if( digitalRead(AUTO_TURNOFF) == HIGH ){
      digitalWrite(pump, LOW);
    }
  }
  else{
    digitalWrite(DRY,HIGH);
    digitalWrite(WET, LOW);
  }
}

BLYNK_READ(V5) //Blynk app has something on V5
{
  sensorData = analogRead(A0); //reading the sensor on A0
  moisturePercentage = map(sensorData, 0, 1024, 100, 0);
  Blynk.virtualWrite(V5, moisturePercentage); //sending to Blynk
}
