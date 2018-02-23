#include <iostream>
#include <string>
using namespace std;

class Grades {
public:
	//Default Constructor
	Grades() {
		newGrade = 0;
	};

	//Accessor Functions
	string getName() const {
		return newName;
	};

	int getGrade() const {
		return newGrade;
	};

	//Mutator Functions
	void setName(string name) {
		newName = name;
	};

	void setGrade(int grade) {
		newGrade = grade;
	};


private:
	string newName;
	int newGrade;
};
