//char inputdata = 0;
int inputdata = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int intdata = 65;
  char chardata = 65;
  float floatdata = 65;
  /*Serial.println(intdata); // A
  Serial.println(chardata); // 65
  Serial.println(floatdata); // 65.00*/
  delay(1000);
  if(Serial.available()>0){
    inputdata = Serial.read();
    // write와 print는 줄바꿈이 일어나지 않는다.
    // write는 모두 char로 변경하고, print는 아스키값을 출력한다.
    Serial.write(inputdata);
    Serial.print(",");
    Serial.println(inputdata);
    delay(1000);
  }
}
