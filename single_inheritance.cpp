#include <iostream>
using namespace std;
class Base{
	int a;
public:
	int b;
	void get_ab();
	int get_a();
	void show_a();
};
class Derived : public Base{
	int c;
public:
	void mul();
	void display();
};
void Base :: get_ab(){
	a = 5; b = 10; 
}
int Base :: get_a(){
	return a;
}
void Base :: show_a(){
	cout << a;
}
void Derived :: mul(){
	c = b * get_a();
}
void Derived :: display(){
	cout<< get_a() << b << c;
}
int main(){
	Derived d;
	d.get_ab();
	d.show_a();
	d.mul();
	d.display();
	return 0;
}
