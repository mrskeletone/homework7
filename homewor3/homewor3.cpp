﻿#include <iostream>
#include <iostream>
#include "Header.h"
#include <fstream>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	double im, re;
	cout << "Введите re и im:";
	cin >> re >> im;

	Complex a(re, im), c, s, x;
	cout << "Введите re и im:";
	cin >> re >> im;

	Complex b(re, im);
	double q, w, e;
	double x1, y1, z1;
	Complex t(a);
	t.Cout();
	c = a.sum(b);
	q = a.modul();
	s = a.ym(b);
	x = a.del(b);
	c.Cout();
	s.Cout();
	x.Cout();
	cout << q << endl;
	
	cout << "------------------------" << endl;
	cout << "Введите x,y,z:";
	cin >> x1 >> y1 >> z1;

	Vector a1(x1, y1, z1), c1;
	cout << "Введите x,y,z:";
	cin >> x1 >> y1 >> z1;

	Vector b1(x1, y1, z1);
	Vector t1(a1);
	t1.Cout();
	c1 = a1.sum(b1);
	w = a1.lenght();
	e = a1.scalar(b1);
	c1.Cout();
	cout << w << ' ' << e;
	Circle a2; double square;
	a2.Cin();
	Circle t2(a2);
	t2.Cout();
	square = a2.square();
	a2.Cout();
	cout << square;
}
