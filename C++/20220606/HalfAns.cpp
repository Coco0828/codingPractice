#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>
using namespace std;

class Student
{
private:
public:
    vector<int> score;
    string name;
};

void getTotal(int *Total, string *str)
{
    int string_temp_last = (*str).find(';');
    *Total = stoi((*str).substr(0, string_temp_last));
    (*str).erase((*str).begin(), (*str).begin() + (*str).substr(0, string_temp_last).length() + 1);
}

void getName(Student *student, string *str)
{
    int string_temp_last = (*str).find(';');
    (*student).name = (*str).substr(0, string_temp_last);
    (*str).erase((*str).begin(), (*str).begin() + (*str).substr(0, string_temp_last).length() + 1);
}

void getScore(Student *student, string *str)
{
    int string_temp_last = (*str).find(';');
    int row_score = stoi((*str).substr(0, string_temp_last));
    (*student).score.push_back(row_score);
    (*str).erase((*str).begin(), (*str).begin() + (*str).substr(0, string_temp_last).length() + 1);
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
            sort(temp_student.score.begin(), temp_student.score.end(), greater<int>());
            students.push_back(temp_student);
        }
        student_index++;
    }

    cout << students_total << " " << scores_total << endl;
    for (int i = 0; i < students_total; i++)
    {
        cout << students[i].name << " " << endl;
        for (int j = 0; j < scores_total; j++)
        {
            cout << students[i].score[j] << " ";
        }
        cout << endl;
    }

    ifs.close();
    return 0;
}
