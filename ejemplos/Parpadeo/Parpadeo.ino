/***   Included libraries  ***/


/***   Global variables and function definition  ***/
int led_0 = 12;

/***   Setup  ***/
void setup() {
    pinMode(led_0, OUTPUT);
}

/***   Loop  ***/
void loop() {
    int Pausa = 250;
    digitalWrite(led_0, HIGH);
    delay(Pausa);
    digitalWrite(led_0, LOW);
    delay(Pausa);
}
