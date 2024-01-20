#include <bits/stdc++.h>
using namespace std;

#define ll      long long
#define pb      push_back
#define f       first
#define s       second
#define len(A)  sizeof(A) / sizeof(A[0])



// NOTE :- O(nlog(n)) time and constant space
// it's possible to do in linear time but then you'll have to use hashmap
// it's NOT possible to have O(1) time and space
bool has_2_Sum(int A[], int arr_size, int sum){
    int l, r;
    sort(A, A + arr_size);
 
    l = 0;
    r = arr_size - 1;

    // EUREKA MOMENT !!
    // We can do better by using a MIDDLE POINTER and comparing middle pointer's sum ;
    // if a  A[l] + A[r] < sum  we increment l++ and compare with NEXT LOWER ELEMET

    // if the required l pair for r is in the second half of the array then it will take a long time for l to get there;
    // comparing with middle number makes it really easy 
    while (l < r) {
        if (A[l] + A[r] == sum) return 1;
        else if (A[l] + A[r] < sum) l++;
        else r--; // A[l] + A[r] > sum
    }
    return 0;
}


// this triplets mean that same index can be chosen AGAIN
// with replacement 
int* has_triplets_with_sum_X(int a[], int x, int n){
    sort(a,a+n);
    cout << "sorted :- " ;
    for(int i=0;i<n;i++)cout << a[i] << " ";
    cout << "\n";

    int   l = 0, r = n - 1;
    for(int i=0; i<= n;i++){
        cout << "--------------- iteration " << i << " and checking " << a[i] <<"\n" ;
        int i_complement = x - a[i] ;
        cout << i_complement << "\n" ;
        l = 0, r = n - 1;
        while (l < r) {
            cout << a[l] << " + " << a[r] << " = " << a[l] + a[r] << "\n" ;
            if (a[l] + a[r] == i_complement) { 
                int* result = new int[3]{a[i], a[l], a[r]}; 
                return result; 
            }
            else if (a[l] + a[r] < i_complement) l++;
            else r--; // A[l] + A[r] > x 
        }
    }
    return nullptr;
}


// 何様　ですか？
// 誰ですか　？
// 私　CP　やります　；
// 日本語　わかりません　；
//　でわ　、始めましょか　？

int main(){
    int a[] = {2,10,3,4,5,1,100,34,3,3,0};
    int x = 41;

    int n = len(a);
    cout << "original- " ;
    for(int i=0;i<n;i++)cout << a[i] << " ";
    cout << "\n";

    int* b = has_triplets_with_sum_X(a,x,n);

    // if(!b)  and if(b != nullptr)  are very different ;
    // nullptr is not NULL 
    // so if(!b) means you'd be allowing to read nullptr[0] nullptr[1] nullptr[2] 
    if(b!=nullptr)cout << "\n\n" << b[0] << " + " << b[1] << " + " << b[2] << " = " << x << "\n" ; 
    else cout << "NOT POSSIBLE\n" ;
    return 0;
}