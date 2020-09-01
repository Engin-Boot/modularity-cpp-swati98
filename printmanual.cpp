#include <iostream>
#include "TeleColorCoder.h"
#include <string>
#include <fstream>
#include <cstdio>
using namespace std;
using namespace TelCoColorCoder;

extern int numberOfPairs;
ColorPair GetColorFromPairNumber(int pairNumber);
int GetPairNumberFromColor(constants::MajorColor major, constants::MinorColor minor);

void WriteToFile()
{
	
	fstream fout;
	fout.open("Color-Number-Manual.txt", ios::app);
	for(int i =1 ;i <=numberOfPairs;i++)
	{
		TelCoColorCoder::ColorPair color = GetColorFromPairNumber(i);
		string color_string = color.ToString();
		string output_string = to_string(i);
		output_string += ": ";
		output_string += color_string;
		fout<<output_string;
		fout<<" \n";
	}
	fout.close();

}
