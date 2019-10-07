/* ltests.c --- 
 * 
 * 
 * Author: Sathvika R. Korandla, Hanna, John, Aya
 * Created: Sun Oct  6 21:27:42 2019 (-0400)
 * Version: 
 * 
 * Description: 
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "list.h"
#include <string.h>

car_t *make_car(char *platep, double price, int year) {
	car_t *c;

	if(!(c=(car_t*)malloc(sizeof(car_t)))){
		printf("[Error: malloc failed allocating car]\n");
		return NULL;
	}

	c->next=NULL;
	strcpy(c->plate,platep);
	c->price=price;
	c->year=year;
	return c;
}

void get_price (car_t *cp){
	printf("this car's price is: %f\n", cp->price);
}

int main(void){
	car_t *c1=make_car("ABCD1234",10000,2000);
	car_t *c2=make_car("BIGGREEN",20000,2019);
	car_t *c3=make_car("48C03F6H",15000,2007);
	car_t *c4=make_car("ILLCUL8R",30000,2006);

	car_t *get_from_empty_return=lget();
	printf("get:%p\n", lget());
	printf("Apply a function to a empty list:\n");
	lapply(get_price);
	//printf("Remove from an empty list:%s\n",lremove("HELLO123")->plate);
	printf("Put to an empty list:\n");
	lput(c1);
	printf("Current list:\n");
	printlist();
	printf("Put to a non-empty list:\n");
	lput(c2);
	printf("Current list:\n");
	printlist();
	printf("Get from a non-empty list:\n");
	lget();
	printf("Current list:\n");
	printlist();
	lput(c2);
	lput(c3);
	lput(c4);
	printf("Remove from a non-empty list in the middle:\n");
	lremove("48C03F6H");
	printf("Current list:\n");
	printlist();
	printf("Remove from a non-empty list at the end:\n");
	lremove("ABCD1234");
	printf("Current list:\n");
	printlist();
	printf("Remove from a non-empty list at the beginning");
	lremove("ILLCUL8R");
	printf("Current list:\n");
	printlist();

	
	free(c1);
	free(c2);
	free(c3);
	free(c4);
}
