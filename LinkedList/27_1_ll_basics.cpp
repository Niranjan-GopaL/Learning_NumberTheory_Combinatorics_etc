#include <bits/stdc++.h>
using namespace std;

typedef long long     ll ;      
typedef vector<int>    vi ;
typedef pair<int,int> pi ;

#define pb      push_back
#define mp      make_pair
#define f       first
#define s       second
#define len(A)  sizeof(A) / sizeof(A[0])

template <typename T> const T& max(const T& pA, const T& pB, const T& pC) { 
    return max(pA, max(pB, pC)); 
}



/* 
nullptr is the preferred way to represent a null pointer, and it was introduced in C++11. 
It provides type safety and is INTENDED TO BE USED IN PLACE OF NULL */
struct Node {
    int data; Node* next;
    Node(int value) : data(value), next(nullptr) {}
    Node(int data) { this->data = data; next = nullptr; }
};


Node* reverse_ll_Iterative(Node* head) {
    Node* prev = nullptr; Node* current = head; Node* next = nullptr;

    while (current != nullptr) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev; return head;
}

Node* reverse_ll_recursive(Node* head) {
    if (head == nullptr || head->next == nullptr)  return head;

    Node* rest = reverse_ll_recursive(head->next);
    head->next->next = head;
    head->next = nullptr;

    return rest;
}



void printList(Node* head) {
    while (head != nullptr) {
        std::cout << head->data << " ";
        head = head->next;
    }
    std::cout << std::endl;
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    std::cout << "Original List: ";
    printList(head);

    head = reverse_ll_Iterative(head);
    head = reverse_ll_recursive(head);

    std::cout << "Reversed List: ";
    printList(head);

    return 0;
}