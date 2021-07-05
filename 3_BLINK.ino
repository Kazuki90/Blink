
OUTPUT(){
  int led_Pin=14;
  int led_Pin2=15;
  int led_Pin3=16;
}

void setup() {
  
  pinMode(led_Pin, OUTPUT);
  pinMode(led_Pin2, OUTPUT);
  pinMode(led_Pin3, OUTPUT);
}

void loop() {
  digitalWrite(led_Pin, HIGH);
  delay(1000);
  digitalWrite(led_Pin2, HIGH);
  delay(1000);
  digitalWrite(led_Pin3, HIGH);
  delay(1000);

  digitalWrite(led_Pin, LOW);
  digitalWrite(led_Pin2, LOW);
  digitalWrite(led_Pin3, LOW);
  delay(1000);
}
