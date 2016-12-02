#pragma once
#include <vector>
using namespace std;

template <typename T = int>
class MyStack {
public:
	MyStack();
	bool empty() const;
	size_t size() const;
	T top() const;
	void push(const T &elem);
	void pop();
private:
	vector<T> vec;
};