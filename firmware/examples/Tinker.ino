/***
 * All the based tinker functions are registered. You can add you own code.
 ***/

// This #include statement was automatically added by the Spark IDE.
#include "Tinker/Tinker.h"

void setup ( )
{
	//Register all the Tinker functions
	Particle.function("digitalread", tinkerDigitalRead);
	Particle.function("digitalwrite", tinkerDigitalWrite);
	Particle.function("analogread", tinkerAnalogRead);
	Particle.function("analogwrite", tinkerAnalogWrite);
	Particle.function("servoOpen", tinkerServoOpen);
	Particle.function("servoClose", tinkerServoClose);
	Particle.function("servoSet", tinkerServoSet);
	Particle.function("servoRead", tinkerServoRead);
}

void loop ( )
{
}
