## Partitioning
 To partition an array is to take a random value from the array—which is then
 called the pivot—and make sure that every number that is less than the pivot
 ends up to the left of the pivot, and that every number that is greater than the
 pivot ends up to the right of the pivot. We accomplish partitioning through a
 simple algorithm that will be described in the following example. 


 We’re now ready to begin the actual partition, which follows these steps:
 1. The left pointer continuously moves one cell to the right until it reaches a
 value that is greater than or equal to the pivot, and then stops.
 2. Then, the right pointer continuously moves one cell to the left until it
 reaches a value that is less than or equal to the pivot, and then stops.
 3. We swap the values that the left and right pointers are pointing to.
4. We continue this process until the pointers are pointing to the very same
 value or the left pointer has moved to the right of the right pointer.
 5. Finally, we swap the pivot with the value that the left pointer is currently
 pointing to