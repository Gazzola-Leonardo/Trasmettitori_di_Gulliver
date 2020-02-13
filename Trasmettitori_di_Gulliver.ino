int led = 13;
String input;

char Caratteri[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '•', ',', ':', '?', '=', '-', '(', ')', '"', '/', '@', '!'};
char Codice[] = {'• —', '— • • •', '— • — •', '— • •', '•', '• • — •', '— — •', '• • • •', '• •', '• — — —', '— • —', '• — • •', '— —', '— •', '— — —', '• — — •', '— — • —', '• — •', '• • •', '—', '• • —', '• • • —', '• — —', '— • • —', '— • — —', '— — • •', '— — — — —', '• — — — —', '• • — — —', '• • • — —', '• • • • —', '• • • • •', '— • • • •', '— — • • •', '— — — • •', '— — — — •', '• — • — • —', '— — • • — —', '— — — • • •', '• • — — • •', '— • • • —', '— • • • • —', '— • — — •', '— • — — • —', '• — • • — •', '— • • — •', '• — — • — •', '— • — • — —'};

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


    
  //Serial.println("Inserire la frase da inviare");
  while(Serial.available()){
    input = Serial.readString();
      
    Serial.println(input);
    
    delay(2000);
    //digitalWrite(led, HIGH);
  }

  int lung = input.length();
  
  for(int i, i < lung, i++){
    
  }
  
  
}
