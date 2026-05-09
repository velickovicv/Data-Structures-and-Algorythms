// Treba da se proveri da li je el. br2 == el 


void LList::moveForward(int el)
{

	if (isEmpty() || head->info == el)
		return;

	LListNode* pp = head;
	LListNode* p = pp->next;

	if (p->next == nullptr)
		return;

	LListNode* t = p->next;

	while (t != nullptr && t->info != el)
	{
		pp = p;
		p = t;
		t = t->next;
	}

	if (t != nullptr)
	{

	    LListNode* cuva = t->next;

		pp->next = t;
		t->next = p;
		p->next = cuva;
		
	}

}
