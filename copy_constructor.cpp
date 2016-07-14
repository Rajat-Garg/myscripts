#include <iostream>
using namespace std;
class code{
	int x;
public:
	code(){}
	code(int a){
		x = a;
	}
	code(code &p){
		x = p.x;
	}
	void display(void){
		cout<<x;
	}
};
int main(){
	code A(100);
	code B(A);
	code C = A;
	C = 80;
	code D;
	D = 50;
	A = 60;
	D = A;
	A.display();
	B.display();
	C.display();
	D.display();
	return 0;
}
