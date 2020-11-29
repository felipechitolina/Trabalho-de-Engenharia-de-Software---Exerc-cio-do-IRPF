#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "FuncoesSeparadas.cpp"
/*
unsigned int Factorial( unsigned int number ) {
return number <= 1 ? number : Factorial(number-1)*number;
}
*/

/*
TEST_CASE( "Factorials are computed", "[factorial]" ) {
REQUIRE( Factorial(1) == 1 );
REQUIRE( Factorial(2) == 2 );
REQUIRE( Factorial(3) == 6 );
REQUIRE( Factorial(10) == 3628800 );
}
*/

TEST_CASE( "Declaracao Simplificada are computed", "[factorial]" ) {
REQUIRE( declaracao_simplificada(15000,200) == 309 );
REQUIRE( declaracao_simplificada(1500,10) == 0 );
REQUIRE( declaracao_simplificada(30000,2000) == 2905 );
REQUIRE( declaracao_simplificada(7500,2000) == 0 );
}

//int declaracao_completa(int total_rend, int prev, int idade, int dependentes)
TEST_CASE( "Declaracao Completa are computed", "[factorial]" ) {
REQUIRE( declaracao_completa(15000,200,22,2) == 375 );
REQUIRE( declaracao_completa(1500,10,40,3) == 0 );
REQUIRE( declaracao_completa(30000,2000,65,0) ==  3143 );
REQUIRE( declaracao_completa(25500,2000,25,3) == 1601 );
}
