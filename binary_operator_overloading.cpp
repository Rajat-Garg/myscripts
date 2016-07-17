#include <iostream>
using namespace std;
class addition{
    int a;
public:
    addition(){}
    addition(int x){
        a = x;
    }
    void operator+(addition);
};
void addition :: operator+(addition b){
    cout << a + b.a;
}
int main(){
    addition a1(5);
    addition a2(6);
    addition a3;
    a1 + a2;
    return 0;
}