#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

void new();
void edit();
void delete();

struct class_sample{
	char subject[10];
	char date[3];
	int lesson;
};
struct class_sample class[40];
char *zero = "0";

int main(){
	int i;
	char input[6];

	do{
		printf("使用方法如下：\n輸入new來新增課程，輸入delete來刪除課程，輸入edit來編輯課程，輸入print來印出課表並結束程式：");
		scanf("%s", input);
	
		if (input[0] == 'n' && input[1] == 'e' && input[2] == 'w')new();
		else if (input[0] == 'd' && input[1] == 'e' && input[2] == 'l' && input[3] == 'e' && input[4] == 't' && input[5] == 'e') delete();
		else if (input[0] == 'e' && input[1] == 'd' && input[2] == 'i' && input[3] == 't') edit();

	}while(input[0] != 'p' && input[1] != 'r' && input[2] != 'i' && input[3] != 'n' && input[4] != 't');
	
	printf("課表：\n\n");
	
	printf("	MON			TUE			WED			THU			FRI	");
	
	printf("1");
	
	for(i = 0;i < 40;i++){
		if(strcmp(class[i].subject, zero) == 0){
			printf("None");
			continue;
		}
		if(class[i].lesson == 1){
			printf("%s		", class[i].subject);
		}
	}
	
	printf("2\n");
	
	for(i = 0;i < 40;i++){
		if(strcmp(class[i].subject, zero) == 0){
			printf("None");
			continue;
		}
		if(class[i].lesson == 2){
			printf("%s		", class[i].subject);
		}
	}
	
	printf("3\n");
	
	for(i = 0;i < 40;i++){
		if(strcmp(class[i].subject, zero) == 0){
			printf("None");
			continue;
		}
		if(class[i].lesson == 3){
			printf("%s		", class[i].subject);
		}
	}
	
	printf("4\n");
	
	for(i = 0;i < 40;i++){
		if(strcmp(class[i].subject, zero) == 0){
			printf("None");
			continue;
		}
		if(class[i].lesson == 4){
			printf("%s		", class[i].subject);
		}
	}
	
	printf("5\n");
	
	for(i = 0;i < 40;i++){
		if(strcmp(class[i].subject, zero) == 0){
			printf("None");
			continue;
		}
		if(class[i].lesson == 5){
			printf("%s		", class[i].subject);
		}
	}
	
	printf("6\n");
	
	for(i = 0;i < 40;i++){
		if(strcmp(class[i].subject, zero) == 0){
			printf("None");
			continue;
		}
		if(class[i].lesson == 6){
			printf("%s		", class[i].subject);
		}
	}
	
	printf("7\n");
	
	for(i = 0;i < 40;i++){
		if(strcmp(class[i].subject, zero) == 0){
			printf("None");
			continue;
		}
		if(class[i].lesson == 7){
			printf("%s		", class[i].subject);
		}
	}
	
	printf("8");
	
	for(i = 0;i < 40;i++){
		if(strcmp(class[i].subject, zero) == 0){
			printf("None");
			continue;
		}
		if(class[i].lesson == 8){
			printf("%s		", class[i].subject);
		}
	}
	
	return 0;
}

void new(){
	char subject[10], day[3];
	int lesson, i;
	
	printf("新增課堂(種類 日 第幾節):");
	scanf("%s %s %d", subject, day, &lesson);
	
	if(day[0] == 'M' && day[1] == 'o' && day[2] == 'n')i = 1*8 + lesson;
	if(day[0] == 'T' && day[1] == 'u' && day[2] == 'e')i = 2*8 + lesson;
	if(day[0] == 'W' && day[1] == 'e' && day[2] == 'd')i = 3*8 + lesson;
	if(day[0] == 'T' && day[1] == 'h' && day[2] == 'u')i = 4*8 + lesson;
	if(day[0] == 'F' && day[1] == 'r' && day[2] == 'i')i = 5*8 + lesson;
	
	//class[i]{subject, date, lesson};
}

void delete(){
	char subject[10];
	int i;
	
	printf("請問要刪除哪一種課堂：");
	scanf("%s", subject);

	for(i = 0; i < 40; i ++){
		if (strcmp(class[i].subject, subject) == 0){
			strcpy(class[i].subject,zero);
		}
		
	}
}

void edit(){
	int way, i, j, k;
	char oldSubject[10], newSubject[10], day[3], lesson;
	printf("請問要用哪種編輯方式，輸入1使用第一種，輸入2使用第二種，\n第一種為輸入特定日以及節次即可刪除該課程。第二種為輸入想要修改的課程名稱，以及修改完成的課程名稱及可批次修改:");
	scanf("%d", &way);
	
	if(way == 1){
		printf("請輸入想刪除的課堂(日 節次):");
		scanf("%s %s", day, &lesson);
		
		if(day[0] == 'M' && day[1] == 'o' && day[2] == 'n')k = 0;
		if(day[0] == 'T' && day[1] == 'u' && day[2] == 'e')k = 1;
		if(day[0] == 'W' && day[1] == 'e' && day[2] == 'd')k = 2;
		if(day[0] == 'T' && day[1] == 'h' && day[2] == 'u')k = 3;
		if(day[0] == 'F' && day[1] == 'r' && day[2] == 'i')k = 4;
		
		for(i = 0; i < 40; i ++){	
			if (i == k * 8 + lesson){
				strcpy(class[i].subject,zero);
			}
		}
		
	}
	else if(way == 2){
		printf("請輸入想更改的課堂名稱(原本的課堂名稱 新的課堂名稱):");
		scanf("%s %s", oldSubject, newSubject);
		
		for(i = 0; i < 40; i ++){
			if (strcmp(class[i].subject, oldSubject) == 0){
				strcpy(class[i].subject,newSubject);
			}
		}
	}
}
