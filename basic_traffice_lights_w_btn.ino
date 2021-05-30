int red = 10;
int yellow = 9;
int green = 8;

int button = 12; // switch is on pin 12

void setup(){
    pinMode(red, OUTPUT);
    pinMode(yellow, OUTPUT);
    pinMode(green, OUTPUT);

    pinMode(button, INPUT);
    digitalWrite(green, HIGH);
}

void loop() {
    if (digitalRead(button) == HIGH){
        delay(15); // software debounce
        if (digitalRead(button) == HIGH) {
            
            digitalWrite(green, LOW);
            digitalWrite(yellow, HIGH);
            delay(2000);

            digitalWrite(red, HIGH);
            digitalWrite(yellow, HIGH);
            delay(2000);

            digitalWrite(yellow, LOW);
            digitalWrite(red, HIGH);
            delay(3000);

            digitalWrite(red, HIGH);
            digitalWrite(yellow, HIGH);
            delay(2000);

            digitalWrite(red, LOW);
            digitalWrite(green, HIGH);
            digitalWrite(yellow, LOW);
            delay(5000);

        }
    }
}
