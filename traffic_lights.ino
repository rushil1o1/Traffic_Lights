//LED Traffic Light System

int red = 10;
int yellow = 9;
int green = 8; 
int button = 12; 

void setup() 
{
    pinMode(red, OUTPUT);
    pinMode(yellow, OUTPUT);
    pinMode(green, OUTPUT);
    pinMode(button, INPUT);
    digitalWrite(green, HIGH); //So that initially the green light is turned on.
}

void changeLights();

void loop()
{
    if (digitalRead(button) == HIGH)
    {
        delay(15);
        while (digitalRead(button) == HIGH) {} //Waits for button release
        //When the switch is released, it changes the light.
            changeLights();
            delay(5000);
    }

}

void changeLights(){
    digitalWrite(green, LOW);
    digitalWrite(yellow, HIGH);
    delay(2000);

    digitalWrite(yellow, LOW);
    digitalWrite(red, HIGH);
    delay(6000);

    digitalWrite(yellow, LOW);
    digitalWrite(green, HIGH);
    delay(3000);
}
