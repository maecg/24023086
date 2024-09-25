void setup(){
  Serial.begin(9600);
  while(!Serial){
    //espera para não ter lixo de dados no serial monitor
  }
  Serial.println("Insira a temperatura em graus Ferenheit: ");
}

void loop(){
  if(Serial.available() > 0){
    int f,c;
    String input = Serial.readString();
    f = input.toInt();

    c = (f-32)*5/9; //independente do valor, como há arredondamento

    Serial.println("A temperatura em graus Celsius é: ");
    Serial.println(c);

    Serial.println("Insira a temperatura em graus Ferenheit: ");
  }
}