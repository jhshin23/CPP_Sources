#include "Color.h"

Color::Color(int r, int g, int b) {
	this->r = r;
	this->g = g;
	this->b = b;
}
void Color::get(int& r, int& g, int& b) {
	r = this->r;
	g = this->g;
	b = this->b;
}