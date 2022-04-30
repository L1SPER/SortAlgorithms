# SortAlgorithms
Bubble Sort'ta elemanlar 2şer 2şer karşılaştırılır ve dizi sıralanmış olur. 

Bubble Sort'un daha optimize olmuş versiyonu Optimized Bubble Sort'tur. İçerdeki loopta değerlerin doğru sıralanıp sıralanmadığını kontrol ederek zamanda kazanç sağlanır.

Time Complexity: O(n.(n-1)/2  )  

Optimized Bubble Sort

Time Complexity: O(n^2) 

arr[] =  5 ,1, 4, 2 ,8 

First Pass: 

( 5 1 4 2 8 ) –> ( 1 5 4 2 8 ), Here, algorithm compares the first two elements, and swaps since 5 > 1. 

( 1 5 4 2 8 ) –>  ( 1 4 5 2 8 ), Swap since 5 > 4 

( 1 4 5 2 8 ) –>  ( 1 4 2 5 8 ), Swap since 5 > 2 

( 1 4 2 5 8 ) –> ( 1 4 2 5 8 ), Now, since these elements are already in order (8 > 5), algorithm does not swap them.

Second Pass: 

( 1 4 2 5 8 ) –> ( 1 4 2 5 8 ) 

( 1 4 2 5 8 ) –> ( 1 2 4 5 8 ), Swap since 4 > 2 

( 1 2 4 5 8 ) –> ( 1 2 4 5 8 ) 

( 1 2 4 5 8 ) –>  ( 1 2 4 5 8 ) 

Now, the array is already sorted, but our algorithm does not know if it is completed. The algorithm needs one whole pass without any swap to know it is sorted.

Third Pass: 

( 1 2 4 5 8 ) –> ( 1 2 4 5 8 ) 

( 1 2 4 5 8 ) –> ( 1 2 4 5 8 ) 

( 1 2 4 5 8 ) –> ( 1 2 4 5 8 ) 

( 1 2 4 5 8 ) –> ( 1 2 4 5 8 ) 