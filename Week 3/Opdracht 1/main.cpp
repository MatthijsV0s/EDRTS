#include <stdio.h>
#include <string>
#include <iostream>
#include <cstdio>

class Voertuig {

protected:
	std::string mKleur;
	std::string mNaam;

public:
	Voertuig(std::string kleur, std::string naam) {
		mKleur = kleur;
		mNaam = naam;
	}

	void Print() {
		printf("Not Found");
	}

};

class Auto :Voertuig {
private:
	int mDeuren;
	int mPk;

public:
	Auto(std::string kleur, std::string naam, int deuren, int pk) :Voertuig(kleur, naam) {
		mDeuren = deuren;
		mPk = pk;
	}

	void Print() {
		printf("%s is een auto met de kleur %s, en heeft %d deuren en %d Pk.\n", mNaam.c_str(), mKleur.c_str(), mDeuren, mPk);
	}
};

class Fiets :Voertuig {
private:
	bool mElektrisch;

public:
	Fiets(std::string kleur, std::string naam, bool elektrisch) :Voertuig(kleur, naam) {
		mElektrisch = elektrisch;
	}

	void Print() {
		printf("%s is een fiets met de kleur %s, en is %s elektrisch.\n", mNaam.c_str(), mKleur.c_str(), mElektrisch ? "wel" : "niet");
	}
};

int main(void) {
	Auto a1("wit", "Scenic", 5, 200);
	Fiets f1("blauw", "Giant", 0);
	a1.Print();
	f1.Print();
}