#ifndef PHYSICS_H
#define PHYSICS_H

typedef struct {
	long long value;
	char unit[8];
}Quantity;

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



#define EPSILON_0 unit(8.85 * power(10, -12), "F / M")

#endif
