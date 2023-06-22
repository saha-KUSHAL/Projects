/* Two Sum
Given an array of integers and a target number, return indices of two elements such that they add up to the target.

Example:
Input: [2, 7, 11, 15], target = 9
Output: [0, 1] (numbers at indices 0 and 1, i.e., 2 + 7 = 9) */
#include<stdio.h>

int main(){
  int array[10],targetSum,i,j,arraySize,sumFound=0;
  printf("Enter the array size: ");
  scanf("%d",&arraySize);
  printf("Enter The Array elements:\n");
  for(i=0;i<arraySize;i++)
    scanf("%d",&array[i]);
  printf("Your Entered elements are: ");
  for(i=0;i<arraySize;i++)
    printf("%d ",array[i]);
  printf("\nEnter the target sum:");
  scanf("%d",&targetSum);

  //finding two elements of the sum
  for(i=0;i<arraySize && sumFound == 0;i++){
    for(j=0;j<arraySize && sumFound == 0;j++){
      if(array[i]+array[j]==targetSum)
        sumFound=1;
    }
  }
  if(sumFound==1)
    printf("The Indexes are %d and %d.",i-1,j-1);
  else
    printf("No Indexes Found");
}
