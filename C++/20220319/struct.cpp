#include <stdio.h>


struct date{
    int month;
    int day;
};

struct newdata{
    char name[15];
    int score;
    struct date birthday;
};

int main(){
    struct newdata student = {"Amy",90,{6,10}};
    printf("%s's birthday is %d/%d \n", student.name, student.birthday.month, student.birthday.day);
    printf("He|She got %d points!", student.score);
    return 0;
}
