#include <am.h>

#define TEMPERATURE_AFTER_MIXING 30

typedef struct {
	int heat_capacity;
	int temperature;
	int specific_heat_capacity;
	int mass;
}Element;


int main() {
	Element container;
	Element water;
	Element metal_sphere;

	container.heat_capacity = 70;
	container.temperature = 20;
	water.temperature = 20;
	water.mass = 100;
	metal_sphere.temperature = 100;
	metal_sphere.mass = 200;
	water.specific_heat_capacity = 4.2;

	metal.specific_heat_capacity = (water.specific_heat_capacity * water.mass + container.heat_capacity) * (TEMPERATURE_AFTER_MIXING - water.temperature) / metal.mass * metal_sphere * (metal.specific_heat_capacity - TEMPERATURE_AFTER_MIXING)
	// equal to below
	//metal.specific_heat_capacity = (water.specific_heat_capacity * water.mass + container.heat_capacity) * (TEMPERATURE_AFTER_MIXING - container.temperature) / metal.mass * metal_sphere * (metal.specific_heat_capacity - TEMPERATURE_AFTER_MIXING)
	print


