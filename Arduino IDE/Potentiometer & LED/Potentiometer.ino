int redPin =  21;
int greenPin =  23;
int bluePin =  22;
int redIntensity = 0;

void setup()
{                
  Serial.begin(38400);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop()                     
{
  // read the pot position
  redIntensity = analogRead(0) / 4;
  
  // set all 3 pins to the desired intensity
  analogWrite(redPin, redIntensity);
  analogWrite(greenPin, 255 - redIntensity);
  analogWrite(bluePin, 0);

  delay(10);
}
