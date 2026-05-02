SLList::~SLList()
{
    while (!isEmpty()) {
        deleteFromHead();
    }
}
