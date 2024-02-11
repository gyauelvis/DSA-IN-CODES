// Starting from the very first index, 
// we compare the first and second element, if they are not in their correct order, we swap them
// Then we move to the next index and compare the second and third element, if they are not in their correct order, we swap them
// We keep doing this untill we get to the last index, then we give it another pass through untill all is sorted
// Time Complexity = O(n^2)

let insertionSort = (arr: number[]): number[] => {
  for (let i = 1; i < arr.length; i++) {
    let j = i - 1,
      value = arr[i];
    while (j > 0 && arr[j] > value) {
      arr[j + 1] = arr[j];
      arr[j] = value;
      j--;
    }
  }
  return arr;
};

let a: number[] = [1, 4, 2, 5, 0];
console.log(insertionSort(a));
