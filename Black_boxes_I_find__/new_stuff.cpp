void new_loop_showcase(){
    long long T;
    for(;T--;){

    }
}


// [abcdefghijklmnopqrstuvwxyz]
void remove_char(char *s, char r){

}

int main(){

    // 2 ways to create string
    char s1[] = "asfsdfsd" ;  // you can modify the characters of string  
    char *s2  = "asfsdfsd" ;  // IMMUTABLE

    // all stuff inside a "" a STRING LITERAL
    char string_LITERAL_on_STACK[] = "This is on the stack, SO WE CAN MODIFY IT" ;
    // we are not allowed to modify a LOCATION THAT WE HAVE NO ACCESS TO 
    char *string_literal_LOCATION_UNKOWN = "C standard does not specify where we need to store this string literal.";

    s1[0] = 'A' ;
    s2[0] = 'A' ;  // causes seg fault ; BAD ACCESS exit

    "Both s1 and s2 are pointers to the first element of the string literal ";
    "s2 IS an actual pointer ( you can do pointer arithmetic )"   ;  s2++   ; // THIS IS VALID
    "s1 ACTS like a const pointer (you can't change the pointer)" ; //s1++ ; IS NOT VALID 

    // s1 = "new " ;
    s2  = "new ";



}


