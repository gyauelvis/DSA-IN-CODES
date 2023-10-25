// first of all the computer has the values
let hashing = {
    A: 1, B: 2, C: 3, D: 4, E: 5, F: 6, G:7, H: 8, I: 9, J: 10, K: 11, L: 12, M:13, N:14, O: 15, P: 16, Q: 17,
    R: 18, S: 19, T: 20, U: 21, V: 22, W: 23, X: 24, Y: 25, Z: 26
}

class HashTable {
    constructor(storage = []){
        this.storage = storage;
    }

    // takes the key multiplies them and returns the value
    hashFunction (key){
        let value = 1;
        typeof key === 'string' ? key = key.toUpperCase() : key;
        for(let i = 0; i < key.length; i++){
            value = value * hashing[key[i]];
        }
        return value;
    }

    add (key, value) {
        let indexOfValue = this.hashFunction(key);
        if(this.storage[indexOfValue] === undefined){
            this.storage[indexOfValue] = {[key] : value}
        }else{
            // there is already a value, we take the value, add the nex one in array
            this.storage[indexOfValue] = [this.storage[indexOfValue], {[key]:value}];
        }
        return this.storage;
    }

    print(){
        console.log(this.storage);
    }

    remove(key){
        let index = this.hashFunction(key);
        if(this.storage[index] === undefined){
            return undefined;
        }else{
            if(this.storage[index].length === undefined) {
                this.storage.pop(index);
            }else{
                let index_ = 0;
                for(let i = 0; i < this.storage[index].length; i++) {
                    if(this.storage[index][i][key] !== undefined){
                        this.storage[index].pop(index_);
                        break;
                    }
                    index_++;
                }
            }
        }
        return this.storage;
    }

    lookup(key) {
        let index = this.hashFunction(key);
        if (this.storage[index].length === undefined) return this.storage[index]
        else{
            for (let i = 0; i < this.storage[index].length; i++) {
                if(this.storage[index][i][key] !== undefined){
                    return this.storage[index][i]
                }
            }
        }

        return undefined;
    }
};