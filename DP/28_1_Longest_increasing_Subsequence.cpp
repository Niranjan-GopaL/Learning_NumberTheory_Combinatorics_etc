#include <iostream>
#include <random>
using namespace std;

#define n 10
//  length of longest increasing subsequence
int LIS(int a[]){
    int d[n];
    for(int i=0; i<n;i++) d[i]=1 ;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i] > a[j] && d[j] <= d[i+1])
                d[j] = d[i]+ 1;
        }
    }
    for(int i=0; i<n;i++) cout << d[i] << " " ;
    
    int m=0;
    for(int i=0;i<n;i++)if( d[i] >= d[m])m=i;
    return m;
}


int main(){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(1, 100);
    int a[n];
    for (int i = 0; i < n; ++i) a[i] = dis(rd) ;    
    
    cout << "Randome integer array \n"  ;
    for (int i = 0; i < n; ++i) cout << a[i] << " ";    
    cout << "\n" ;

    int ans = LIS(a);
    cout << "\nAnswer = " << ans ;
    return 0;
}