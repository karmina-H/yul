#include <iostream>
#include "Person.h"
#include "Ride.h"
#include "Chu.h"
using namespace std;

int main(void) {

	// 놀이기구 가동
	Viking v;
	BumperCar b;
	T t;
	Hurricane h;
	Amazon a;

	// 사람 입장
	Person p1("김자빱", 2);
	Person p2("김기린", 6);
	Person p3("이곡길", 10);
	Person p4("박람지", 4);
	Person p5("나왕눈", 1);

	// 놀이기구 탑승
	p2.RideViking(v);
	p3.RideViking(v);
	p4.RideViking(v);
	p5.RideViking(v);

	p5.RideAmazon(a);
	p3.RideAmazon(a);
	p2.RideAmazon(a);

	p3.RideT(t);
	p1.RideT(t);
	p4.RideT(t);
	p2.RideT(t);

	p2.RideBumper(b);
	p4.RideBumper(b);

	p2.RideHurricane(h);
	p4.RideHurricane(h);
	p1.RideHurricane(h);

	Chu p1("김자빱", 2,2);
	Chu p2("김기린", 1, 6);
	Chu p3("이곡길", 3, 10);
	Chu p4("박람지", 2,4);
	Chu p5("나왕눈", 3,1);

	p1.ShowData();
	p2.ShowData();
	p3.ShowData();
	p4.ShowData();
	p5.ShowData();

	return 0;
}
