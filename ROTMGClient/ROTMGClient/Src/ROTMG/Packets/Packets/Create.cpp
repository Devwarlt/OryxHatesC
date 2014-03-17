#include <ROTMG/Packets/Packets/Create.hpp>

void CreatePacket::parseFromInput(ifstream *in)
{
	this->classType = in->readsome;
	this->skinType = in->readsome;
}

void CreatePacket::writeToOutput(ofstream *out)
{
	out->write << this->classType;
	out->write << this->skinType;
}

void CreatePacket::InitializeInstanceFields()
{
	classType = 0;
	skinType = 0;
}