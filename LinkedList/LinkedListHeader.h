#pragma once
#include <iostream>

template<typename Type>
struct nodeType
{
	Type info;
	nodeType<Type> *link;
};

template<typename Type>
class linkedListIterator
{
private:
	nodeType<Type> * current; //pointer to point to the current node in the linked list

public:
	//Default constructor
	//Postcondition: current = NULL
	linkedListIterator() {}

	//Constructor with parameter
	//Postcondition: current = node
	linkedListIterator(nodeType<Type> *node);

	//Function to overload the dereferencing operator *
	//Postcondition:Returns the info contained in the node
	Type operator*();

	//Overload the pre-increment operator
	//Postcondition: The iterator is advanced to the next node
	linkedListIterator<Type> operator++();

	//Overload the equality operator
	//Postcondition: Returns true if this iterator is equal to the 
	//iterator specified by right otherwise returns false
	bool operator==(linkedListIterator<Type>& list) const;

	//Overload the not equal operator
	//Postcondition: Returns true if this iterator is not equal to the 
	//iterator specified by right otherwise returns false
	bool operator!=(linkedListIterator<Type>& list) const;
};


template<typename Type>
class linkedListType
{
protected:
	int count; //variable to store the number of elements in the list
	nodeType<Type> *first; //pointer to the first node of the list
	nodeType<Type> *last; //pointer to the last node of the list

public:
	//Overload the assignment operator
	const linkedListType<Type>& operator= (const linkedListType<Type>& otherList);

	//Initialize the list to an empty state
	//Postcondition: first = NULL, last = NULL, count = 0;
	void initializeList();

	//Function to determine whether the list is empty
	//Postcondition: Returns true if the list is empty otherwise it returns false
	bool isEmptyList() const;

	//Function to output the data contained in each node
	//Postcondition: Node
	void print() const;

	//Function to return the number of nodes in the list
	//Postcondition: The value of count is returned
	int length() const;

	//Function to delete all the nodes from the list
	//Postcondition: first = NULL, last = NULL, count = 0;
	void destroyList();

	//Function to return the first element in the list
	//Precondition: The list must exist and must not be empty
	//Postcondition: If the list is empty, the program terminates; otherwise,
	//the first element of the list is returned
	Type front() const;

	//Function to return the last element in the list
	//Precondition: The list must exist and must not be empty
	//Postcondition: If the list is empty, the program terminates; otherwise,
	//the last element of the list is returned
	Type back() const;

	//Function to determine whether node is in the list
	//Postcondition: Returns true if node is in the list
	//otherwise the value false is returned
	bool search(const Type& nodeInfo);

	//Function to insert node at the beginning of the list
	//Postcondition: first points to the new list, node is inserted 
	//at the beginning of the list, last points to the last node in
	//the list, and count is incremented by 1;
	void insertFirst(const Type& nodeInfo);

	//Function to insert node at the end of the list
	//Postcondition: first points to the new list, node is inserted 
	//at the beginning of the list, last points to the last node in
	//the list, and count is incremented by 1;
	void insertLast(const Type& nodeInfo);

	//Function to delete node from the list
	//Postcondition: If found, the node containing the node is deleted from the list. first points to
	//the first node, last points to the last node of the update list, and count is decremented by 1
	void deleteNode(const Type& nodeInfo);

	//Function to return an iterator at the beginning of the linked list
	//Postcondition: Returns an iterator such that the current is set to first
	linkedListIterator<Type> begin();

	//Function to return an iterator at the end of the linked list
	//Postcondition: Returns an iterator such that current is set to NULL
	linkedListIterator<Type> end();

	//Default constructor
	//Initializes the list to an empty state
	//Postcondition: first = NULL, last = NULL, count = 0;
	linkedListType();

	//copy constructor
	linkedListType(const linkedListType<Type> otherList);

	//deconstructor
	//Deletes all the nodes from the list
	//Postcondition: The list object is destroyed
	~linkedListType<Type>() {}

private:
	//Function to make a copy of list
	//Postcondition: A copy of list is created and assigned to this list
	void copyList(const linkedListType<Type>& otherList);
};