#include "square.h"
#include "ex.h"

Square::Square(int a) : Quadrangle("Квадрат", a, a, a, a, 90, 90, 90, 90){}

bool Figure::chek(){
		if (a == b && b == c && c == d) {
			return true;
		}
		else {
			throw Ex("Ошибка создания фигуры. Причина: углы не равны 90!");
		}
	}