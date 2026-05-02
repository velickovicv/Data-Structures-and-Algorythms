void SLList::addToHead(int el)
{
    head = new SLLNode(el, head);

    if (tail == NULL)
        tail = head;
}
