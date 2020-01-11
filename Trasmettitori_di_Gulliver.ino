int led = 13;
String input;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  
  //Serial.println("Inserire la frase da inviare");
  while(Serial.available()){
    input = Serial.readString();
    
    Serial.println(input);
    
    delay(2000);
    //digitalWrite(led, HIGH);
  }
  
}
