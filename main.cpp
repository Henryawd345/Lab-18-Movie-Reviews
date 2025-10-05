#include <iostream>
using namespace std;

struct Node{
    float rating;
    string comment;
    Node *next;
};

Node* insertHead(Node *head, float number, string comment){
    Node *head = nullptr;

    for (int i = 0; i < 3; i++){
        Node *newVal = new Node;

        if (!head) {
            head = newVal;
            newVal->next = nullptr;
        }
        else {
            newVal->next = head;
            head = newVal;
        }
    }
    return head;
}

Node* insertTail(){

    return NULL;
}

int main(){


    return 0;
}

