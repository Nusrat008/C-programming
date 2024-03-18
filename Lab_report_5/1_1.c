/*C program to search element in array*/
#include <stdio.h>
int main()
{
    printf("ID : 1902041\n");
    int len, i;
    int  element, found;
    int arr[len];
    /* Input size of array */
    printf("Enter size of array: ");
    scanf("%d",&len);
    /* Input elements of array */
    printf("Enter elements in array: ");
    for(i=0; i<len; i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter element to search: ");
    scanf("%d", &element);
    /* If the element does not exists in array */
    found = 0; 
    for(i=0; i<len; i++){
        /*If element is found in array then raise found flag
        and terminate from loop.*/
        if(arr[i] == element){
            found = 1;
            break;
        }
    }
    /*If element is not found in array*/
    if(found == 1){
        printf("%d is found at index %d",element,i + 1);
    }
    else{
        printf("%d is not found in the array",element);
    }
    return 0;
}