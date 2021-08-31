# 0x1E. C - Search Algorithms

###### 0. Linear search  
> Write a function that searches for a value in an array of integers using the Linear search algorithm  

###### 1. Binary search  
> Write a function that searches for a value in a sorted array of integers using the Binary search algorithm  

###### 2. Big O #0  
> What is the time complexity (worst case) of a linear search in an array of size n?  

###### 3. Big O #1  
> What is the space complexity (worst case) of an iterative linear search algorithm in an array of size n?  

###### 4. Big O #2  
> What is the time complexity (worst case) of a binary search in an array of size n?  

###### 5. Big O #3  
> What is the space complexity (worst case) of a binary search in an array of size n?  

###### 6. Big O #4  
> What is the space complexity of this function / algorithm?  
```int **allocate_map(int n, int m)
{
     int **map;

     map = malloc(sizeof(int *) * n);
     for (size_t i = 0; i < n; i++)
     {
          map[i] = malloc(sizeof(int) * m);
     }
     return (map);
}
```
