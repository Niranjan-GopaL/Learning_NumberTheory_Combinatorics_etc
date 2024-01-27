// O(2^n)
int fib(int n){
    if(n<=1)return n;
    return fib(n-1) + fib(n-2) ;
}

/*
Use DP in two cases :-
1. Overlapping sub-problem property
2. Optimal Sub-structure
*/


/*     Overlapping Sub-problem property
              fib(5)
      fib(4)          **fib(3)**    
**fib(3)**   fib(2)

we are calculating fib(3) unnecessarily ;
This implementation simply does ALREADY DONE COMPUTING AGAIN !!
*/   

//  a problem has a recursive substructure ----> Optimal Sub-structure 
// discussed later


/*
Two methodes to store the results in memory
1. Memoisation  (Top-Down)
2. Tabulation   (Bottom-up)
*/


int look_up[__INT32_MAX__] = {0};
/* Magic of Memoisation */
int fib_memo(int n){
    if(!look_up[n]){
            if(n<=1) look_up[n]=n;
            else look_up[n] = fib_memo(n-1) + fib_memo(n-2) ;}
    return look_up[n];
}

/* Simplicity of Tabulation */
int fib_tabulation(int n){
    int look_up[__INT32_MAX__] = {0} ;
    look_up[0] = 0; look_up[1] = 1;
    int i=2;
    while(i<=n){
        look_up[i] = look_up[i-1] + look_up[i-2];
        i++;
    }
    return look_up[n];
}

