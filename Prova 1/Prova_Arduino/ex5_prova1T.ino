void setup() {
  Serial.begin(9600);
  while(!Serial){

  }
  Serial.print("Insira a temperatura do galpão: ");
}

void loop() {
  if(Serial.available() >0){
    String input = Serial.readString();
    float t = input.toFloat();

    if(t<10){
      Serial.println("\nRisco baixo - Armazenamento ideal para alimentos!");
    }else if(t>=10 && t<=0){
      Serial.println("\nRisco Moderado - Condoções aceitaveis!");
    }else if((t>=1 && 10) || t ==15){
      Serial.println("\nRisco Elevado - Monitore a temperatura!");
    }else{
      Serial.println("\nRisco Crítico - Ação imediáta necessária!");
    }
  }

}
