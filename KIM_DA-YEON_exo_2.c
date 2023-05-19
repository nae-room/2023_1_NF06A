/*
Write a program that reads the names and ages of a number of people from the user
(the number should be specified by the user), stores them in an array of structures, and
then prints out the names and ages in alphabetical order by name. Use the bubble sort
function seen in the lectures/tutorials.
The structure should have two fields: “name” (a string of up to 50 characters) and
“age” (an integer). You can assume that the names entered by the user will be unique.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 50

struct Stores{
    char name[MAX_NAME_LENGTH];
    int age;
};

int *input(int *k)
{
    int *uname , *uage , i , number;
    struct Stores user[number];
    int *user;

    printf("How many people do you want to enter? : ");
    scanf ("%d" , number);

    printf ("\nInput the names and ages of a number of people : ");
    for (i =0; i < number; i++)
        scanf ("%s", "%d" , user[i].name , user[i].age);

    return user;
}

void sort_func (int k , int *tab)
{
    int i , j , aux ;
    for (i=0; i < k-1; i++)
    {
        for (j = i+1; j < k; j++)
        {
            if( tab[i] > tab[j])
            {
                aux = tab [i];
                tab [i]= tab [j];
                tab [j]= aux ;
            }
        } 
    } 
}

int main ()
{
    int *ta;
    int k=1 , i ;
    ta = input (&k);
    printf ("\nArray provided : ");
    for (i =0; i <k ;i ++)
        printf ( "%d " ,ta[i]);
    sort_func (k , ta) ;
    printf ("\nSorted Array :") ;
    for (i =0; i <k ;i ++)
        printf ( "%d " , ta [i]) ;


    return 0;
}