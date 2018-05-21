#pragma once

class Produs
{
private:
	int cod;
	char* nume;
	int pret;
public:
	Produs();
	Produs(int cod, char* nume, int pret);
	Produs(const Produs &p);
	~Produs();
	char* toString();
	int getCod();
	int getPret();
	char* getNume();
	void setCod(int cod);
	void setPret(int pret);
	void setNume(char* nume);
	bool  operator==(const Produs &t);
	Produs& operator=(const Produs &t);
	
};