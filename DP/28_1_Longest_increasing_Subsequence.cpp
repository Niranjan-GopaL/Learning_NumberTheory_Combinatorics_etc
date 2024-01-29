#include <iostream>
#include <random>
using namespace std;

#define n 9
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


// Look at this code for UNDERSTANDING what we are doing
int LIS_for_understanding_purpose(int a[]){
    int LIS_ending_at_i[n];
    for(int i=0; i<n;i++) LIS_ending_at_i[i]=1 ;

    int LIS_including_j_to_i;

    for(int i=1; i <= n-1; i++){
        for(int j=0; j <= i-1; j++){
            if(a[i] > a[j]){
                LIS_including_j_to_i = LIS_ending_at_i[j] + 1;
                LIS_ending_at_i[i] = max(LIS_ending_at_i[i], LIS_ending_at_i[j] + 1 );
            }
        }
    }

    for(int i=0; i<n;i++) cout << LIS_ending_at_i[i] << " " ;

    int m=1;
    for(int i=0;i<n;i++)if( LIS_ending_at_i[i] > m) m=LIS_ending_at_i[i];
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

    int ans = LIS_for_understanding_purpose(a);
    cout << "\nAnswer = " << ans ;
    return 0;
}