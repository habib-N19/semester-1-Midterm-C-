#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    int ID;
    string name;
    char section;
    int totalMarks;

    Student(int ID, string name, char section, int totalMarks) {
        this->ID = ID;
        this->name = name;
        this->section = section;
        this->totalMarks = totalMarks;
    }
};

void printDetail(int id, string name, char section, int totalMarks) {
    cout << id << ' ' << name << ' ' << section << ' ' << totalMarks << endl;
}

int main() {
    int T;
    cin >> T;
    if (T < 1 || T > 1000) {
        cout << "Invalid Test" << endl;
        return 0;
    }
    
    for (int t = 0; t < T; t++) {
        int id;
        string name;
        char section;
        int totalMarks;

        cin >> id >> name >> section >> totalMarks;
        Student A(id, name, section, totalMarks);
        cin >> id >> name >> section >> totalMarks;
        Student B(id, name, section, totalMarks);
        cin >> id >> name >> section >> totalMarks;
        Student C(id, name, section, totalMarks);

        if (A.totalMarks > B.totalMarks && A.totalMarks > C.totalMarks) {
            printDetail(A.ID, A.name, A.section, A.totalMarks);
        } else if (B.totalMarks > A.totalMarks && B.totalMarks > C.totalMarks) {
            printDetail(B.ID, B.name, B.section, B.totalMarks);
        } else if (C.totalMarks > A.totalMarks && C.totalMarks > B.totalMarks) {
            printDetail(C.ID, C.name, C.section, C.totalMarks);
        } else if (A.totalMarks == B.totalMarks && A.totalMarks == C.totalMarks) {
            (A.ID < B.ID && A.ID < C.ID) ? printDetail(A.ID, A.name, A.section, A.totalMarks)
            : (B.ID < A.ID && B.ID < C.ID) ? printDetail(B.ID, B.name, B.section, B.totalMarks)
            : printDetail(C.ID, C.name, C.section, C.totalMarks);
        } else if (A.totalMarks == B.totalMarks && A.totalMarks > C.totalMarks) {
            (A.ID < B.ID) ? printDetail(A.ID, A.name, A.section, A.totalMarks) : printDetail(B.ID, B.name, B.section, B.totalMarks);
        } else if (B.totalMarks == C.totalMarks && B.totalMarks > A.totalMarks) {
            (B.ID < C.ID) ? printDetail(B.ID, B.name, B.section, B.totalMarks) : printDetail(C.ID, C.name, C.section, C.totalMarks);
        } else if (A.totalMarks == C.totalMarks && A.totalMarks > B.totalMarks) {
            (A.ID < C.ID) ? printDetail(A.ID, A.name, A.section, A.totalMarks) : printDetail(C.ID, C.name, C.section, C.totalMarks);
        }
    }

    return 0;
}
