#define LED 8

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  //Pin Setup
  pinMode(LED, OUTPUT);
  digitalWrite(LED, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  
}
