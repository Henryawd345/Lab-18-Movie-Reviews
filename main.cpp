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
    int tmpRate;
    string tmpComm;
    string anoReview;
    int choices;

    cout<<"Which linked list method should we use?"<<"\n";
    cout<<"[1] New nodes are added at the head of the linked list"<<"\n";
    cout<<"[2] New nodes are added at the tail of the linked list"<<"\n";
    cout<<"Choices: ";
    cin>> choices ;
    cin.ignore();
    
    while (true)
    {
        cout<<"Enter review rating 0-5: ";
        cin>>tmpRate;
        cin.ignore();

        cout<<"Enter review comments: ";
        getline(cin, tmpComm);
        

        if (choices == 1){
            head = insertHead(head, tmpRate, tmpComm);
        }else if (choices == 2){
            head = insertTail(head, tmpRate, tmpComm);
        }else{
            cout<< "Please input a valid input ";
        }

        cout<<"Enter another review? Y/N: ";
        getline(cin, anoReview);
        if ((anoReview == "y") || (anoReview == "Y")){
            continue;
        }else if((anoReview == "n") || (anoReview == "N")){
            break;
        }else{
            cout<< "try input the correct one" << "\n";
            break;
        }
    }
    print(head);

    return 0;
}

