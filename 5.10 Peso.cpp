int genero;
float altura,conta;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
    Serial.print ("Digite a altura: ");
    altura = le_numero_quebrado();
    Serial.println(altura);

    Serial.println ("Qual seu genero? Digite 1 para feminino e 2 para masculino: ");

    genero = le_numero();
    if(genero == 1){
        
        conta = (62.1*altura) - 44.7;
        Serial.print("Peso ideal sera:");
        Serial.println(conta);
    }

    else if (genero == 2){
        conta = (72.7*altura) - 58;
        Serial.print("Peso ideal sera:");
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