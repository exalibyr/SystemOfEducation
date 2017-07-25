#ifndef _LICEY_H_
#define _LICEY_H_

#include <iostream>
#include <assert.h>
using namespace std;
enum subject_name { sub_english = 0, sub_chemistry = 1, sub_maths = 2 };
class licey { //класс лицей
public:
	bool entrance_exam; //наличие вступ экзамена дл€ института
	licey() {
		entrance_exam = false;
	}
	virtual ~licey() {}
	static licey* graduate(subject_name name);	//метод выпускает учеников из лице€
};
//______________________дочерние классы_________________________________
class english : public licey {
public:
	english() { //у этого класса собственный конструктор добавл€ющий
		english(); //необходимость вступ экза дл€ данной категории учеников
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
