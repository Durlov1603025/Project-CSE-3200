bool y = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()){
    bool x = Serial.read();
    Serial.println(x);
    tone(6,700,1000);
  }

}
