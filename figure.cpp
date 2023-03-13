#include "figure.h"
#include "ex.h"

    int Figure::get_a() { return a; } int Figure::get_b() { return b; } int Figure::get_c() { return c; } int Figure::get_d() { return d; }
	int Figure::get_A() { return A; } int Figure::get_B() { return B; } int Figure::get_C() { return C; } int Figure::get_D() { return D; }
	int Figure::get_sides_count() { return sides_count; }
	std::string Figure::get_name() { return name; }

		Figure::Figure(std::string name, int sides_count, int a, int b, int c, int d, int A, int B, int C, int D){
		this->name = name;
		this->sides_count = sides_count;
		this->a = a;
		this->b = b;
		this->c = c;
		this->d = d;
		this->A = A;
		this->B = B;
		this->C = C;
		this->D = D;
    }
	bool Figure::chek() {
		if (Figure::get_sides_count() == 0) {
			return true;
		}
		else {
			return false;
		}
	}
		void Figure::print_info(Figure* figure) {
		std::cout << name << ":" << std::endl;
		if (chek() == false) throw Ex("Ошибка создания фигуры!");
		std::cout << get_sides_count() << std::endl;
	}