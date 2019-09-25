int menu;

void setup() {
    Serial.begin(9600);
}

void loop() {
    angulo();
    
}
void angulo(){
 int a1,a2,a3;  

    Serial.print("Digite o angulo 1: ");
    a1 = le_numero();
    Serial.println(a1);

    Serial.print("Digite o angulo 2: ");
    a2 = le_numero();
    Serial.println(a2);

    Serial.print("Digite o angulo 3: ");
    a3 = le_numero();
    Serial.println(a3);

    if(a1 == 90 | a2 == 90 | a3 == 90){
       Serial.println("Triangulo retangulo");

    }else if(a1>90 | a2>90 | a3>90){
        Serial.print("Triangulo obtusangulo");

    }else if(a1<90 && a2<90 && a3<90){
        Serial.print("Triangulo acutangulo");

    }
    
}

void triangulo(){
    int l1,l2,l3;

    Serial.print("Digite o lado 1: ");
    l1 = le_numero();
    Serial.println(l1);

    Serial.print("Digite o lado 2: ");
    l2 = le_numero();
    Serial.println(l2);

    Serial.print("Digite o lado 3: ");
    l3 = le_numero();
    Serial.println(l3);

    if(l1 == l2 && l3 == l1 && l2 == l3){
        Serial.println("Triangulo equilatero");

    }else if(l1 == l2 | l3 == l1 | l2 == l3){
        Serial.println("Triangulo isoceles");

    }else{
        Serial.println("Triangulo escaleno");  
    }




}
void valores(){
    int v1,v2,v3;

    Serial.print("Digite o valor 1: ");
    v1 = le_numero();
    Serial.println(v1);

    Serial.print("Digite o valor 2: ");
    v2 = le_numero();
    Serial.println(v2);

    Serial.print("Digite o valor 3: ");
    v3 = le_numero();
    Serial.println(v3);

    if(v1>v2 && v1 > v3){//Se o valor 1 for maior
        Serial.print("numero 1 eh maior que todos");  
        Serial.println(v1);       

    }else if(v2>v1 && v2 > v3){//Se o valor 1 for maior
        Serial.print("numero 2 eh maior que todos");
        Serial.println(v2);         

    }else if(v3>v2 && v3 > v1){//Se o valor 1 for maior
        Serial.print("numero 3 eh maior que todos"); 
        Serial.println(v3);       

    }

}
void Poligono(){
    int medida,lado;
    float area;
    Serial.println("Quantos lados tem o poligono?");
    lado = le_numero();
    if(lado < 3){
        Serial.println("Nao eh um poligono");

    }else if (lado > 5){
        Serial.println("Poligono nao identificado");
    } else{    
        Serial.println("Digite a medida: ");
        medida = le_numero();
    
        if(lado == 3){
            Serial.println("triangulo");
            area = ((lado*lado)*sqrt(3))/4;
            Serial.print("A area do triangulo vale: ");
            Serial.println(area);
            
        }else if(lado == 4){
            Serial.println("quadrado");
            area = lado*lado;
            Serial.print("A area do quadrado vale: ");
            Serial.println(area);
        }else if(lado == 5){
            Serial.println("pentagono");
            
        }
    }

        
}





/**
 * Função que lê uma string da Serial
 * e retorna-a
 */
String le_nome(){
  String conteudo = "";
  char caractere;
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
  return conteudo;
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