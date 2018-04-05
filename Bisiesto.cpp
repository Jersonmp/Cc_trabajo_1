#include <iostream>
using namespace std;
int main(){
      int a;
      cout<<"Ingresa anho"<<endl;
      cin>>a;
     (a % 4 == 0 && (a % 100 != 0 || a % 400 == 0))? cout<<"El anho "<<a<<" si es bisiesto ":cout<<"El anho "<<a<<" No es bisiesto ";
     
      
}
