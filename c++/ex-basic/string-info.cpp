#include <iostream>
#include <libintl.h>
#include <locale.h>


int main()
{
    char line[80];
    int i=0;
    int vowels=0;
    int consonants=0;

    setlocale(LC_ALL, "");
    bindtextdomain ("string-info", ".");
    textdomain ("string-info");

    std::cout << gettext("Enter a line of English strings:");
    std::cin.getline(line,80);

    for(i=0;line[i]!='\0';++i)
    {
        if(line[i]=='a' || line[i]=='A' || line[i]=='e' || line[i]=='E' || line[i]=='i' || line[i]=='I' || line[i]=='o' || line[i]=='O' || line[i]=='u' || line[i]=='U')
            vowels++;
        else if((line[i]>='a'&& line[i]<='z') || (line[i]>='A'&& line[i]<='Z'))
            consonants++;
    }
    std::cout<< gettext("Vowels: ")<<vowels<<std::endl;
    std::cout<< gettext("Consonants: ")<<consonants<<std::endl;
}

