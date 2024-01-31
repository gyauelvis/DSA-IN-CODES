class Queue{
    constructor(storage = []){
        this.storage = storage;
    }

    lookup(){
        return this.storage[0]
    }

    push(value){
        this.storage.push(value);
        return this.storage
    }

    shift(){
        this.storage.shift();
        return this.storage
    }

}

let obj = new Queue();
