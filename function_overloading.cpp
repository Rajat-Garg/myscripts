#include <iostream.h>
#include <conio.h>
using namespace std;
int area(int);
int area(int,int);
int area(int,int,int);
int main(){
	cout<<area(5)<<endl;
	cout<<area(5,4)<<endl;
	cout<<area(6,4,2)<<endl;
}
int area(int a){
	return a * a;
}
int area(int length,int breadth){
	return length * breadth;
}
int area(int base,int height,int d=0.5){
	return base*height*d;
}