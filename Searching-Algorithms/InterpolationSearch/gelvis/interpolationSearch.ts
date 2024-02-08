let interpolationSearch = (arr: number[], searchKey: number): number => {
  let lowIndex = 0,
    highIndex = arr.length - 1;
  while (
    lowIndex <= highIndex &&
    searchKey <= arr[highIndex] &&
    searchKey >= arr[lowIndex]
  ) {
    let probe = Math.floor(
      lowIndex +
        ((highIndex - lowIndex) * (searchKey - arr[lowIndex])) /
          (highIndex - lowIndex)
    );
    if (arr[probe] === searchKey) return probe;
    else if (arr[probe] < searchKey) lowIndex = probe + 1;
    else highIndex = probe - 1;
  }
  return -1;
};


