#pragma once

class Tonomat {
private:
	int bani1Leu;
	int bani5Lei;
	int bani10Lei;
public:
	Tonomat();
	Tonomat(int bani1Leu, int bani5Lei, int bani10Lei);
	double getSum();
	void addBani10Lei(int bani);
	void addBani1Leu(int bani);
	void addBani5Lei(int bani);
	int getBani10Lei();
	int getBani1Leu();
	int getBani5Lei();
};