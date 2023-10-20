// first of all the computer has the values
let hashing = {
    A: 1, B: 2, C: 3, D: 4, E: 5, F: 6, G:7, H: 8, I: 9, J: 10, K: 11, L: 12, M:13, N:14, O: 15, P: 16, Q: 17,
    R: 18, S: 19, T: 20, U: 21, V: 22, W: 23, X: 24, Y: 25, Z: 26
}

// takes the key multiplies them and returns the value
let hashFunction = (key) =>{
    let value = 1;
    typeof key === 'string' ? key = key.toUpperCase() : key;
    for(let i = 0; i < key.length; i++){
        value = value * hashing[key[i]];
    }
    return value;
}


let hashTable = {
    storage: storage = [],

    add (key, value) {
        let indexOfValue = hashFunction(key);
        if(hashTable.storage[indexOfValue] === undefined){
            hashTable.storage[indexOfValue] = {[key] : value}
        }else{
            // there is already a value, we take the value, add the nex one in array
            hashTable.storage[indexOfValue] = [hashTable.storage[indexOfValue], {[key]:value}];
        }
        return hashTable.storage;
    },
    print(){
        console.log(hashTable.storage);
    },
    remove(key){
        let index = hashFunction(key);
        if(hashTable.storage[index] === undefined){
            return undefined;
        }else{
            if(hashTable.storage[index].length === undefined) {
                hashTable.storage.pop(index);
            }else{
                let index_ = 0;
                for(let i = 0; i < hashTable.storage[index].length; i++) {
                    if(hashTable.storage[index][i][key] !== undefined){
                         hashTable.storage[index].pop(index_);
                         break;
                    }
                    index_++;
                }
            }
        }
        return hashTable.storage;
    },
    lookup(key) {
        let index = hashFunction(key);
        if (hashTable.storage[index].length === undefined) return hashTable.storage[index]
        else{
            for (let i = 0; i < hashTable.storage[index].length; i++) {
                if(hashTable.storage[index][i][key] !== undefined){
                    return hashTable.storage[index][i]
                }
            }
        }

        return undefined;
    }
}

hashTable.add('ba', 12)
hashTable.add('ab', 12)

