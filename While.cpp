#define btn1 2
#define btn2 3
#define btn3 4
#define led 5
#define saida digitalWrite  
#define entra digitalRead
int contador = 1;
int buttonState = 0;

void setup()
{
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, OUTPUT);
}

void loop()
{
  if(entra(btn1)==1){
    while(contador <= 10){
      
    saida(led, 1);
    delay(1000);
    saida(led, 0);
    delay(1000);
    contador = contador + 1;
    }
  }
  if(entra(btn2)==1){
    while(contador <= 30){
    saida(led, 1);
    delay(1000);
    saida(led, 0);
    delay(1000);
    contador = contador + 1;
    }
  }
   if(entra(btn3)==1){
       contador = 5;
    while(contador >= 0){
    saida(led, 1);
    delay(1000);
    saida(led, 0);
    delay(1000);
    contador = contador - 1;

    }
   }         
    
}