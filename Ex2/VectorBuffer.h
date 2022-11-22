#pragma once
#include <vector>

using namespace std;

template <size_t size, bool resizable>
class VectorBuffer
{
private:
	vector<int> buffer;
	size_t tail = 0;
	size_t head = 0; 

public:
	VectorBuffer() { buffer.resize(size, 0); }

	void put(int value) {
		if (resizable && head == buffer.size()) {
			buffer.push_back(value);
		}
		else {
			buffer[head] = value;
		}
		head = (resizable) ? ++head : ++head % buffer.size();
	}

	int getSize() { return buffer.size(); }

	int get() {
		int value = buffer[tail];
		++tail% buffer.size();
		return value;
	}
};
