/*
 * pract2.h
 *
 *  Created on: 24 ���� 2017 �.
 *      Author: ����
 */

#ifndef PRACT2_H_
#define PRACT2_H_
#include <iostream>
#include "patern_factory.h"
using namespace std;
class University{//����� �����������
public:
	int enter_ex;//����� �� ���. �������
public:
     University* admission(subject_name name);//������� ������
	 virtual ~University();
};
class english_group : public University{ //������ ����������
public:
	void info();
	void examen();//���. ������� ����� ���������
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
