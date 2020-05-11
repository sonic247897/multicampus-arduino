void setup(){
  // 시리얼통신을 시작하겠다는 의미 - 시리얼통신을 위한 기본작업을 준비
  Serial.begin(9600); //통신속도를 의미 - 기본 9600baud
}

void loop(){
  Serial.println("Hello 아두이노");
  delay(1000);
}
