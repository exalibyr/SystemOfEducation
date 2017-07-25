//============================================================================
// Name        : pract2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "pract2.h"
using namespace std;

void english_group::info(){
	cout << "english group with entrance exam\n";
}

void math_group::info(){
	cout << "math group without entrance exam\n";
}

void chemistry_group::info(){
	cout << "chemistry group without entrance exam\n";
}
void english_group::examen(){//доп экзамен, необходимо ввести баллы за него
	cout << "The student must enter his points for the examination\n";
	cin >> enter_ex;
}
University* University::admission(subject_name name){//создание групп студентов
	University* s;
	switch (name) {
		case sub_english: {
			if (enter_ex >= 50){
				s = new english_group();
			}else{
				cout << "The required number of points are not scored\n";
			}
			break;
		}
		case sub_chemistry: {
			s = new chemistry_group();
			break;
		}
		case sub_maths: {
			s = new math_group();
			break;
		}
		default: {
			assert(false);
		}
		}
		return s;
}
