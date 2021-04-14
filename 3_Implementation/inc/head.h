#include<stdio.h>
#include<conio.h>
#include<string.h>
//#include<stdlib.h>

/**
 * @file head.h
 * @author Simran Priya cusat
 * @brief Header file for operations used in a supermarket
 * @version 0.1
 * @date 2021-04-10
 * 
 * @copyright Copyright (c) 2021
 * 
 */


/**
 * @brief enum for error reporting
 * 
 */

typedef enum error_t
{
    FILE_NOT_FOUND = 1,
    SUCCESS = 0,
} error_t;

#ifndef __HEAD_H__
#define __HEAD_H__

/**
 * @brief Opens a file
 * 
 * @param [in] addr 
 * @param [in] mode 
 * @param [out] fptr 
 * @return error_t 
 */

error_t openFile(char *addr, char *mode ,FILE **fp1);




/**
 * @brief Function to  modify the details of customers
 * 
 * @param[in] file File for which modification has to be done
 * @return Result of the modify operation
 */

int modify(FILE *fp1,FILE *fp2);



/**
 * @brief Function to  overwrite the details of customers
 * 
 * @param[in] file File for which overwriting has to be done
 * @return Result of the write operation
 */

int write(FILE *fp1);



/**
 * @brief Function to remove the details of customers
 * 
 * @param[in] file File for which removal has to be done
 * @return Result of the remove operation
 */
int remov(FILE *fp1,FILE *fp2);



/**
 * @brief Function to search the details of customers
 * 
 * @param[in] file File for which searching has to be done
 * @return Result of the search operation
 */

int search(FILE *fp1);




/**
 * @brief Function to read the details of customers
 * 
 * @param[in] file File for which reading has to be done
 * @return Result of the read operation
 */

int read(FILE *fp1);


/**
 * @brief Function to  append the details of customers
 * 
 * @param[in] file File for which append has to be done
 * @return Result of the append operation
 */

int append(FILE *fp1);

#endif  /* __FUN_H__  */

