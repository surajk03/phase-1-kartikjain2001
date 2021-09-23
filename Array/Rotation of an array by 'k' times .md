## 🎡Rotation of an array 
* This concept can be visualised by seeing the array as a circular entity. 
* So , rotation by 'k' times in left/right side means circling anti - clockwise / clockwise direction.

 ![arr1](https://user-images.githubusercontent.com/74143496/134457201-4deb6f49-4918-44e5-8fc2-a0e80c4a3a9a.png)
 
 ### The working concept to rotate an array is very simple. 
 For a given array , *{1,2,3,4,5}*. If we want to shift it to left - side 'k' times , reverse the first 'k' elements individually and the other 'k' elements individually. Now, reverse the whole new array formed by rotating elements in two individual sets.
 
 ![123](https://user-images.githubusercontent.com/74143496/134462123-2100a300-5c8d-4547-b43f-410c5bad1a80.jpeg)

 In the same way , we can rotate the array to right - side by taking last 'k' elements and reversing them separately and reversing the remaining elements separately and then reversing the whole new array formed.
 

## Code
A simple code to rotate an array 'k' times to the left - side can be seen [here](https://github.com/cleanhand/phase-1-kartikjain2001/blob/main/Array/Rotation%20of%20an%20array%20by%20'k'%20times%20.c)

