

void insertion_sort_list(listint_t **list)
{
	listint_t *i, *j, *next;

	while (i != NULL)
	{
		next = i->next;
		j = i->;

		while (j != NULL && i->n < j->n)
		{
			if (j->prev != NULL)
				j->prev->next = i; 
			else
				*list = i;

			if (i->next != NULL)
				i->next->prev = j;

			i->prev = j->prev;
			j->next = i->next;
			i->next = j;
			j->prev = i;

			print_list(*list);

			j = next;
		}

		i = next;
	}
}
