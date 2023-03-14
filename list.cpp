#include <iostream>
#include "list.h"

list::list(){
    cab = nullptr;
    col = nullptr;
}

void list::pushFront(std::string data1, int data2) {
    Node* newNode = createNode(data1, data2);

    if (cab == nullptr) {
        cab = newNode;
        col = newNode;
    }
    else {
        cab-> next = newNode;
        newNode->next = cab;
        cab = newNode;
    }
}

void list::pushBack(std::string data1, int data2) {
    Node *newNode = createNode(data1, data2);

    if (col == nullptr) {
        cab = newNode;
        col = newNode;
    }
    else {
        col->next = newNode;
        newNode->prev = col;
        col = newNode;
    }
}

void list::popFront() {
    if (cab == nullptr) {
        return;
    }

    Node* nodeToDelete = cab;

    if (cab == col) {
        cab = nullptr;
        col = nullptr;
    }
    else {
        cab = cab->next;
        cab->prev = nullptr;
    }

    delete nodeToDelete;
}

void list::popBack() {
    if (col == nullptr) {
        return;
    }

    Node* nodeToDelete = col;

    if (cab == col) {
        cab = nullptr;
        col = nullptr;
    }
    else {
        col = col->prev;
        col->next = nullptr;
    }

    delete nodeToDelete;
}

void list::mostrarlista() const {
    Node* currentNode = cab;

    while (currentNode != nullptr) {
        std::cout << "(" << currentNode->data1 << ", " << currentNode->data2 << ") ";
        currentNode = currentNode->next;
    }

    std::cout << std::endl;
}



int list::busquedahab(std::string data1) {
    Node *currentNode = cab;
    while (currentNode != nullptr){
        if(data1== currentNode->data1 ){
            std::cout<< "el huesped esta en la habitacion " <<currentNode->data2 ;
        }else{
            std::cout <<" no se encontro ese huesped";
        break;
        }

    currentNode = currentNode->next;
    }
}
std::string list::busquedanom(int data2) {
    Node *currentNode = cab;
    while(currentNode != nullptr){
        if(data2==currentNode->data2){
            std::cout<<"en la habitacion"<<data2<<"se encuentra"<<currentNode->data1;

        }else{
            std::cout << "no se encontro ese huesped";
            break;
        }
    currentNode->next;
    }
}

void list::eleccionhab( int data2) {
    std::string data1;
    Node *currentNode = cab;
    while( currentNode != NULL ){
        if(currentNode->data1.empty()){
            currentNode->data1=data1;
            currentNode->data2=data2;
            break;

        }else if(currentNode->prev=NULL){
            currentNode=currentNode->prev;
            currentNode->setData1(data1);
            currentNode->setData2(data2);


        }else if(currentNode->next=NULL) {
            currentNode = currentNode->next;
            currentNode->setData1(data1);
            currentNode->setData2(data2);
        }else{
            std::cout<<"ingrese otra habitacion\n";
            std::cin>>data2;

    currentNode = currentNode->next;
        }

}

    }
    Node list::ordenlleg(std::string data1, int data2) {


            Node *newNode = createNode(data1, data2);

            if (cab == nullptr) {
                cab = newNode;
                col = newNode;
            } else {
                col->next = newNode;
                newNode->prev = col;
                col = newNode;
            }
        }
Node list::ordenalf(std::string data1, int data2) {
    Node *newNode= createNode(data1,data2);
    Node *aux=newNode->next;
    while(newNode->next!=NULL) {
        if (data1.starts_with("a")) {
            newNode->data1 = data1;
            newNode->data2 = data2;
            break;
        } else {
            newNode->data1.compare(aux->data1);
        if (newNode->data1>aux->data1){

        }}

        newNode = newNode->next;
    }
}

void list::setCab(Node *cab) {
    list::cab = cab;
}

Node *list::getCol() const {
    return col;
}

void list::setCol(Node *col) {
    list::col = col;
}
