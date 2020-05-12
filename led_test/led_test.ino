// 핀넘버 셋팅(int)
// 핀넘버의 이름이 내부적으로 정의되어 있다.
int pin = A2;

void setup() {
  // 아두이노의 입출력핀을 초기화
  // 디지털, 아날로그, 센서 연결 => 모두 핀과 연결해서 통신하므로 pinMode를 설정해줘야 한다.
  // pinMode(사용하는 핀 번호, 핀의 용도)
  // 핀의 용도: OUTPUT => output용 핀, INPUT => input용 핀
  // 핀으로 0V나 5V를 보낸다.
  pinMode(pin, OUTPUT);
}

void loop() {
  // 0, 1 두 가지 모드만 필요할 때
  // 디지털핀의 전압을 LOW, HIGH로 설정 => LOW: 0V, HIGH: 5V
  digitalWrite(pin, HIGH);
  delay(1000);
  digitalWrite(pin, LOW);
  delay(1000);
}
