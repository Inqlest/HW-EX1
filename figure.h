#pragma once
#include <iostream>
class Figure {
protected:
	std::string name;
	int sides_count;
	int a, b, c, d;
	int A, B, C, D;
    Figure(std::string name, int sides_count, int a, int b, int c, int d, int A, int B, int C, int D);
public:
    int get_a(); int get_b(); int get_c(); int get_d();
	int get_A(); int get_B(); int get_C(); int get_D();
	std::string get_name();
	int get_sides_count();
    Figure() : Figure("Фигура", 0, 0, 0, 0, 0, 0, 0, 0, 0){}
	virtual bool chek();
	void print_info(Figure* figure);
};