void addToHead(int el)
{
  if(!isEmpty()) {

    head = new head(el, null, head);
    head->next->prev = head;
  }

else 
{
   head = tail = new DDLNode(el);
 }
}
