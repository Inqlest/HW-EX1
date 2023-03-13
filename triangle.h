#pragma once
#include "figure.h"
class Triangle : public Figure {
protected:
	Triangle(std::string name, int a, int b, int c, int A, int B, int C);
public:
	Triangle(int a, int b, int c, int A, int B, int C);
};