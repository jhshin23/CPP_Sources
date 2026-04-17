#include "Power.h"

Power::Power(int kick, int punch) {
	this->kick = kick;
	this->punch = punch;
}
Power& Power::add(Power p) {
	this->kick = p.kick;
	this->punch = p.punch;

	return *this;
}
