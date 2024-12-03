#define MLa 6 //left motor 1st pin
#define MLb 9 //left motor 2nd pin
#define MRa 10 //right motor 1st pin
#define MRb 11 //right motor 2nd pin

#define L_sensor 3
#define R_sensor 4

void setup() {
  pinMode(MLa, OUTPUT);
  pinMode(MLb, OUTPUT);
  pinMode(MRa, OUTPUT);
  pinMode(MRb, OUTPUT);
  pinMode(L_sensor, INPUT);
  pinMode(R_sensor, INPUT);
  Serial.begin(9600);
}
void loop() {
  if((digitalRead(L_sensor) == LOW) && (digitalRead(R_sensor) == LOW)){
    Serial.println("Left and Right sensors are detecting");
    digitalWrite(MLa, HIGH);
    digitalWrite(MLb, LOW);
    digitalWrite(MRa, HIGH);
    digitalWrite(MRb, LOW);
  }
  else if((digitalRead(L_sensor) == LOW) && (digitalRead(R_sensor) == HIGH)){
    Serial.println("Left detecting");
    digitalWrite(MLa, LOW);
    digitalWrite(MLb, LOW);
    digitalWrite(MRa, HIGH);
    digitalWrite(MRb, LOW);
  }
  else if((digitalRead(L_sensor) == HIGH) && (digitalRead(R_sensor) == LOW)){
    Serial.println("Right detecting");
    digitalWrite(MLa, HIGH);
    digitalWrite(MLb, LOW);
    digitalWrite(MRa, LOW);
    digitalWrite(MRb, LOW);
  }
  else{
    digitalWrite(MLa, LOW);
    digitalWrite(MLb, LOW);
    digitalWrite(MRa, LOW);
    digitalWrite(MRb, LOW);
  }
}
