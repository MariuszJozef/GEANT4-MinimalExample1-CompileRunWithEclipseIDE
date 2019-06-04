#include "G4RunManager.hh"

int main(int argc, char** argv)
{
	G4RunManager* runManager = new G4RunManager;

	G4cout << "GEANT4!" << G4endl;

	delete runManager;
	return 0;
}
