void LList::removeDuplicates()
{
	if (isEmpty())
		return;

	LListNode* trazeniEL = head;

	while (trazeniEL != nullptr)
	{
		LListNode* prethodni = trazeniEL;
		LListNode* trenutni = trazeniEL->next;

		while (trenutni != nullptr)
		{
			// Ako je trenutni čvor duplikat, ukloni ga iz liste

			if (trenutni->info == trazeniEL->info)
			{
				prethodni->next = trenutni->next;
				delete trenutni;
				trenutni = prethodni->next; // pomeramo trenutni na sledeći čvor nakon brisanja
			}
			else
			{
				prethodni = trenutni;
				trenutni = trenutni->next;
			}
		}
		trazeniEL = trazeniEL->next; // pomeramo trazeniEL na sledeći čvor
	}

}
