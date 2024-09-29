










# def watches(sec):
#     seconds = sec%60
#     minutes = sec/60
#     hours = minutes/60
#     print(seconds)

# def muliply_tablet(a): 
#    for i in range(1, a+1):
#         res = ''
#         for j in range(1,a+1):
#             if len(str(j)) == 1:
#                res += str(j * i).center(6)
#             elif len(str(j)) == 2:
#                res += str(j * i).center(5)
#             elif len(str(j*i)) == 3:
#                res += str(j * i).center(4)
#         print(res)



# def febanachi(a) :
#    num1 = 0
#    num2 = 0
#    for i in range(1,a+1):
#       if num1 == 0:
#          num1 = 1
#       elif num2 == 0:
#          num2 = 1
#       elif i % 2 != 0:
#          num2 += num1
#       elif i % 2 == 0:
#          num1 += num2  
#    if a % 2 == 0:
#       print(num1)
#    else:
#       print(num2)

# b = int(input('Write your number: '))
# print('\n')
# febanachi(b)
# print('\n')
# muliply_tablet(b)