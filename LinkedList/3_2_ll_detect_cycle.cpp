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
    // Node(int value) : data(value), next(nullptr) {}
    Node(int data) { this->data = data; next = nullptr; }
};


bool is_cyclic(Node* head){
    Node *slow = head, *fast = head;
    while(fast != nullptr){
        cout << "SLOW : " << slow->data << "  FAST : "<< fast->data << "\n" ;
        slow = slow->next ;
        fast = fast->next->next ;
        if(slow == fast ) return true;
    }
    return false;
}



void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << "\n";
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = new Node(6);
    head->next->next->next->next->next->next = head;

    // printList(head);
    bool ans = is_cyclic(head);
    cout << "\nAnswer : " << ans << "\n" ;

    return 0;
}