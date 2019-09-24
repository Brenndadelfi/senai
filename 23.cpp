int menu;

void setup() {
    Serial.begin(9600);
}

void loop() {
    Serial.println("Escolha uma opcao:");
    Serial.println("opcao 1: Cadastrar produto;");
    Serial.println("opcao 2: Visualizar produto;");
    Serial.println("opcao 3: Cadastrar funcionario;");
    Serial.println("opcao 4: visualizar funcionario;");

    menu = le_numero();

    if (menu == 1){
        cadastrar_produto();
    } else if (menu == 2) {
        visualizar_produto();
    } else if (menu == 3) {
        cadastrar_funcionario();
    } else if (menu == 4) {
        visualizar_funcionario();
    }
    
}

String modeloProduto;
String fabricante;
String numeroDeSerie;
String nomeFuncionario;
int matricula;
int estoque;
int quantidadeMinima;

void cadastrar_produto(){
    Serial.print("Digite o modelo do produto: ");
    modeloProduto = le_nome();
    Serial.println(modeloProduto);
    Serial.print("Digite o fabricante do produto: ");
    fabricante = le_nome();
    Serial.println(fabricante);
    Serial.print("Digite o numero de serie do produto: ");
    numeroDeSerie = le_nome();
    Serial.println(numeroDeSerie);
    Serial.print("Digite a quantidade em estoque: ");
    estoque = le_numero();
    Serial.println(estoque);
    Serial.print("Digite a quantidade minima: ");
    quantidadeMinima = le_numero();
    Serial.println(quantidadeMinima);


}

void visualizar_produto(){
    Serial.print("Modelo: ");
    Serial.println(modeloProduto);
    Serial.print("Fabricante: ");
    Serial.println(fabricante);
    Serial.print("Numero de serie: ");
    Serial.println(numeroDeSerie);
    Serial.print("Estoque: ");
    Serial.println(estoque);
    if (estoque <= quantidadeMinima) {
        Serial.println("Estoque abaixo do esperado");
    } else {
        Serial.println("Estoque normal");
    }

}

void cadastrar_funcionario(){
    Serial.print("Digite o nome do funcionario:");
    nomeFuncionario = le_nome();
    Serial.println(nomeFuncionario);
    Serial.print("Digite a matricula: ");
    matricula = le_numero();
    Serial.println(matricula);

}

void visualizar_funcionario(){
    Serial.print("Nome do funcionario: ");
    Serial.println(nomeFuncionario);
    Serial.print("Matricula: ");
    Serial.println(matricula);

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