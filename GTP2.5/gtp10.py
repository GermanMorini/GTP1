def is_magic(mat) -> bool:
        for i in range(len(mat)):
                acu1 = 0
                acu2 = 0
                acu3 = 0
                acu4 = 0

                for j in range(len(mat[0])):
                        acu1 += mat[i][j]
                        acu2 += mat[j][i]
                        acu3 += mat[j][j]
                        acu4 += mat[j][len(mat)-1-j]
                
                if acu1 != acu2 or acu2 != acu3 or acu3 != acu4:
                        return False
        
        return True
                
def main():
        mat1 = [[1,1,1],[1,1,1],[1,1,1]]

        print(is_magic(mat1))

if __name__ == '__main__':
        main()
