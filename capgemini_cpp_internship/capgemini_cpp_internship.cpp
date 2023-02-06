#include <iostream>
#include <string>
#include <vector>

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

	void deletePhone()
	{
		int IndexNo = 0;
		for (Cellphone i : cellphones) {
			std::cout << "Phone No. " << IndexNo << std::endl;
			std::cout << "Brand name: " << i.brandName << std::endl;
			std::cout << "Model name: " << i.modelName << std::endl;
			std::cout << "Form factor: " << i.formFactor << std::endl;
			std::cout << "Year of issue: " << i.yearOfIssue << std::endl;
			std::cout << "Screen size: " << i.screenSize << std::endl;
			std::cout << "Price: " << i.price << std::endl;
			IndexNo++;
		}

		std::cout << "Select a cellphone index number to delete: ";
		int indexToDelete;
		std::cin >> indexToDelete;
		cellphones.erase(cellphones.begin() + indexToDelete);
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
		std::cout << "a: Add a phone." << std::endl;
		std::cout << "d: Delete a phone." << std::endl;
		std::cout << "x: exit." << std::endl;
		std::cout << "Please specify your operation: " << std::endl;
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
		case 'x':
			flag = true;
			break;
		}
		if (flag) break;
	}

	return 0;
}