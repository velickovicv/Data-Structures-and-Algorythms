void deleteEl(int el)
{
    if (isEmpty())
        return;

    // 1. ako je samo jedan element
    if (head == tail && head->info == el)
    {
        delete head;
        head = tail = NULL;
    }

    // 2. ako brišemo prvi element
    else if (head->info == el)
    {
        DLLNode* tmp = head;
        head = head->next;
        head->prev = NULL;
        delete tmp;
    }

    // 3. ako je u sredini ili na kraju
    else
    {
        DLLNode* tmp;

        for (tmp = head->next;
             tmp != NULL && tmp->info != el;
             tmp = tmp->next);

        if (tmp != NULL)
        {
            tmp->prev->next = tmp->next;

            if (tmp->next != NULL)
                tmp->next->prev = tmp->prev;

            if (tmp == tail)
                tail = tmp->prev;

            delete tmp;
        }
    }
}
