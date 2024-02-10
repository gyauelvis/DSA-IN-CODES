let binarySearch = (
  arr: number[],
  target: number,
  leftPointer: number = 0,
  rightPointer: number = arr.length - 1
): number => {
  while (leftPointer < rightPointer) {
    let middleValue = Math.floor((leftPointer + rightPointer) / 2);
    if (arr[middleValue] === target) return middleValue;
    else if (arr[middleValue] > target) rightPointer = middleValue - 1;
    else leftPointer = middleValue + 1;
  }
  return -1;
};
