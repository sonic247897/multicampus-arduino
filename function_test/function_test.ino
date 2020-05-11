// 문법: []를 변수 뒤에 줘야하고 size를 반드시 명시해야 한다!
// length() 못 쓰므로 숫자를 써서 정의해야 한다. 
int myarr[2] = {10,10};
// mynumarr배열을 선언하고 10,20,30,40,50의 값을 할당
// int를 리턴하는 sumArray함수를 정의
// sumArray함수는 배열을 매개변수로 받는다.
// 매개변수로 전달된 배열의 합을 리턴하는 함수
// loop에서는 배열을 전달하면서 sumArray호출해서 결과 출력하기

void setup() {
  // 디지털 쓰기, 아날로그 쓰기의 경우에는 시리얼 통신 할 필요 X
  Serial.begin(9600);
  
}

void loop() {
  sum(100,200);
  delay(2000);
  int result = sum2(100,200);
  Serial.print("결과: ");
  Serial.println(result);
  
}

void sum(int num1, int num2){
  int result = num1+num2;
  Serial.println(result);
  // void인 경우에 무조건 return; 해줘야 한다!
  return;
}

int sum2(int num1, int num2){
  int result = num1 + num2;
  return result;
}
