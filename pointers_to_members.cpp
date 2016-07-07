#include <iostream>
using namespace std;
class Demo{
	int x;
	int y;
public:
	void setData(int a,int b){
		x = a;
		y = b;
	}
	friend int sum(Demo);
};
int sum(Demo d){
	int Demo ::* px = &Demo :: x;
	int Demo ::* py = &Demo :: y;
	Demo *pd = d;
	int S = d.*px + pd ->* py;
	return S;
}
int main(){
	Demo de;
	void (Demo ::* pf)(int,int) = &Demo :: setData;
	(de.*pf)(10,20);
	cout<<sum(de)<<endl;

	Demo *dd = &de;
	(dd->*pf)(10,20);
	cout<<sum(de)<<endl;

	return 0;
}