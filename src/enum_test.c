#include<stdio.h>
enum season {
    spring,
    summer,
    autumn,
    winter
};
int main(){
    for(enum season i = spring; i <= winter; i++){
        printf("%d\n", i);
    }
    enum season s = spring;
    switch(s){
        case spring:
            printf("现在是春天\n");
            break;
        case summer:
            printf("现在是夏天\n");
            break;
        case autumn:
            printf("现在是秋天\n");
            break;
        case winter:
            printf("现在是冬天\n");
            break;
    }
    return 0;
}