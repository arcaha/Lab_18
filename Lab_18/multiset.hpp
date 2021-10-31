#ifndef multiset_hpp
#define multiset_hpp
#include <map>
#include <iostream>

class Multiset {
private:
	std::map<int, int> my_multiset;
public:
	bool inseart(int value);
	int find(int value);
	void erase(int value);
	friend std::ostream& operator<<(std::ostream& out, const Multiset& a);
};

#endif
