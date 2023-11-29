#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char user[100];
	int i, valid = 0;
	
	scanf("%[^\n]", user);getchar();
	
	if(user[0] == '\0')
    {
	    printf("Username must not be empty\n");
		return 0;
    }
    
	
    for(i = 0; i < strlen(user);++i)
    {
	    if((user[i] >= 46 && user[i] <= 57 && user[i] != 47)||(user[i] >= 97 && user[i] <= 122)|| (user[i] == 95))
	    {
	        valid = 1;
        }
        else
        {
            valid = 0;
            break;
		}
    } 
    
    (valid == 1)
	? printf("Username @%s is valid\n", user)
	: printf("Username @%s is not valid\n", user);
          	
	return 0;
	

	
	
}
