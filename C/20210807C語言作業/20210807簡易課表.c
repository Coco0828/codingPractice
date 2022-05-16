#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

int main(){
	int time = 0;
	int i;
	char input[6];
	
	char **scheduleSubject;
	scheduleSubject = (char**)malloc(10 * sizeof(char*));
	for(i = 0;i < strlen(scheduleSubject);i ++){
		scheduleSubject[i] = (char*)malloc(10 * sizeof(char));
	}
	
	char **scheduleDay;
	scheduleDay = (char**)malloc(10 * sizeof(char*));
	for(i = 0;i < strlen(scheduleDay);i ++){
		scheduleDay[i] = (char*)malloc(3 * sizeof(char));
	}
	
	char **scheduleLesson;
	scheduleLesson = (char**)malloc(10 * sizeof(char*));
	for(i = 0;i < strlen(scheduleLesson);i ++){
		scheduleLesson[i] = (char*)malloc(1 * sizeof(char));
	}
	
	do{
		printf("使用方法如下：\n輸入new來新增課程，輸入delete來刪除課程，輸入edit來編輯課程，輸入print來印出課表並結束程式：");
		scanf("%s", input);
	
		if (input[0] == 'n' && input[1] == 'e' && input[2] == 'w'){
			new(*scheduleSubject, *scheduleDay, *scheduleLesson, &time);
			time ++;
		}
		else if (input[0] == 'd' && input[1] == 'e' && input[2] == 'l' && input[3] == 'e' && input[4] == 't' && input[5] == 'e') delete(*scheduleSubject, *scheduleDay, *scheduleLesson);
		else if (input[0] == 'e' && input[1] == 'd' && input[2] == 'i' && input[3] == 't') edit(*scheduleSubject, *scheduleDay, *scheduleLesson);

	}while(input[0] != 'p' && input[1] != 'r' && input[2] != 'i' && input[3] != 'n' && input[4] != 't');
	
	printf("課表：\n");
	
	for(i = 0;i < time;i ++){
		if(*(scheduleSubject + i) = ' ') continue;
		printf("A %s class on the %c class on %s", *(scheduleSubject + i), *(scheduleLesson[i]), *(scheduleDay[i]));
	}
	
	return 0;
}

void new(char **scheduleSubject, char **scheduleDay, char **scheduleLesson, int *time){
	//char subject[10], day[3], lesson;
	int i;
	
	printf("新增課堂(種類 日 第幾節):");
	scanf("%s %s %c", &scheduleSubject[*time], &scheduleDay[*time], &scheduleDay[*time]);

	/*scheduleSubject[*time] = subject;
	scheduleDay[*time] = day;
	scheduleDay[*time] = lesson;*/
}

void delete(char **scheduleSubject, char **scheduleDay, char **scheduleLesson){
	char subject[10];
	int i;
	
	printf("請問要刪除哪一種課堂：");
	scanf("%s", &subject);

	for(i = 0; i < strlen(scheduleSubject); i ++){
		if (scheduleSubject[i] == subject){
			scheduleSubject[i] == ' ';
			scheduleDay[i] == ' ';
			scheduleLesson[i] == ' ';
		}
		
	}
}

void edit(char **scheduleSubject, char **scheduleDay, char **scheduleLesson){
	int way, i;
	char oldSubject[10], newSubject[10], day[3], lesson;
	printf("請問要用哪種編輯方式，輸入1使用第一種，輸入2使用第二種，\n第一種為輸入特定日以及節次即可刪除該課程。第二種為輸入想要修改的課程名稱，以及修改完成的課程名稱及可批次修改:");
	scanf("%d", &way);
	
	if(way == 1){
		printf("請輸入想刪除的課堂(日 節次):");
		scanf("%s %s", day, lesson);
		
		for(i = 0; i < strlen(scheduleDay); i ++){
			if (scheduleDay[i] == day || scheduleLesson[i] == lesson){
				scheduleSubject[i] == ' ';
				scheduleDay[i] == ' ';
				scheduleLesson[i] == ' ';
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


