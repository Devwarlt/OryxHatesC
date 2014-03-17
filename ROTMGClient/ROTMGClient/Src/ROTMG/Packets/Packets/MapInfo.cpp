#include <ROTMG/Packets/Packets/MapInfo.hpp>


void MapInfoPacket::parseFromInput(ifstream *in)
{
	this->width = in->readsome; //readInt
	this->height = in->readsome; //readInt
	this->name = in->readsome; //readUTF
	this->obf0 = in->readsome; //readUTF
	this->fp = in->readsome; //readInt
	this->background = in->readsome; //readInt
	this->obf1 = in->readsome; //readInt
	this->allowPlayerTeleport = in->readsome; //readBoolean
	this->showDisplays = in->readsome; //readBoolean
	this->clientXML = new std::wstring[in->readsome]; //readShort
	for (int i = 0; i < this->clientXML->length; i++)
	{
		unsigned char utf[in->readsome]; //readInt
		in->readFully(utf); //readFully
		this->clientXML[i] = std::wstring(utf, L"UTF-8");
	}
	this->extraXML = new std::wstring[in->readsome]; //readShort
	for (int i = 0; i < this->extraXML->length; i++)
	{
		unsigned char utf[in->readsome()]; //readInt
		in->read << utf; //readFully
		this->extraXML[i] = std::wstring(utf, L"UTF-8");
	}
}

void MapInfoPacket::writeToOutput(ofstream *out)
{
	out->write << this->width;
	out->write << this->height; //writeInt
	out->write << this->name; //writeUTF
	out->write << this->obf0; //writeUTF
	out->write << this->fp; //writeInt
	out->write << this->background; //writeInt
	out->write << this->obf1; //writeInt
	out->write << this->allowPlayerTeleport; //writeBoolean
	out->write << this->showDisplays; //writeBoolean
	out->write << this->clientXML->length; //writeShort
	for (std::wstring xml : this->clientXML
	{
		//Since the array size is not known in this declaration,  You will need to call 'delete[]' where appropriate:
		//ORIGINAL LINE: byte[] utf = xml.getBytes("UTF-8");
		unsigned char *utf = xml::getBytes(L"UTF-8");
		out->writeInt(utf->length);
		out->write(utf);
	}
	out->writeShort(this->extraXML->length);
	for (std::wstring xml : this->extraXML)
	{
		//Since the array size is not known in this declaration, You will need to call 'delete[]' where appropriate:
		//ORIGINAL LINE: byte[] utf = xml.getBytes("UTF-8");
		unsigned char *utf = xml::getBytes(L"UTF-8");
		out->writeInt(utf->length);
		out->write(utf);
	}
}

void MapInfoPacket::InitializeInstanceFields()
{
	width = 0;
	height = 0;
	obf1 = 0;
	fp = 0;
	background = 0;
	clientXML = new std::wstring[0];
	extraXML = new std::wstring[0];
}