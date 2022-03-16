#include<iostream>
#include<conio.h>


using namespace std;

struct Persona{
	char nombre[20];
	int edad;
}persona1;
int main(){
	
	cout<<"Nombre: ";
	cin.getline(persona1.nombre,20,'\n');
	cout<<"Edad: ";
	cin>>persona1.edad;
cout<<"Nombre1: "<<persona1.nombre;
cout<<" Edad1: "<<persona1.edad;


	
	getch();
	return 0;
}
