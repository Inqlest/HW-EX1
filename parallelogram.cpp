#include "parallelogram.h"
#include "ex.h"

Parallelogram::Parallelogram(int a, int b, int A, int B) : Quadrangle("Параллелограмм", a, b, a, b, A, B, A, B) {}

bool Figure::chek(){
		if (a == c && b == d && A == C && B == D) {
			return true;
		}
		else {
			throw Ex("Ошибка создания фигуры. Причина: стороны и углы попарно не равны!");
		}
	}