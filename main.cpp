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
    Node* newNode = new Node;
    newNode->rating = numrate;
    newNode->comment = comment;
    

    if (head == nullptr){
        head = newNode;     
    }
    else{
        Node* curr = head;
        while (curr->next != nullptr)
        {
            curr = curr->next;
        }
            curr->next = newNode;
    }
    return head;
}

void print(Node *head){
    Node* curr = head;
    float sum = 0;
    int i = 0;

    while (curr->next != nullptr)
        {
            cout<<"review #" << i+1 <<":  " << curr->rating <<":  " <<curr->comment <<"\n";
            i++;
            sum += curr->rating;
            curr = curr->next;
        }


}

int main(){
    Node *head = nullptr;
    int tmp;
    int choices;

    cout<<"Which linked list method should we use?"<<"\n";
    cout<<"[1] New nodes are added at the head of the linked list"<<"\n";
    cout<<"[2] New nodes are added at the tail of the linked list"<<"\n";
    cout<<"Choices: ";
    cin>> choices ;
    cin.ignore();


    for (int i = 0; i < 3; i++){
    

    }



    return 0;
}

