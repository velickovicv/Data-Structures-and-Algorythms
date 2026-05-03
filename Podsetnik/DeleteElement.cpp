void deleteEl(int el)
{
    if (isEmpty())
        throw "Lista je prazna!";

    // slučaj: samo jedan element
    if (head == tail && head->info == el)
    {
        delete head;
        head = tail = NULL;
    }
    // slučaj: element je na početku
    else if (head->info == el)
    {
        SLLNode* tmp = head;
        head = head->next;
        delete tmp;
    }
    // slučaj: element je negde u sredini ili na kraju
    else
    {
        SLLNode *pred, *tmp;

        // Znaci pred pamti prethodni cvor, jer u linked listi ne postoji nacin da znamo sta je iza nas, 
      // samo veza ispred nas, mi kazemo da je pred = head, na prvi element, onda kazemo da je temp = head->next, 
      //onda sa heada skocimo na sledeci cvor, sve dok temp != NULL nismo dosli do kraja ili && nismo nasli element temp->info != el; 
      //sa korakom pred = pred->next, temp = temp->next);
      
        for (pred = head, tmp = head->next;
             tmp != NULL && tmp->info != el;
             pred = pred->next, tmp = tmp->next);

        // ako je pronađen
        if (tmp != NULL)
        {

          // Samo cemo pokazivacem na prethodnog da stavimo na cvor ispred trenutnog, i time smo obrisali, element koji je bio izmedju 
          
            pred->next = tmp->next;

            // ako brišemo tail
            if (tmp == tail)
                tail = pred;

            delete tmp;
        }
    }
}
