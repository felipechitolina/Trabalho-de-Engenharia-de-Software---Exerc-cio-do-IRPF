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
