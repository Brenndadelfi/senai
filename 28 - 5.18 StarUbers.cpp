double distancia; //entrada
double tempo_viagem; //saida
long velocidade_da_luz = 300000;

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    Serial.print("Digite a distancia da proxima corrida: ");
    distancia = le_numero_quebrado();
    Serial.println(distancia);
    tempo_viagem = distancia / velocidade_da_luz;
    Serial.print("O tempo da viagem em segundos sera: ");
    Serial.println(tempo_viagem);



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