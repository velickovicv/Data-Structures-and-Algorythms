void SLList::addToTail(int el)
{
    if (!isEmpty()) {
        tail->next = new SLLNode(el);
        tail = tail->next;
    }
    else {
        head = tail = new SLLNode(el);
    }
}
