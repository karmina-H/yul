#pragma once
#include<iostream>
#include "person.h"
#include "Ride.h"
using namespace std;

class Chu {
private:
	int size;
	int n;
	int price = 2000;
public:
	void bill(int k)
	{
		total += k;
	}

	Chu(char* __name, int _size, int num)
	{
		cout << __name << "님 반갑슴니다" << endl;
		cout << "크기가" << _size << "인 츄로스" << num << "개를주문하시겠습니까??" << endl;
		this->size = _size;
		this->n = num;

	}
	explicit Chu(const Chu& ref) :size(ref.size), n(ref.n)
	{
		cout << "크기가" << size << "인 츄로스" << n << "개가 나왔습니다~" << endl;
		bill(size * n * price);
	}

};
