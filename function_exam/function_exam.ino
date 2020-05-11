int mynumarr[5] = {10,20,30,40,50};
int mynumarr_length = sizeof(mynumarr)/sizeof(int);

void setup() {
  Serial.begin(9600);
}

void loop() {
  int result = sumArray(mynumarr);
  Serial.print("결과: ");
  Serial.println(result);
  delay(2000);
  
}

// int arr[5]라고 넣어도 됨
int sumArray(int arr[]){
  int sum=0;
  for(int i=0; i<mynumarr_length; ++i){
    sum += arr[i];
  }
  return sum;
}
