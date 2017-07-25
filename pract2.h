/*
 * pract2.h
 *
 *  Created on: 24 июля 2017 г.
 *      Author: Глеб
 */

#ifndef PRACT2_H_
#define PRACT2_H_
#include <iostream>
#include "patern_factory.h"
using namespace std;
class University{//класс университет
public:
	int enter_ex;//баллы за доп. экзамен
public:
     University* admission(subject_name name);//функция приема
	 virtual ~University();
};
class english_group : public University{ //классы наследники
public:
	void info();
	void examen();//доп. функция сдачи экзаменов
};
class math_group : public University{
public:
	void info();
};
class chemistry_group : public University{
public:
	void info();
};


#endif /* PRACT2_H_ */
