#include <iostream>
using namespace std;

int main(){
    char str[100];
    char *p;

    char current_state = 0;
    int error = 0;
    int repeat = 1;

    do{
        cout<<"Input character for string are 0 and 1."<<endl;
        cout<<"Enter the string: ";
        fflush(stdin);

        fgets(str,100, stdin);

        p = str;

        while(*p!='\n'){
            if(*p!='0'&&*p!='1'){
                error = 1;
                break;
            }

            if(current_state==0){
                if(*p=='0'){
                    current_state = 3;
                } else{
                    current_state = 1;
                }
            } else if(current_state==1){
                if(*p=='0'){
                    current_state = 1;
                } else{
                    current_state = 2;
                }
            }else if(current_state==2){
                current_state = 3;
            } else{
                current_state=3;
            }

            *p++;
        }
        if(error==1){
            cout<<"Error in input."<<endl;
        }else{
            cout<<endl<<"The final state position of string is "<<current_state;

            if(current_state==2){
                cout<<endl<<"The current string is accepted by DFA"<<endl;
            }else{
                cout<<endl<<"The current string is rejected by DFA"<<endl;
            }
        }

        cout<<endl<<"Enter another string? (1/0): ";
        cin>>repeat;
        cout<<endl;
    } while (repeat==1);
}