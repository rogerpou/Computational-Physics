/* data structures for list elements */
struct elem_struct
{
	int
	info;
	/* holds ‘‘information’’ */
	struct elem_struct *next; /* points to successor (NULL if last) */
};

typedef struct node_struct elem_t;
/* define new type for nodes */



/******************* delete_element() *****************/
/** Deletes a single list element (i.e. only if it
**/
/** is not linked to another element)
**/
/** PARAMETERS: (*)= return-paramter
**/
/**
elem: pointer to element
**/
/** RETURNS:
**/
/**
0: OK, 1: error
**/
/******************************************************/
int delete_element(elem_t *elem)
{
	if(elem == NULL)
		{
			fprintf(stderr, "attempt to delete ‘nothing‘\n");
			return(1);
		}
	else if(elem->next != NULL)
		{
			fprintf(stderr, "attempt to delete linked element!\n");
			return(1);
		}
	free(elem);
	return(0);
}

/******************* insert_element() *****************/
/** Inserts the element ‘elem‘ in the ‘list
**/
/** BEHIND the ‘where‘. If ’where’ is equal to NULL **/
/** then the element is inserted at the beginning of **/
/** the list.
**/
/** PARAMETERS: (*)= return-paramter
**/
/**
list: first element of list
**/
/**
elem: pointer to element to be inserted **/
/**
where: position of new element
**/
/** RETURNS:
**/
/** (new) pointer to the beginning of the list
**/
/******************************************************/
elem_t *insert_element(elem_t *list, elem_t *elem, elem_t *where)
{
	if(where==NULL)
	/* insert at beginning ? */
	{
		elem->next = list;
		list = elem;
	}
	else
	/* insert elsewhere */
	{
		elem->next = where->next;
		where->next = elem;
	}
return(list);
}

/******************* print_list() *****************/
/** Prints all elements of a list
**/
/** PARAMETERS: (*)= return-paramter
**/
/**
list: first element of list
**/
/** RETURNS:
**/
/**
nothing
**/
/**************************************************/
void print_list(elem_t *list)
{
	while(list != NULL)
	/* run through list */
	{
		printf("%d ", list->info);
		list = list->next;
	}

	printf("\n");
}