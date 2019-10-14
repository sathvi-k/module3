/* ltest5.c --- 
 * 
 * 
 * Author: Sathvika R. Korandla, John, Hanna, Ayazhan
 * Created: Mon Oct 14 14:57:25 2019 (-0400)
 * Version: 
 * 
 * Description: apply() a function to an empty list
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

void get_price(car_t *cp){                                                     
    printf("this car's price is: %f\n", cp->price);                            
}                                                                              
                                                                               
int main(void){                                                                
	lapply(get_price);
  exit(EXIT_SUCCESS);                                                          
}
