#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream inputFile("student_input.txt");  // 입력 파일
    ofstream highFile("high_student.txt");  // 80점 이상 학생 저장할 파일
    ofstream lowFile("low_student.txt");    // 30점 이하 학생 저장할 파일

    if (!inputFile) {
        cerr << "Error: Cannot open input file!" << endl;
        return 1;
    }

    string name;
    char colon;  // ':' 문자 읽기용 변수
    int score;

    // 한 줄씩 읽어와서 점수에 따라 처리
    while (inputFile >> name >> colon >> score) {
        if (score > 80) {
            highFile << name << endl;  // 80점 초과인 경우 high_student.txt에 저장
        } else if (score < 30) {
            lowFile << name << endl;   // 30점 미만인 경우 low_student.txt에 저장
        }
    }

    // 파일 닫기
    inputFile.close();
    highFile.close();
    lowFile.close();

    cout << "Processing completed." << endl;
    return 0;
}
