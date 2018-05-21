#include "stdafx.h"
#include "produs.h"
#include "string.h"
#include "stdlib.h"
#include <iostream>
using namespace std;
Produs::Produs()
{
	this->cod = 0;
	this->nume = NULL;
	this->pret = 0;
}

Produs::Produs(int cod, char * nume, int pret)
{
	this->cod = cod;
	this->nume = new char[strlen(nume) + 1];
	strcpy_s(this->nume, strlen(nume) + 1, nume);
	this->pret = pret;
}

Produs::Produs(const Produs & p)
{
	this->cod = p.cod;
	this->nume = new char[strlen(p.nume) + 1];
	strcpy_s(this->nume, strlen(p.nume) + 1, p.nume);
	this->pret = p.pret;
}

Produs::~Produs()
{
	if (this->nume != NULL) {
		
		delete[] this->nume;
		

		this->nume = NULL;


	}

}

char * Produs::toString()
{
	int noChars = strlen(this->nume) + 16 + 15 + 15 + 2;
	char* result = new char[noChars];
	char* aux = new char[20];

	strcpy_s(result, noChars, "Cod:");
	_itoa_s(this->cod, aux, 3, 10);
	strcat_s(result, noChars, aux);
	strcat_s(result, noChars, ";");

	strcat_s(result, noChars, "Nume:");
	strcat_s(result, noChars, this->nume);
	strcat_s(result, noChars, ";");

	strcat_s(result, noChars, "Pret:");
	_itoa_s(this->pret, aux, 8, 10);
	strcat_s(result, noChars, aux);
	
	
	


	if (aux) {
		delete[] aux;
		aux = NULL;
	}

	return result;
	
}

int Produs::getCod()
{

	return this->cod;
}

int Produs::getPret()
{
	return this->pret;
}

char * Produs::getNume()
{
	return this->nume;
}

void Produs::setCod(int cod)
{
	this->cod = cod;
}

void Produs::setPret(int pret)
{
	this->pret = pret;
}

void Produs::setNume(char * nume)
{
	if(this->nume) {
		delete[] this->nume;
	}
	this->nume = new char[strlen(nume) + 1];
	strcpy_s(this->nume, strlen(nume) + 1, nume);
}

bool Produs::operator==(const Produs & t)
{
	return (strcmp(this->nume, t.nume) == 0 && (this->cod == t.cod) && (this->pret == t.pret));
}

Produs & Produs::operator=(const Produs & t)
{
	
		this->setCod(t.cod);
		this->setPret(t.pret);
		this->setNume(t.nume);
		return *this;
}

