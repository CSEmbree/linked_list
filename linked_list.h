//Cameron S. Embree
//CREATED:  01/04/13
//MODIFIED: 01/04/13

#include <stdio.h>
#include <stdlib.h>


struct node 
{
  int val;
} NODE;


struct linked_list 
{
  struct node  val;
  struct linked_list  *next;
} LINKED_LIST;
