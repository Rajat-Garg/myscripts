/*Swapping the private data using friend function*/
#include <iostream>
using namespace std;
class abc;
class xyz{
	int a;
public:
	void setValue(int x);
	friend int swap(abc,xyz);
};
class abc
{
	int b;
public:
	void setValue(int x);
	friend int swap(abc,xyz);
};
void abc :: setValue(int x){
	b = x;
}
void xyz :: setValue(int x){
	a = x;
}
int swap(abc a,xyz x){
	int temp = a.b;
	a.b = x.a;
	x.a = temp;
	cout<<"a = "<<x.a<<" b = "<<a.b;
	return 0;
}
int main(){
	abc abc;
	xyz xyz;
	abc.setValue(10);
	xyz.setValue(20);
	swap(abc,xyz);
	return 0;
}