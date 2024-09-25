void setup(){
  Serial.begin(9600);
  while(!Serial){
    //espera para não ter lixo de dados no serial monitor
  }
  Serial.println("Insira a temperatura em graus Ferenheit: ");
}

void loop(){
  if(Serial.available() > 0){
    double f,c;
    String input = Serial.readString();
    f = input.toFloat();

    c = (f-32)*5.0/9.0;

    Serial.println("A temperatura em graus Celsius é: ");
    Serial.println(c);

    Serial.println("Insira a temperatura em graus Ferenheit: ");

  }
}