#include <stdio.h>
struct student{
    char name[20];
    int age;
    char sex[4];
};
int main(){
    struct student s1 = {"张三", 20, "男"};
    printf("姓名：%s\n", s1.name);
    printf("年龄：%d\n", s1.age);
    printf("性别：%s\n", s1.sex);
    return 0;
}