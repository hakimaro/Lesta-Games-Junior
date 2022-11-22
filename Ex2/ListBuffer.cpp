#include "ListBuffer.h"


ListBuffer::ListBuffer() {
	head = buffer.begin();
	tail = buffer.begin();
}

void ListBuffer::sendIntoBeginning(list<int>::iterator& it) {
	if (it == buffer.end()) {
		it = buffer.begin();
	}
}

void ListBuffer::put(int value) {
	if (tail == buffer.end()) {
		buffer.push_back(value);
		head = buffer.begin();
	}
	else {
		buffer.insert(tail, value);
		++tail;
	}
}

size_t ListBuffer::getSize() {
	return buffer.size();
}

int ListBuffer::get() {
	if (head != buffer.end()) {
		int value = *head;
		++head;
		sendIntoBeginning(head);
		return value;
	}
	return 0;
}