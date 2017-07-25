/*
 * patern_factory.cpp
 *
 *  Created on: 24 ���� 2017 �.
 *      Author: ����
 */
#include "patern_factory.h"

void english::info() {
	cout << "english" << endl;
}

void chemistry::info() {
	cout << "chemistry" << endl;
}

void maths::info() {
	cout << "maths" << endl;
}

licey* licey::graduate(subject_name name) { //������ ��������
	licey* p;
	switch (name) {
	case sub_english: {
		p = new english();
		break;
	}
	case sub_chemistry: {
		p = new chemistry();
		break;
	}
	case sub_maths: {
		p = new maths();
		break;
	}
	default: {
		assert(false);
	}
	}
	return p; //���������� ������� � ����������� �� ��������� ����-��
};



