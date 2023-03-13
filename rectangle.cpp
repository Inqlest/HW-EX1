#include "rectangle.h"
#include "ex.h"

Rectangle::Rectangle(int a, int b) : Quadrangle("Прямоугольник", a, b, a, b, 90, 90, 90, 90){}

	 bool Figure::chek(){
		if (a == c && b == d && A == B && B == C && C == D && D == 90) {
			return true;
		}
		else{
			throw Ex("Ошибка создания фигуры. Причина: стороны не равны и углы не равны 90!");
		}
	}