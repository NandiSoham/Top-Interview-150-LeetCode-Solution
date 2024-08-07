class RandomizedSet:

    def __init__(self):
        self.numList = []
        self.numMap = {}

    def insert(self, val: int) -> bool:
        res = val not in self.numMap
        if res:
            self.numMap[val] = len(self.numList)
            self.numList.append(val)
        return res


    def remove(self, val: int) -> bool:
        res = val in self.numMap
        if res:
            idx = self.numMap[val]
            lastValue = self.numList[-1]
            self.numList[idx] = lastValue
            self.numList.pop()
            self.numMap[lastValue] = idx
            del self.numMap[val]
        return res

    def getRandom(self) -> int:
        return random.choice(self.numList)


# Time Complexity -> O(1)
# Space Complexity -> O(n)
