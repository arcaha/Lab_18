#include "multiset.hpp"
#include <iostream>
#include <map>
#include <iterator>

bool Multiset::inseart(int value) {
	std::map<int, int>::iterator it;
	int insert_count = 0;
	bool cheack = 1;
	for (auto it = my_multiset.begin(); it != my_multiset.end(); ++it) {
		insert_count = it->second;
		if (it->first == value) {
			cheack = 0;
			it->second++;
			break;
		}
	}
	if (cheack == 1) {
		insert_count = 1;
		my_multiset.insert(std::make_pair(value, insert_count));
	}
	return cheack;
}

int Multiset::find(int value) {
	std::map<int, int>::iterator it;
	for (auto it = my_multiset.begin(); it != my_multiset.end(); ++it) {
		if (it->first == value) {
			int find_count = it->second;
			return find_count;
		}
	}
	return 0;
}

void Multiset::erase(int value) {
	std::map<int, int>::iterator it;
	for (auto it = my_multiset.begin(); it != my_multiset.end(); ++it) {
		if (it->first == value) {
			it->second--;
			break;
		}
	}
}

std::ostream& operator << (std::ostream& out, const Multiset& a) {
	std::map<int, int>::iterator it;
	int out_count = 0;
	const std::map <int, int>& map = a.my_multiset;
	for (auto it = map.cbegin(); it != map.cend(); ++it) {
		out_count = it->second;
		if (out_count >= 1) {
			while (out_count != 0) {
				std::cout << it->first << std::endl;
				out_count--;
			}
		}
	}
	return out;
}