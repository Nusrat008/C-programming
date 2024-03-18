    #include <stdio.h>  
    int main(){  
        printf("ID : 1902041\n");
        int len, i,add=0;
        /* Input size of array */
        printf("Enter size of array: ");
        scanf("%d",&len);
        int arr[len];
        /* Input elements of array */
        printf("Enter elements in array: ");
        for(i=0; i<len; i++){
            scanf("%d",&arr[i]);
        }
        //Loop through the array to calculate sum of elements  
        for (int i = 0; i < len; i++) {   
           add = add + arr[i];  
        }    
        printf("Addition of all elements in Array: %d", add);  
        return 0;  
    }  