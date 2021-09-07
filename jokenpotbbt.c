#include <stdio.h>

int res(char jog1, char jog2) {
    if (jog1==jog2) {
        printf("empate");
    } else if (jog1=='S' && jog2=='P' || jog1=='P' && jog2=='R' || jog1=='P' && jog2=='R' || jog1=='R' && jog2=='L') {
        printf("jog1");
    } else if (jog1=='L' && jog2=='K' || jog1=='K' && jog2=='S' || jog1=='S' && jog2=='L' || jog1=='L' && jog2=='P') {
        printf("jog1");
    } else if (jog1=='P' && jog2=='K' || jog1=='K' && jog2=='R' || jog1=='R' && jog2=='S') {
        printf("jog1");
    } else {
        printf("jog2");
    }
}

int main() {
    char jog1=0, jog2=0;
    scanf(" %c", &jog1);
    scanf(" %c", &jog2);
    res(jog1, jog2);
    
    return 0;
}