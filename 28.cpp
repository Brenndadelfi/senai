float salario, salario_atual; //entrada
float imposto_atual, imposto_PG;  //saida

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    Serial.print("Seu salario: R$ ");
    salario = le_numero_quebrado();
    Serial.println(salario);

    calcula_imposto_atual();
    calcula_imposto_PG();

}

void calcula_imposto_atual()
{
    if(salario < 1903.99){
    Serial.println("Na regra atual, voce esta isento! ");
    }
    if(salario >= 1903.99 && salario <= 2826.65){
        imposto_atual = salario * 0.075; //7.5/100; //7.5%
        Serial.print("Na regra atual, voce paga R$");
        Serial.println(imposto_atual);
        salario_atual = salario - imposto_atual;
        Serial.print("Seu salario liquido sera: R$");
        Serial.println(salario_atual); 
    }
    if(salario >= 2826.66 && salario <= 3751.05){
        imposto_atual = salario * 0.15;
        Serial.print("Na regra atual, voce paga R$");
        Serial.println(imposto_atual);
        salario_atual = salario - imposto_atual;
        Serial.print("Seu salario liquido sera: R$");
        Serial.println(salario_atual); 
    }
    
    if(salario >= 3751.06 && salario <= 4664.68){
        imposto_atual = salario * 0.225;
        Serial.print("Na regra atual, voce paga R$");
        Serial.println(imposto_atual);
        salario_atual = salario - imposto_atual;
        Serial.print("Seu salario liquido sera: R$");
        Serial.println(salario_atual);        

    }
    if(salario > 4664.68){
        imposto_atual = salario * 0.275;
        Serial.print("Na regra atual, voce paga R$");
        Serial.println(imposto_atual);
        salario_atual = salario - imposto_atual;
        Serial.print("Seu salario liquido sera: R$");
        Serial.println(salario_atual);  
    }
}

void calcula_imposto_PG()
{
    //5988
    if(salario <= 5998)
    {
    //isento
    Serial.println("Pela regra do PG, voce esta isento!");

    }else
    {
        //paga 20%
        imposto_PG = salario * 0.2;
            Serial.print("Pela regra do PG, voce pagara R$ ");
            Serial.println(imposto_PG);
            salario_atual = salario - imposto_PG;
            Serial.print("Seu salario liquido sera: R$");
            Serial.println(salario_atual);
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