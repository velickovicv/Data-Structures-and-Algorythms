void addToTail(int el)
{
    if (!isEmpty())
    {
        tail = new DLLNode(el, tail, NULL);
        tail->prev->next = tail;
    }
    else
    {
        head = tail = new DLLNode(el);
    }
}
