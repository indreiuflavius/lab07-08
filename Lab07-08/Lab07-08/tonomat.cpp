#include "stdafx.h"
#include "tonomat.h"

Tonomat::Tonomat()
{
	bani1Leu = 0;
	bani5Lei = 0;
	bani10Lei = 0;
}

Tonomat::Tonomat( int bani1Leu, int bani5Lei, int bani10Lei)
{
	
	this->bani1Leu = bani1Leu;
	this->bani5Lei = bani5Lei;
	this->bani10Lei = bani10Lei;
}

double Tonomat::getSum()
{
	return (bani10Lei*10)+bani1Leu+(bani5Lei*5);
}

void Tonomat::addBani10Lei(int bani)
{
	this->bani10Lei +=  bani;
}

void Tonomat::addBani1Leu(int bani)
{
	this->bani1Leu += bani;
}

void Tonomat::addBani5Lei(int bani)
{

	this->bani5Lei += bani;
}

int Tonomat::getBani10Lei()
{
	return this->bani10Lei;
}

int Tonomat::getBani1Leu()
{
	return this->bani1Leu;
}

int Tonomat::getBani5Lei()
{
	return this->bani5Lei;
}
