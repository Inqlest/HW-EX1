#include "quadrangle.h"
#include"ex.h"

Quadrangle::Quadrangle(std::string name, int a, int b, int c, int d, int A, int B, int C, int D): Figure(name, 4, a, b, c, d, A, B, C, D) {}
Quadrangle::Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrangle("Четырехугольник", a, b, c, d, A, B, C, D){}

bool Figure::chek(){
		if (sides_count == 4 && A + B + C + D == 360) {
			return true;
		}
		else {
			throw Ex("Ошибка создания фигуры. Причина: сумма углов не равна 360!");
		}
	}