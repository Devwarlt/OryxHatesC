#include <ROTMG/Packets/Packets/Hello.hpp>

void HelloPacket::parseFromInput(ifstream *in)
{
	this->buildVersion = in->readsome; //readUTF
	this->gameId = in->readsome; //readInt
	this->guid = in->readsome; //readUTF
	this->password = in->readsome; //readUTF
	this->secret = in->readsome; //readUTF
	this->keyTime = in->readsome; //readInt
	this->key = new unsigned char[in->readsome]; //readShort
	in->read << this->key; //readFully
	this->obf0 = new unsigned char[in->readsome]; //readInt
	in->read << this->obf0; //readFully
	this->obf1 = in->readsome; //readUTF
	this->obf2 = in->readsome; //readUTF
	this->obf3 = in->readsome; //readUTF
	this->obf4 = in->readsome; //readUTF
	this->obf5 = in->readsome; //readUTF
}

void HelloPacket::writeToOutput(ofstream *out)
{
	out->write << this->buildVersion; //writeUTF
	out->write << this->gameId; //writeInt
	out->write << this->guid;//writeUTF
	out->write << this->password;//writeUTF
	out->write << this->secret;//writeUTF
	out->write << this->keyTime; //writeInt
	out->write << this->key->length; //writeShort
	out->write << this->key;
	out->write << this->obf0->length; //writeInt
	out->write << this->obf0;
	out->write << this->obf1;//writeUTF
	out->write << this->obf2;//writeUTF
	out->write << this->obf3;//writeUTF
	out->write << this->obf4;//writeUTF
	out->write << this->obf5;//writeUTF
}

void HelloPacket::InitializeInstanceFields()
{
	gameId = 0;
	keyTime = 0;
	key = new unsigned char[0];
	obf0 = new unsigned char[0];
}