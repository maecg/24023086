void setup(){
  Serial.begin(9600);

  while(!Serial){
  }

  Serial.println("Insira a temperatura em graus Celsius: ");
}
void loop(){
  if(Serial.available() >0){
    String input = Serial.readString();
    float t = input.toFloat();

    if(t<=0){
      Serial.println("Geleira - Temperatura muito fria!");
    }else if(t>= 1 && t<=15){
      Serial.println("Frio - Pode precisar de um casaco!");
    }else if(t>=16 && t<=25){
      Serial.println("Agradável - Tempo bom para sair!");
    }else if( t>=26 && t<=35){
      Serial.println("Quente - Ótimo para um dia de praia!");
    }else{
      Serial.println("Muito quente - Mantenha-se hidratado!");
    }
  }
}