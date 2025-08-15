#include <stdio.h>
#include <stdlib.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void Bispo(int i){
    while(i!=0){
        printf("Bispo:Cima(%d)\n",i);
        do{
            printf("Bispo:Direita(%d)\n",i);
        }while(0);
        Bispo(--i);
        break;
    }
}

void Torre(int i){
    if(i>0){
        printf("Torre:Direita(%d)\n",i);
        Torre(--i);
    }
}

void Rainha(int i){
    if(i!=0){
        printf("Rainha:Esquerda(%d)\n",i);
        Rainha(++i);
    }
}

void Cavalo(int i){
    printf("Cavalo:Baixo%d\n",i);
    while((i==-1)&&(i<0)){
        printf("Cavalo:Esquerda%d\n",i);
        break;
    };
    if(i<-1)Cavalo(++i);
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e/OU* condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    Bispo(5);
    Torre(5);
    Rainha(-8);
    Cavalo(-2);
   
    return 0;
}
/*

Bispo:Cima(5)
Bispo:Direita(5)
Bispo:Cima(4)
Bispo:Direita(4)
Bispo:Cima(3)
Bispo:Direita(3)
Bispo:Cima(2)
Bispo:Direita(2)
Bispo:Cima(1)
Bispo:Direita(1)
Torre:Direita(5)
Torre:Direita(4)
Torre:Direita(3)
Torre:Direita(2)
Torre:Direita(1)
Rainha:Esquerda(-8)
Rainha:Esquerda(-7)
Rainha:Esquerda(-6)
Rainha:Esquerda(-5)
Rainha:Esquerda(-4)
Rainha:Esquerda(-3)
Rainha:Esquerda(-2)
Rainha:Esquerda(-1)
Cavalo:Baixo-2
Cavalo:Baixo-1
Cavalo:Esquerda-1

*/
