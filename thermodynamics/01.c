#include "am.h"

#define TEMPERATURE_AFTER_MIXING 30

typedef struct {
	float heat_capacity;
	float temperature;
	float specific_heat_capacity;
	float mass;
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

	float a = (water.specific_heat_capacity * water.mass + container.heat_capacity) * (TEMPERATURE_AFTER_MIXING - water.temperature);
	float b = metal_sphere.mass * (metal_sphere.temperature - TEMPERATURE_AFTER_MIXING);


	metal_sphere.specific_heat_capacity = (water.specific_heat_capacity * water.mass + container.heat_capacity) * (TEMPERATURE_AFTER_MIXING - water.temperature) / (metal_sphere.mass * (metal_sphere.temperature - TEMPERATURE_AFTER_MIXING));
	// equal to below
	metal_sphere.specific_heat_capacity = (water.specific_heat_capacity * water.mass + container.heat_capacity) * (TEMPERATURE_AFTER_MIXING - container.temperature) / (metal_sphere.mass * (metal_sphere.temperature - TEMPERATURE_AFTER_MIXING));
	am_printf("%f\n", a);
	am_printf("%f\n", b);
	am_printf("%f\n", metal_sphere.specific_heat_capacity);
}
