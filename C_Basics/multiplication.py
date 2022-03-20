# # Dict = {'Nilesh': 'Smart' ,  'Samosa': 'Tikha' , "Lassi" : "Sweet"}

# # # for key,value in Dict:
# # print('Nilesh has an quality :', Dict['Nilesh'])

# # ----------------------------------------------------------------
# # if __name__ == '__main__':
# #     print(" *** Enter the Number of Scores ***")
# #     num = int(input())
# #     runnerup_scores = []
# #     for n in range(num):
# #         print(" Scores of Contestant is ")
# #         numbers = int(input())
# #         runnerup_scores.append(numbers)
# #     print("Scores in List is : ", runnerup_scores)

# # runnerup_scores.sort()
# # print("The Runner up of all the socres is : " , runnerup_scores[-2])
    
# ## **Second Higgest Number in the list**
# # Dictlist = [12 , 34, 678 , 754, 23 ]
# # Dictlist.sort()
# # print(Dictlist[-2])

# ## write the program of printhe second max in list.
# # n = input("Enter the No. of scores :")
# # n = map(int , n)
# # Dictlist = list(map(int, input().strip().split()))
# # lis = Dictlist[:n]
# # z = max(lis)
# # while max(lis) == z:
# #     lis.remove(max(lis))

# # print(max(lis)) 

# # n = int(input())

# # num = list(map(int, input().strip().split()))[:n]
# # print(num)

# # ------------------------------------------------------------------------------------------------------
# # Reverse star string in python !!
# n = int(input("enter the no. of stars to print :"))
# print(n , "stars are going to print!")

# for i in range(0, n):
#     for j in range(0,i):
#         print("*", end ="")
#     print("")
    


class Chapter:
    def __init__(self,  arg1, arg2, arg3, arg4):
        self.chNo = arg1
        self.chPage = arg2
        self.chMarks = arg3
        self.chName = arg4

class Exam:
    def __init__(self, arg1, arg2):
        self.ExamName = arg1
        self.ChList = arg2

    def findMinimumChapterByMarks(self, chName):
        MinValueMarks = 0
        name = 0 
        for obj in self.chList :
            if obj.chName == chName :
                name = 1
                MinValueMarks += obj.chMarks
            if name:
                return MinValueMarks
            
            return None

    def sortChapterByPage(self )
        sort= sorted()

