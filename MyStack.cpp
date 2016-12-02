#include"MyStack.h"

template<typename T>
MyStack<T>::MyStack(){
}

template<typename T>
bool MyStack<T>::empty() const{
	return (size() == 0);
}

template<typename T>
size_t MyStack<T>::size() const{
	return vec.size();
}

template<typename T>
T MyStack<T>::top() const {
	return vec.back();
}

template<typename T>
void MyStack<T>::push(const T &elem){
	vec.push_back(elem);
}

template<typename T>
void MyStack<T>::pop(){
	vec.pop_back();
}