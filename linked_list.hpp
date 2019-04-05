#include <iostream>
using namespace std;

struct node
{
	int data;
	node *next;	
};

class linked_list
{
		private:
		node *head;
		public:
		linked_list();
		void display();
        void createnode(int value);
        void delete_position(unsigned int pos);
        void insert_position(int value, unsigned int pos);
};
