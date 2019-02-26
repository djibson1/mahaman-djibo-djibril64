#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(int argc, string argv[])

{
  if(argc==2)
  {
  int k=atoi(argv[1]);

  string nom=get_string("plaintext: ");

  printf("cyphertext: ");

	for(int i=0; i<strlen(nom); i++)

	if(isalpha(nom[i]))
{
		if (islower(nom[i]))
	{
		printf("%c",(((nom[i]-97)+ k)%26)+ 97);
	}
	if(isupper(nom[i]))
	{
		printf("%c",(((nom[i]-65)+ k)%26)+ 65);
	}
}
else
{
	printf("%c",nom[i]);
}
{
       printf("\n");
}
}
}