#define pinoTrig 6 // Pino de comunicaçao ligado ao Trigger
#define pinoEcho 7 // Pino de comunicaçao ligado ao Echo
#define LED1 5
#define LED2 13
float distancia; // Variavel de leitura da distancia

void leitura(); // Funçao de leitura da distancia

void setup(){
  Serial.begin(9600);// Inicia a comunicação serial

  pinMode(pinoTrig, OUTPUT);
  pinMode(pinoEcho, INPUT);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  digitalWrite(pinoTrig, LOW); // Inicia com o pino em nível baixo
}

void loop(){
  ultrassonicLeitura();

  distancia = distancia/2; // Queremos apenas o tempo de ida e não de ida e volta
  distancia = distancia*0.034029; // A velocidade do som em cm/us é 0.034029

  Serial.print("A distância em cm é: ");
  Serial.println(distancia);
  if(distancia >= 20 && distancia < 40){
    
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, LOW);
    
  }
  else if(distancia >= 40){
  	digitalWrite(LED1, LOW);
    digitalWrite(LED2, HIGH);
  }
  
  delay(1000); // 1 segundo para cada leitura
}

void ultrassonicoLeitura(){ //O conteúdo dessa função poderia estar no void loop
  digitalWrite(pinoTrig, HIGH); // Manda um sinal de nível alto por 10 microssegundos
  delayMicroseconds(10);
  digitalWrite(pinoTrig, LOW);

  distancia = pulseIn(pinoEcho, HIGH); // Le o comprimento de onda em alta
}