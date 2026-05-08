void LList::removeDuplicates()
{
	if (isEmpty())
		return;

	SLLNode* traznieEL = head;

	while (trazeniEL != nullptr)
	{
		SLLNode* prethodni = trazeniEL;
		SLLNode* trenutni = trazeniEL->next;

		while (trenutni != nullptr)
		{
			// Ako je trenutni čvor duplikat, ukloni ga iz liste

			if (trenutni->info == trazeniEl->info)
			{
				prethnodni->next = trenutni->next;
				delete trenutni;
				trenutni = prethodni->next; // pomeramo trenutni na sledeći čvor nakon brisanja
			}
			else
			{
				prethodni = trenutni;
				trenutni = trenutni->next;
			}
		}
		trazeniEl = trazeniEl->next; // pomeramo trazeniEL na sledeći čvor
	}

}
