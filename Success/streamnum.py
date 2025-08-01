class EvenStream(object):
    def __init__(self):
        self.current = 0

    def get_next(self):
        to_return = self.current
        self.current+=2
        return to_return
    
class OddStream(object):
    def __init__(self):
        self.current =1

    def get_next(self):
        to_return = self.current
        self.current+=2
        return to_return
    
def print_from_stream(n,stream=None):
    if stream is None:
        stream = EvenStream()
    for _ in range(n):
        print(stream.get_next())

quries = int(input())
for _ in range(quries):
    streamName, n = input().split()
    n = int(n)
    if streamName == "even":
        print_from_stream(n)
    else:
        print_from_stream(n,OddStream()) 
