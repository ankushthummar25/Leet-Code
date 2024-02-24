/*

Given an integer array [nums] and an integer [val], remove all occurrences 
of [val] in [nums] in-place. The order of the elements may be changed. Then 
return the number of elements in [nums] which are not equal to [val].

Consider the number of elements in [nums] which are not equal to [val] be [k],
to get accepted, you need to do the following things:

=>  Change the array [nums] such that the first [k] elements of [nums] contain 
    the elements which are not equal to [val]. The remaining elements of [nums]
    are not important as well as the size of [nums].

=>  Return [k].



Example 2:

Input      : nums = [0,1,2,2,3,0,4,2], val = 2
Output     : 5, nums = [0,1,3,0,4,_,_,_]
Explanation: Your function should return k = 5, with the first five
             elements of nums containing 0, 0, 1, 3, and 4. Note that 
             the five elements can be returned in any order. It does 
             not matter what you leave beyond the returned k (hence 
             they are underscores).
            
*/

#include <stdio.h>
#define n 8

int a[n]={0,1,2,2,3,0,4,2};
int val;

int value()
{
    for(int i=0 ; i<n ; i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n\n");
}


int removeElement() 
{
    int k = 0; 
    
    for (int i = 0; i < n; i++) 
    {
        if (a[i] != val) 
        {
            a[k] = a[i];
            k++;
        }
    }
    
    return k;
}

int main() 
{
    value();

    printf("Enter Remove Element Value : ");
    scanf("%d",&val);

    
    int m = removeElement();
    
    printf("Output : %d ", val);
    printf("\nArray is :");

    for(int i=0 ; i< m ; i++)
    {
        printf(" %d\t",a[i]);
    }
    
    return 0;
}

/*

    0       1       2       2       3       0       4       2

    Enter Remove Element Value : 2
    Output : 2 
    Array is : 0     1       3       0       4
    
*/
