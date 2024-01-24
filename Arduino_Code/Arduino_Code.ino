int Sinput = A1;    // creating or assigning an int type variable for sensor input signal
int Buz=3;            // creating or assigning an int type variable for output buzz and vibrator


void setup()      /// in void setup we make the selected pins output or input.
{
pinMode(Sinput, INPUT);  /// here it is sensors pin  so we are defining here that this pin is input pin
pinMode(Buz, OUTPUT); /// here it is the pin used for transistor to control it,   so we are defining here that this pin is output pin
}


void loop()
{
  
if(digitalRead(Sinput)==LOW)
{
delay (1000);    // we are waiting for two second after the input pulse from the sensor. if the pulse is for more than  1 second then buzzer get triggered

digitalWrite(Buz, HIGH);
}

else
{
if(digitalRead(Sinput)== HIGH)
{
digitalWrite(Buz, LOW);
}
}

}
