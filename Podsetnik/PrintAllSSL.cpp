void SLList::printAll()
{
    for (SLLNode* tmp = head; tmp != NULL; tmp = tmp->next) {
        cout << tmp->print() << " ";
    }
}
