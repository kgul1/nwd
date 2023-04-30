#include <iostream>
#include <numeric>



using namespace std;
int  czy_pierwsza(int a ,int b,int& c){
    if( a && b <=1){
        return false;
    }

    c = gcd(a,b);
    return c;
}
int main() {

    int a,b,c;
    cout<<"podaj a: ";
    cin>>a;
    cout<<"podaj b: ";
    cin>>b;
    if( czy_pierwsza(a,b,c)){
        cout<<"najwiekszy wspolny dzielnik to: "<<c;
    }
    else {
        cout<<"nie udalo sie policzyc nakwiekszego dzielnika";
    }





    return 0;
}

