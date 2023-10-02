def sum(l:list[int]) -> int:
        if len(l) > 0: return l.pop() + sum(l)
        else: return 0

def main():
        even = [2*n for n in range(1,21)]

        print(sum(even))

if __name__ == "__main__":
        main()
