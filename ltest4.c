/* ltest1.c --- put() for list.c
 * 
 * 
 * Author: John Kariuki, Hanna, Aya and Sathvika
 * Created: Sat Oct  5 22:35:22 2019 (-0400)
 * Version: 
 * 
 * Description: Test the put() function in list.c
 * 
 */
#include <stdio.h>                                                       
#include <stdlib.h>                                                      
#include <math.h>                                                         
#include "list.h"                                                        
#include <string.h>  

car_t *make_car(char *platep,double price,int year){
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
	
	car_t *c1=make_car("KAS 736T",1.5,2004);
	car_t *c2=make_car("KBW 868L",3.3,2011);
	car_t *c3=make_car("KLT 200R",5.5,2019);
	car_t *c4=make_car("JOHNSCAR",200,2020);
	car_t *c5=make_car("PROFTALYORSCAR",150,2015);
	
  car_t *rcar=lremove("KBW 868L");
	
	lput(c1);
	lput(c2);
	lput(c3);
	lput(c4);
	lput(c5);
	
	//we add at the front so "KAS 736T" is the last car
	car_t *rcar1=lremove("KAS 736T");
	
	//"PROFTAYLORSCAR" was the last added and thus the first in the list
	car_t *rcar2=lremove("PROFTALYORSCAR");
	
	//remove from the middle
	car_t *rcar3=lremove("KLT 200R");
	
	if(rcar==NULL && rcar1!=NULL && rcar2!=NULL && rcar3!=NULL){
		free(c1);
		free(c2);
		free(c3);
		free(c4);
		free(c5);
		exit(EXIT_SUCCESS);
	}
	else{
		free(c1);
		free(c2);
		free(c3);
		free(c4);
		free(c5);
		exit(EXIT_FAILURE);
	}
}
