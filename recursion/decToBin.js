let decToBin = (dev_value) => {
    let quotient, remainder;
    remainder = (dev_value % 2);
    quotient = (dev_value - remainder) / 2;
    remainder.toString();
    if(dev_value === 1) return remainder;
    else return `${decToBin(quotient)}${remainder}`;
}