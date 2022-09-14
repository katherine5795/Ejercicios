#include <iostream>
using namespace std;

float convertirKilometro(float milla){
	double kilometro = milla *1.60934;
return kilometro; 
}

int main(){
double milla; 
cout <<"Ingrese la cantidad en millas: " <<endl;
cin >> milla;
cout << "La cantidd en kilometros es: " << convertirKilometro(milla);
return 0;
}
