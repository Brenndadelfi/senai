int idade;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
    Serial.print ("Digite a idade para votacao: ");
    idade = le_numero();
    Serial.println(idade);
   

    

    
        if(idade < 16){
        Serial.println("Idade nao eh permitido votar");
        }else if (idade >= 16 && idade <= 17){
        Serial.println("Voto facultativo");
        }else if (idade >= 18 && idade <= 65){
        Serial.println("Voto obrigatorio");
        }else if(idade > 65){
        Serial.println("Voto facultativo");
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