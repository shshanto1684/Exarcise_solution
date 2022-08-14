#include <stdio.h>

int main()

{
    char str[100];
    int i, vowel, consonant;

    gets(str);

    i = vowel = consonant = 0;

    while(str[i] != '\0') {
        if((str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')||
           (str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')) {
            vowel++;
           }
           else if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')) {
            consonant++;
           }
           i++;
    }

    printf("Vowel is: %d\nConsonant is: %d\n", vowel, consonant);

    return 0;
}
