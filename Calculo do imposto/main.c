#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[50];
    int i=0, cpf=0, idade=0, ND=0, CPO=0, TR=0;

    while(i == 0){
    printf("Olah, neste software voce ira ter informações sobre o imposto de renda, entre declaracao simplificada ou Completa.\nPara isso, serah necessario nos informar algumas coisas \n Sao elas:");
    printf("\nNome:");
    scanf("%s",&nome);
    printf("\nIdade:");
    scanf("%d",&idade);
    printf("\nCPF:");
    scanf("%d",&cpf);
    printf("\nNumero de dependente:");
    scanf("%d",&ND);
    printf("\nContribuicao previdenciaria oficial:");
    scanf("%d",&CPO);
    printf("\nTotal de rendimentos:");
    scanf("%d",&TR);

    printf("\n\n Confirme seus dados sendo 1 para sim e 0 para nao.");
    printf("\n**********************************\n%s \n%i \n%i \n%i \n%i\n**********************************", nome,idade,ND,CPO,TR);
    scanf("%d",&i);
    }

    return 0;
}
