#include "head.h"


error_t  openFile(char *addr, char *mode, FILE **fptr){
	
    *fptr = fopen(addr,mode);

	if (*fptr == NULL)
		return FILE_NOT_FOUND;
	else
		return SUCCESS;
}