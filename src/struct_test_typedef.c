#include <stdio.h>
#define TRUE 1
#define FALSE 0

typedef struct {
    char name[20];
    int age;
    char sex[4];
} student;

typedef int BOOL;
void print_student(student s){
    printf("姓名：%s\n", s.name);
    printf("年龄：%d\n", s.age);
    printf("性别：%s\n", s.sex);
}

int main(){
    student s1 = {"张三", 20, "男"}, 
    s2 = {"李四", 22, "女"};
    BOOL condition = TRUE;
    condition ? print_student(s1) : print_student(s2);
    return 0;
}