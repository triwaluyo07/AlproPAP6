#include "header.h"

int binary_search(int angka,int data[],int jml_data)
{
    int x,y;
    int low=0;
    int high=jml_data-1;
    int mid,tempat;
    bool cek=false;
    for(x=0; x<jml_data-1; x++)
        {
         for(y=x+1; y<jml_data; y++)
            {
             if(data[x]>data[y])
                {
                 tempat=data[x];
                 data[x]=data[y];
                 data[y]=tempat;
                }
            }
        }


    while(low<=high)
    {
        for(x=low;x<=high;x++)
        {
            printf("[%d] ",data[x]);
        }
        mid=(low+high)/2;
        if(angka==data[mid])
        {
            cek=true;
            low=high+1;
            printf("\n[%d]", data[mid]);
        }

        else if (angka>data[mid])
        {

            low=mid+1;

        }
        else
        {
            high=mid-1;
        }
        printf("\n");
    }
    return(cek);
}

int search_word(char word[],char text[])
{
    int x,y;
    /*for(x=0;text[x]!='\0';x++)
    {
        while(text[x]==word[y])
        {
            x=x+1;
            y=y+1;
        }
        if(word[y]=='\0')
        {
            return(text+x-y);
        }
        else
        {
            y=0;
        }
    }
    printf("\n");
    return(NULL);
    */
    bool found = false;
    if(strstr(text,word)!=NULL)
    {
        found = true;
    }

    if(found==true)
    {
        printf("True \n");
    }
    else
    {
        printf("False \n");
    }
    printf("\n");
    return(found);
}
int is_anagram(char text1[],char text2[])
{
    int i,j,wadah;
    int len=strlen(text1);
    int len2=strlen(text2);

    if (len!=len2)
    {
        printf("kedua kata tersebut tidak anagram \n");
        return 0;
    }

    for(i=0;i<len-1;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(text1[i]>text1[j])
            {
                wadah=text1[i];
                text1[i]=text1[j];
                text1[j]=wadah;
            }
            else if(text2[i]>text2[j])
            {
                wadah=text2[i];
                text2[i]=text2[j];
                text2[j]=wadah;
            }

        }
        return 1;
    }
    printf("\n");

}
