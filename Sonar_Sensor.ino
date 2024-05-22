int TrigerPin = 7; 
int EchoPin   = 4;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  //Define PinMode

  //Define TrigerPin as OUTPUT
  pinMode(TrigerPin,OUTPUT);
  //Define EchoPin as INPUT
  pinMode(EchoPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(TrigerPin,LOW);
  digitalWrite(TrigerPin,HIGH);
  // Stop for 1 sec
  delay(1000);
  digitalWrite(TrigerPin,LOW);
  //Formula For Calculation Distances
  Duration = pulsIn(EchoPin,HIGH);
  Direction = Duration* 0.034 / 2;
  //Print Distances
  Serial.print("Direction: ");
  Serial.print(Direction);
  Serial.print("cm");
  delay(1000);

}
