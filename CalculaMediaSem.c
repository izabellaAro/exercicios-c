int main(void)
{
    float np1, np2, pim, media, pExame, mExame;

    printf("***Calculadora de Medias***\n");

    printf("\nDigite a nota da sua NP1: ");
    scanf("%f", &np1);
    printf("Digite a nota da sua NP2: ");
    scanf("%f", &np2);
    printf("Digite a nota do seu PIM: ") ;
    scanf("%f", &pim);

    media = (np1*0.4+np2*0.4+pim*0.2);

    if(media >= 7 ){
        printf("\nAluno Aprovado!  Parabens :) ");
        printf("\nSua media e: ");
        printf("%.1f", media);
    }
    else
    {
        printf("\nAluno devera realizar o Exame \n");

        printf("\nDigite a nota do seu Exame: ");

        scanf("%f", &pExame);

        mExame = (media+pExame)/2;

        if(mExame>=5){
            printf("\nAluno Aprovado! Parabens :)\n");
            printf("\nSua media e: ");
            printf("%.1f", mExame);
        }
        else
        {
            printf("\nAluno Reprovado\n");
        }
    }
}

