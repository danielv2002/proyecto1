#ifndef NODE_H
#define NODE_H

struct Node {
   std::string data1;
    int data2;
    Node* prev;
    Node* next;

    const std::string &getData1() const;

    void setData1(const std::string &data1);

    int getData2() const;

    void setData2(int data2);

    Node *getPrev() const;

    void setPrev(Node *prev);

    Node *getNext() const;

    void setNext(Node *next);


};

Node* createNode(std::string data1, int data2);

#endif
