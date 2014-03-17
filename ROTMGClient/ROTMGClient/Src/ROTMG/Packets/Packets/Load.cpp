#include <ROTMG/Packets/Packets/Load.hpp>

void LoadPacket::parseFromInput(ifstream *in)
{
	this->charId = in->readsome; //readInt
	this->isFromArena = in->readsome; //readBoolean
}

void LoadPacket::writeToOutput(ofstream *out)
{
	out->write << this->charId; //writeInt
	out->write << this->isFromArena; //writeBoolean
}

void LoadPacket::InitializeInstanceFields()
{
	charId = 0;
	isFromArena = false;
}