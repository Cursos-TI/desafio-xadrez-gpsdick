    const int iTorre=5, iBispo=5, iRainha=-8, iCavalo=-1; // numeros positivos=cima/direita, negativos=esquerda/baixo

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    int i=0;
    for(i;i<iBispo;i++)printf("Cima\nDireita\n");

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    i=0;
    do {printf("Direita\n");i++;}while(i<iTorre);

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    i=iRainha;
    while(i<0){printf("Esquerda\n");i++;}

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    i=iCavalo;
    for(i;i<0;i++)printf("Baixo\n");

    i=iCavalo;
    while(i<0){printf("Esquerda\n");i++;}

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
