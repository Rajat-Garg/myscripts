#include <iostream>
using namespace std;
class num2;
class num1{
    int a=5;
    friend int max(num1,num2);
};
class num2{
	int b=6;
	friend int max(num1,num2);
};
int max(num1 n1,num2 n2){
 if(n1.a>n2.b) 
 	return n1.a;
 else
 	return n2.b;
}
int main(){
	num1 aa;
	num2 bb;
	cout<<max(aa,bb);
	return 0;
}