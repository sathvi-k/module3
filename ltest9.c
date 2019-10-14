/* ltest7.c --- 
 * 
 * 
 * Author: Sathvika R. Korandla, John, Hanna, Ayazhan
 * Created: Mon Oct 14 15:20:52 2019 (-0400)
 * Version: 
 * 
 * Description: remove() from non-empty list at the beginning
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

	lput(c1);                                                                    
  lput(c2);                                                                    
  lput(c3);                                                                    
  lput(c4);                                                                    
	
  car_t *rcar=lremove("JOHNSCAR");

	if(rcar!=NULL){
		free(c1);
		free(c2);
		free(c3);
		free(c4);
		exit(EXIT_SUCCESS);
	}
	else{
		free(c1);
		free(c2);
		free(c3);
		free(c4);
		exit(EXIT_FAILURE);
	}
}
