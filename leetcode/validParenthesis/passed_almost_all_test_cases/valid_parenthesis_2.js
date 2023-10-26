let validParenthesis = (s) =>{
    let len = s.length;
    if(len === 0 || len % 2 !== 0) return false;

    let table = {'(':')','{':'}','[':']'};
    let i = len/2, j = i - 1;
    while(i < len && j >= 0){
        if(table[s[j]] !== s[i]) return false;
        i++; j--;
    }
    return true;

}