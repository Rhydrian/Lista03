// QUESTÃO 01


#include <stdio.h> #include <stdlib.h>

int main(){

int x = 10; float y = 5.0;


printf("%d\n", x);
printf("%d%f\n", x, y);
printf("%d %f\n", x, y);
system("pause");

return 0;
}

// QUESTÃO 03

#include <stdio.h> 
int main(){
char nome[50];
printf("Digite o seu nome: ");
scanf("%s", &nome);

printf("%s, boas-vindas ao programa!", nome); 
return 0;
}

// QUESTÃO 04


#include <stdio.h> #include <stdlib.h>


int main(){
char caractere[50]; int valor;

printf("Digite a sua idade em caractere: "); scanf("%s", caractere);

valor = atoi(caractere);
return 0;

}

// QUESTÃO 05


#include <stdio.h> 
int main(){
int num1; float corrige;
printf("Digite um número inteiro: "); scanf("%d", &num1);
corrige = (float)(num1);

printf("O número convertido para decimal é %.2f", corrige); return 0;
}

// QUESTÃO 06


#include <stdio.h> 
int main(){
int a, b, soma;
printf("Digite um número: "); scanf("%d", &a);
printf("Digite um outro número: "); scanf("%d", &b);

soma = a + b;

printf("O resultado da soma: %d", soma);

}

// QUESTÃO 07

#include <stdio.h> 
int main(){
int a, quadrado;

printf("Digite um número: "); scanf("%d", &a);

quadrado = a*a;
printf("O quadrado do número digitado é %d", quadrado); return 0;
}

//QUESTÃO 08

#include <stdio.h> #define year_atual 2024

int main(){

int year_nasc, resultado;

printf("Digite o seu ano de nascimento: "); scanf("%d", &year_nasc);

resultado = 2024 - year_nasc; printf("Sua idade atual é %d", resultado); return 0;
}

// QUESTÃO 09

#include <stdio.h> 
int main(){
char nome[50], sobrenome[50];

printf("Digite o seu nome: "); scanf("%s", &nome);
printf("Digite o seu sobrenome: "); scanf("%s", &sobrenome); printf("%s %s", nome, sobrenome);

return 0;

}


// QUESTÃO 10

#include <stdio.h>

int main() {
    int quantidadeNum = 1;
    
    printf("Digite uma sequência de números separados por espaços: ");

    while (getchar() != '\n') {
        scanf("%*f"); 
        quantidadeNum++;
    }

    printf("Foram digitados %d números.\n", quantidadeNum);

    return 0;
}



// QUESTÃO 11

#include <stdio.h>
 
int main()
{
    char animal[50];
    printf("Digite o nome de um animal qualquer: ");
    gets(animal);
    printf("Nome do animal digitado é: %s", animal);
 
    return 0;
}


// QUESTÃO 12

#include <stdio.h>

int main(){
    char nome[50], sobrenome[50];
    printf("Digite o seu nome: ");
    scanf("%s", &nome);
    printf("Digite o seu sobrenome: ");
    scanf("%s", &sobrenome);
    printf("%s %s", sobrenome, nome);
    return 0;
}

// QUESTÃO 13


#include <stdio.h>
#include <string.h>

int main() {
    char caractere[100];

    printf("Digite uma frase: ");
    fgets(caractere, 100, stdin);
    printf("Quantidade de caracteres contidos na frase (considerando espaços): %d\n", strlen(caractere));
    return 0;
}


//QUESTÃO 14


#include <stdio.h> 
int main(){
int numero;

printf("Digite um número inteiro: "); scanf("%d", &numero);

if (numero % 2 != 0){ printf("O número é ímpar.");
} else {
printf("O número é par.");
}
return 0;

}

//QUESTÃO 15

#include <stdio.h> 
int main(){
int numero;

printf("Digite um número: "); scanf("%d", &numero);

if (numero > 0){
printf("O número digitado é positivo.");
} 
else {
printf("O número digitado é negativo.");
}
return 0;
}

//QUESTÃO 16

#include <stdio.h>

int main(){

	int maior1, maior2;

	printf("Digite um número: ");
	scanf("%d", &maior1);

	printf("Digite um outro número: ");
	scanf("%d", &maior2);

	if (maior1 > maior2) {

	printf("O maior número digitado é %d", maior1);

    	} else {

        printf("O maior número digitado é %d", maior2);

    }
    	return 0;
}

// QUESTÃO 17 

#include <stdio.h>
int main(){
    float peso, altura;
    int IMC;
    printf("Digite o seu peso: ");
    scanf("%f", &peso);
    printf("Digite a sua altura: ");
    scanf("%f", &altura);
   IMC = (peso/(altura*altura));
   printf("O seu peso é %.2f e sua altura é %.2f\n", peso, altura);
   printf("O seu IMC é %d", IMC);
 
    return 0;
}

