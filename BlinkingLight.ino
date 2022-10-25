//https://wokwi.com/projects/345892676363616851

void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(A0, INPUT);

  Serial.begin(9600);
}

void loop() {
  int meterStatus(analogRead(A0));
  if (meterStatus < 100) {
    meterStatus = 100;
  }

  digitalWrite(13, LOW);
  delay(meterStatus * .9);
  digitalWrite(13, HIGH);
  delay(meterStatus * .9);

  Serial.println(meterStatus);
}
