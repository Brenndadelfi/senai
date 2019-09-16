int n1,n2;

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    Serial.print("Digite o n1: ");
    n1 = le_numero();
    Serial.println(n1);

    Serial.print("Digite o n2:");
    n2 = le_numero();
    Serial.println(n2);

    if(n1>n2){

        Serial.println("n1 eh maior que o n2");
    } else if(n1<n2){
        Serial.println("n1 eh menor que o n2");
    } else {
        Serial.println("n1 eh igual ao n2");
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