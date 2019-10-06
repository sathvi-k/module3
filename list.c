/* list.c --- 
 * 
 * 
 * Author: Sathvika R. Korandla
 * Created: Sat Oct  5 14:19:35 2019 (-0400)
 * Version: 
 * 
 * Description: 
 * 
 */
#include "list.h"


static car_t *front=NULL;

int32_t lput(car_t *cp){
	/*car_t *cp = (car_t*)malloc(sizeof(car_t));*/
	if (front==NULL){
		front=*cp;
		*cp->next=NULL; /*might need*/
	}
	else {
		*cp->next=front;
		front=*cp;
	}
	return 0;
}

car_t *lget(){
	car_t *save=NULL;
	if (front!=NULL){
		save=front;
		front=front->next;
	}
	return save;
}

void lapply(void (*fn)(car_t *cp)) {
	car_t *p;
	if (front!=NULL){
		for(p=front; p!=NULL; p=p->next)
			(*fn)(&p);
	}
}
	else {
}
}

car_t *lremove(char *platep){
	car_t *save=NULL;
	if (front!=NULL){
		car_t *cp;
		for(cp=front;cp!=NULL;cp=cp->next){
			if (strcmp(cp->plate,*platep)==0){
				save=cp;
				cp=cp->next;
			}
		}
	}
	return save;
}
 
