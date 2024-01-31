class Stack{
    constructor(stack = []){
        this.stack = stack;
    }

    isStackEmpty(){
        return this.stack.length == 0;
    }
    peek(){
        return (this.stack.length > 0) ? this.stack[this.stack.length - 1]: undefined;
    }
    push(value){
        this.stack.push(value);
    }
    pop(){
        return (this.stack.length > 0) ? this.stack.pop() : undefined;
    }
    length(){
        return this.stack.length;
    }
}