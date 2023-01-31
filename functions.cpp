/*********************
Name: Alexandra DeLeon
COSC-2436-004
**********************/

#include "functions.h"

int string_length(const char *str){
    int i = 0;      //this variable is used to iterate over string
    int length = 0;     //this variable keeps track of the string length

    //Now while string char is not equal to null'\0' increase the length variable 
    while(str[i] != '\0'){
        length++;
        i++;
    }

    return length;
}
