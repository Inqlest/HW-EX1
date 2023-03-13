#include "triangle.h"
#include "ex.h"
Triangle::Triangle(std::string name, int a, int b, int c, int A, int B, int C): Figure(name, 3, a, b, c, d, A, B, C, D){}
Triangle::Triangle(int a, int b, int c, int A, int B, int C) : Triangle("Труегольник", a, b, c, A, B, C){
    
}
    bool Figure::chek() override{
		if (get_sides_count() == 3 && A + B + C == 180) {
			return true;
		}
		else {
			throw Ex("Ошибка создания фигуры. Причина: сумма углов не равна 180!");
		}
	}
    void Figure::print_info(Figure* figure) override{
		std::cout << figure->get_name() << ": " << std::endl;
		if (chek() == true) { std::cout << "Правильно" << std::endl; } else { std::cout << "Неправильно" << std::endl; }
		std::cout << "Количество сторон: " << get_sides_count() << std::endl
		<< "Стороны: " << "a = " << figure->get_a() << " b = " << figure->get_b() << " c = " << figure->get_c() << std::endl
		<< "Углы: " << " A = " << figure->get_A() << " B = " << figure->get_B() << " C = " << figure->get_C() << std::endl << std::endl;
	}