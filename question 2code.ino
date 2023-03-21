// C++ code
int distanceThreshold = 0;
int cm = 0;
int inches = 0;
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);

}

void loop()
{
  digitalWrite(13, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(13, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
 
  digitalWrite(12, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(12, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
 
  digitalWrite(11, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(11, LOW);
  delay(1000); // Wait for 1000 millisecond(s
 
 
   if(cm>distanceThreshold){
    digitalWrite(13, LOW);
       digitalWrite(12, LOW);
       digitalWrite(11, LOW);
}
  if(cm>distanceThreshold && cm >distanceThreshold -100){
    digitalWrite(13, HIGH);
       digitalWrite(12, LOW);
       digitalWrite(11, LOW);

}
    if(cm>distanceThreshold -250 && cm >distanceThreshold-350){
   digitalWrite(13, HIGH);
       digitalWrite(12, HIGH);
       digitalWrite(11, LOW);
    }
        if(cm>distanceThreshold -350 && cm >distanceThreshold-450){
   digitalWrite(13, HIGH);
       digitalWrite(12, HIGH );
       digitalWrite(13, HIGH);
        }
     if(cm>distanceThreshold -200){
   digitalWrite(13, HIGH);
       digitalWrite(12, HIGH);
       digitalWrite(11, HIGH);
     }
        delay(300);
}