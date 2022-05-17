#include <iostream>
#include <string> // We can use all the important functions in the string library

// Identity is what will differentitate one object from another. 
 // If there are 2 physically indistinguishable objects, they will still have various names for their variables and that is different identities.
struct Product {
	std::string name; // The name variable will belong to string type
	double price;
	int rating;
	bool available; // available will only be yes or no so that is the reason why we use boolean value
};

int main()
{
	Product book4;
	Product book5;
	book4.rating = 5;
	book4.name = "Amazon";
	book5.rating = 5;
	book5.name = "Amazon";


}

