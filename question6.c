/*WAP to print the name of the user in double quotes.
Expected output format – “Hello , Amit Kumar” */

// Date-> 11/5/23 ,Author Name = Aman Singh

#include <stdio.h>
int main()
{
    printf("\"Hello , Amit Kumar\"");
    return 0;
}

/* here we can se we want to print "Hello , Amit Kumar" in formate. so here we know if we want to print any
   output than we need to use printf function and we also know we use ("") in printf function to print any
   string. So here if we want to print (") then first we need to write (\) than (") = (\") because complier
   first see the (\) then he understood yaa this is a special thing so immedetly he stop and take another word
   to print and then he see (") then he understand there are no any meaning of (\). so here complier use \
   to print (").
   */