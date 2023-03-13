#include "equilateral.h"
#include "ex.h"

Equilateral::Equilateral(int a) : Triangle("Равносторонний треугольник", a, a, a, 60, 60, 60) {}

bool Figure::chek(){
		if (a == b && b == c && A == B && B == C && C == 60) {
			return true;
		}
		else{
			throw Ex("Ошибка создания фигуры. Причина: стороны не равны и углы не равны 60!");
		}
}