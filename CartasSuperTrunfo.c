#include <stdio.h>

//Tava querendo fazer na temática de Game of Thrones, talvez mais pra frente.
//Não apaguei os comentários do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade. (Feito)
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos. (Feito)
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

char Estado1 [10];

char Codigo1 [10];

char Cidade1 [10];

int Atrações1; //Atrações = Pontos Turísticos. nome alterado pela facilidade de utilizar palavra única.

int População1;

float PIB1;

float Área1;


printf("Bem vindo ao Super Trunfo!\n Crie seu competidor logo abaixo!\n"); //uma mensagem de boas vindas, na minha opinião, é uma boa forma de começar

printf("Digite o Estado de onde é sua Cidade: ");
scanf("%s",&Estado1);

printf("\n Agora o nome da sua Cidade: ");
scanf("%s",&Cidade1);

printf("\n Qual a população desse local? "); 
scanf("%i",&População1);
//já que o nome já foi dado, poderia colocar a pergunta "qual a população de (Cidade1)?"

printf("\n Qual o tamanho dessa Cidade? "); 
scanf("%f",&Área1);

printf("\n Quantos Pontos Turísticos tem essa cidade? "); 
scanf("%f",&Atrações1);

printf("\n Qual, mais ou menos, é o produto interno bruto dessa cidade? "); 
scanf("%f",&PIB1);





char Estado2 [10];

char Codigo2 [10];

char Cidade2 [10];

int Atrações2;

int População2;

float PIB2;

float Área2;


printf("\n\n\n Agora é hora de criar seu Adversário!\n" );

printf("Digite o Estado de onde é sua Cidade: ");
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


printf("\n\n Agora que as cartas estão cadastradas, vamos a suas características!\n");

printf("\n Carta Número 1 (Código C1)\n\n");

printf("   Nome: %s\n", Cidade1);

printf("   Código: C1\n");

printf("   Estado: %s\n", Estado1);

printf("   População: %i\n", População1);

printf("   Área: %f\n", Área1);

printf("   Pontos Turísticos: %f\n", Atrações1);

printf("   PIB: %f\n\n\n\n\n", PIB1);



printf("\n Carta Número 1 (Código C2)\n\n");

printf("   Nome: %s\n", Cidade1);

printf("   Código: C2\n");

printf("   Estado: %s\n", Estado2);

printf("   População: %i\n", População2);

printf("   Área: %f\n", Área2);

printf("   Pontos Turísticos: %f\n", Atrações2);

printf("   PIB: %f\n\n\n", PIB2);

    return 0;

}
