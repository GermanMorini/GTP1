import random as r

def det(mat) -> int:
        return mat[0][0] * mat[1][1] - mat[0][1] * mat[1][0]

def main():
        mat = [[-10 + int(20*r.random()) for i in range(2)] for j in range(2)]

        print(mat)
        print(f"Determinante: {det(mat)}")

if __name__ == '__main__':
        main()
