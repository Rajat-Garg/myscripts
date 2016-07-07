#include <iostream>
using namespace std;
class Sample{
	int number;
public:
	void setNum(int);
	friend int multi(Sample);
};
void Sample :: setNum(int a){
	number = a;
}
int multi(Sample k){
	return 5*k.number;
}
int main(){
	Sample s;
	s.setNum(6);
	cout<<multi(s);
	return 0;
}