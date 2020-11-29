#include "FuncoesSeparadas.cpp"

int main(){
char nome[50];
    int i = 0,cpf = 0, idade = 0, ND = 0, temp = 0;
    int dec_simp = 0, dec_comp = 0, CPO = 0, TR = 0;

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
