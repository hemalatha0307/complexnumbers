#include <iostream>
using namespace std;

class Complex
{
private:
float real;
float imag;

public:
Complex(float r = 0, float i = 0):real(r),imag(i){};
void setComplex(void)
{
cout << "Enter the real and imaginary parts : ";
cin >> this->real;
cin >> this->imag;
}
Complex add(const Complex& c)
{
Complex comp;
comp.real = this->real + c.real;
comp.imag = this->imag + c.imag;
return comp;
}
Complex subtract(const Complex& c)
{
Complex comp;
comp.real = this->real - c.real;
comp.imag = this->imag - c.imag;
return comp;
}
Complex multiply(const Complex&c)
{
Complex comp;
comp.real=this->real*c.real;
comp.imag=this->imag*c.imag;
return comp;
}
void printComplex(void)
{
if ( this->imag >= 0 )
cout << "Complex number after operation: " << this->real << " + " << this->imag << "i"<<endl;
else
cout << "Complex number after operation: " << this->real << " " << this->imag<<"i"<<endl;
}
};

int main()
{
Complex a, b, c, d,e;

cout << "Setting first complex number " << endl;
a.setComplex();
cout << "Setting second complex number " << endl;
b.setComplex();
/* Adding two complex numbers */
cout << "Addition of a and b : " << endl;
c = a.add(b);
c.printComplex();
/* Subtracting two complex numbers */
cout << "Subtraction of a and b : " << endl;
d = a.subtract(b);
d.printComplex();

/* Multiplication two complex numbers */
cout << "Multiplication of a and b : " << endl;
e = a.multiply(b);
e.printComplex();
}
