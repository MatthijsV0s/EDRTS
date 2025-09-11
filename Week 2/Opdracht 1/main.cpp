#include <stdio.h>
#include <string>

#include <iostream>
#include <cstdio>

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

int main(void) {
	Persoon persoon1("Matthijs", 18);
	Persoon persoon2("Jeroen", 18);
	persoon1.Print();
	persoon2.Print();
	persoon1.VerhoogLeeftijd(12);
	persoon2.VerhoogLeeftijd(22);
	persoon1.Print();
	persoon2.Print();
}