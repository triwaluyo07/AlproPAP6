#include "header.h"

/// Nama : Tri Waluyo
///Kelas : A11.4203
///Nim : A11.2017.10097
int main()
{
    printf("===================================\n");
    printf("\t\tTugas 1\n");
    printf("===================================\n");
    int list1 [10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int list2 [10] = {4, 8, 6, 1, 10, 3, 9, 2, 7, 5};

    binary_search(3, list1, 10);
    printf("\n");
    binary_search(7, list2, 10);

    printf("===================================\n");
    printf("\t\tTugas 2\n");
    printf("===================================\n");
    search_word("Dian","Dian Nuswantoro");
    search_word("Algo","Algoritma");
    search_word("Program","Pemrograman");
    search_word("Dinus","Dian Nuswantoro");

    printf("===================================\n");
    printf("\t\tTugas 3\n");
    printf("===================================\n");
    char text1[255]=("the eyes");
    char text2[255]=("they see");
    char text3[255]=("creative");
    char text4[255]=("reactive");
    char text5[255]=("udinus");
    char text6[255]=("dian nuswantoro");
    char text7[255]=("coloumbia");
    char text8[255]=("australia");
    int wadah2,wadah3,wadah4,wadah5;

    printf("%s \n",text1);
    printf("%s \n",text2);

    wadah2=is_anagram(text1,text2);
    if(wadah2==1)
    {
        printf("kedua kata tersebut adalah anagram\n");
    }
    printf("\n");
    printf("%s \n",text3);
    printf("%s \n",text4);

    wadah3=is_anagram(text3,text4);
    if(wadah3==1)
    {
        printf("kedua kata tersebut adalah anagram\n");
    }

    printf("\n");
    printf("%s \n",text5);
    printf("%s \n",text6);

    wadah4=is_anagram(text5,text6);
    if(wadah4==1)
    {
        printf("kedua kata tersebut adalah anagram\n");
    }
    return 0;
}
