int n1,n2;

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    Serial.print("Digite a pontuacao: ");
    n1 = le_numero();
    Serial.println(n1);

    if(n1 <=10){
        Serial.println("Deu ruim");
    } else if(n1>10 && n1 <=100){
        Serial.println("Ta, vai em frente");

    } else if(n1>100 && n1<=200){
        Serial.println("Supimpa!");
    
    }else {
        Serial.println("Mitou!");
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