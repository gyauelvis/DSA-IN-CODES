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
  
  let exponentialSearch = (arr: number[], targetValue: number): number => {
    let arraySize: number = arr.length;
    if (arr[0] === targetValue) return 0;
    else {
      let i = 1;
      while (i < arraySize && targetValue >= arr[i]) i *= 2;
      return binarySearch(arr, targetValue, i / 2, Math.min(i, arraySize));
    }
  };

  
  let arr:number[] = [1,2,3,5,6,7,9,12,54];
  console.log(exponentialSearch(arr, 5))