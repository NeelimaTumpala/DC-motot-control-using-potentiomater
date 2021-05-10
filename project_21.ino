void setup() {
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  Serial.begin(9600);
   // put your setup code here, to run once:

}

void loop() {
  int a=analogRead(A0);
  int val=map(a,0,1023,0,255);
  Serial.print(val);
  Serial.print(",");
  Serial.println(val);
  analogWrite(10,val);
  digitalWrite(9,0);
  // put your main code here, to run repeatedly:

}
