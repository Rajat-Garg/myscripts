#include <iostream>
using namespace std;
class Complex{
	float x,y;
public:
	Complex(){}
	Complex(float k){
		x = y = k;
	}
	Complex(float real, float img){
		x = real;
		y = img;
	}
	friend Complex sum(Complex c1, Complex c2);
	friend void show(Complex);
};
Complex sum(Complex c1, Complex c2){
	Complex c3;
	c3.x = c1.x + c2.x;
	c3.y = c1.y + c2.y;
	return c3;
}
void show(Complex c4){
	cout<<c4.x<<c4.y;
}
int main(){
	Complex c1(1.5,1.5);
	Complex c2(2.6);
	Complex c;
	c = sum(c1,c2);
	show(c);
	return 0;
}