// QUESTÃO 18 

#include <stdio.h>
#include <string.h>
 
int main(){
    char nome[10];
    printf("Digiteo seu nome: ");
    scanf("%s", nome);
    if (strlen(nome) >= 5){
        printf("O nome digitado possui entre 5 caracteres ou mais.");
    } else {
        printf("O nome digitado possui menos de 5 caracteres.");
    }
 
    return 0;
}


// QUESTÃO 19 

#include <stdio.h>

int main() {
    char estadoCivil;

    printf("Por favor, insira seu estado civil (C - Casado, S - Solteiro: ");
    scanf(" %c", &estadoCivil);

    switch(estadoCivil) {
        case 'C':
        case 'c':
            printf("Você é casado(a).\n");
            break;
        case 'S':
        case 's':
            printf("Você é solteiro(a).\n");
            break;
        default:
            printf("Opção inválida.\n");
    }

    return 0;
}



// QUESTÃO 20 

#include <stdio.h>

int main() {
    float base, altura, area;

    
    printf("Digite a base do retângulo: ");
    scanf("%f", &base);

    
    printf("Digite a altura do retângulo: ");
    scanf("%f", &altura);

    
    area = (base * altura)/2;

    
    printf("A área do retângulo é: %.2f\n", area);

    return 0;
}

// QUESTÃO 21 

#include <stdio.h>
#include <string.h>

int main() {
    char cidade[100];

    printf("Digite o nome da sua cidade: ");
    scanf("%s", cidade); 

    
    if (cidade[0] == 'S' || cidade[0] == 's') {
        printf("O nome da sua cidade começa com 'S'.\n");
    } else {
        printf("O nome da sua cidade não começa com 'S'.\n");
    }

    return 0;
}

// QUESTÃO 22 
#include <stdio.h>

int main() {
    float numero1, numero2, resto;

    printf("Digite o primeiro número decimal: ");
    scanf("%f", &numero1);

    printf("Digite o segundo número decimal: ");
    scanf("%f", &numero2);

    resto = fmod(numero1, numero2);

    printf("O resto da divisão entre %.2f e %.2f é: %.2f\n", numero1, numero2, resto);

    return 0;
}


//QUESTÃO 23 

#include <stdio.h>

int main() {
    float numero1, numero2, resto;

    printf("Digite o primeiro número decimal: ");
    scanf("%f", &numero1);

    printf("Digite o segundo número decimal: ");
    scanf("%f", &numero2);

    resto = fmod(numero1, numero2);

    printf("O resto da divisão entre %.2f e %.2f é: %.2f\n", numero1, numero2, resto);

    return 0;
}

//QUESTÃO 24 

#include <stdio.h>
#include <stdlib.h>

int main() {
    char numeroString[50];
    int numeroInteiro;

    printf("Digite um número inteiro como uma string: ");
    scanf("%s", numeroString);

    numeroInteiro = atoi(numeroString);

    numeroInteiro += 10;

    sprintf(numeroString, "%d", numeroInteiro);

    printf("O número inteiro após somar 10 é: %s\n", numeroString);

    return 0;
}


//QUESTÃO 25 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char data[11];
    int dia, mes, ano;

    printf("Digite a data no formato dd/mm/aaaa: ");
    scanf("%s", data);

    sscanf(data, "%d/%d/%d", &dia, &mes, &ano);

    printf("Dia: %d\n", dia);
    printf("Mês: %d\n", mes);
    printf("Ano: %d\n", ano);

    return 0;
}


//QUESTÃO 26 

#include <stdio.h>
#include <string.h>

int main() {
    char cidade[30];
    char estado[30];

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade);

    printf("Digite o nome do estado: ");
    scanf("%s", estado);

    printf("Você mora em %s, %s.\n", cidade, estado);

    return 0;
}





//QUESTÃO 27 

#include <stdio.h>
#include <string.h>

int main() {
    int ano[4];

    printf("Digite o seu ano de nascimento: ");
    scanf("%s", ano);

    printf("Bem-vindo ao nosso programa, nascido em %s!\n", ano);

    return 0;
}





//QUESTÃO 28

#include <stdio.h>
#include <stdlib.h>

int main(){
int n;//número que o usuario digitar
char p;//palavra que o usuario digitar
printf("Digite um numero do tipo inteiro \n");
scanf("%d", &n);
printf("Digite qualquer palavra \n");
scanf("%c", &p);
printf("agora temos a palavra e número", p, " ", n);
system("pause");
    return 0;
}

//QUESTÃO 29

#include <stdio.h>
#include <stdlib.h>

