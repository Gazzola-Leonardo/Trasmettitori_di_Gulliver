int led = 13;
String input;

char Caratteri[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '•', ',', ':', '?', '=', '-', '(', ')', '"', '/', '@', '!'};
char Codice[5];

int tPunto = 500;
int tTrattino = 1000;
int stacco = 300;
int fineCarattere = 2000;
int posPunto = 36;
int posSpazio = 40;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  Codice[2] = "...--";
  Serial.println("scrivi");
  input = Serial.readString(); 
  while(input.length() == 0){
    input = Serial.readString(); 
    delay(500); 
  }
    
  //Serial.println("Inserire la frase da inviare");
  /*while(Serial.available()){
    
    Serial.println("scrivi");
    while(input.length() == 0){
      input = Serial.readString();  
    }
      
    Serial.println(input);
    
    delay(2000);
    //digitalWrite(led, HIGH);
  }*/
  
  Serial.println("Uscito");

  int lung = input.length();
  Serial.println(input);

  //char message[] = input;
  //char charBuf[50];
  //input.toCharArray(charBuf, 50);

  
  //Serial.println(charBuf[0]);
  //Serial.println(charBuf[1]);
  //Serial.println(lung);
  
  char app;
  
  for(int i = 0; i < lung - 1; i++){
    app = input[i];
    Serial.println("Appoggio: ");
    Serial.println(app);

    if(app == " "){
      codiceLetteraLuce(posSpazio);
    }
    else{
      for(int j = 0; j < 47; j++){
        Serial.println(Caratteri[j]);
        Serial.println(app);
        
        if(app == Caratteri[j]){
          codiceLetteraLuce(j);
          Serial.println("Trovato");
          break;
        }
      }
    }
  }
  if(app != "."){
    codiceLetteraLuce(posPunto);
  }
  
  input = "";
  
  
}

void codiceLetteraLuce(int pos){
  
  Serial.println(pos, DEC);
  char cod = Codice[2];

  Serial.println(cod);
  Serial.println(cod);

  
  digitalWrite(led, HIGH);  
  delay(1000);
  digitalWrite(led, LOW);  
  
/*
  for(int i = 0; i < cod.length(); i++){
    Serial.println(cod[i]);
    if(cod[i] == "."){
      digitalWrite(led, HIGH);  
      delay(tPunto);
    }
    else if(cod[i] == "-"){
      digitalWrite(led, HIGH);  
      delay(tTrattino);
    }
    digitalWrite(led, LOW);
    delay(stacco);
  }
  delay(fineCarattere);
*/
  
}
