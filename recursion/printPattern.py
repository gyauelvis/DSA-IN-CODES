# Write a recursive function that takes as a parameter a nonnegative integer 
# and generates the following pattern of stars. If the nonnegative integer is 4,
# then the pattern generated is:
#  ****
#  ***
#  **
#  *
#  *
#  **
#  ***
#  ****


def pattern(num):
    if(num >0):
        for i in range(num):
            print("* ", end="")
        print('\n')
        pattern(num - 1)


        for i in range(num):
            print("* ", end="")
        print('\n')

pattern(4)
