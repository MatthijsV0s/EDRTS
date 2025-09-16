#include <stdio.h>
#include <string>
#include <iostream>
#include <cstdio>
#include <vector>

class Persoon {
public:
	void Print() {
		printf("%s is %d jaren oud.\n", mNaam.c_str(), mLeeftijd);
	}
	void VerhoogLeeftijd(int I) {
		mLeeftijd += I;
	}
	Persoon(std::string naam, int leeftijd) {
		mNaam = naam;
		mLeeftijd = leeftijd;
	}

private:
	int mLeeftijd;
	std::string mNaam;
};

class Team {
public:
	void VoegPersoonToe(Persoon* p) {
		mLeden.push_back(p);
	}
	void Print() const {
		printf("\n-------Team-------\n");
		for (auto p : mLeden) {
			p->Print();
		}
	}
private:
	std::vector<Persoon*> mLeden;
};

int main(void) {
	Team t1;
	Persoon p1("Matthijs", 18);
	Persoon p2("Jeroen", 18);
	Persoon p3("Hanna", 16);
	Persoon p4("Daniel", 14);
	Persoon p5("Arjan", 49);

	t1.VoegPersoonToe(&p1);
	t1.VoegPersoonToe(&p2);
	t1.VoegPersoonToe(&p3);
	t1.VoegPersoonToe(&p4);
	t1.VoegPersoonToe(&p5);

	t1.Print();

	p4.VerhoogLeeftijd(10);

	t1.Print();
}