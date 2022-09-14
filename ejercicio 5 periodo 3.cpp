#include <iostream>  
using namespace std;  

int main ()  

{  

int x;  

float pulgadas, kilo, distancia, peso;

cout<<"¿Desea convertir distancia o peso?"<<endl;

cout<<"Escriba 1 para distancia o 2 para peso"<<endl;

cin>>x;

switch (x)

{

 case 1:  
 cout<<"Ingrese la distancia en centimetros"<<endl;
 cin>>distancia;
 pulgadas = distancia / 2.54;
 cout<<"La distancia en pulgadas son: "<<pulgadas<<endl;
 break;

 case 2:  
 cout<<"Ingrese el peso en libras"<<endl;
 cin>>peso;
 kilo = peso * (1 / 2.21);
 cout<<"El peso en kilogramos es: "<<kilo<<endl;
 break;
 default:
 cout<<"Opcion no válida, ingrese 1 o 2";
}
return 0;
}
