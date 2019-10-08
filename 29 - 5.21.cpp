float peso, imc, altura;

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    Serial.print("Digite seu peso: ");
    peso = le_numero_quebrado();
    Serial.println(peso);

    Serial.print("Digite sua altura: ");
    altura = le_numero_quebrado();
    Serial.println(altura);
    imc = peso / (altura * altura); 
    Serial.print("Seu IMC eh:");
    Serial.println(imc);

if(imc <= 25.0){
    Serial.print("Seu peso esta normal!");
}
else{
    Serial.println("Voce esta acima do peso!");
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