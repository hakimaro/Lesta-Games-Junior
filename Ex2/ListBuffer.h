#pragma once
#include <list>
#include <iterator>

using namespace std;
class ListBuffer
{
private:
	list<int> buffer;
	list<int>::iterator head;
	list<int>::iterator tail;

	void sendIntoBeginning(list<int>::iterator& it);

public:
	ListBuffer();
	void put(int value);
	size_t getSize();
	int get();
};

