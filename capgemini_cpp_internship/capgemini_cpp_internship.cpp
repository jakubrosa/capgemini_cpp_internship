#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

struct Cellphone
{
	std::string brandName;
	std::string modelName;
	std::string formFactor;
	int yearOfIssue;
	int screenSize;
	int price;
};

class CellphoneShop
{
public:

	void addPhone()
	{
		Cellphone phoneToAdd;

		std::cout << "Enter brand name: " << std::endl;
		std::cin >> phoneToAdd.brandName;
		std::cout << "Enter model name: " << std::endl;
		std::cin >> phoneToAdd.modelName;
		std::cout << "Enter form factor: " << std::endl;
		std::cin >> phoneToAdd.formFactor;
		std::cout << "Enter year of issue: " << std::endl;
		std::cin >> phoneToAdd.yearOfIssue;
		std::cout << "Enter screen size: " << std::endl;
		std::cin >> phoneToAdd.screenSize;
		std::cout << "Enter price: " << std::endl;
		std::cin >> phoneToAdd.price;
		
		cellphones.push_back(phoneToAdd);
	}

	void showPhones()
	{
		int IndexNo = 0;
		for (const auto& i : cellphones) {
			std::cout << "Phone No. " << IndexNo << std::endl;
			std::cout << "Brand name: " << i.brandName << std::endl;
			std::cout << "Model name: " << i.modelName << std::endl;
			std::cout << "Form factor: " << i.formFactor << std::endl;
			std::cout << "Year of issue: " << i.yearOfIssue << std::endl;
			std::cout << "Screen size: " << i.screenSize << std::endl;
			std::cout << "Price: " << i.price << std::endl;
			IndexNo++;
		}
	}

	void deletePhone()
	{
		showPhones();

		std::cout << "Select a cellphone index number to delete: ";
		int indexToDelete;
		std::cin >> indexToDelete;
		cellphones.erase(cellphones.begin() + indexToDelete);
	}

	void reports()
	{
		std::cout << "What kind of report do you want?" << std::endl;
		std::cout << "1: Show all phones by the same brand." << std::endl;
		std::cout << "2: Show all phones of a given form factor and screen size." << std::endl;
		std::cout << "3: Show the name of the brand with the maximum quantity of the phones." << std::endl;
		std::cout << "4: Show TOP - 3 screen sizes(popularity is determined by the number of phones with screen size)" << std::endl;
		char option;
		std::cin >> option;
		switch (option)
		{
			case 1:
				for (const auto &i : cellphones)
				{
					// Sadly I didn't have enough time for completion of this task, what I wanted to do was to use std::sort here.
					// Also I know that this class takes too much responsibilities, but refactoring it would take some time ;-;
				}
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
		}
	}

private:
	std::vector<Cellphone> cellphones;
};



int main()
{
	CellphoneShop dummyShop;
	bool flag = false;
	while (true)
	{
		std::cout << "What operation do you want to perform?" << std::endl;
		std::cout << "a: Add a phone." << std::endl;
		std::cout << "d: Delete a phone." << std::endl;
		std::cout << "r: Reports." << std::endl;
		std::cout << "x: exit." << std::endl;
		char option;
		std::cin >> option;
		switch (option)
		{
		case 'a':
			dummyShop.addPhone();
			break;
		case 'd':
			dummyShop.deletePhone();
			break;
		case 'r':
			dummyShop.reports();
			break;
		case 'x':
			flag = true;
			break;
		}
		if (flag) break;
	}

	return 0;
}