#ifndef PHYSICS_H
#define PHYSICS_H

typedef struct {
	long long value;
	char unit[8];
}Quantity;

typedef struct {
	int exp[8];
	char units[8];
}Unit;


Unit convert_unit(Quantity a)


Quantity EPSILON_0 = {8.85e-12, "F/M"}
Quantity PI = {3.14, ""}

// need to leverage minus exp
long long power(int base, int exp) {
	if (exp == 0) 
		return 1;
	while (exp > 0) {
		if (exp % 2 == 1)
			result *= base;
		base *= base;
		exp /= 2;
	}
	return result;
}

#endif
