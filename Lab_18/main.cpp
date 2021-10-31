#include <iostream>
#include <map>
#include "multiset.hpp"

int main() {
		Multiset ob1;
		ob1.inseart(5);
		ob1.inseart(7);
		ob1.inseart(6);
		ob1.inseart(5);
		
		std::cout << ob1;
		std::cout << "Count elements 5" << "\n";
		std::cout << ob1.find(5) << "\n";

		ob1.erase(7);
		std::cout << "Erase 7" << "\n";
		std::cout << ob1;
}
