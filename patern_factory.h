#ifndef _LICEY_H_
#define _LICEY_H_

#include <iostream>
#include <assert.h>
using namespace std;
enum subject_name { sub_english = 0, sub_chemistry = 1, sub_maths = 2 };
class licey { //����� �����
public:
	bool entrance_exam; //������� ����� �������� ��� ���������
	licey() {
		entrance_exam = false;
	}
	virtual ~licey() {}
	static licey* graduate(subject_name name);	//����� ��������� �������� �� �����
};
//______________________�������� ������_________________________________
class english : public licey {
public:
	english() { //� ����� ������ ����������� ����������� �����������
		english(); //������������� ����� ���� ��� ������ ��������� ��������
		entrance_exam = true;
	}
	void info();
};

class chemistry : public licey {
public:
	void info();
};

class maths : public licey {
public:
	void info();
};

#endif
