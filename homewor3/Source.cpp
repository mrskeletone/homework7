#include "Header.h"
Complex::Complex()
{
	im = 0;
	re = 0;

}
Complex::Complex(Complex& a)
{
	this->im = a.im;
	this->re = a.re;
	cout << "Consturctor copy complete";
}
Complex::Complex(double a, double b)
{
	im = b;
	re = a;
	cout << "costructor complete" << endl;
}
Complex::~Complex()
{
	cout << "destructor complete" << endl;
}
void Complex::Cin()
{
	cout << "¬ведите комплексное число:";
	double a, b;
	cin >> a >> b;
	this->im = a;
	this->re = b;

}

Complex Complex::sum(Complex n)
{
	Complex z;
	z.im = this->im + n.im;
	z.re = this->re + n.re;
	return z;
}

void Complex::Cout()
{
	cout << this->re << "+i" << this->im << endl;;
}

double Complex::modul()
{
	return sqrt(pow(this->im, 2) + pow(this->re, 2));
}

Complex Complex::ym(Complex n)
{
	Complex z;
	z.re = this->im * n.re + this->re * n.im;
	z.im = (this->im * n.im) * (-1) + this->re * n.re;
	return z;
}

Complex Complex::del(Complex n)
{
	Complex z;
	z.re = (this->im * n.re + this->re * (-1) * n.im) / (pow(n.re, 2) + pow(n.im, 2));
	z.im = ((this->im * n.im) * (-1) + this->re * n.re) / (pow(n.re, 2) + pow(n.im, 2));
	return z;
}



Vector::Vector()
{
	x = 0;
	y = 0;
	z = 0;
}

Vector::Vector(Vector& a)
{
	this->x = a.x;
	this->y = a.y;
	this->z = a.z;
	cout << "Consturctor copy complete";
}

Vector::Vector(double a, double b, double c)
{
	x = a;
	y = b;
	z = c;
	cout << "costructor complete" << endl;
}

Vector::~Vector()
{
	cout << "destructor complete" << endl;
}

void Vector::Cin()
{
	int x1, y1, z1;
	cout << "¬ведите координаты вектора:";
	cin >> x1 >> y1 >> z1;
	this->x = x1;
	this->y = y1;
	this->z = z1;
}

Vector Vector::sum(Vector n)
{
	Vector q;
	q.x = this->x + n.x;
	q.y = this->y + n.y;
	q.z = this->z + n.z;
	return q;
}

void Vector::Cout()
{
	cout << "{" << this->x << ',' << this->y << ',' << this->z << '}' << endl;
}

double Vector::lenght()
{

	return sqrt(pow(this->x, 2) + pow(this->y, 2) + pow(this->z, 2));
}

double Vector::scalar(Vector q)
{
	double grad;
	cout << "¬ведите градусы между векторами:";
	cin >> grad;
	grad = grad * (3.14 / 180);
	return this->lenght() * q.lenght() * cos(grad);
}
Circle::Circle()
{
	R = 0;
	
}
Circle::Circle(Circle& a)
{
	this->R = a.R;
	cout << "costructor complete" << endl;
}
Circle::Circle(double a)
{
	R = a;
	cout << "costructor complete" << endl;
}
Circle::~Circle()
{
	cout << "destructor complete" << endl;
}
void Circle::Cin() {
	double R;
	cin >> R;
	this->R = R;
}

void Circle::Cout()
{
	cout << this->R << endl;
}

double Circle::square()
{
	return pow(this->R,2)*3.14;
}
