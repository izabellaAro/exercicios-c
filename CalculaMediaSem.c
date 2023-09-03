int main(void)
{
    float notaProva1, notaProva2, pim, media, notaExame, mediaExame;

    printf("***Calculadora de Medias***\n");

    printf("\nDigite a nota da sua notaProva1: ");
    scanf("%f", &notaProva1);

    printf("Digite a nota da sua notaProva2: ");
    scanf("%f", &notaProva2);

    printf("Digite a nota do seu PIM: ") ;
    scanf("%f", &pim);

    media = (notaProva1 * 0.4 + notaProva2 * 0.4 + pim * 0.2);

    if(media >= 7 ){
        printf("\nAluno Aprovado!  Parabens :) ");
        printf("\nSua media e: %0.1f", media);
        
    }
    else
    {
        printf("\nAluno devera realizar o Exame \n");

        printf("\nDigite a nota do seu Exame: ");
        scanf("%f", &notaExame);

        mediaExame = (media + notaExame) / 2;

        if(mediaExame >= 5){
            printf("\nAluno Aprovado! Parabens :)\n");
            printf("\nSua media e: %0.1f", mediaExame);
        }
        else
        {
            printf("\nAluno Reprovado\n");
        }
    }
}

