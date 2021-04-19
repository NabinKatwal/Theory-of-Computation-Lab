#include <iostream>
using namespace std;
const int MAX = 100;

void pda(char str[]){
    cout<<str;
}

int stack(){
    int stack_init[MAX];
    int z = -1;
    int top = z;
    int header = z;
    return 0;
}

int main() {
    char str[MAX];
    cout<<"Enter string:"<<endl;
    fflush(stdin);
    fgets(str, 100, stdin);

    pda(str);
    return 0;
}
