#include <iostream>
#include <string>
#include <list>
#include <vector>

bool isSelfDividing(int num)
{
	std::string stringified_number = std::to_string(num);
	for(int i = 0; i< stringified_number.length(); i++)
	{
		int number_part = int(stringified_number[i]) - '0';
		if(number_part == 0 || num % number_part != 0)
		{
			return false;
		}
	}
	return true;
}
std::vector<int> selfDividingNumbers(int left, int right)
{
	std::vector<int> my_vector;
	std::vector<int>::iterator it = my_vector.begin();
	for(int i = left; i <= right; i++)
	{
		if(isSelfDividing(i))
		{
			my_vector.push_back(i);
		}
	}
	
	return my_vector;
} 

int main()
{
	std::vector<int> vec = selfDividingNumbers(1,22);
	std::vector<int>::const_iterator iter;
	for (iter = vec.begin(); iter != vec.end(); iter++)
    		std::cout << " " <<  *iter;
	std::cout << std::endl;
}
