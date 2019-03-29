#include <stdio.h>
#define  check_output printf

int property_plus(int add, int add2){
	/*
		So this function is the additions,
		for simply program and correctly.
	*/
	int result_program = add + add2;
	return result_program;
}

int property_sous(int sou, int sou2){
	/*
		A function for only subtractions
		and correcty variable.
	*/
	int result_program = sou - sou2;
	return result_program;
}

int property_mult(int mul, int mul2){
	/*
		And concretely this function
		is for multiplications.
	*/
	int result_program = mul * mul2;
	return result_program;
}

int property_divi(int div, int div2){
	/*
		This function is concretely for
		the divions and to master the language.
	*/
	int result_program = div / div2;
	return result_program;
}

int main(void){
	int extension_model;
	extension_model = property_plus(5, 5); // It is example :D
	check_output("%d\n", extension_model);
	return 0;
}
