#include <string>
#include <fstream>
#include <iostream>

using namespace std;

class MapInfoPacket
{

public:
	int width;
	int height;
	std::wstring name;
	std::wstring obf0;
	int obf1;
	int fp;
	int background;
	bool allowPlayerTeleport;
	bool showDisplays;
	//Since the array size is not known in this declaration, You will need to call 'delete[]' where appropriate:
	//ORIGINAL LINE: public String[] clientXML = new String[0];
	std::wstring *clientXML;
	//Since the array size is not known in this declaration,   You will need to call 'delete[]' where appropriate:
	//ORIGINAL LINE: public String[] extraXML = new String[0];
	std::wstring *extraXML;

	void parseFromInput(ifstream *in);

	void writeToOutput(ofstream *out);


private:
	void InitializeInstanceFields();

public:
	MapInfoPacket()
	{
		InitializeInstanceFields();
	}
};
