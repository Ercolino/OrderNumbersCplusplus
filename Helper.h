#ifndef Helper_h
#define Helper_h

#include <vector>
#include <string>

class Helper
{
	public:
		std::vector<std::string> readFile(std::string fileName);
		std::vector<int> parseInt(std::vector<std::string> vString);
		std::vector<int> orderNumber(std::vector<int> vInt);

		void showVector(std::vector<std::string> vString);
		void showVector(std::vector<int> vInt);
};
#endif