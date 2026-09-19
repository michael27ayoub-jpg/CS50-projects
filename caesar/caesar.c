#include<cs50.h>
#include<ctype.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include<math.h>

int main(int argc,string argv[])
{
if(argc!=2)
{
    printf("Usage: ./caesar key\n");
    return 1;
}
for(int i=0,n=strlen(argv[1]);i<n;i++)
{
if(!isdigit(argv[1][i]))
{
     printf("Usage: ./caesar key\n");
    return 1;
}
}
int key=atoi(argv[1]);
string plaintext=get_string("plaintext: ");
printf("ciphertext: ");
for(int i=0,n=strlen(plaintext);i<n;i++)
{
 if(isupper(plaintext[i]))
{char encrypted = (plaintext[i] - 'A' + key) % 26 + 'A';
    printf("%c", encrypted);
}
 else if(islower(plaintext[i]))
{
char encrypted = (plaintext[i] - 'a' + key) % 26 + 'a';
    printf("%c", encrypted);

}
 else{
printf("%c",plaintext[i]);

}


}
printf("\n");
}
