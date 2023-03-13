#include "isosceles.h"
#include "ex.h"


Isosceles::Isosceles(int a, int b, int A, int B) : Triangle("Равнобедренный треугольник", a, b, a, A, B, A){}

bool Figure::chek(){
		if (a == c) {
			return true;
		}
		else {
			throw Ex("Ошибка создания фигуры. Причина: стороны не равны!");
		}
	}