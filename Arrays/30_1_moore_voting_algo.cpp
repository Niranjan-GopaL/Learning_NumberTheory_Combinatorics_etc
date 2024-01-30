#include <iostream>
#include <random>
using namespace std;

#define len(A)  sizeof(A) / sizeof(A[0])
#define pb push_back 

/*   MAJORITY ELEM ===> occurs MORE THAN `n/2` times 

prints awesome output !!
```
array -  1  1  1  2  2  2  2  5  2  7  2  1  
count  - 1  2  3  2  1  0  1  0  1  0  1  0  
result - 1  1  1  1  1  1  2  2  2  2  2  2
``` 
*/
int get_majority_elem(int *a, int n){
    if(a == nullptr)return -1;

    vector<int> res_vec,count_vec;

    int res = a[0]; int count = 1;
    res_vec.pb(res); count_vec.pb(count);

    for(int i=1;i<n;i++ ){
        if(a[i] == res )count++ ;
        else{
            if(!count){ res = a[i];count = 1; }
            else count-- ;
        }
        res_vec.pb(res); count_vec.pb(count);
    }

    cout << "array -  " ;
    for(int i = 0 ; i < n ; i++) cout << a[i] << "  " ;
    cout << "\ncount  - " ;

    for(int i = 0 ; i < n ; i++) cout << count_vec[i] << "  " ;
    cout << "\nresult - " ;

    for(int i = 0 ; i < n ; i++) cout << res_vec[i] << "  " ;
    cout << "\n\n\n\n" ;

    return res;
}


// all you need to know
int get_majority_elem_(int *a, int n){
    int res=0, c=0;
    for(int i=0; i<n; i++){
        if(!c) res = a[i];
        c += (res == a[i] ? 1 : -1) ;
    }
    return res;

/* My way and IT ALWAYS require soo much clutter 
    int res = a[0], c = 1;
    for(int i=1; i< n; i++){
        if( a[i] == res)c++;
        else{
            if(!c){res = a[i]; c = 1;}
            else c-- ;
    }}*/   
}


// ### Find all elements that appear more than n/k times
// Harder varient using same idea
// O(N*K) time complexity and   O(k) space   (for small k this is very efficient)
int get_n_k_majority_elem(int* a, int n, int k){

}
// A structure to store an element and its current count
struct eleCount {
    int e; // Element
    int c; // Count
};

void moreThanNdK(int arr[], int n, int k)
{
    // k must be greater than 1 to get some output
    if (k < 2)
        return;
 
    /* Step 1: Create a temporary array (contains element and count) of size k-1. Initialize count of all elements as 0 */
    struct eleCount temp[k - 1];
    for (int i = 0; i < k - 1; i++)
        temp[i].c = 0;
 
    /* Step 2: Process all elements of input array */
    for (int i = 0; i < n; i++) {
        int j;
        /* If arr[i] is already present in the element count array, 
        then increment its count */
        for (j = 0; j < k - 1; j++) {
            if (temp[j].e == arr[i]) { temp[j].c += 1; break; }
        }
 
        /* If arr[i] is not present in temp[] */
        if (j == k - 1) {
            int l;
            /* If there is position available in temp[], then place arr[i] in the first available position and set count as 1*/
            for (l = 0; l < k - 1; l++) {
                if (temp[l].c == 0) {temp[l].e = arr[i]; temp[l].c = 1; break; }
            }
            /* If all the position in the temp[] are filled, then decrease count of every element by 1 */
            if (l == k - 1) for (l = 0; l < k - 1; l++) temp[l].c -= 1;
        }
    }
 
    /*Step 3: Check actual counts of potential candidates in temp[]*/
    for (int i = 0; i < k - 1; i++) {
        // Calculate actual count of elements
        int ac = 0; // actual count
        for (int j = 0; j < n; j++)
            if (arr[j] == temp[i].e)
                ac++;
 
        // If actual count is more than n/k,
        // then print it
        if (ac > n / k)
            cout << "Number:" << temp[i].e
                 << " Count:" << ac << "\n";
    }
}
 




int main(){
    /* This generates array of random numbers; */
    /* We want a garuntee that the array ALWAYS HAVE A MAJORITY elem*/
    // random_device rd;
    // mt19937 gen(rd());
    // uniform_int_distribution<> dis(1, 9);
    // int a[n];
    // for (int i = 0; i < n; ++i) a[i] = dis(rd) ;    

    int inp[] = { 0,1,  0,2,    2,2,    2,1,    2,7,    2,1} ;
    int n = len(inp);
    // int ans = get_majority_elem(inp, n) ;
    int ans = get_majority_elem_(inp,n) ;
    cout << "Answer is = " << ans << "\n" ;
    return 0;
}