#include<iostream>
using namespace std; 

int main () 
{ 
 float salario, aumento;
 char NuevoSalario;
cout<<"Ingrese (a, b, c, d) seg�n sea su caso:"<<endl;
cout<<"\t a) De 0 a $500"<<endl;
cout<<"\t b) M�s de $500 a $1000"<<endl;
cout<<"\t c) M�s de $1000 a $1500"<<endl;
cout<<"\t d) Mas de $1500"<<endl;
cin>>NuevoSalario;
cout<<"Ingrese su salario actual"<<endl;
cin>>salario;

 switch (NuevoSalario)
 {
  case 'a': case 'A': 
  aumento = salario + (salario * 0.2);
  cout<<"Su nuevo salario ser�: "<<aumento<<endl;
  break;
  case 'b': case 'B': 
  aumento = salario + (salario * 0.1);
  cout<<"Su nuevo salario ser�: "<<aumento<<endl;
  break;
  case 'c': case 'C': 
  aumento = salario + (salario * 0.05);
  cout<<"Su nuevo salario ser�: "<<aumento<<endl;
  break;
  case 'd': case 'D': 
  aumento = salario + (salario * 0.03);
  cout<<"Su nuevo salario ser�: "<<aumento<<endl;
  break;
  default:
  cout<<"Error.";
 }
 
return 0;
}

