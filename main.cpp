#include <iostream>
#include "figure.h"
#include "triangle.h"
#include "right.h"
#include "isosceles.h"
#include "equilateral.h"
#include "quadrangle.h"
#include "rectangle.h"
#include "square.h"
#include "parallelogram.h"
#include "romb.h"
#include "ex.h"

void print_info(Figure* figure, int sides_count) {
	sides_count == 3 ?
		std::cout << figure->get_name() << ": " << std::endl
		<< "Стороны: " << "a = " << figure->get_a() << " b = " << figure->get_b() << " c = " << figure->get_c() << std::endl
		<< "Углы: " << " A = " << figure->get_A() << " B = " << figure->get_B() << " C = " << figure->get_C() << std::endl << std::endl
		: std::cout << figure->get_name() << ": " << std::endl
		<< "Стороны: " << "a = " << figure->get_a() << " b = " << figure->get_b() << " c = " << figure->get_c() << " d = " << figure->get_d() << std::endl
		<< "Углы: " << " A = " << figure->get_A() << " B = " << figure->get_B() << " C = " << figure->get_C() << " D = " << figure->get_D() << std::endl << std::endl;
}

int main() {
	setlocale(LC_ALL, "Russian");
	Figure* figure = new Figure;
	figure->print_info(figure);
	Figure* triangle = new Triangle(10, 20, 30, 50, 60, 70);
	triangle->print_info(triangle);
	Figure* right = new Right(10, 20, 30, 50, 60);
	right->print_info(right);
	Figure* isosceles = new Isosceles(10, 30, 50, 60);
	isosceles->print_info(isosceles);
	Figure* equilateral = new Equilateral(30);
	equilateral->print_info(equilateral);

	Figure* quadrangle = new Quadrangle(10, 20, 30, 40, 50, 60, 70, 80);
	quadrangle->print_info(quadrangle);
	Figure* rectangle = new Rectangle(10, 20);
	rectangle->print_info(rectangle);
	Figure* square = new Square(20);
	square->print_info(square);
	Figure* parallelogramm = new Parallelogram(20, 30, 30, 40);
	parallelogramm->print_info(parallelogramm);
	Figure* romb = new Romb(30, 30, 40);
	romb->print_info(romb);



	delete triangle;
	delete right;
	delete isosceles;
	delete equilateral;
	delete quadrangle;
	delete rectangle;
	delete square;
	delete parallelogramm;
	delete romb;
}