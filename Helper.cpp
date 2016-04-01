#include "Helper.h"
#include <fstream>
#include <vector>
#include <string>
#include <iostream>
#include <cstdlib>

std::vector<std::string> Helper::readFile(std::string fileName)
{
	std::vector<std::string> vString;
	std::ifstream file;
	std::string line;
	file.open(fileName.c_str());
	while (getline(file, line)) 
	{
		vString.push_back(line);
	}
	file.close();
	return vString;
}

std::vector<int> Helper::parseInt(std::vector<std::string> vString)
{
	std::vector<int> vInt;
	for (int i=0;i < vString.size(); i++)
	{
		vInt.push_back(std::atoi(vString.at(i).c_str()));
	}
	return vInt;
}

std::vector<int> Helper::orderNumber(std::vector<int> vInt)
{
	int min, temp = 0;
	for(int i = 0; i < vInt.size(); i++) 
	{
		min = i;
		for(int y = i+1 ; y < vInt.size(); y++) 
		{
			if (vInt.at(y) < vInt.at(min)) 
			{
				min = y;
			}	
		}
		temp = vInt.at(min);
		vInt.at(min)=vInt.at(i);
		vInt.at(i)=temp;
	}
	return vInt;
}

void Helper::showVector(std::vector<std::string> vString)
{

	for(int i = 0;i < vString.size();i++)
	{
		std::cout<<vString.at(i)<<std::endl;	
	}

}

void Helper::showVector(std::vector<int> vInt)
{
	for(int i = 0;i < vInt.size();i++)
	{
		std::cout<<vInt.at(i)<<std::endl;	
	}
}
