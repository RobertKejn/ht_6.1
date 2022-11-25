#include "math_functions.h"
int Summ(int a, int b) {
	return a + b;
}
int Subtr(int a, int b) {
	return a - b;
}
int Mult(int a, int b) {
	return a * b;
}

int Div(int a, int b) {
	return b == 0 ? 0 : a / b;
}

int Pow(int a, int b) {
	int res = 1;
	for (int i = 0; i < b; ++i) res *= a;
	return res;
}