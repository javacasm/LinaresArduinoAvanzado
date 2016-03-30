
/***   Global variables and function definition  ***/
int potenciometro_A0 = A0;


/***   Setup  ***/
void setup() {
    Serial.begin(9600);
    pinMode(potenciometro_A0, INPUT);
}

/***   Loop  ***/
void loop() {
    int ValorPotenciometro = analogRead(A0);
    /*
    ValorPotenciometro entre 0 y 1023
    */
    //int  Voltios = map(ValorPotenciometro, 0, 1023, 0, 500);
    //Serial.println(Voltios/100.0);
    float Voltios=ValorPotenciometro*5.0/1023.0;
    Serial.print(Voltios);
    Serial.println(" V");
    delay(200);
}

