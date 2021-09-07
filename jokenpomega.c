#include<stdio.h>
#include<string.h>

int num(char str[]) {
    if(strcmp(str,"rock")==0) return 0;
    if(strcmp(str,"fire")==0) return 1;
    if(strcmp(str,"scissors")==0) return 2;
    if(strcmp(str,"human")==0) return 3;
    if(strcmp(str,"sponge")==0) return 4;
    if(strcmp(str,"paper")==0) return 5;
    if(strcmp(str,"air")==0) return 6;
    if(strcmp(str,"water")==0) return 7;
    if(strcmp(str,"gun")==0) return 8;
}

void res(int num1, int num2) {
    if(num1==num2) printf("empate\n");
    else {
    if(num1<num2) { 
            if(num2-num1 <= 4) printf("jog1\n");
            else printf("jog2\n");
        } else {  
        if(num1-num2 <= 4) printf("jog2\n");
            else printf("jog1\n");
        }
    } 
}

int main() {
    char str1[20], str2[20];
    int num1=0, num2=0;
    scanf("%s",str1);
    scanf("%s",str2);
    num1 = num(str1);
    num2 = num(str2);
    res(num1, num2);

    return 0;
}