class Stack:
    def __init__(self, stack = []):
        self.stack = stack

    def pop(self):
        if len(self.stack) > 0:
            return self.stack.pop()
        return None

    def push(self, value):
        self.stack.append(value)


    def peek(self):
        if len(self.stack) > 0:
            return self.stack[len(self.stack) - 1]
        return None