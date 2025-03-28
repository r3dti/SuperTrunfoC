#include <stdio.h>

int main() {

    printf("   *** Programa de Super Trunfo em C ***   \n");
     printf("\n");
// Este irá funcionar como um jogo de Super Trunfo, onde as cartas são dadas à cada usuário para que possam compará-las, definindo a carta com mais força


    printf("Informações da Carta 1: \n");
//Carta 1:
char estado[13]= "Minas Gerais";
char codigo[4] = "MG01";
char nome_cidade[11] = "Ouro Preto";
unsigned int populacao = 74824;
double area = 1245.865; //área em km²
double pib = 9520034.93; 
unsigned int pturist = 60;
float densidade = 60.1; //habitantes por km²
float pib_per_cap = 127232.37; //PIB per Capita da cidade
double super_poder1;

printf("%s - %s: \n", &nome_cidade, &estado);
printf("População: %u, Área: %.3f, PIB: %.2f, Pontos Turísticos: %u, Densidade Populacional: %.1f, PIB Per Capita: %.2f\n", populacao, area, pib, pturist, densidade, pib_per_cap);

super_poder1 = (populacao + area + pib + pturist + pib_per_cap);
printf("O superpoder é: %.2f\n", super_poder1);

printf("   - - - - - -   \n");
//só pra pular linha kkj

    printf("Informações da Carta 2: \n");
//carta 2:
char estado2[18] = "Rio Grande do Sul";
char codigo2[4] = "RS02";
char nome_cidade2[8] = "Gramado";
unsigned int populacao2 = 40134;
double area2 = 239.341; //área em km²
double pib2 = 2658017.54;
unsigned int pturist2 = 30;
float densidade2 = 167.7; //habitantes por km²
float pib_per_cap2 = 55322.94; //PIB per Capita da cidade
double super_poder2;

printf("%s - %s: \n", &nome_cidade2, &estado2);
printf("População: %u, Área: %.3f, PIB: %.2f, Pontos Turísticos: %u, Densidade Populacional: %.1f, PIB Per Capita: %.2f\n", populacao2, area2, pib2, pturist2, densidade2, pib_per_cap2);
    
super_poder2 = (populacao2 + area2 + pib2 + pturist2 + pib_per_cap2);
printf("O superpoder é: %.2f\n", super_poder2);


/*O jogo funcionará com idicadores de 1 para verdadeiro (carta 1 venceu) e 0 para falso (carta 2 venceu).
(1 para verdadeiro – Carta 1 vence – e 0 para falso – Carta 2 vence).
Ao comparar as cartas, o programa executará um comando de impressão para que o jogador insira os dados a serem comparados, indicando se o valor é ou não maior em relação ao outro.
Possuímos duas cartas para isso, ambas exibindo os mesmos tipos de dados à serem comparados, mantendo uma legibilidade maior, além de familiaridade com o usuário.
Com isso em mente, analisaremos os valores das cartas a serem comparados, executando uma entrada de dados para comparação, assim calculando os valores, saindo com o resultado.
*/

printf("   - - - - - -   \n");
//pulando linha dnvkkkkkk

printf("Comparação de Cartas: \n");

unsigned int result_pop, result_area, result_pib, result_ptur, result_dens, result_pibpcap, result_super;

result_pop = populacao > populacao2;
result_area = area > area2;
result_pib = pib > pib2;
result_ptur = pturist > pturist2;
result_dens = densidade < densidade2;
result_pibpcap = pib_per_cap > pib_per_cap2;
result_super = super_poder1 > super_poder2;

printf("População: %d \n", result_pop);
printf("Área: %d \n", result_area);
printf("PIB: %d \n", result_pib);
printf("Pontos Turísticos: %d \n", result_ptur);
printf("Densidade Populacional: %d \n", result_dens);
printf("PIB per Capita: %d\n", result_pibpcap);
printf("Super Poder: %d \n", result_super);


return 0;
}
