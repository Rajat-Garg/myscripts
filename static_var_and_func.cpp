#include <iostream>
using namespace std;
class object_count{
	static int count; // static object
public:
	static void objCount(); //static function
};
int object_count :: count;
void object_count :: objCount(){
    count++;
	cout<< "No of object " <<count <<endl;
}
int main(){
	object_count ob;
	ob.objCount();
	return 0;
}