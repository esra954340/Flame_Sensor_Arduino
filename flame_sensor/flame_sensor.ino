int Photoresistor= A0; //connect to analog pin A0
int Output;
int Green_Led = 3;
int Red_Led = 2;
int Buzzer = 4;

void setup(){
  Serial.begin(9600); // Communication speed
  pinMode(Green_Led, OUTPUT);
  pinMode(Red_Led, OUTPUT);
  pinMode(Buzzer, OUTPUT);
}

void loop(){
  Output = analogRead(Photoresistor); 
  Serial.println(Output);
  if (Output>800)  {
  digitalWrite(Red_Led, LOW);
  digitalWrite(Buzzer, LOW);
  digitalWrite(Green_Led, HIGH);
  }
  else {
  digitalWrite(Red_Led, HIGH);
  digitalWrite(Buzzer, HIGH);
  delay(1000);
  digitalWrite(Red_Led, LOW);
  digitalWrite(Buzzer, LOW);
  digitalWrite(Green_Led, LOW);
  }
  delay(50); // Slow down the output for easier reading
}

