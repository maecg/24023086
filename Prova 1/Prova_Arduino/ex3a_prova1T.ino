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

    c = (f-32)*5.0/9.0;//como os 3 últimos dígitos do meu ra é 086, retorna 30.00

    Serial.println("A temperatura em graus Celsius é: ");
    Serial.println(c,2);

    Serial.println("Insira a temperatura em graus Ferenheit: ");

  }
}
