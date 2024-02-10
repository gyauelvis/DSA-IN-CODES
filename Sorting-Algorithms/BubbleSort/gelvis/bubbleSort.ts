// Time complexity  = O(n)
// Point to two elements in the array. Check if they are in their correct order?
// Yes? Move each pointer a step forward
// No? Swap and move the pointers a step forward
// By the time we get to the last index for our very first pass through, the last element will be sorted
// Then we give it another pass through untill all is sorted

let bubbleSort = (arr: number[]): number[] => {
  let unsorted_untill_index = arr.length - 1,
    isSorted = false;
  while (!isSorted) {
    isSorted = true;
    for (let i = 0; i < unsorted_untill_index; i++) {
      if (arr[i] > arr[i + 1]) {
        isSorted = false;
        let first_index_value = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = first_index_value;
      }
      unsorted_untill_index--;
    }
  }
  return arr;
};

let list = [3, -1, 6, 7, 12, 56];
console.log(bubbleSort(list));
