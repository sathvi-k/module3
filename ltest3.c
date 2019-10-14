/* ltest1.c --- put() for list.c
 * 
 * 
 * Author: John Kariuki, Hanna, Aya and Sathvika
 * Created: Sat Oct  5 22:35:22 2019 (-0400)
 * Version: 
 * 
 * Description: get() from empty list
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
	
	car_t *gcar=lget();
	
	if(gcar==NULL){
		exit(EXIT_SUCCESS);
	}
	else{
		exit(EXIT_FAILURE);
	}
}
