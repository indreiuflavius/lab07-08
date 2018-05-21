#include "stdafx.h"
#include <iostream>
#include <assert.h>
#include "repo.h"
#include "produs.h"
using namespace std;

void testRepo()
{
	Repo <Produs> repo = Repo<Produs>();
	char* nume = new char[10];
	strcpy_s(nume, 4, "apa");
	Produs p1(1,nume,10);

	repo.addElem(p1);
	
	assert(repo.getPos(0) == p1);
	assert(repo.getCod(0) == 1);
	assert(repo.getPret(0) == 10);

	strcpy_s(nume, 7, "Nestea");
	Produs p2(2, nume, 5);

	repo.addElem(p2);

	assert(repo.getPos(1) == p2);
	assert(repo.getCod(1) == 2);
	assert(repo.getPret(1) == 5);


	cout << "Assert passed" << endl;

}