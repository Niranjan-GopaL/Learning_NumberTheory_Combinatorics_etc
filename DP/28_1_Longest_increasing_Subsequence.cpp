#include <iostream>
#include <random>
using namespace std;

#define n 7
int LIS(int a[]){
    int lis[n];
    for(int i=0; i<n;i++) lis[i]=1 ;

    for(int i=1;i<n;i++)
    for(int j=0;j<i;j++)
        if(a[i] > a[j] && lis[i] <= lis[j]+1 )
            lis[i] = lis[j]+ 1;
        
    for(int i=0; i<n;i++) cout << lis[i] << " " ;
    
    int m=1;
    for(int i=0;i<n;i++)if( lis[i] > m) m=lis[i];
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