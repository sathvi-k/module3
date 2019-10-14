/* ltest7.c --- 
 * 
 * 
 * Author: Sathvika R. Korandla, John, Hanna, Ayazhan
 * Created: Mon Oct 14 15:20:52 2019 (-0400)
 * Version: 
 * 
 * Description: remove() from an empty list
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
                                                                               
  car_t *rcar=lremove("KBW 868L");

	if(rcar==NULL){
		exit(EXIT_SUCCESS);
	}
	else{
		exit(EXIT_FAILURE);
	}
}
