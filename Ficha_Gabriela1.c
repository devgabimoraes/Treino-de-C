// QUESTÃO 1
#include <stdio.h>
int main(void) {
    int num1;
    int num2;

    printf("Introduza o primeiro número: ");
    scanf("%d", &num1);

    printf("Introduza o segundo número: ");
    scanf("%d", &num2);

    printf("\n====== CALCULADORA DE SOMA =======\n");

    int soma= num1 + num2;
    printf("A soma de %d + %d é: %d \n", num1, num2, soma);
    return 0;
}

// QUESTÃO 2
#include <stdio.h>
int main(void) {
    int num1;
    int num2;

    printf("Introduza o primeiro número: ");
    scanf("%d", &num1);
    printf("Introduza o segundo número: ");
    scanf("%d", &num2);

    printf("\n====== CALCULADORA =======\n");

    int soma = num1+num2;
    int sub = num1-num2;
    int mult = num1*num2;
    float div = (float)num1/num2;

    printf("A partir dos números %d e %d: \n", num1, num2);
    printf("Soma: %d \n", soma);
    printf("Subtração: %d \n", sub);
    printf("Multiplicação: %d \n", mult);
    printf("Divisão: %.2f \n", div);

    return 0;
}

//Questão 3:
#include<stdio.h>
int main(void) {
    float base;
    float altura;

    printf("\n»»»»»» CALCULADORA DE ÁREAS «««««««\n");
    printf("Digite o tamanho da base do retângulo (m): \n");
    scanf("%f", &base);
    printf("Digite a altura do retãngulo (m): \n");
    scanf("%f", &altura);
        
    float area=base*altura;
    printf("Um retângulo com base %.2f e altura %.2f tem uma área de: %.2f m2", base, altura, area);
    return 0;
}

//Questão 4:
#include<stdio.h>
int main(void) {
    float celsius;

    printf("\n»»»»» CONVERSOR DE TEMPERATURAS «««««\n");
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);

    float fahren = (celsius*9/5)+32;
    printf("%.2f ℃ correspondem a temperatura de %.2f ℉", celsius, fahren);

    return 0;
}

//Questão 5:
#include<stdio.h>
int main(void) {
    float km;

    printf("\n»»»»» CONVERSOR DE DISTÂNCIAS «««««\n");
    printf("Digite uma distância em km: ");
    scanf("%f", &km);

    float metro= km*1000;
    float centimetro = km*100000;

    printf("%.2f Km correspondem a %.2d metros e %.2d centímetros!", km, metro, centimetro);

    return 0;
}

//Questão 6:
#include<stdio.h>
int main(void) {
    float precoSIva;

    printf("\n»»»»» CONVERSOR DE IVA «««««\n");
    printf("Digite um preço sem IVA (€): ");
    scanf("%f", &precoSIva);

    float iva=(precoSIva*23)/100;
    float precoFinal=precoSIva+iva;

    printf("Preço sem IVA: %.2f €\n", precoSIva);
    printf("Valor do IVA: %.2f €\n", iva);
    printf("Preço Final: %.2f €\n", precoFinal);

    return 0;
}

//Questão 7:
#include<stdio.h>
int main(void) {
    float nota1;
    float nota2;
    float nota3;

    printf("\n»»»»» CONVERSOR DE MÉDIAS «««««\n");
    printf("Digite a primeira nota: \n");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: \n");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: \n");
    scanf("%f", &nota3);

    float media=(nota1+nota2+nota3)/3;

    printf("1ª Nota: %.2f \n 2ª Nota: %.2f \n 3ª Nota: %.2f \n Média final: %.2f", nota1, nota2, nota3, media);

    return 0;
}

//Questão 8:
#include<stdio.h>
int main(void) {
    float precoBase;
    float desconto;

    printf("\n»»»»» CALCULADORA DE DESCONTOS «««««\n");
    printf("Digite o preço original do produto(€): \n");
    scanf("%f", &precoBase);
    printf("Digite o desconto aplicável(%%): \n");
    scanf("%f", &desconto);

    float valorDesconto=(precoBase*desconto)/100;
    float precoFinal=precoBase-valorDesconto;

    printf("Preço original %.2f € \n Valor do desconto %.2f € \n Preço final %.2f €", precoBase, valorDesconto, precoFinal);

    return 0;
}

//Questão 9:
#include<stdio.h>
int main(void) {
    float distancia;
    float combConsumido;

    printf("\n»»»»» CALCULADORA DE CONSUMO DE COMBUSTÍVEL «««««\n");
    printf("Digite a distância percorrida(km): \n");
    scanf("%f", &distancia);
    printf("Quantidade de combustível consumido(L): ");
    scanf("%f", &combConsumido);

    float consMedio=(combConsumido/distancia)*100;

    printf("Distância percorrida: %.2f km \n Combustível consumido: %.2f L \n Consumo médio: %.2f L/100 km", distancia, combConsumido, consMedio);

    return 0;
}

//Questão 10:
#include<stdio.h>
int main(void) {
    float valorHora;
    float horasMes;

    printf("\n»»»»» CALCULADORA DE SALÁRIO «««««\n");
    printf("Digite o valor recebido por hora (€): \n");
    scanf("%f", &valorHora);
    printf("Digite a qtd de horas trabalhadas neste mês: \n");
    scanf("%f", &horasMes);

    float salarioBruto=valorHora*horasMes;
    float segSocial=(salarioBruto*11)/100;
    float salarioFinal=salarioBruto-segSocial;

    printf("Valor hora: %.2f € \n",valorHora);
    printf("Horas trabalhadas: %.2f \n",horasMes);
    printf("Salário bruto: %.2f € \n",salarioBruto);
    printf("Desconto Segurança Social: %.2f € \n",segSocial);
    printf("Salário após desconto: %.2f € \n",salarioFinal);

    return 0;
}

//Desafio adicional
#include<stdio.h>
int main(void) {
    float peso;
    float altura;

    printf("\n»»»»» CALCULADORA DE IMC «««««\n");
    printf("Digite seu peso (kg): \n");
    scanf("%f", &peso);
    printf("Digite sua altura (m): \n");
    scanf("%f", &altura);

    float imc=peso/(altura*altura);

    printf("Peso: %.2f kg \n Altura: %.2f m \n O seu IMC é: %.2f \n", peso, altura, imc);

    return 0;
}