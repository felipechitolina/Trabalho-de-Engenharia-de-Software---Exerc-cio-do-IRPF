#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
/*
unsigned int Factorial( unsigned int number ) {
return number <= 1 ? number : Factorial(number-1)*number;
}
*/

int declaracao_simplificada(int total_rend, int prev){
    int valor_final = 0, base_cal;

    base_cal = total_rend - prev; // 1000 = 1500 - 500
    base_cal = base_cal*.95; // 950

    printf("\nbase 1 %i", base_cal);

    if(base_cal <= 12000) valor_final = 0;
    if(12000 < base_cal && base_cal < 24000) valor_final = (base_cal - 12000) * 0.15;
    if(base_cal >= 24000 ) valor_final = (base_cal - 12000) * 0.15 + (base_cal - 24000) * 0.275;

    printf("\nvlr final 1 %d", valor_final);

    return valor_final;
}

/*
TEST_CASE( "Factorials are computed", "[factorial]" ) {
REQUIRE( Factorial(1) == 1 );
REQUIRE( Factorial(2) == 2 );
REQUIRE( Factorial(3) == 6 );
REQUIRE( Factorial(10) == 3628800 );
}
*/

TEST_CASE( "Declaraá are computed", "[factorial]" ) {
REQUIRE( declaracao_simplificada(15000,200) == 309 );
REQUIRE( declaracao_simplificada(1500,10) == 0 );
REQUIRE( declaracao_simplificada(30000,2000) == 2905 );
REQUIRE( declaracao_simplificada(7500,2000) == 0 );
}
