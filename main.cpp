#include <iostream>
using namespace std;

struct Node{
    float rating;
    string comment;
    Node *next;
};

Node* insertHead(Node *head, float numrate, string comment){
    Node* newNode = new Node;
    newNode->rating = numrate;
    newNode->comment = comment;

    if (head == nullptr){
        head = newNode;     
    }
    else{
        newNode->next = head;
        head = newNode;
    }
    return head;
}

Node* insertTail(Node *head, float numrate, string comment){



    
    return NULL;
}

int main(){
    Node *head = nullptr;
    int tmp;
    int choices;

    for (int i = 0; i < 3; i++){
    

    }



    return 0;
}

