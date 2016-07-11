#include <iostream.h>
using namespace std;
class Constructor{
	int a;
	float b;
public:
	Constructor();
	void putdata();
};
Constructor :: Constructor(){
	int num;
	cin>> num;
	int num2;
	cin>> num2;
	a = num;
	b = num2;
}
void Constructor :: putdata(){
	cout<< a << b;
}
int main(){
	Constructor c;
	c.putdata();
	return 0;
}
