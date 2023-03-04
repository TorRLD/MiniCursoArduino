// C++ code
//
define EN1 9; //Pino enable para roda direita
define EN2 10;//Pino enable para roda esquerda
define IN1 5;
define IN2 6;
define IN3 7;
define IN4 8;

int vel = 200; //Variável para armazenar o valor da velocidade

void setup(){
  pinMode(EN1, OUTPUT);
  pinMode(EN2, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN2, OUTPUT);
}

void loop() {
  
  paraFrente(); //Executa a função para ir para frente
  delay(1000); //Espera 1 segundo
  paraTras(); //Executa a função para ir para trás
  delay(1000); //Espera 1 segundo
  paraDireita(); //Executa a função para ir para direita
  delay(1000); //Espera 1 segundo
  paraEsquerda(); //Executa a função para ir para esquerda
  delay(1000); //Espera 1 segundo
  
}

void paraFrente() { //Definição da função de ir para frente
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  analogWrite(EN1, vel);
  analogWrite(EN1, vel);
}
void paraTras() { //Definição da função de ir para trás
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  analogWrite(EN1, vel);
  analogWrite(EN1, vel); 
}
void paraDireta() { //Definição da função de ir para direita
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  analogWrite(EN1, vel);
  analogWrite(EN1, vel);
}
void paraEsquerda() { //Definição da função de ir para esquerda
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  analogWrite(EN1, vel);
  analogWrite(EN1, vel);
}

