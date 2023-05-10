const int LEDSLASH = 8; //Led representando al punto
const int LEDPOINT = 7; //Led representando a la barra
int point = 500; //Retraso del punto
int slash = 900; //Retraso de la barra

void setup()
{
  pinMode(LEDPOINT, OUTPUT);
  pinMode(LEDSLASH, OUTPUT);
}

void loop()
{
  digitalWrite(LEDPOINT, HIGH);
  delay(point);
  digitalWrite(LEDPOINT, LOW);
  delay(point); 
  digitalWrite(LEDPOINT, HIGH);
  delay(point);
  digitalWrite(LEDPOINT, LOW);
  delay(point); 
  digitalWrite(LEDPOINT, HIGH);
  delay(point);
  digitalWrite(LEDPOINT, LOW);
  delay(point); 
  digitalWrite(LEDSLASH, HIGH);
  delay(slash); 
  digitalWrite(LEDSLASH, LOW);
  delay(slash); 
  digitalWrite(LEDSLASH, HIGH);
  delay(slash); 
  digitalWrite(LEDSLASH, LOW);
  delay(slash); 
  digitalWrite(LEDSLASH, HIGH);
  delay(slash); 
  digitalWrite(LEDSLASH, LOW);
  delay(slash); 
  digitalWrite(LEDPOINT, HIGH);
  delay(point);
  digitalWrite(LEDPOINT, LOW);
  delay(point); 
  digitalWrite(LEDSLASH, HIGH);
  delay(slash); 
  digitalWrite(LEDSLASH, LOW);
  delay(slash); 
  digitalWrite(LEDPOINT, HIGH);
  delay(point);
  digitalWrite(LEDPOINT, LOW);
  delay(point); 
  digitalWrite(LEDPOINT, HIGH);
  delay(point);
  digitalWrite(LEDPOINT, LOW);
  delay(point); 
  digitalWrite(LEDPOINT, HIGH);
  delay(point);
  digitalWrite(LEDPOINT, LOW);
  delay(point);
  digitalWrite(LEDSLASH, HIGH);
  delay(slash); 
  digitalWrite(LEDSLASH, LOW);
  delay(slash); 
  digitalWrite(LEDSLASH, HIGH);
  delay(slash); 
  digitalWrite(LEDSLASH, LOW);
  delay(slash); 
  digitalWrite(LEDSLASH, HIGH);
  delay(slash); 
  digitalWrite(LEDSLASH, LOW);
  delay(slash); 
  digitalWrite(LEDPOINT, HIGH);
  delay(point);
  digitalWrite(LEDPOINT, LOW);
  delay(point);
  digitalWrite(LEDPOINT, HIGH);
  delay(point);
  digitalWrite(LEDPOINT, LOW);
  delay(point);
  digitalWrite(LEDSLASH, HIGH);
  delay(slash); 
  digitalWrite(LEDSLASH, LOW);
  delay(slash); 
  digitalWrite(LEDSLASH, HIGH);
  delay(slash); 
  digitalWrite(LEDSLASH, LOW);
  delay(slash); 
  digitalWrite(LEDPOINT, HIGH);
  delay(point);
  digitalWrite(LEDPOINT, LOW);
  delay(point);
   digitalWrite(LEDSLASH, HIGH);
  delay(slash); 
  digitalWrite(LEDSLASH, LOW);
  delay(slash);
  digitalWrite(LEDPOINT, HIGH);
  delay(point);
  digitalWrite(LEDPOINT, LOW);
  delay(point);
  digitalWrite(LEDPOINT, HIGH);
  delay(point);
  digitalWrite(LEDPOINT, LOW);
  delay(point);
  digitalWrite(LEDSLASH, HIGH);
  delay(slash); 
  digitalWrite(LEDSLASH, LOW);
  delay(slash); 
  digitalWrite(LEDSLASH, HIGH);
  delay(slash); 
  digitalWrite(LEDSLASH, LOW);
  delay(slash); 
  digitalWrite(LEDSLASH, HIGH);
  delay(slash); 
  digitalWrite(LEDSLASH, LOW);
  delay(1500); 
}