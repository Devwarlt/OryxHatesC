#include <string>
#include <fstream>
#include <iostream>

using namespace std;

class LoadPacket
{

public:
	int charId;
	bool isFromArena;

	void parseFromInput(ifstream *in);

	void writeToOutput(ofstream *out);


private:
	void InitializeInstanceFields();

public:
	LoadPacket()
	{
		InitializeInstanceFields();
	}
};
