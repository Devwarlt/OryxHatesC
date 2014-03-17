#include <string>
#include <fstream>
#include <iostream>

using namespace std;

class HelloPacket
{

public:
	std::wstring buildVersion;
	int gameId;
	std::wstring guid;
	std::wstring password;
	std::wstring secret;
	int keyTime;
	//Since the array size is not known in this declaration,  You will need to call 'delete[]' where appropriate:
	//ORIGINAL LINE: public byte[] key = new byte[0];
	unsigned char *key;
	//Since the array size is not known in this declaration, You will need to call 'delete[]' where appropriate:
	//ORIGINAL LINE: public byte[] obf0 = new byte[0];
	unsigned char *obf0;
	std::wstring obf1;
	std::wstring obf2;
	std::wstring obf3;
	std::wstring obf4;
	std::wstring obf5;

	void parseFromInput(ifstream *in);

	void writeToOutput(ofstream *out);


private:
	void InitializeInstanceFields();

public:
	HelloPacket()
	{
		InitializeInstanceFields();
	}
};
