// 두 개 핀 제어 - 배열로
int pin[2] = {A1, A2};
int pin_length = sizeof(pin)/sizeof(int);

void setup() {
  Serial.begin(9600);
  for(int i=0; i<pin_length; ++i){
    pinMode(pin[i], OUTPUT);  
  }
}


// \n의 앞 문자열만 읽기 - readStringUntil('\n')
void loop() {
  if(Serial.available()>0){
    //String stringdata = Serial.readString();
    String stringdata = Serial.readStringUntil('\n');
    Serial.print(stringdata);
    Serial.println(" 입력");
    if(stringdata == "A1"){
      digitalWrite(A1, HIGH);
    else if(stringdata = "A2"){
      digitalWrite(A2, HIGH);
    }else{
      Serial.println("failure");
      digitalWrite(A1, LOW);
      digitalWrite(A2, LOW);
    }
     
  }
}
