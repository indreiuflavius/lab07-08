#include "stdafx.h"
#include "testCtrl.h"
#include "stdafx.h"
#include <iostream>
#include "assert.h"
#include "repo.h"
#include "ctrl.h"
#include "produs.h"

using namespace std;

void testCtrl()
{
	Repo<Produs> repo = Repo<Produs>();
	Ctrl ctrl(repo);
	char* nume = new char[10];
	strcpy_s(nume, 4, "apa");


	ctrl.addElem(3, nume, 4);
	ctrl.addElem(7, nume, 8);

	assert(ctrl.getCod(0) == 3);
	assert(ctrl.getPret(0) == 4);
	assert(ctrl.getCod(1) == 7);
	assert(ctrl.getPret(1) == 8);
	assert(ctrl.getBani10Lei() == 5);
	assert(ctrl.getBani5Lei() == 5);
	assert(ctrl.getBani1Leu() == 5);
	

	cout << "Assert passed" << endl;



}