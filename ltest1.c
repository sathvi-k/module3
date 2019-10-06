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
	car_t *c2=make_car("KBW 443L",2.2,2019);
	car_t *c3=make_car("KPP 990T",18,2020);
	car_t *c4=make_car("KLA 100Z",200,2015);
	
	
	lput(c1);
	lput(c2);
	printlist();
	printf("-----------\n");
	printf("plate:%s\n",(lget())->plate);
	printlist();
	printf("-----------\n");
	printf("plate:%s\n",(lremove("KAS 736T"))->plate);
	printlist();
	printf("-----------\n");
	lput(c1);
	lput(c2);
	lput(c3);
	lput(c4);
	printlist();
	printf("-----------\n");
	printf("Year:%d\n",(lremove("KPP 990T"))->year);
	printlist();
	printf("----------\n");
	printf("Price:%lf\n",(lremove("KAS 736T"))->price);
	printlist();
	printf("-----------\n");
	printf("plate:%s\n",(lremove("KLA 100Z"))->plate);
	printlist();


	free(c1);
	free(c2);
	free(c3);
	free(c4);
}
