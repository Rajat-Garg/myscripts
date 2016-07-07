/* Sum of two complex number*/
#include <iostream>
using namespace std;
class complex{
	float real;
	float img;
public:
	void setValue(float,float);
	friend complex sum(complex,complex);
};
void complex :: setValue(float r,float i){
	real = r;
	img = i;
}
complex sum(complex c1, complex c2){
	complex c3;
	c3.real = c1.real + c2.real;
	c3.img = c1.img + c2.img;
	cout<<"The complex number is"<<endl<<c3.real<<"+j"<<c3.img;
	return c3;
}
int main(){
	complex c1,c2,c3;
	c1.setValue(3.5,4.5);
	c2.setValue(4,5.6);
	c3.sum(c1,c2);
	return 0;
}
