#include <iostream>
using namespace std;
int count = 0;
class beta{
public:
	beta(){
		count++;
		cout<< "No. of objects created "<<count;
	}
	~beta(){
		cout<< "No. of objects destroyed "<<count;
		count--;
	}
};
int main(){
	cout<< "\nEnter into Main\n";
	beta b1,b2,b3,b4;

	{
		cout<<"In first bloack "<<endl;
		beta b5;
	}

	{
		cout<<"In second block "<<endl;
		beta b6;
	}

	cout<<"\n Exit from Main\n";
	return 0;
}
