#include<iostream>
#include<string>
#include<fstream>
#include<sstream>
#include<vector>
#include<algorithm>
#include <iomanip>
using namespace std;

struct myclass {
    bool operator() (int a, int b) { return a > b; }
} myobject;

class Student{
    public:
    	string name;
    	vector<int> score;
    	float average;
};
void getTotal(int *Total, string *str){
	int string_temp_last = (*str).find(';');
    stringstream ss;
    ss << (*str).substr(0, string_temp_last);
    ss >> *Total;
    (*str).erase(0,  string_temp_last + 1);
}
void getName(Student *student, string *str){
	int string_temp_last = (*str).find(';');
	(*student).name = (*str).substr(0, string_temp_last);
    (*str).erase(0, string_temp_last + 1);
}
void getScore(Student *student, string *str){
	int string_temp_last = (*str).find(';');
    string temp = (*str).substr(0, string_temp_last);
    stringstream ss;
    int number;
    ss << temp;
    ss >> number;
    (*student).score.push_back(number);
    (*str).erase(0, string_temp_last + 1);
}

int main()
{
    ifstream ifs("grade.txt", ifstream::in);
    string str;
    stringstream ss;

    int students_total = 0;
    int scores_total = 0;
    vector<Student> students;

    int student_index = 0;
    while (getline(ifs, str))
    {
        if (student_index == 0)
        {
            getTotal(&students_total, &str);
            getTotal(&scores_total, &str);
        }
        else
        {
            Student temp_student;
            getName(&temp_student, &str);
            for (int score_index = 0; score_index < scores_total; score_index++)
            {
                getScore(&temp_student, &str);
            }
            sort(temp_student.score.begin(), temp_student.score.end(), myobject);
            
			students.push_back(temp_student);
        }
        student_index++;
    }

	for(int i = 0; i < students_total; i ++){
		for(int j = 0; j < scores_total; j ++){
			students[i].average += students[i].score[j];
		}
		students[i].average /= scores_total;
	}
	
	int max = 0, min = 100;
	int n, m;
	for(int i = 0; i < students_total; i ++){
		if(students[i].average > max){
			max = students[i].average;
			n = i;
		}
		else if(students[i].average < min){
			min = students[i].average;
			m = i;
		}
	}
	cout << students[n].name << endl;
	cout << students[m].name << endl;

	cout << endl;
    cout << students_total << " " << scores_total << endl;
    for (int i = 0; i < students_total; i++)
    {
        cout << students[i].name << " " << endl;
        for (int j = 0; j < scores_total; j++)
        {
            cout << students[i].score[j] << " ";
        }
        cout << setprecision(1) << fixed << students[i].average;
        cout << endl;
    }

    ifs.close();
    return 0;
}
