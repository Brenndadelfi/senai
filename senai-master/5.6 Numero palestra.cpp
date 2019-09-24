int palestra;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
    Serial.print ("Digite o numero da palestra: ");
    palestra = le_numero();
    Serial.println(palestra);

    if(palestra >= 1 && palestra <= 5){

    
        if(palestra == 1){
            Serial.println("Laboratorio 305, 19h");
            } else if (palestra ==2){
            Serial.println("Laboratorio 512, 20h");
            } else if (palestra ==3){
            Serial.println("Laboratorio 101, 19h");
            } else if (palestra ==4){
            Serial.println("Laboratorio 305, 20h");
            } else if (palestra == 5){
            Serial.println("Auditorio, 21h");
            }
        
    }else{
        Serial.println("Erro! voce digitou o numero da palestra inexistente");
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