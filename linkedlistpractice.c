#include<stdio.h>
#include<stdlib.h>
struct product
{int year;
int price;
struct product *next;
};
struct listrecord
{struct product *head;
struct product *tail;
int size;
};
//traverse(listeyi dolanma)
void printproduct(struct listrecord *l)
{ struct product *tmp;
 tmp=l->head->next;
 while(tmp->next!=NULL)
 {printf("%d :%d $ \n",tmp->year,tmp->price);
 tmp=tmp->next;
 }
}
int main ()
{ int y,p,i;
 struct product *pro;
 struct listrecord *list;

 //STEP1
 list=(struct listrecord *)malloc(sizeof(struct listrecord));
 list->head=(struct product *)malloc(sizeof(struct product));
 list->size=0;
list->tail=list->head;

//STEP2
 pro=list->head;
 pro->next=(struct product *)malloc(sizeof(struct product));
 pro->next->next=NULL;
 pro=pro->next;


//STEP3

for(i=0;i<3;i++)
{ printf("Enter price and year");
 scanf("%d %d",&p,&y);
 pro->price=p;
 pro->year=y;
 list->size++;
 
 
 //sTEP4
 
 pro->next=(struct product *)malloc(sizeof(struct product));
 pro->next->next=NULL;
 pro=pro->next;
 list->tail=pro;
 
 
}
printproduct(list);


 
 
}