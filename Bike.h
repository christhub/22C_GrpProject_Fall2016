//Specification File for the Bike Class
#ifndef  BIKE_H
#define BIKE_H
#include <string>

using namespace std;

class Bike
{
private:
	string serialNumber;
	string make;
	string frameMaterial;
	string frameSize;
	string saddle;

public:
	//accessor
	const string getSerialNumber() { return serialNumber; };
	const string getMake() { return make; };
	const string getFrameMaterial() { return frameMaterial; };
	const string getFrameSize() { return frameSize; };
	const string getSaddle() { return saddle; };

	//mutator
	void setSerialNumber(string s) { serialNumber = s; };
	void setMake(string m) { make = m; };
	void setFrameMaterial(string f) { frameMaterial = f; };
	void setFrameSize(string f) { frameSize = f; };
	void setSaddle(string s) { saddle = s; };

	//operator overload
	bool operator>(Bike b1) const
	{
		return serialNumber > b1.serialNumber;
	}

	bool operator==(Bike b1) const
	{
		return serialNumber == b1.serialNumber;
	}


	bool operator=(Bike b1) 
	{
		serialNumber = b1.serialNumber;
		make = b1.make;
		frameMaterial = b1.frameMaterial;
		frameSize = b1.frameSize;
		saddle = b1.saddle;
		return true;
	}

	//constructor
	Bike()
	{
		serialNumber = "";
		make = "";
		frameMaterial = "";
		frameSize = "";
		saddle = "";
	};
	Bike(string s, string m, string fM, string fS, string sa)
	{
		serialNumber = s;
		make = m;
		frameMaterial = fM;
		frameSize = fS;
		saddle = sa;
	};

};
#endif
//! BIKE_H