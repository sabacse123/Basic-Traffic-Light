void setup()
{
  Serial.begin(9600);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop()
{
  digitalWrite(4, HIGH); // For Green LED
  Serial.println("Now Green light is on!");
  delay(3000); // Wait for 3 second
  digitalWrite(4, LOW);
 

  
  digitalWrite(3, HIGH); // For Yellow LED
  Serial.println("Now Yellow light is on!");
  delay(1000);  // Wait for 1 second
  digitalWrite(3, LOW);
  
  
  
  digitalWrite(2, HIGH);  // For the Red LED
  Serial.println("Now Red light is on!"); 
  delay(3000); // Wait for 3 second
  digitalWrite(2, LOW);
}
