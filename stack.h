/*

Stack for path, junctions.
*/

struct node
{
  unsigned int x;
  unsigned int y;
  struct node* below;
};

struct node* pcurrent;
struct node* phead;
struct node* jhead;

void ppush(unsigned int x, unsigned int y)
{
  struct node* tmp = (struct node*)malloc(sizeof(struct node));
  if(tmp == NULL)
  {
    printf("malloc returned NULL\nTerminating program\n");
    exit(1);
  }
  tmp->x = x;
  tmp->y = y;
  tmp->below = phead;
  phead = tmp;
}

void jpush(unsigned int x, unsigned int y)
{
  struct node* tmp = (struct node*)malloc(sizeof(struct node));
  if(tmp == NULL)
  {
    printf("malloc returned NULL\nTerminating program\n");
    exit(1);
  }
  tmp->x = x;
  tmp->y = y;
  tmp->below = jhead;
  jhead = tmp;
}

void ppop()
{
  if(phead != NULL)
  {
    struct node* tmp = (struct node*)malloc(sizeof(struct node));
    tmp = phead;
    phead = phead->below;
    tmp->below = NULL;
    free(tmp);
  }
}

void jpop()
{
  if(jhead != NULL)
  {
    struct node* tmp = (struct node*)malloc(sizeof(struct node));
    tmp = jhead;
    jhead = jhead->below;
    tmp->below = NULL;
    free(tmp);
  }
}

void whereami()
{
  printf("Currently at: (%d,%d)\n",pcurrent->x,pcurrent->y);
}

void print_p()
{
  struct node* ptr;
  ptr = phead;
  printf("Currenty at (%d,%d)\n",phead->x,phead->y);
}
void print()
{
  struct node* ptr;
  ptr = phead;
  printf("Printing path stack:\n");
  while(ptr != NULL)
  {
    printf("|(%d,%d)\n",ptr->x,ptr->y);
    ptr = ptr->below;
  }
  ptr = jhead;
  printf("\n");
  printf("Printing junction stack:\n");
  while(ptr != NULL)
  {
    printf("|(%d,%d)\n",ptr->x,ptr->y);
    ptr = ptr->below;
  }
  printf("\n");
}
