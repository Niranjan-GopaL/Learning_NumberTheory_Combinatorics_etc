#include <bits/stdc++.h>
using namespace std;

typedef long long ll ;
#define pb push_back

/*

BIGGEST LESSON ?
=> EVEN IF YOU DON'T NEED REST OF THE INPUT ARRAY ELEMENTS TO TELL THE ANSWER YOU STILL NEED TO TAKE THEM IN 
    ( that commented `break` )
=> REINITIALISE FOR EACH TEST CASE !!
=> reluctance to use a vector for 2 elements !!
*/



int arr[100];
void simple_solution(){
    // int c1 = c2 = 10  valid IN C++ ? NO

    // 1. check if distinct elements are 1 or 2
    // 2. check if c1-c2 is 0 or 1
    //  ONLY THEN  can the array be made good

    int t,n;
    cin >> t;
    while(t--){

        int seen1,seen2,started=0; 
        int c1=0,c2=0;
        int no_flag=0;

        cin >> n;
        for(int i=0;i<n;i++){
            cin >> arr[i]; 
            if( started ){ 
                if( started==1 && arr[i] != seen1 ) { seen2=arr[i]; started++; }
                else{
                    if( arr[i] != seen1 && arr[i] != seen2 ) { no_flag = 1;  /*break ;*/  } 
                    if(arr[i]==seen1)c1++; else c2++ ; 
                } 
            } 
            else{ seen1 = arr[i] ;started++ ; }  
        }

        if( no_flag ){ cout << "NO\n"; continue; }
        if( started == 1 ){ cout<<"YES\n"; continue; }

        if(abs(c1-c2)<=1){ cout<<"YES\n"; }
        else { cout << "NO\n";}
    }
}


int a[100];
void old_solution(){
    int t,n,x,y; cin >> t;
    while(t--){
        cin >> n; // either c1 == n or c1 == n/2 or n/2 + 1 or c2
        int cnt1 = 0, cnt2 = 0;

        // if n == even
        if(n%2==0){
            for(int i=0;i<n;i++) cin >> a[i] ;

            int flag = 0, fn = 0;
            // cnt1 count of first elem
            x=a[0]; cnt1++; 
            for( int i=1; i<n; i++){
                if(a[i]==x)cnt1++;
                else{
                    if(!flag){ y=a[i];cnt2++;flag=1;} // first time seeing this 
                    else{
                        if(a[i] == y)cnt2++;
                        else { fn = 1;break; }
                }}
            }
            if(fn){cout << "NO\n" ;}
            else{
                if(cnt1 == n || (cnt1 == cnt2) )cout << "YES\n" ;
                else cout << "NO\n";
            }
        }else{
            for(int i=0;i<n;i++) cin >> a[i] ;
             int flag = 0, fn = 0;

            // cnt1 count of first elem
            x = a[0]; cnt1++; 
            for( int i=1; i<n; i++){
                if(a[i]==x)cnt1++;
                else{
                    if(!flag){y=a[i];cnt2++;flag=1;} // first time seeing this 
                    else{
                        if(a[i] == y)cnt2++;
                        else { fn = 1;break; }
                }}
            }
            if(fn)cout << "NO\n" ;
            else{
                if(cnt1 == n || abs(cnt1-cnt2)<=1 )cout << "YES\n" ;
                else cout << "NO\n";
                }
        }
    }
}




int main(){
    // better to uncommet when you are debugging
    ios::sync_with_stdio(0); cin.tie(0);
    // simple_solution();
    old_solution();
}

/*
5
2
8 9
3
1 1 2
4
1 1 4 5
5
2 3 3 3 3
4
100000 100000 100000 100000
*/