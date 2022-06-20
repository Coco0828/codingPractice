#include<iostream>
#include<string>
#include<fstream>
#include<sstream>
using namespace std;

void getTotal(int *Total, string *str)
{
    int string_temp_last = (*str).find(';');
    stringstream ss;
    ss << (*str).substr(0, string_temp_last);
    ss >> *Total;
    (*str).erase(0,  string_temp_last + 1);
}
    
void getName(String *Name, string *str){
    int string_temp_last = *str.find(';');
    *Name = *str.substr(0, string_temp_last);
    (*str).erase(0,  string_temp_last + 1);
}
void getScore(int score, string *str){
    int string_temp_last = *str.find(';');
    string temp = *str.substr(0, string_temp_last);
    stringstream ss;
    ss << temp;
    ss >> score;
    *str.erase(0, string_temp_last + 1);
}

int main(){
    string str;
    ifstream ifs("grade.txt", ifstream::in);
    int student_index = 0;
    int string_temp_last;
    int score_total;
    int number;
    while(getline(ifs,str)){
        if(student_index == 0){
            //getStudentTotal();
            
            string_temp_last = str.find(';');
            string temp = str.substr(0, string_temp_last);
            stringstream ss;
            ss << temp;
            ss >> number;
            str.erase(0, string_temp_last + 1);
            cout << number << endl;
            
            //getScoreTotal();
            
            string_temp_last = str.find(';');
            temp = str.substr(0, string_temp_last);
            stringstream ss;
            ss << temp;
            ss >> score_total;
            cout << score_total << endl;
            
        }else{
            //getName();
            string_temp_last = str.find(';');
            string temp = str.substr(0, string_temp_last);
            cout << temp << endl;
            str.erase(0, string_temp_last + 1);
            
            for(int i = 0;i < score_total;i ++){
                //getScore();
                string_temp_last = str.find(';');
                string temp = str.substr(0, string_temp_last);
                stringstream ss;
                ss << temp;
                ss >> number;
                cout << number;
                str.erase(0, string_temp_last + 1);
            }
        }
        student_index ++;
    }
}
