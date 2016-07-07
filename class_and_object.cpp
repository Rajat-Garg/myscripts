#include <iostream>

using namespace std;

class item{
        int number;
    public:
        int cost;
        int getdata(int);
        void put();
};
int item :: getdata(int a){
    number = a;
}
inline void item :: put(){
    cout<<number<<endl;
    cout<<cost<<endl;
}
int main(){
    item x;
    x.getdata(5);
    x.cost = 10;
    x.put();
    return 0;
}