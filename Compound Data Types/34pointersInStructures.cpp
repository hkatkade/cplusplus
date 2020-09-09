#include<iostream>
using namespace std;

struct Node{
    int data;
    Node * next;
};

Node * createNode(int data){
    Node * newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

int main(){
    int n,i,data;
    cout << "Enter number of nodes: ";
    cin >> n;

    Node head = Node();
    cout << "Enter data for node 1" << endl;
    cin >> data;
    head.data = data;
    head.next = NULL;
    Node * current = &head;
    for(i=0; i<n-1;i++){
        Node newNode = Node();
        cout << "Enter data for node " << i + 2 << endl;
        cin >> newNode.data;
        current->next = &newNode;
        current = current->next;
    }
    current = &head;
    for(int i=0; i<n; i++){
        cout << current->data << endl;
        current = current->next;
    }
    return 0;
}