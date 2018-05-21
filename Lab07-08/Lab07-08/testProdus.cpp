#include "stdafx.h"
#include "testProdus.h"
#include "produs.h"
#include "assert.h"
#include "string.h"
#include <iostream>

using namespace std;

void testProdus()
{
	char* nume = new char[10];
	strcpy_s(nume, 10, "ciocolata");
	Produs p1;
	p1.setCod(1);
	p1.setNume(nume);
	p1.setPret(4);
	
	assert(p1.getCod() == 1);
	assert(strcmp(p1.getNume(),nume) == 0);
	assert(p1.getPret() == 4);

	delete[] nume;

	Produs p2;
	assert(p2.getCod() == 0);
	assert(p2.getNume() == NULL);
	assert(p2.getPret() == 0);

	nume = new char[10];
	strcpy_s(nume, 4, "suc");

	p2.setCod(123);
	p2.setNume(nume);
	p2.setPret(5);

	assert(p2.getCod() == 123);
	assert(strcmp(p2.getNume(),nume) ==0);
	assert(p2.getPret() == 5);

	delete[] nume;

	cout << "Assert passed" << endl;



}
