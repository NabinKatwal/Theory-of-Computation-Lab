#include <iostream>
using namespace std;

bool longEnough(char *p){
    int count = 0;
    while (*p!='\n'){
        count++;
        *p++;
    }
    if (count>=8){
        return true;
    }else{
        return false;
    }
}

bool startsWith(char p){
    char alphabet[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char *pointer;
    pointer = alphabet;
    while (*pointer!='\n'){
        if (*pointer==tolower(p)){
            return true;
        }
        *pointer++;
    }
    return false;
}

bool containsSpecial(char *p){
    char special[] = {'`','~','!','@','#','$','%','^','&','*','(',')','-','_','+','[',']','{','}','\\','|',':',';','\"','\'',',','<','.','>','?', '\n'};
    char *sp;
    sp = special;

    while (*p!='\n'){
        sp = special;
        while (*sp!='\n'){
            if(*p==*sp){
                return true;
            }
            *sp++;
        }
        *p++;
    }
    return false;
}

bool containsNumber (char *p){
    char number[] = {'0','1','2','3','4','5','6','7','8','9','\n'};
    char *np;
    np = number;

    while (*p!='\n'){
        np = number;
        while (*np!='\n'){
            if(*p==*np){
                return true;
            }
            *np++;
        }
        *p++;
    }
    return false;
}

int main(){
    char str[100];

    cout<<"Enter password: ";
    fflush(stdin);
    fgets(str, 100, stdin);

    if(longEnough(str) && startsWith(str[0]) && containsSpecial(str) && containsNumber(str)){
        cout<<"The password is accepted. "<<endl;
    } else{
        cout<<"The password is not accepted"<<endl;
    }
}