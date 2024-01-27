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

