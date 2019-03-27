int ledPin1 = 13; //LED anode connected to digital pin 3

int inputPin1 = 2; //infrared proximity switch connected to digital pin A1

int val1 = 0; //this variable will read the value from the sensor

void setup() 
{
pinMode(ledPin1, OUTPUT); //declare LED as output

pinMode(inputPin1, INPUT); //declare infrared sensor as input

}

void loop(){

val1 = digitalRead(inputPin1); // read input value

if (val1 == HIGH) 
{ //check if the input is HIGH
digitalWrite(ledPin1, LOW); //LED is off
} else 
{
digitalWrite(ledPin1, HIGH); //LED is turned on
}
}



