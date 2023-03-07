int pinoSensor = 7;
int count = 0;
void setup() {
  pinMode(pinoSensor, INPUT);
  Serial.begin(9600);
}

void loop() {
 int chave = digitalRead(7);
  if (chave == 0)
  {
    count++;
    while(chave == 0){
      Serial.println("Tem");
      Serial.print("Quantidade de pessoas: ");
      Serial.println(count);
      delay(1000);
      int chave = digitalRead(7);
      if(chave == 1){
        break;
      }
    }
  }
  else
  {
    Serial.println("Não tem");
  }
Serial.println();
}
