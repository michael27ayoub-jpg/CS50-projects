#include <cs50.h>
#include <stdio.h>
#include<math.h>
#include <ctype.h>
#include <string.h>
int main(void)
{

    string sentence = get_string("Text: ");
    int letters = 0, words = 0, sentences = 0;
    for (int i = 0, n = strlen(sentence); i < n; i++)
    {
        if(isalpha(sentence[i]))
        {
            letters++;
        }
        else if(sentence[i]==' ')
        {
            words++;
        }
        else if(sentence[i]=='.'||sentence[i]=='!'||sentence[i]=='?')
        {
            sentences++;
        }
    }
    words++;
float L=(float) letters/words*100;
float S=(float) sentences/words*100;
float index= 0.0588 *L - 0.296 *S -15.8;
int grade = round(index);
if(grade>=16)
{
    printf("Grade 16+\n");
}
else if(grade<1)
{
    printf("Before Grade 1\n");
}
else
{
printf("Grade %i\n",grade);

}
}
