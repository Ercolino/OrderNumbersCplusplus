#include<string>
#include<iostream>

#include"Helper.h"



int main(int argc, char* argv[]) 
{
	std::vector<std::string> vString;
	std::vector<int> vInt;
	
	Helper helper;
	
	vString = helper.readFile(argv[1]);
	vInt = helper.parseInt(vString);
	
	helper.showVector(helper.orderNumber(vInt));
	return 0;
}
