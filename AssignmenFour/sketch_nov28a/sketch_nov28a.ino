

// C++ code
//
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(A0, INPUT);
  pinMode(2, INPUT);
  pinMode(A1, INPUT);
  Serial.begin(9600);
  
}



void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
 

  if(analogRead(A0) > 600)
  {
    digitalWrite(2, HIGH);
  }
  if(analogRead(A1) > 600)
  {
    digitalWrite(2, HIGH);
  }

  Serial.println(analogRead(A0));
  
  digitalWrite(2,LOW);
  

 
}