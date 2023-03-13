#include "romb.h"  
#include "ex.h"

Romb::Romb(int a, int A, int B) : Quadrangle("Ромб", a, a, a, a, A, B, A, B) {}

bool Figure::chek(){
		if (a == b && b == c && c == d) {
			return true;
		}
		else {
			throw Ex("Ошибка создания фигуры. Причина: сстороны и углы попарно не равны!");
		}
	}