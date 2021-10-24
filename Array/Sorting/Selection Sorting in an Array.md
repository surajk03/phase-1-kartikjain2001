# Topic 📋
Selection Sort an array 
# Question ❓
For a given array , sort it into ascending 📈 order.
# 💡Approach 
For the given array
* We will maintain two pointers namely **minimum** and **starting**. The minimum pointer will keep track of the element with minimum value and the starting pointer will help us start everytime from the element from where we should start searching for the minimum in the remaining array. 😕
* In the beginning , the minimum pointer will store the first element as the minimum and then will traverse through the array and as soon as it finds an element less than the minimum , it will store that element in minimum pointer and traverse forward.
   * If it finds another element less than the current minimum , it will store that element in the minimum pointer and traverse.
   * It it does not find any new minimum , it will store the last minimum element in the minimum pointer.
* Then , we would swap the element in the starting pointer (which was also at the first element in the beginning) with the element in the minimum pointer.
* Now , we will iterate both the pointers declared first , and repeat the steps until the array gets sorted.
For better understanding and visual representation , visit [here](https://visualgo.net/en/sorting) and select **'SELECTION SORT'**
# Code 🖥️

