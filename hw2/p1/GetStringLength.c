#include<stdio.h>
#include"GetStringLength.h"

int GetStringLength(const char *a){
	int count = 0;
	while(*a){
		if((*a>='a'&&*a<='z')||(*a>='A'&&*a<='Z')){
			count++;
		}
		*a++;
	}
	return count;
}
