void setup() {
  // put your setup code here, to run once:

}

void loop() {
  int valorPot=analogRead(A0); // rango 0 - 1023
  int brillo=map(valorPot,0,1023,0,100);
  analogWrite(9,brillo);

  // analogWrite(9,analogRead(A0)/4);  //equivalente

}
