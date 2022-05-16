#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

int main(){
	int i, j, k;
	char date[3];
	char input[6];
	
	char classes[5][8] = {{'1', '2', '3', '4', '5', '6', '7', '8'}, {'1', '2', '3', '4', '5', '6', '7', '8'}, {'1', '2', '3', '4', '5', '6', '7', '8'}, {'1', '2', '3', '4', '5', '6', '7', '8'}, {'1', '2', '3', '4', '5', '6', '7', '8'}};

	char **scheduleSubject[40];
	for(i = 0;i < 40;i ++){
		scheduleSubject[i] = (char*)malloc(7 * sizeof(char));
	}

	do{
		printf("使用方法如下：\n輸入new來新增課程，輸入delete來刪除課程，輸入edit來編輯課程，輸入print來印出課表並結束程式：");
		scanf("%s", input);
	
		if (input[0] == 'n' && input[1] == 'e' && input[2] == 'w'){
			new(*scheduleSubject);
		}
		else if (input[0] == 'd' && input[1] == 'e' && input[2] == 'l' && input[3] == 'e' && input[4] == 't' && input[5] == 'e') delete(*scheduleSubject);
		else if (input[0] == 'e' && input[1] == 'd' && input[2] == 'i' && input[3] == 't') edit(*scheduleSubject, *classes);

	}while(input[0] != 'p' && input[1] != 'r' && input[2] != 'i' && input[3] != 'n' && input[4] != 't');
	
	printf("課表：\n\n");
	
	for(i = 0;i < 5;i ++){
		for(j = 0; j < 8; j ++){			
			if(i == 0){
				date[0] = 'M';
				date[1] = 'o';
				date[2] = 'n';
			}
			if(i == 1){
				date[0] = 'T';
				date[1] = 'u';
				date[2] = 'e';
			}
			if(i == 2){
				date[0] = 'W';
				date[1] = 'e';
				date[2] = 'd';
			}
			if(i == 3){
				date[0] = 'T';
				date[1] = 'h';
				date[2] = 'u';
			}
			if(i == 4){
				date[0] = 'F';
				date[1] = 'r';
				date[2] = 'i';
			}
			
			k = i * 8 + j;
			
			if(scheduleSubject[k] = '       '){
				printf("No class on the %c class on %s\n", classes[i][j], date);
				continue;
			}
			
			printf("A %s class on the %c class on %s\n", *(scheduleSubject[k]), classes[i][j], date);
		}
		printf("\n");
	}
		
	return 0;
}

void new(char **scheduleSubject){
	char subject[10], day[3];
	int lesson, class;
	int i;
	
	printf("新增課堂(種類 日 第幾節):");
	scanf("%s %s %d", &subject, &day, &lesson);
	
	if(day[0] == 'M' && day[1] == 'o' && day[2] == 'n')class = 1*8 + lesson;
	if(day[0] == 'T' && day[1] == 'u' && day[2] == 'e')class = 2*8 + lesson;
	if(day[0] == 'W' && day[1] == 'e' && day[2] == 'd')class = 3*8 + lesson;
	if(day[0] == 'T' && day[1] == 'h' && day[2] == 'u')class = 4*8 + lesson;
	if(day[0] == 'F' && day[1] == 'r' && day[2] == 'i')class = 5*8 + lesson;
	

	scheduleSubject[class] = subject;
	
}

void delete(char **scheduleSubject){
	char subject[10];
	int i;
	
	printf("請問要刪除哪一種課堂：");
	scanf("%s", subject);

	for(i = 0; i < strlen(scheduleSubject); i ++){
		if (scheduleSubject[i] == subject){
			scheduleSubject[i] == '       ';
		}
		
	}
}

void edit(char **scheduleSubject, char **classes){
	int way, i, j, k;
	char oldSubject[10], newSubject[10], day[3], lesson;
	printf("請問要用哪種編輯方式，輸入1使用第一種，輸入2使用第二種，\n第一種為輸入特定日以及節次即可刪除該課程。第二種為輸入想要修改的課程名稱，以及修改完成的課程名稱及可批次修改:");
	scanf("%d", &way);
	
	if(way == 1){
		printf("請輸入想刪除的課堂(日 節次):");
		scanf("%s %s", &day, &lesson);
		
		if(day[0] == 'M' && day[1] == 'o' && day[2] == 'n')k = 0;
		if(day[0] == 'T' && day[1] == 'u' && day[2] == 'e')k = 1;
		if(day[0] == 'W' && day[1] == 'e' && day[2] == 'd')k = 2;
		if(day[0] == 'T' && day[1] == 'h' && day[2] == 'u')k = 3;
		if(day[0] == 'F' && day[1] == 'r' && day[2] == 'i')k = 4;
		
		for(i = 0; i < 5; i ++){
			for(j = 0; j < 8; j++){		
				if (i == k || classes[i][j] == lesson){
					scheduleSubject[i] == '       ';
				}
			}
		}
		
	}
	else if(way == 2){
		printf("請輸入想更改的課堂名稱(原本的課堂名稱 新的課堂名稱):");
		scanf("%s %s", oldSubject, newSubject);
		
		for(i = 0; i < strlen(scheduleSubject); i ++){
			if (scheduleSubject[i] == oldSubject){
				scheduleSubject[i] == newSubject;
			}
		}
	}
}
