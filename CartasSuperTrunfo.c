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
scanf("%s", &Estado1);

    return 0;
}
