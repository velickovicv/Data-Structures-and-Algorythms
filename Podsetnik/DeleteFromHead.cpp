int deleteFromHead()
{
    if (isEmpty())
        throw "Lista je prazna!";

    int el = head->info;      // čuvamo vrednost iz prvog čvora
    SLLNode* tmp = head;      // pamtimo stari head

    if (head == tail)
        head = tail = NULL;   // ako je bio jedini element
    else
        head = head->next;    // pomeramo head na sledeći

    delete tmp;               // brišemo stari prvi čvor

    return el;                // vraćamo vrednost
}
