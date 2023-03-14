#ifndef LIST_H
#define LIST_H

#include "node.h"

class list {
public:
    list();

    void pushFront(std::string data1, int data2);

    void pushBack(std::string data1, int data2);

    void popFront();

    void popBack();

    void mostrarlista() const;

    int busquedahab(std::string data1);

    std::string busquedanom(int data2);

    void eleccionhab( int data2);

    Node ordenlleg(std::string data1, int data2);
    Node ordenalf(std::string data1,int data2);
private:
    Node* cab;
    Node* col;
public:
    const Node getCab() const;

    void setCab(Node *cab);

    Node *getCol() const;

    void setCol(Node *col);

};

#endif
