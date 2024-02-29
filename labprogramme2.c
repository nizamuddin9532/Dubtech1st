#include<stdio.h>
#include <stdlib.h>
int main(){
int n,choice;
int *arr = NULL;
printf("Enter the number the element in array");
scanf("%d", &n);
arr = (int*)malloc(n * sizeof(int));
if(arr == NULL){
    printf("Memory allocaion is failed\n");
    return 1;
}
printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

printf("Enter 1 for searching an element in the array2 for inserting an element in the array,3 for deleting an element in the array,4 for reversing the array,5 for updating the array, 6 for exiting");
scanf("%d",&choice) ;
do{
    switch(choice){
    case 1:
    Dsearch(n,arr);
    break;
    case 2:
    Dinsert(n,arr);
    break;
    case 3:
    Ddelete(n,arr);
    break;
    case 4:
    Dreverse(n,arr);
    break;
    case 5:
    Dupdate(n,arr);
    break;
    case 6:
    exit(1);
    break;
    default:
    printf("Invalid choice , please re-enter");
    }
   

}while(choice!=6);

free (arr);
return 0;
}


void Dsearch(int n,int arr[])
{int z;
printf("Enter the value which you search in array\n");

  
    scanf("%d",&z);
    int index = 0;
    for(int i = 0; i < n; i++){
        if(z == arr[i]){
            index = i;
            printf("Element found at: %d\n", i);
        }
    }
   
  
}
void Dinsert(int n , int arr[])
{int  position, value;
arr = (int*)realloc(n+1,(n+1) * sizeof(int));
if(arr == NULL){
    printf("Memory allocaion is failed\n");
   return 1;
}
printf("Enter the postion where you insert the elements\n");
    scanf("%d", &position);
    printf("Enter the value of the elements\n");
    scanf("%d", &value);
    for(int i = n-1; i >= position - 1; i--){
        arr[i+1] = arr[i];   
    }
    arr[position-1] = value;
    printf("Resulting array is\n");
    for(int i = 0; i <= n; i++){
        printf("%d\n",arr[i]);
    }
    
    }

void Ddelete(int n,int arr[]){
int position;
arr = (int*)realloc((n-1),(n-1) * sizeof(int));
printf("Enter the postion where you want delete the elements\n");
    scanf("%d", &position);
    for(int i = position - 1; i < n-1; i++){
        arr[i] = arr[i+1];
    }
    printf("Resulting array \n");
    for(int i = 0; i < n-1; i++){
        printf("%d",arr[i]);
    }
    
  


}
void Dreverse(int n , int arr[])
 {int i,j, b[n];
    for (i = n - 1, j = 0; i >= 0; i--, j++)
        b[j] = arr[i];
    for (i = 0; i < n; i++)
        arr[i] = b[i];
    
    printf("Reverse array is\n");
    
    for (i = 0; i < n; i++)
        printf("%d\n", arr[i]);
    
    
    }

void Dupdate(int n , int arr[]){
   
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0){
            arr[i] = arr[i] + 5;
        }
        else{
            arr[i] = arr[i] * 2;
        }
    }
    printf("Resulting array \n");
    for(int i = 0; i < n; i++){
        printf("%d",arr[i]);
    }
}