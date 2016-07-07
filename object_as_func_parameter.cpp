#include <iostream>
using namespace std;
class object{
	int hours;
	int minutes;
public:
	void getTime(int , int);
	int addTime(object,object);
};
void object :: getTime(int a, int b){
	hours = a;
	minutes = b;
}
int object :: addTime(object o1,object o2){
	minutes = o1.minutes + o2.minutes;
	hours = minutes/60;
	minutes %= 60;
	hours += o1.hours + o2.hours;
	cout<<"************************"<<endl<<hours<<":"<<minutes<<endl<<"************************";
	return 1;
}
int main(){
	object t1,t2;
	t1.getTime(2,43);
	t2.getTime(3,40);

	object t3;
	t3.addTime(t1,t2);
}