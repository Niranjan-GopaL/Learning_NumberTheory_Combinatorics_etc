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
    int ans = get_majority_elem(inp, n) ;
    cout << "Answer is = " << ans << "\n" ;
    return 0;
}