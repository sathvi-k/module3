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

int main(void){
	car_t *c1=make_car("ABCD1234",10000,2000);
	car_t *c2=make_car("BIGGREEN",20000,2019);
	car_t *c3=make_car("48C03F6H",15000,2007);
	car_t *c4=make_car("ILLCUL8R",30000,2006);

	lget(); /* get from an empty list */
	lapply(); /* apply a function an empty list */
	lremove("HELLO123"); /* remove from an empty list */
	lput(c1); /* put to an empty list */
	lput(c2); /* put to a non-empty list */
	lget(); /* get from a non-empty list */
	lput(c2);
	lput(c3);
	lput(c4);
	lremove("48C03F6H"); /* remove from a non-empty list in the middle */
	lremove("ABCD1234"); /* remove from a non-empty list at the end */
	lremove("ILLCUL8R"); /* remove from a non-empty list at the beginning */
	
	printlist();
