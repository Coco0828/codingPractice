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
		printf("�ϥΤ�k�p�U�G\n��Jnew�ӷs�W�ҵ{�A��Jdelete�ӧR���ҵ{�A��Jedit�ӽs��ҵ{�A��Jprint�ӦL�X�Ҫ�õ����{���G");
		scanf("%s", input);
	
		if (input[0] == 'n' && input[1] == 'e' && input[2] == 'w'){
			new(*scheduleSubject, *scheduleDay, *scheduleLesson, &time);
			time ++;
		}
		else if (input[0] == 'd' && input[1] == 'e' && input[2] == 'l' && input[3] == 'e' && input[4] == 't' && input[5] == 'e') delete(*scheduleSubject, *scheduleDay, *scheduleLesson);
		else if (input[0] == 'e' && input[1] == 'd' && input[2] == 'i' && input[3] == 't') edit(*scheduleSubject, *scheduleDay, *scheduleLesson);

	}while(input[0] != 'p' && input[1] != 'r' && input[2] != 'i' && input[3] != 'n' && input[4] != 't');
	
	printf("�Ҫ�G\n");
	
	for(i = 0;i < time;i ++){
		if(*(scheduleSubject + i) = ' ') continue;
		printf("A %s class on the %c class on %s", *(scheduleSubject + i), *(scheduleLesson[i]), *(scheduleDay[i]));
	}
	
	return 0;
}

void new(char **scheduleSubject, char **scheduleDay, char **scheduleLesson, int *time){
	//char subject[10], day[3], lesson;
	int i;
	
	printf("�s�W�Ұ�(���� �� �ĴX�`):");
	scanf("%s %s %c", &scheduleSubject[*time], &scheduleDay[*time], &scheduleDay[*time]);

	/*scheduleSubject[*time] = subject;
	scheduleDay[*time] = day;
	scheduleDay[*time] = lesson;*/
}

void delete(char **scheduleSubject, char **scheduleDay, char **scheduleLesson){
	char subject[10];
	int i;
	
	printf("�аݭn�R�����@�ؽҰ�G");
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
	printf("�аݭn�έ��ؽs��覡�A��J1�ϥβĤ@�ءA��J2�ϥβĤG�ءA\n�Ĥ@�ج���J�S�w��H�θ`���Y�i�R���ӽҵ{�C�ĤG�ج���J�Q�n�ק諸�ҵ{�W�١A�H�έק粒�����ҵ{�W�٤Υi�妸�ק�:");
	scanf("%d", &way);
	
	if(way == 1){
		printf("�п�J�Q�R�����Ұ�(�� �`��):");
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
		printf("�п�J�Q��諸�Ұ�W��(�쥻���Ұ�W�� �s���Ұ�W��):");
		scanf("%s %s", oldSubject, newSubject);
		
		for(i = 0; i < strlen(scheduleSubject); i ++){
			if (scheduleSubject[i] == oldSubject){
				scheduleSubject[i] == newSubject;
			}
		}
	}
}


