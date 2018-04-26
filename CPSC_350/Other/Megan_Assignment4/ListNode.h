#ifndef ASSIGNMENT4_LISTNODE_H
#define ASSIGNMENT4_LISTNODE_H

class ListNode
{
public:
	inline ListNode(Student &d); //cunstructor

	inline ~ListNode(); //destructor

	Student data;
	ListNode *next;
	ListNode *prev;
};

ListNode::ListNode(Student &d)
{
	data = d;
	next = 0; //setting next equal to 0
	prev = 0; //setting previous equal to 0
}

ListNode::~ListNode()
{
	delete next;
	delete prev;
}


#endif //ASSIGNMENT4_LISTNODE_H