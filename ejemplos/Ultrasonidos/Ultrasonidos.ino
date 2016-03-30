/***   Included libraries  ***/
#include <BitbloqUS.h>


/***   Global variables and function definition  ***/
US ultrasonidos_0(7, 3);


/***   Setup  ***/
void setup() {
 Serial.begin(9600);}

/***   Loop  ***/
void loop() {
    Serial.println(ultrasonidos_0.read());
    delay(2000);
}
