#pragma once
#include "stdafx.h"
#include "repo.h"
#include "produs.h"
#include "tonomat.h"

class Ctrl {
private:
	Repo<Produs> repo = Repo<Produs>();
	Tonomat tonomat = Tonomat(5,5,5);
public:
	Ctrl(Repo<Produs> &repo) : repo{ repo } {}
	void addElem(int cod, char* nume, int pret);
	void showAll();
	void buy(int cod,int bani);
	int getCod(int pos);
	int getPret(int pos);
	int getBani1Leu();
	int getBani5Lei();
	int getBani10Lei();




};