void setup() {
  Serial.begin(9600);
}

void loop() {
  delay(2000);
  if(Serial.available()>0){
    char data = Serial.read(); // 첫 바이트만 읽기 때문에 test라고 입력하면 t만 출력
    Serial.println(data);
    // 나머지 String을 모두 읽을 때 사용 - t를 위에서 읽고 지웠기 때문에 est만 반환
    String stringdata = Serial.readString();
    Serial.println(stringdata);
  }
}
