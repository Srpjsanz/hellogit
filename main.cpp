#include <iostream>
#include <string>
#include <vector>

#include "Grades.h"

using namespace std;

void fillVector(vector<Grades>&);
void printVector(vector<Grades>&);

int main() {

	vector<Grades> myVector;
	fillVector(myVector);
	printVector(myVector);

	

	system("pause");
	return 0;
};

void fillVector(vector<Grades>& newVec) {
	int size = 4;
	string name;
	int grade;


	for (int i = 0; i < size; i++) {
		cout << "Enter Student Name:";
		cin >> name;

		cout << "Enter Student Grade:";
		cin >> grade;

		Grades newGrades;
		newGrades.setName(name);
		newGrades.setGrade(grade);

		newVec.push_back(newGrades);
	}
};

void printVector(vector<Grades>& newVec) {
	int size = 4;
	for (int i = 0; i < size; i++) {
		cout << "Student Name: " << newVec[i].getName() << endl;
		cout << "Student Grade: " << newVec[i].getGrade() << endl;
		
	}
};


