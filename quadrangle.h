#pragma once
#include "figure.h"

class Quadrangle : public Figure {
protected:
	Quadrangle(std::string name, int a, int b, int c, int d, int A, int B, int C, int D);
public:
	Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D);
};