/* list.c --- Create a linked list
 * 
 * 
 * Author: John Kariuki,Hana, Aya and Sathvika
 * Created: Sat Oct  5 21:13:05 2019 (-0400)
 * Version: 1.0
 * 
 * Description:Create a linked list of cars 
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "list.h"
#include <string.h>

static car_t *front=NULL;

int32_t lput(car_t *cp){
	if (front==NULL){
		front=cp;
		cp->next=NULL;
	}
	else{
		cp->next=front;
		front=cp;		
	}
	return 0;
}

car_t *lget(){
	car_t *save=NULL;
	if(front!=NULL){
		save=front;
		front=front->next;
	}
	return save;
}

void lapply(void (*fn)(car_t *cp)){
	if(front!=NULL){
		car_t *p;
		for(p=front;p!=NULL;p=p->next){
			fn(p);
		}
	}
	else{
		printf("Empty List\n");
	}
}

car_t *lremove(char *platep){
	car_t *save=NULL;
	if(front!=NULL){
		car_t *p;
		car_t *f;
		for(p=front;p!=NULL;p=p->next){
			if(strcmp(p->plate,platep)==0){
				if(p==front){
					save=p;
					front=p->next;
				}
				else if(p->next==NULL){
					save=p;
					f->next=NULL;
				}
				else{
					save=p;
					f->next=p->next;
				}
			}
			f=p;
		}
	}
	return save;
}

void printlist(){
	car_t *p;
	for(p=front;p!=NULL;p=p->next){
		printf("%s\n",p->plate);
	}
}
