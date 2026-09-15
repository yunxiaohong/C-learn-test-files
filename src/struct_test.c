#include <stdio.h>
struct student{
    char name[20];
    int age;
    char sex[4];
};
void print_student(struct student s){
    printf("姓名：%s\n", s.name);
    printf("年龄：%d\n", s.age);
    printf("性别：%s\n", s.sex);
}
int main(){
    struct student s1 = {"张三", 20, "男"}, 
    s2 = {"李四", 22, "女"};
    print_student(s1);
    print_student(s2);
    return 0;
}