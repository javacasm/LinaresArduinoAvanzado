/***   Global variables and function definition  ***/
int led_azul_12 = 12;
int led_verde_11 = 11;
int boton_10 = 10;
int potenciometro_0 = A0;

/***   Setup  ***/
void setup() {
    pinMode(led_azul_12, OUTPUT);
    pinMode(led_verde_11, OUTPUT);
    pinMode(boton_10, INPUT);
    pinMode(potenciometro_0, INPUT);
}

/***   Loop  ***/
void loop() {
    int EstadoBoton = digitalRead(10);
    int ValorPot = analogRead(A0);
    int Espera = (ValorPot * 10)+1000;
    if (EstadoBoton == 1) {
        digitalWrite(led_verde_11, LOW);
        digitalWrite(led_azul_12, HIGH);
        delay(Espera);

        for(int contador=0;contador<3;contador=contador+1)
        // contador++  o contador+=1
        {
          digitalWrite(led_azul_12, HIGH);
          delay(Espera/10);
          digitalWrite(led_azul_12, LOW);
          delay(Espera/10);
        }
    } else {
        digitalWrite(led_azul_12, LOW);
        digitalWrite(led_verde_11, HIGH);
    }
}
