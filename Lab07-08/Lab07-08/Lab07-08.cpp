// Lab07-08.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "repo.h"
#include <iostream>
#include "produs.h"
#include "testProdus.h"
#include "repo.h"
#include "testRepo.h"
#include "ui.h"
#include "ctrl.h"
#include "testCtrl.h"

using namespace std;





int main()
{
	testProdus();
	testRepo();
	testCtrl();
	
	Repo<Produs> repo = Repo<Produs>();
	Ctrl ctrl(repo);
	Ui ui(ctrl);
	ui.options();
	

    return 0;
}

