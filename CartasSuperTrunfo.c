#include <stdio.h>


int main() {

char Estado1 [10] = 0;

char Codigo1 [10] = 0;

char Cidade1 [10] = 0;

int Atrações1 = 0; //Atrações = Pontos Turísticos. nome alterado pela facilidade de utilizar palavra única.

int População1 = 0;

float PIB1 = 0;

float Área1 = 0;

float Densidade1 = 0;

float Capital1 = 0;


printf("Bem vindo ao Super Trunfo!\n Crie seu competidor logo abaixo!\n");

printf("Digite o Estado de onde é sua Cidade: ");
scanf("%s",&Estado1);

printf("\n Agora o nome da sua Cidade: ");
scanf("%s",&Cidade1);

printf("\n Qual a população desse local? "); 
scanf("%i",&População1);

printf("\n Qual o tamanho dessa Cidade? "); 
scanf("%f",&Área1);

printf("\n Quantos Pontos Turísticos tem essa cidade? "); 
scanf("%f",&Atrações1);

printf("\n Qual, mais ou menos, é o produto interno bruto dessa cidade? "); 
scanf("%f",&PIB1);

Capital1 = PIB1 / População1;
Densidade1 = População1 / Área1;





char Estado2 [10] = 0;

char Codigo2 [10] = 0;

char Cidade2 [10] = 0;

int Atrações2 = 0;

int População2 = 0;

float PIB2 = 0;

float Área2 = 0;

float Densidade2 = 0;

float Capital2 = 0;


printf("\n\n\n Agora é hora de criar seu Adversário!\n" );

printf(" Digite o Estado de onde é sua Cidade: ");
scanf("%s",&Estado2);

printf("\n Agora o nome da sua Cidade: ");
scanf("%s",&Cidade2);

printf("\n Qual a população desse local? "); 
scanf("%i",&População2);

printf("\n Qual o tamanho dessa Cidade? "); 
scanf("%f",&Área2);

printf("\n Quantos Pontos Turísticos tem essa cidade? "); 
scanf("%f",&Atrações2);

printf("\n Qual, mais ou menos, é o produto interno bruto dessa cidade? "); 
scanf("%f",&PIB2);

Capital2 = PIB2 / População2;
Densidade2 = População2 / Área2;


printf("\n\n Agora que as cartas estão cadastradas, vamos a suas características!\n");

printf("\n Carta Número 1 (Código C1)\n\n");

printf("   Nome: %s\n", Cidade1);

printf("   Código: C1\n");

printf("   Estado: %s\n", Estado1);

printf("   População: %i\n", População1);

printf("   Área: %f\n", Área1);

printf("   Densidade Populacional: %f/n", Densidade1);

printf("   Pontos Turísticos: %f\n", Atrações1);

printf("   PIB: %f\n\n\n\n\n", PIB1);

printf("   PIB per Capita: %f\n", Capital1);



printf("\n Carta Número 2 (Código C2)\n\n");

printf("   Nome: %s\n", Cidade2);

printf("   Código: C2\n");

printf("   Estado: %s\n", Estado2);

printf("   População: %i\n", População2);

printf("   Área: %f\n", Área2);

printf("   Densidade Populacional: %f/n", Densidade2);

printf("   Pontos Turísticos: %f\n", Atrações2);

printf("   PIB: %f\n\n\n", PIB2);

printf("   PIB per Capita: %f\n", Capital2);

    return 0;

}
