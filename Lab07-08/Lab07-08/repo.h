#pragma once
#include "stdafx.h"
#include <iostream>
#include "produs.h"
#include <vector>


using namespace std;

template < class T>
class Repo {
private:

	vector<T> elem;
	
public:
	Repo(){}

	vector <T> getAll()
	{
		return this->elem;
	}

	void addElem(const T t)
	{
		elem.push_back(t);
	}

	int getSize()
	{
		return elem.size();
	}
	
	Produs& getPos(int i)
	{
		return this->elem[i];
	}

	int getCod(int pos)
	{
		return this->elem[pos].getCod();
	}
	int getPret(int pos)
	{
		return this->elem[pos].getPret();
	}

	
	


};


