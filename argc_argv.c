#include<stdio.h>
int main(int argc , char **argv) {
	/*run on command prompt  having syntax like this i.e 
	"name_of_object arg1 arg2 arg3..."
	object file name plus number of arguments 
	for example "argc_argv chetan hello"
	in this case argc =3 and argv[] = {"argc_argv", "hello", "chetan"}*/
	int j;
	for (j=0; j<argc; j++){
		printf("Hey, argc = %d argv[%d] is %s\n", argc, j, argv[j]);
	}
	
	
	int count = 7;
	char str[] = "hello";
	printf("string is %s and address of string is %d\n",str, &str);
	
	char *stptr;		
	stptr = & str;
	stptr = stptr+2;
	printf("value of pointer is %d and address of pointer is %d points to char string string %c\n",stptr, &stptr, *stptr);
	
	char **stptrptr;
	stptrptr = & stptr;
	printf("value of pointer to pointer is %d and address of pointer to pointer is %d points to char of string %c\n",stptrptr, &stptrptr, **stptrptr);
	int i;
	for (i=0; i<count; i++){
		printf("arg	 %d is %c\n", i, str[i]);
	}
	return 0;
}