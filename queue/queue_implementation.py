class queue:
    def __init__(self, storage = []):
        self.storage = storage
    def lookup(self):
        return self.storage[0]
    def shift(self):
        del self.storage[0]
    def push(self, value):
        self.storage.append(value)
        return self.storage



