void setup() {
  Serial.begin(9600);
}

void loop() {
  // 1초에 한 번씩 외부로 hello 전송
  Serial.println("hello");
  Serial.flush();
  delay(1000);
}
