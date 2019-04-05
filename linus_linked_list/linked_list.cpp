#include "linked_list.hpp"


linked_list::linked_list()
{
	head = NULL;
}

void linked_list::display()
{
	node* temp = this->head;
	while(temp != NULL)
	{
		cout << temp->data << "\t";
		temp =  temp->next;
	}
}

void linked_list::createnode(int value)
{
	node** temp = &(this->head);
	while(*temp != NULL) 
	{
        temp = &((*temp)->next);
	}
    *temp = new node;
    (*temp)->data = value;
    (*temp)->next = NULL;
}

void linked_list::delete_position(unsigned int pos)
{
    unsigned int pos_node = 0;
	node** temp = &(this->head);
	while(*temp != NULL && pos_node != pos) 
	{
        temp = &((*temp)->next);
        pos_node++;
	}
    if(*temp != NULL)
    {
        node* deleted_node = *temp; 
        *temp = deleted_node->next;
    }
}

void linked_list::insert_position(int value, unsigned int pos)
{
    unsigned int pos_node = 0;
	node** temp = &(this->head);
	while(*temp != NULL && pos_node != pos) 
	{
        temp = &((*temp)->next);
        pos_node++;
	}
    if(*temp != NULL)
    {
        node* insertion = new node;
        insertion->data =  (*temp)->data;
        insertion->next = (*temp)->next;
        (*temp)->data = value;
        (*temp)->next = insertion;
    }
    else
    {
        *temp = new node;
        (*temp)->data =  value;
        (*temp)->next = NULL;
    }
}
