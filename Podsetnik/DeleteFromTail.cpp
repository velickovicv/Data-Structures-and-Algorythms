int deleteFromTail()
{
    if (isEmpty())
        throw "Lista je prazna!";

    int el = tail->info;        // čuvamo vrednost poslednjeg čvora
    SLLNode* forDel = tail;     // pamtimo čvor koji brišemo

    if (head == tail)
    {
        head = tail = NULL;     // samo jedan element
    }
    else
    {
        SLLNode* tmp;

        // idemo od početka dok ne dođemo do pretposlednjeg
        for (tmp = head; tmp->next != tail; tmp = tmp->next);

        tail = tmp;             // novi tail je pretposlednji čvor
        tail->next = NULL;      // prekidamo vezu sa starim tail-om
    }

    delete forDel;              // brišemo stari poslednji čvor
    return el;                  // vraćamo njegovu vrednost
}
