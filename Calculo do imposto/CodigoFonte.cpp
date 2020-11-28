#include <iostream>
#include <stdlib.h>
using namespace std;

int declaracao_simplificada(int total_rend, int prev){
    int valor_final = 0, base_cal;

    base_cal = total_rend - prev; // 1000 = 1500 - 500
    base_cal = base_cal*.95; // 950

    cout <<"\nbase 1  =" <<base_cal;

    if(base_cal <= 12000) valor_final = 0;
    if(12000 < base_cal && base_cal < 24000) valor_final = (base_cal - 12000) * 0.15;
    if(base_cal >= 24000 ) valor_final = (base_cal - 12000) * 0.15 + (base_cal - 24000) * 0.275;

    cout <<"\nvlr final 1 =" <<valor_final;

    return valor_final;
}

int declaracao_completa(int total_rend, int prev, int idade, int dependentes){
    int valor_final = 0, base_cal;

    base_cal = total_rend - prev;

    if(idade < 65){
        if(dependentes <= 2) base_cal = 0.98 * base_cal;
        if(3 <= dependentes <= 5) base_cal = 0.965 * base_cal;
        if(dependentes > 5) base_cal = 0.95 * base_cal;
    }

    if(idade >= 65){
        if(dependentes <= 2) base_cal = 0.97 * base_cal;
        if(3 <= dependentes <= 5) base_cal = 0.955 * base_cal;
        if(5 < dependentes) base_cal = 0.94 * base_cal;
    }
    printf("\nbase 2 %i", base_cal);
    if(base_cal <= 12000) valor_final = 0;
    if(12000 < base_cal && base_cal < 24000) valor_final = (base_cal - 12000) * 0.15;
    if(24000 <= base_cal ) valor_final = (base_cal - 12000) * 0.15 + (base_cal - 24000) * 0.275;

	cout <<"\nvlr final 2 =" <<valor_final;

    return valor_final;
}

int main(){
char nome[50];
    int i = 0,cpf = 0, idade = 0, ND = 0, CPO = 0, TR = 0;
    int dec_simp = 0, dec_comp = 0, temp = 0;

    while(i == 0){
    cout <<"Ola, neste software voce ira ter informacoes sobre o imposto de renda, entre declaracao simplificada ou Completa.\nPara isso, sera necessario nos algumas informacoes, sao elas:";
	cout <<"\nNome:";
    cin >> nome;
	cout <<"\nIdade:";
    cin >> idade;
	cout <<"\nCPF:";
    cin >> cpf;
	cout <<"\nNumero de dependente:";
    cin >> ND;
    cout <<"\nContribuicao previdenciaria oficial:";
    cin >> CPO;
    cout <<"\nTotal de rendimentos:";
    cin >> TR;

    cout <<"\n\n Confirme seus dados sendo 1 para sim e 0 para nao.\n";
    cin >> i;
	}

    dec_simp = declaracao_simplificada( TR,  CPO);
    dec_comp = declaracao_completa( TR,  CPO,  idade,  ND);

   	cout << "\n1. Declaracao Simples: " << dec_simp << " \n2. Declaracao Completa " << dec_comp;

    cout <<"\n tipo de declaração deseja fazer?";
	cin >> temp;

    if(temp == 1)cout << "\n\n----- Declaração Simples Selecionada ----\n\n";
    if(temp == 2)cout <<"\n\n----- Declaração Completa Selecionada ----\n\n";
    else cout <<"\nInsira um valor válido: \n1. Declaracao Simples\n2. Declaracao Completa";

    return 0;
}
