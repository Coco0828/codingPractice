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
		printf("�ϥΤ�k�p�U�G\n��Jnew�ӷs�W�ҵ{�A��Jdelete�ӧR���ҵ{�A��Jedit�ӽs��ҵ{�A��Jprint�ӦL�X�Ҫ�õ����{���G");
		scanf("%s", input);
	
		if (input[0] == 'n' && input[1] == 'e' && input[2] == 'w')new();
		else if (input[0] == 'd' && input[1] == 'e' && input[2] == 'l' && input[3] == 'e' && input[4] == 't' && input[5] == 'e') delete();
		else if (input[0] == 'e' && input[1] == 'd' && input[2] == 'i' && input[3] == 't') edit();

	}while(input[0] != 'p' && input[1] != 'r' && input[2] != 'i' && input[3] != 'n' && input[4] != 't');
	
	printf("�Ҫ�G\n\n");
	
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
	
	printf("�s�W�Ұ�(���� �� �ĴX�`):");
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
	
	printf("�аݭn�R�����@�ؽҰ�G");
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
	printf("�аݭn�έ��ؽs��覡�A��J1�ϥβĤ@�ءA��J2�ϥβĤG�ءA\n�Ĥ@�ج���J�S�w��H�θ`���Y�i�R���ӽҵ{�C�ĤG�ج���J�Q�n�ק諸�ҵ{�W�١A�H�έק粒�����ҵ{�W�٤Υi�妸�ק�:");
	scanf("%d", &way);
	
	if(way == 1){
		printf("�п�J�Q�R�����Ұ�(�� �`��):");
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
		printf("�п�J�Q��諸�Ұ�W��(�쥻���Ұ�W�� �s���Ұ�W��):");
		scanf("%s %s", oldSubject, newSubject);
		
		for(i = 0; i < 40; i ++){
			if (strcmp(class[i].subject, oldSubject) == 0){
				strcpy(class[i].subject,newSubject);
			}
		}
	}
}
