#include <ROTMG/Packets/Packets/Failure.hpp>

void FailurePacket::parseFromInput(ifstream *in)
{
	this->errorId = in->read(); //readInt
	this->errorDescription = in->readsome(); //readUTF
}

void FailurePacket::writeToOutput(ofstream *out)
{
	std::cout << this->errorId;
	std::wcout << this->errorDescription; 

}

void FailurePacket::InitializeInstanceFields()
{
	errorId = 0;
}