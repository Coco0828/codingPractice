#include <stdio.h>

/*struct mydata{
    char name[15];
    int number;
};*/

/*struct date{
    int day;
    int month;
};

struct newdata{
    char name[15];
    int score;
    struct date birthday;
};*/

/*int main(){
    struct newdata student = {"Bob",100,{14,02}};
    printf("%s's birthday is %d/%d and score is %d", student.name, student.birthday.month, student.birthday.day, student.score);
    
    
    printf("Name:");
    scanf("%s",teacher.name);
    printf("Number:");
    scanf("%d",&teacher.number);
    printf("%s %d",teacher.name,teacher.number);

    return 0;
}*/

struct mydata{
    char name[15];
    int score;
};

void get_data(struct mydata *p);
void put_data(struct mydata a);

int main(){
    struct mydata student;
    get_data(&student);
    put_data(student);
    return 0;
}

void get_data(struct mydata *p){
	printf("Name:");
    scanf("%s",p->name);
    printf("Score:");
    scanf("%d",&p->score);
    return ;
}

void put_data(struct mydata p){
    printf("Name, Score  ");
    printf("%s, %d",p.name,p.score);
    return ;
}


