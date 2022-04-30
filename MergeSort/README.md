# SortAlgorithms
Merge Sort'ta diziyi boyutu 1 olasıya kadar 2'ye böler. En sonunda 2 değeri karşılaştırır ve sıralama işlemi yapılır.Bölünen dizi daha sonra birleştirilir. Birleştirilirken de karşılaştırma yapılır, dizi birleştirilir ve en sonunda dizi sıralanmış olur.

Time Complexity: 2T(n/2) + θ(n)

If r > l
     1. Find the middle point to divide the array into two halves:  
             middle m = l+ (r-l)/2
     2. Call mergeSort for first half:   
             Call mergeSort(arr, l, m)
     3. Call mergeSort for second half:
             Call mergeSort(arr, m+1, r)
     4. Merge the two halves sorted in step 2 and 3:
             Call merge(arr, l, m, r)

![alt text](https://media.geeksforgeeks.org/wp-content/cdn-uploads/Merge-Sort-Tutorial.png)