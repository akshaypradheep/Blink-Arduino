int led =13;
const int onTime = 1000;
const int offTime = 1000;
void setup() {
 pinMode(led,OUTPUT); 

}

void loop() {
  digitalWrite(led,HIGH);
  delay(onTime);
  digitalWrite(led,LOW);
  delay(offTime);
  }
