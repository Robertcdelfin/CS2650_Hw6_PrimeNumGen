//Finds prime numbers in a given range.
#include <iostream>
#include <iomanip>  
#include <vector>


// print the elements of the vector
template<typename T>
void printv(std::vector<T> & v) {
	if (v.empty()) return;
	for (T &i : v) std::cout << i << " ";
	std::cout << std::endl;
}
//prototype
void growVector(int upperBound);

//From user input giving the upperbound populates a vector 
void growVector(int upperBound)
{

	int count; //for the second rule of prime
	std::vector<int> primeVector;
	int lowerBound;
	for (lowerBound = 1; lowerBound <= upperBound; lowerBound++) 
	{  //numbers to be checked as prime
		count = 0;
		for (int inner = 1; inner <= lowerBound; inner++)
		{
			if (lowerBound % inner == 0)
			{
				count++;
			}
		}
		//If the count is exactly two when it is only divisible by itself and 1
		if(count == 2) 
		{
			primeVector.push_back(lowerBound);
		}
	}
	std::cout << "The Prime Numbers are: ";
	printv(primeVector);
}

int main()
{
	//the max range of Prime Generated
	int userRange;
	do 
	{
		std::cout << "Enter Prime Number Range: ";
		std::cin >> userRange;
		if (userRange < 0) 
		{
			std::cout << "The value inputed needs to be greater than 1 try again.";
		}
	} while (userRange < 1);

	growVector(userRange);	
	return 0;
}