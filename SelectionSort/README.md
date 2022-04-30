# SortAlgorithms
Selection Sort'ta soldan sağa önce dizideki en küçük değer bulunur ve dizinin başına yazılır. Sonra geri kalan elemanlara da aynı işlem tekrarlanır ve dizi sıralanmış olur.

Time Complexity: O(n^2) 

arr[] = 64 25 12 22 11

// Find the minimum element in arr[0...4]

// and place it at beginning

11 25 12 22 64

// Find the minimum element in arr[1...4]

// and place it at beginning of arr[1...4]

11 12 25 22 64

// Find the minimum element in arr[2...4]

// and place it at beginning of arr[2...4]

11 12 22 25 64

// Find the minimum element in arr[3...4]

// and place it at beginning of arr[3...4]

11 12 22 25 64 