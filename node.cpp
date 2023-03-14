#include <string>
#include "node.h"

Node* createNode(std::string data1, int data2) {
    Node* newNode = new Node;
    newNode->data1 = data1;
    newNode->data2 = data2;
    newNode->prev = nullptr;
    newNode->next = nullptr;
    return newNode;
}

const std::string &Node::getData1() const {
    return data1;
}

void Node::setData1(const std::string &data1) {
    Node::data1 = data1;
}

int Node::getData2() const {
    return data2;
}

void Node::setData2(int data2) {
    Node::data2 = data2;
}

Node *Node::getPrev() const {
    return prev;
}

void Node::setPrev(Node *prev) {
    Node::prev = prev;
}

Node *Node::getNext() const {
    return next;
}

void Node::setNext(Node *next) {
    Node::next = next;
}
