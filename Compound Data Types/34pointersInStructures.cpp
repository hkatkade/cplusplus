#include<iostream>
using namespace std;

struct Node{
    int data;
    Node * next;
};

int main(){
    int n,i,data;
    cout << "Enter number of nodes: ";
    cin >> n;

    Node * head;
    cout << "Enter data for node 1" << endl;
    cin >> data;
    head->data = data;
    Node * current = head;
    for(i=0; i<n-1;i++){
        Node * newNode;
        cout << "Enter data for node " << i + 2 << endl;
        cin >> newNode->data;
        current->next = newNode;
        current = current->next;
    }
    current = head;
    for(int i=0; i<n; i++){
        cout << current->data << endl;
    }
    return 0;
}