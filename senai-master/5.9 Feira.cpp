int maca;
float conta;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
    Serial.print ("Digite a quantidade de maca: ");
    maca = le_numero();
    Serial.println(maca);
    if(maca < 12){
        Serial.println("Menos de doze maca sera cobrado 0.30 a unidade");
        conta = maca*0.30;
        Serial.print("O valor total sera: R$ ");
        Serial.println(conta);        
        } else {
          Serial.println("Mais que doze maca sera cobrado 0.25 a unidade");
          conta = maca*0.25;
          Serial.print("O valor total sera: R$ ");
          Serial.println(conta);
        }
}
    
    





int le_numero()
{
String conteudo = "";
char caractere;
int valor;
while(Serial.available() == 0);
// Enquanto receber algo pela serial
while(Serial.available() > 0) {
// Lê byte da serial
caractere = Serial.read();
// Ignora caractere de quebra de linha
if (caractere != '\n'){
// Concatena valores
conteudo.concat(caractere);
}
// Aguarda buffer serial ler próximo caractere
delay(10);
}
valor = conteudo.toInt();
return valor;
}

float le_numero_quebrado()
{
String conteudo = "";
char caractere;
float valor;
while(Serial.available() == 0);
// Enquanto receber algo pela serial
while(Serial.available() > 0) {
// Lê byte da serial
caractere = Serial.read();
// Ignora caractere de quebra de linha
if (caractere != '\n'){
// Concatena valores
conteudo.concat(caractere);
}
// Aguarda buffer serial ler próximo caractere
delay(10);
}
valor = conteudo.toFloat();
return valor;
}