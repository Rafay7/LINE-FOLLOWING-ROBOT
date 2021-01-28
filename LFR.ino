int left_sensor = 2;
int right_sensor = 3;
int left_motorf = 5;
int left_motorb = 6;
int right_motorf = 9;
int right_motorb = 10;


void setup() {
  pinMode(left_sensor, INPUT);
  pinMode(right_sensor, INPUT);
  pinMode(left_motorf, OUTPUT);
  pinMode(left_motorb, OUTPUT);
  pinMode(right_motorf, OUTPUT);
  pinMode(right_motorb, OUTPUT);
}

void loop() 
{
if(digitalRead(left_sensor)<500 && digitalRead(right_sensor)<500)
{
  analogWrite(left_motorf, 150);
  analogWrite(right_motorf, 150);
}
else if(digitalRead(left_sensor)>=500 && digitalRead(right_sensor)<500)
{
  analogWrite(left_motorf, 0);
  analogWrite(right_motorf, 150);
}
else if(digitalRead(left_sensor)<500 && digitalRead(right_sensor)>=500)
{
   analogWrite(left_motorf, 150);
  analogWrite(right_motorf, 0);
}
else if(digitalRead(left_sensor)<=500 && digitalRead(right_sensor)<=500)
{
  analogWrite(left_motorf, 0);
  analogWrite(right_motorf, 0);
}





}
