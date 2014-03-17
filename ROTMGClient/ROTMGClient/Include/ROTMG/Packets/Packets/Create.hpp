#include <string>
#include <fstream>
#include <iostream>

using namespace std;

class CreatePacket
{

public:
	int classType;
	int skinType;

	void parseFromInput(ifstream *in);

	void writeToOutput(ofstream *out);


private:
	void InitializeInstanceFields();

public:
	CreatePacket()
	{
		InitializeInstanceFields();
	}
};