int main(){
char n;//nome do produto
float p;//preço do produto
printf("Digite um numero do tipo inteiro \n");
scanf("%c, &n");
printf("Digite qualquer palavra \n");
scanf("%f, &p");
printf("O produto é ", p, "\n e o seu preço é  R$", n);
system("pause");
    return 0;
}

//QUESTÃO 30 

#include <stdio.h>
#include <stdlib.h>

int main(){
char n;
float m;
printf("Digite um numero do tipo inteiro \n");
scanf("%d", &n);
printf("Digite qualquer palavra \n");
scanf("&s", &m);
printf("O numero que você digitou é '", n, "' e a mensagem que você quer deixar é '", m);
system("pause");
    return 0;
}

//QUESTÃO 31 

#include <stdio.h>

int main() {
    char email[30];

    printf("Digite seu endereço de e-mail: ");
    scanf("%s", email);

    printf("Obrigado %s! Agradecemos por seu endereço de email.\n", email);

    return 0;
}








//QUESTÃO 32 

#include <stdio.h>

int main() {
    int a, b;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &a);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &b);

    printf("Soma: %d + %d = %d\n", a, b, a+b);

    printf("Diferença: %d - %d = %d\n", a, b, a-b);

    printf("Produto: %d x %d = %d\n", a, b, a*b);

    if (b != 0) {
        printf("Quociente: %d / %d = %d\n", a, b, a/b);
    } else {
        printf("Não é possível dividir por zero.\n");
    }

    return 0;
}

//QUESTÃO 33 


#include <stdio.h>

int main() {
    float base, altura;

    printf("Digite a base do triângulo: ");
    scanf("%f", &base);

    printf("Digite a altura do triângulo: ");
    scanf("%f", &altura);

    float area = (base * altura) / 2;

    printf("A área do triângulo é: %.2f\n", area);

    return 0;
}

//QUESTÃO 34 

#include <stdio.h>

int main() {
    float raio;

    const float pi = 3.14;

    printf("Digite o raio da circunferência: ");
    scanf("%f", &raio);

    float perimetro = 2 * pi * raio;

    printf("O perímetro da circunferência é: %.2f\n", perimetro);

    return 0;
}


//QUESTÃO 35 
#include <stdio.h>

int main() {
    float base, altura;

    printf("Digite a base do retângulo: ");
    scanf("%f", &base);

    printf("Digite a altura do retângulo: ");
    scanf("%f", &altura);

    float perimetro = 2 * (base + altura);

    printf("O perímetro do retângulo é: %.2f\n", perimetro);

    return 0;
}


// QUESTÃO 36 
#include <stdio.h>

int main() {
    float num1, num2, num3;

    printf("Digite o primeiro número decimal: ");
    scanf("%f", &num1);

    printf("Digite o segundo número decimal: ");
    scanf("%f", &num2);

    printf("Digite o terceiro número decimal: ");
    scanf("%f", &num3);

    float media = (num1 + num2 + num3) / 3;

    printf("A média aritmética dos três números é: %.2f\n", media);

    return 0;
}



// QUESTÃO 37 

#include <stdio.h>

int main() {
    int idade;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    int mesesVividos = idade * 12;
    int diasVividos = idade * 365;

    printf("Você viveu aproximadamente %d meses e %d dias.\n", mesesVividos, diasVividos);

    return 0;
}


// QUESTÃO 38 

#include <stdio.h>

int main() {
    float valorEmReais, cotacaoDolar;

    printf("Digite o valor em reais: ");
    scanf("%f", &valorEmReais);

    printf("Digite a cotação do dólar: ");
    scanf("%f", &cotacaoDolar);

    float valorEmDolares = valorEmReais / cotacaoDolar;

    printf("O valor em dólares é: %.2f\n", valorEmDolares);

    return 0;
}


// QUESTÃO 39 
#include <stdio.h>

int main() {
    float numeroDecimal;

    printf("Digite um número decimal: ");
    scanf("%f", &numeroDecimal);

    int numeroInteiro;

    if (numeroDecimal >= 0) {
        numeroInteiro = (int)(numeroDecimal + 0.5);
    } else {
        numeroInteiro = (int)(numeroDecimal - 0.5);
    }

    printf("O número arredondado para o inteiro mais próximo é: %d\n", numeroInteiro);

    return 0;
}


// QUESTÃO 40 

#include <stdio.h>

int main() {
    int n1, n2, n3;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &n1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &n2);

    printf("Digite o terceiro número inteiro: ");
    scanf("%d", &n3);

    int resultado = (n1 + n2) * n3;
    printf("O resultado da operação (%d + %d) * %d é: %d\n", n1, n2, n3, resultado);

    return 0;
}


// QUESTÃO 41
#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("%.2f graus Celsius equivalem a %.2f graus Fahrenheit.\n", celsius, fahrenheit);

    return 0;
}