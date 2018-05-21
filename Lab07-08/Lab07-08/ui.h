#pragma once
#include "stdafx.h"
#include "ctrl.h"

class Ui {

private:
	Ctrl &ctrl;
	
	
public:
	void options();
	Ui(Ctrl& ctrl) : ctrl(ctrl) {}
	void addElem();
	void showAll();
	void buy();
	void getBani();

};