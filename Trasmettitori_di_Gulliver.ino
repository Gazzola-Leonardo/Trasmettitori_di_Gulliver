int led = 13;
String input;

char Caratteri[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '•', ',', ':', '?', '=', '-', '(', ')', '"', '/', '@', '!'};
char* Codice[] = { ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", "-----", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----.", ".-.-.-", "--..--", "---...", "..--..", "-...-", "-....-", "-.--.", "-.--.-", ".-..-.", "-..-.", ".--.-.", "-.-.--" };


int tPunto = 500;
int tTrattino = 1000;
int stacco = 300;
int fineCarattere = 2000;
int posPunto = 36;
int posSpazio = 40;

typedef struct nodo{
  char lettera;
  struct nodo* succ;
}Frase;
 
Frase* frase = NULL;

Frase* aggiungiNodo(Frase* a, char s);
Frase* clearLista(Frase* app);
void stampaLista(Frase* app);


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {
    
  Serial.println("Inserire la frase");
  input = Serial.readString(); 
  while(input.length() == 0){
    input = Serial.readString(); 
    delay(500); 
  }
  Serial.print("Frase inserita: ");
  Serial.println(input);
  
  Serial.println("Invio...");
  input.toUpperCase();
  int lung = input.length();
  char app;
  
  for(int i = 0; i < lung - 1; i++){
    app = input[i];
    
    frase = aggiungiNodo(frase, app);

    if(app == " "){
      codiceLetteraLuce(posSpazio);
    }
    else{
      for(int j = 0; j < 47; j++){        
        if(app == Caratteri[j]){
          codiceLetteraLuce(j);
          break;
        }
      }
    }
  }
  if(app != "."){
    codiceLetteraLuce(posPunto);
  }
  
  input = "";

  stampaLista(frase);
  frase = clearLista(frase);
  delay(6000);
  Serial.println();
  Serial.println("------------");
  
}

void codiceLetteraLuce(int pos){
  
  String cod = Codice[pos];
  
  for(int i = 0; i < cod.length(); i++){
    
    char s = cod[i];
    
    if(s == '.'){
      digitalWrite(led, HIGH);  
      delay(tPunto);
    }
    else if(s == '-'){
      digitalWrite(led, HIGH);  
      delay(tTrattino);
    }
    digitalWrite(led, LOW);
    delay(stacco);
  }
  
  digitalWrite(led, HIGH);
  delay(fineCarattere);
  digitalWrite(led, LOW);

}

Frase* aggiungiNodo(Frase* a, char s)
{
  if (a == NULL)
  {
    Frase* n = (Frase *)malloc(sizeof(Frase));
    n->lettera = s;
    n->succ = NULL;
    return n;
  }else{
    a->succ = aggiungiNodo(a->succ, s);
  }
  return a;
}

void stampaLista(Frase* app){
  if(app != NULL){
    Serial.print(app->lettera);
    stampaLista(app->succ);
  }
}

Frase* clearLista(Frase* app){
  if(app->succ != NULL){
    app->succ = clearLista(app->succ);
  }
  return NULL;
}
