## Quicksort
 The Quicksort algorithm relies heavily on `partitions`. It works as follows:
 1. Partition the array. The pivot is now in its proper place.
 2. Treat the subarrays to the left and right of the pivot as their own arrays, and recursively repeat steps #1 and #2. That means that we’ll partition each subarray, and end up with even smaller subarrays to the left and right of each subarray’s pivot. We then partition those subarrays, and so on and so
 forth.
 3. When we have a subarray that has zero or one elements, that is our base
 case and we do nothing