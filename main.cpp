#include <iostream>
#include <fstream>
#include "list.h"
#include "node.h"
using namespace std;
int main() {
    int a;
 cout<<"bienvenido que desea hacer: \n";
 cout<<"1-ingresar un nuevo huesped \n";
 cout<<"2-buscar usuario por nombre  \n";
 cout<<"3-buscar usuario por habitacion \n";
 cout<<"4-ver lista de huespedes en orden alfabetico \n";
 cout<< "5-ver lista de huespedes en orden de llegada \n";
 cout<<"6-eleccion de habitacion \n";
 cin >>a;
    std::string nom;
    int hab;
    list list;
    ofstream archivo;
 if(a==1) {

     cout << "ingrese el nombre\n";
     cin >> nom;
     cout << "ingrese la habitacion\n";
     cin >> hab;
     list.ordenlleg(nom, hab);
     cout << "el usuario ha sido guardado correctamente\n";
list.mostrarlista();

 }else if(a==2) {
     cout << "ingrese el nombre\n";
     cin >> nom;
     list.busquedahab(nom);
 }else if(a==3) {
     cout << "ingrese la habitacion\n";
     cin >> hab;
     list.busquedanom(hab);
 }else if(a==4) {
 }else if(a==5) {

     archivo.open("hotel.txt", ios::out);
     if (archivo.fail()) {
         cout << "el esta vacio";

     } else {
         Node *temp = new Node();
         list.getCab();
         *temp = list.getCab();
         while (temp != NULL) {

             archivo << "nombre" << nom;
             archivo << "habitacion" << hab;
             temp = temp->next;


         }
     }
 }else if(a==6) {


         list.eleccionhab(hab);
     }else{
     cout<<"accion invalida\n";
 }

}

