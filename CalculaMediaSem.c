int main(void)
{
    float notaProva1, notaProva2, pim, media, notaExame, mediaExame, qntFaltas, frequenciaPresenca;

    printf("*** Calculadora de Medias ***\n");

    printf("\nDigite a nota da sua primeira prova: ");
    scanf("%f", &notaProva1);

    printf("Digite a nota da sua segunda prova: ");
    scanf("%f", &notaProva2);

    printf("Digite a nota do seu PIM: ") ;
    scanf("%f", &pim);

    printf("\nDigite sua quantidade da faltas: ");
    scanf("%f", &qntFaltas);

    const float PESO_PROVA = 0.4;
    const float PESO_PIM = 0.2;
    media = (notaProva1 * PESO_PROVA + notaProva2 * PESO_PROVA + pim * PESO_PIM);

    const int QNT_TOTAL_AULAS = 64;
    frequenciaPresenca = ((QNT_TOTAL_AULAS - qntFaltas) / QNT_TOTAL_AULAS) * 100;

    if (frequenciaPresenca < 75){
        printf("\nAluno reprovado por frequencia!");
        return 0;
    }

    if(media >= 7){
        printf("\nAluno Aprovado!  Parabens :)");
        printf("\nSua media e: %0.1f", media);
        return 0;
    }

    printf("\nAluno devera realizar o Exame \n");

    printf("\nDigite a nota do seu Exame: ");
    scanf("%f", &notaExame);

    mediaExame = (media + notaExame) / 2;

    if(mediaExame >= 5){
        printf("\nAluno Aprovado! Parabens :)\n");
        printf("\nSua media e: %0.1f", mediaExame);
        return 0;
    }
    
    printf("\nAluno Reprovado\n");
    
}

