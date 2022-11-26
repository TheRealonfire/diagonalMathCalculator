#Preparations

import math
import time
calc = True

x = int
y = int
z = int

squareroot = int()
squareroot1 = int()
squareroot2 = int()

def variablex():
    questionx = int(input("What is the size of x?: "))
    x = questionx

def variabley():
    questiony = int(input("What is the size of y?: "))
    y = questiony

def variablez():
    questionz = int(input("What is the size of z?"))

#calculator

questioncalc = input("What would u like to calculate?: ")
 
while calc == True:

    if questioncalc == "diagonal of a squale":
        variablex()
        variabley()
         
        squareroot = int(pow(x, 2) + pow(y, 2))
        Finish = math.sqrt(squareroot)
        round(Finish, 2)

        print('The ansewer is' + str(Finish))


    elif questioncalc == "space diagonale of a cube":
        variablex()
        variabley()
        variablez()

        squareroot1 = x * x + y * y
        squareroot2 = squareroot1 * squareroot1 + z * z
        Finish = math.sqrt(squareroot2)
        round(Finish, 2)

        print('The ansewer is' + str(Finish))

    else:
     print ("Error")
     calc = False
     

