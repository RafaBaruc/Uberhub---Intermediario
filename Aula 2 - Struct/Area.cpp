#include <bits/stdc++.h>

using namespace std;

typedef struct {
	double base, altura;
	double area() {
		return (base * altura)/2;
	}
} Triangulo;

typedef struct {
	double raio;
	double area() {
		 return 3.14159 * (raio * raio);
	}
} Circulo;

typedef struct {
	double base1, base2, altura;
	double area() {
		return ((base1 + base2) * altura)/2;
	}
} Trapezio;

typedef struct {
	double lado;
	double area() {
		return lado * lado;
	}
} Quadrado;

typedef struct {
	double base, altura;
	double area() {
		return base * altura;
	}
} Retangulo;

int main()
{
	double a, b, c;
	cin >> a >> b >> c;
	
	Triangulo tri;
	tri.base = a;
	tri.altura = c;
	cout << "TRIANGULO: " << fixed << setprecision(3) << tri.area() << endl;
	
	Circulo cir;
	cir.raio = c;
	cout << "CIRCULO: " << fixed << setprecision(3) << cir.area() << endl;
	
	Trapezio tra;
	tra.base1 = a;
	tra.base2 = b;
	tra.altura = c;
	cout << "TRAPEZIO: " << fixed << setprecision(3) << tra.area() << endl;
	
	Quadrado qua;
	qua.lado = b;
	cout << "QUADRADO: " << fixed << setprecision(3) << qua.area() << endl;
	
	Retangulo ret;
	ret.base = a;
	ret.altura = b;
	cout << "RETANGULO: " << fixed << setprecision(3) << ret.area() << endl;
	

	return 0;
}