#include<iostream>
using namespace std;

void swap(int &a, int &b) {
 int t = a;
 a = b;
 b = t;
}

int main() {
 int x,y;
 cout<<"Ingrese Valor 1 --> ";
 cin>>x;
 cout<<"Ingrese Valor 2 --> ";
 cin>>y;
 cout<<"\n";
 
 swap(x, y);
 cout << "Valor 1 --> " << x << endl; 
 cout << "Valor 2 --> " << y << endl; 
}
