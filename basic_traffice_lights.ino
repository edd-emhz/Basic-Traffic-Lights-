int red = 10;
int yellow = 9;
int green = 8;

void setup(){
    pinMode(red, OUTPUT);
    pinMode(yellow, OUTPUT);
    pinMode(green, OUTPUT);
}

void loop(){
    changeLights();
    delay(10000);
}
void changeLights(){
    digitalWrite(green, HIGH);
    delay(3000);
    
    digitalWrite(yellow, HIGH);
    digitalWrite(green, HIGH);
    delay(1000);
    
    digitalWrite(yellow, HIGH);
    digitalWrite(green, LOW);
    delay(2000);

    digitalWrite(yellow, LOW);
    digitalWrite(red, HIGH);
    delay(3000);    

    digitalWrite(yellow, HIGH);
    digitalWrite(red, LOW);
    delay(2000);

    digitalWrite(yellow, LOW);
    digitalWrite(red, LOW);
    digitalWrite(green, HIGH);
    delay(3000);
}
