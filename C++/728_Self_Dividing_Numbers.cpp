#include <iostream>
#include <string>
#include <list>
#include <vector>


bool isSelfDividing(int num)
{
	std::string stringified_number = std::to_string(num);
	for(int i = 0; i< stringified_number.length(); i++)
	{
		//int number_part = std::stoi(stringified_number[i]);
		int number_part = int(stringified_number[i]) - '0';
		
	//	std::cout << stringified_number << " " << stringified_number[i] << std::endl;

		//std::cout << (num % number_part) << std::endl;

		if(number_part == 0 || num % number_part != 0)
		{
			//std::cout << num << " " << number_part <<  std::endl;
			return false;
		}
	}
	return true;
}
std::vector<int> selfDividingNumbers(int left, int right)
{
	//int left = 1;
	//int right = 22;
	std::vector<int> my_vector;
	std::vector<int>::iterator it = my_vector.begin();
	//advance(index,0);
	for(int i = left; i <= right; i++)
	{
	//	advance(index,index++);
		//std::string my_string = std::to_string(i);
		//std::cout << my_string << std::endl;
		if(isSelfDividing(i))
		{
			//std::string my_string = std::to_string(i);
			//std::cout << my_string << std::endl;
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
