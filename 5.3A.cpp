float n1,n2, media;

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    Serial.print("Digite a primeira nota: ");
    n1 = le_numero_quebrado();
    Serial.println(n1);

    Serial.print("Digite a segunda nota: ");
    n2 = le_numero_quebrado();
    Serial.println(n2);

media = (n1+n2)/2;
  Serial.print("Sua media e: ");
  Serial.println(media);

 if(media>7){
     Serial.println("Se a media for maior que sete Juca passou");
     }else {
     Serial.print("Se a media for menor que sete Juca repete de ano");
    
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