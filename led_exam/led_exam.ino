// 두 개 핀 제어 - 배열로
int pin[2] = {A1, A2};
int pin_length = sizeof(pin)/sizeof(int);

void setup() {
  for(int i=0; i<pin_length; ++i){
    pinMode(pin[i], OUTPUT);  
  }
}

void loop() {
  for(int i=0; i<pin_length; ++i){
    digitalWrite(pin[i], HIGH);
    for(int j=0; j<pin_length; ++j){
      if(i == j) continue;
      digitalWrite(pin[j], LOW);  
    }
    delay(1000);
  }
}
