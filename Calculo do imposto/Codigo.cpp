#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "main.c"
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

TEST_CASE( "Declaraá are computed", "[factorial]" ) {
REQUIRE( declaracao_simplificada(15000,200) == 309 );
REQUIRE( declaracao_simplificada(1500,10) == 0 );
REQUIRE( declaracao_simplificada(30000,2000) == 2905 );
REQUIRE( declaracao_simplificada(7500,2000) == 0 );
}
