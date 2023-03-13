#include "right.h"
#include "ex.h"
#include "triangle.h"

Right::Right(int a, int b, int c, int A, int B) : Triangle("Прямоугольный треугольник", a, b, c, A, B, 90){}

bool Figure::chek(){
		if (C == 90) {
			return true;
		}
		else {
			throw Ex("Ошибка создания фигуры. Причина: C не равен 90");
		}
	}