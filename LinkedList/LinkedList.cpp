#include <iostream>
#include "LinkedListHeader.h"

template<typename Type>
linkedListIterator::linkedListIterator(nodeType<Type> *node) {
	current = node;
}

template<typename Type>
Type linkedListIterator::operator*() {
	Type Temp* = current;
	return Temp;
}

template<typename Type>
linkedListIterator<Type> linkedListIterator::operator++() {

}

template<typename Type>
bool linkedListIterator::operator==(linkedListIterator<Type>& list)const {
	if (*current == list)
		return true;
}

template<typename Type>
bool linkedListLiterator::operator!=(linkedListIterator<Type>& list) const {

}

template<typename Type>
const linkedListType<Type> linkedListType::operator=(const linkedListType<Type>& otherList) {

}

template<typename Type>
void linkedListType::initializeList() {

}

template<typename Type>
bool linkedListType::isEmptyList() {

}

template<typename Type>
void linkedListType::print() const {

}

template<typename Type>
int linkedListType::length() const {

}

template<typename Type>
void linkedListIterator::destroyList() {

}

template<typename Type>
Type linkedListType::front() const {

}

template<typename Type>
Type linkedListType::back() const {

}

template<typename Type>
bool linkedListType::search(const Type& nodeInfo) {

}

template<typename Type>
void linkedListType::insertFirst(const Type& nodeInfo) {

}

template<typename Type>
void linkedListType::insertLast(const Type& nodeInfo) {

}

template<typename Type>
void linkedListType::deleteNode(const Type& nodeInfo) {

}

template<typename Type>
linkedListIterator<Type> linkedListType::begin() {

}

template<typename Type>
linkedListIterator<Type> linkedListType::end() {

}

template<typename Type>
linkedListType::linkedListType() {};

template<typename Type>
linkedListType::linkedListType(const linkedListType<Type> otherList) {

}