
# ALL FROM WWW.SOLOLEARN.COM


print("\n\n\n\n\n\n ()()()()>-- THIS IS PYTHON --<()()()() \n\n")




# This is a comment made by a OCTOTHORPE
# Use this to a single line of comment

"""
This work as a comment;
Made by 6 docstrings (documentation strings)
Use this to multiple lines of comments
"""

'''
This also work as a comment
Use this to multiple lines of comments
'''




print('\n')
print("------------------------------------------------------------------------------------")
print("\t--->-->->     BASICS     <-<--<---")
print("------------------------------------------------------------------------------------")
print(),print()



a = 2
b = 3

c = a/b

print("The value of 'a' is: ",a,", and the value of 'b' is: ",b,".")
print("Now, the result of 'a' divided 'b' is 'c', that it is equal to: ",c)
print("The division's result can also be expressed as: ",round(c,4))
print(type(a),"'a'; ",type(b),"'b'; ",type(c),"'c'.")

print()

c = a**b # a^b

print("The value of 'a' is: ",a,", and the value of 'b' is: ",b,".")
print("Now, the result of 'a' powered 'b' is 'c', that it is equal to: ",c)
print(type(a),"'a'; ",type(b),"'b'; ",type(c),"'c'.")

print()

a = 5
b = 2

c = a//b # The result of a floor division gets the division's quotient

print("The value of 'a' is: ",a,", and the value of 'b' is: ",b,".")
print("Now, the result of 'a' floor divided 'b' is 'c', that it is equal to: ",c)
print(type(a),"'a'; ",type(b),"'b'; ",type(c),"'c'.")

print()

c = a%b # The result of a modulo operator gets the division's reminder

print("The value of 'a' is: ",a,", and the value of 'b' is: ",b,".")
print("Now, the result of 'a' modulo 'b' is 'c', that it is equal to: ",c)
print(type(a),"'a'; ",type(b),"'b'; ",type(c),"'c'.")


print("\n------------------------------------------------------------------------------------\n")


print( "CRUCIAL NOTE: PYTHON UNDERSTANDS MATH OPERATIONS HIERARCHY." )
print( "HOWEVER, IT IS A GOOD PROGRAMMING PRACTICE TO BUNDLE MATH OPERATIONS." )


print("\n------------------------------------------------------------------------------------\n")


print( "CRUCIAL NOTE: PYTHON THROWS A SYNTAX ERROR WHEN VARIABLES STARTS WITH NUMBERS." )
print( "SPACES IN VARIABLES NAME CRASHES PYTHON DEBUGGIN'." )


print("\n------------------------------------------------------------------------------------\n")


print( "The way to interact to the machine (introduce data) goes like this:")
print("variable_name = input()")

print()

print("The way to put a prompt message (text which clarifies input data) goes like this:")
print("valiable_name = input( \"text\" )")

print()

print("The casting is useful to catch accurately input data.")
# After all, we manage input data
print("variable_name = type_data( input( \"optional text\" ) )")
# Please, be rational: do not treat letters as numbers


print("\n------------------------------------------------------------------------------------\n")


print( "VALID ABBREVIATION MATH OPERATIONS:" )
print()
print(" •  +=\t\t•  -=\t\t•  *=\t\t•  /=")
print(" •  //=\t\t•  %=\t\t•  **=")
print(" •  &=\t\t•  |=\t\t•  ^=\t\t•  >>=\t\t•  <<=")
print("\n")
print( "INVALID ABBREVIATION MATH OPERATIONS: '++' ; '--'" )
print()
print( "VALID ABBREVIATION TO ASSIGN AND PRINT:" )
print("print( variable_name := value )") # Here is used a Walrus operator



print('\n')
print("------------------------------------------------------------------------------------")
print("\t--->-->->     END OF BASICS     <-<--<---")
print("------------------------------------------------------------------------------------")
print(),print()





print('\n')
print("------------------------------------------------------------------------------------")
print("\t--->-->->     CONDITIONALS     <-<--<---")
print("------------------------------------------------------------------------------------")
print(),print()



print("It is possible to print the result of a comparison.")
print("The result of print (None == None) is: " , (None == None))
print("While te result of (None != None) is: " , (None != None ))

# There is no NULL, Null or null keyword in Python. Instead of that, it is used None value

print()

print("Strings can be compared too; with the < or > operators.") # Smaller than or greater operators
print("The result of print (\"Hellow\" <= \"World\") is: " , ("Hellow" <= "World")) # Here is used lexicography
# (the alphabetical order of words is based on the alphabetical order of their component letters)


print("\n------------------------------------------------------------------------------------\n")


print( "IF STATEMENT:" )

print()

print("""

if expression :

    statement

elif expression :

    statement

else :

    statement

""")

# ELSE and ELIF depend of an IF. No IF, no ELSE, ELIF neither

print()

print("Logic operators in boolean logic: AND; OR; NOT.")

# The evaluation of comparisons in one line has hierarchy: Operation Precendence
# 1. ==; 2. AND, OR, NOT
# Even knowing this, it is a good programmin' practice to bundle logic operations


print("\n------------------------------------------------------------------------------------\n")


print( "CRUCIAL NOTE: IDENTATION, FOR PYHTON IS ESSENTIAL." )


print("\n------------------------------------------------------------------------------------\n")


print("Often useful conditional statements within conditionals are: ALL and ANY.")


print()


print( "IF ALL STATEMENT:" )

print() # IF ALL elements of a group of ones reaches the condition, so go to STATEMENT SECTION 

print("""

if all expression :

    statement

""")


print()


print( "IF ANY STATEMENT:" )

print() # IF ANY element of a group of ones reaches the condition, so go to STATEMENT SECTION 

print("""

if any expression :

    statement

""")


print("\n------------------------------------------------------------------------------------\n")


print("There is a short and useful way to make a conditional statement.")


print()


print( "TERNARY OPERATOR:" )

print() # This takes 3 arguments

print("""

variableName = variableValue if (conditional expression) else variableValue

""")



print('\n')
print("------------------------------------------------------------------------------------")
print("\t--->-->->     END OF CONDITIONALS     <-<--<---")
print("------------------------------------------------------------------------------------")
print(),print()





print('\n')
print("------------------------------------------------------------------------------------")
print("\t--->-->->     LOOPS     <-<--<---")
print("------------------------------------------------------------------------------------")
print(),print()



print( "WHILE STATEMENT:" )
print()
print("""

while expression :

    statement
    
""")

print()

print( "FOR STATEMENT:" )
print()
print("""

for expression :

    statement
    
""")

print()

print( "DO WHILE STATEMENT:" )
print()
print("PYTHON DOES NOT HAVE DO WHILE LOOP STATEMENT. IT HAS TO BE BUILT.")

print()

print("'BREAK' statement works inside loops to stop its runnin'.")
print("'CONTINUE' statement works inside loops to skip a runnin'.")


print("\n------------------------------------------------------------------------------------\n")


print( "CRUCIAL NOTE: THANKS TO LOOP STATEMENTS HAVE CONDITIONAL EXPRESSIONS," )
print( "AN ELSE STATEMENT CAN BE USED AFTER A LOOP." )



print('\n')
print("------------------------------------------------------------------------------------")
print("\t--->-->->     END OF LOOPS     <-<--<---")
print("------------------------------------------------------------------------------------")
print(),print()





print('\n')
print("------------------------------------------------------------------------------------")
print("\t--->-->->     LISTS     <-<--<---")
print("------------------------------------------------------------------------------------")
print(),print()



print("Lists are a group of elements stored in the same variable.")
print("The elements inside an array or a list can be from any data type.")

print()

a = [0,1,2]
print("The elements of 'a' list are:"),
print(a)

print()

print("The elements of 'a' list are (thru for statement by range):"),
for i in range(3) : # for statement by range
    print(a[i])

print()

print("Another way to show 'a' list elements is:")
for i in enumerate (a) : # foreach statement thru enum
    print(i)


print()


b = [3,4,5]
print("The elements of 'b' list are:"),
print(b)

print()

print("The elements of 'b' list are (thru foreach statement):"),
for i in b : # foreach statement
    print(i)

print()

print("Another way to show 'b' list elements is:")
for i in enumerate (b) : # foreach statement thru enum
    print(i)


print("\n------------------------------------------------------------------------------------\n")


list_2D =   [               # this variable is called 2D list or matrix
            [0,1,2] ,
            [3,4,5] ,
            [6,7,8] ,
            ]

# It is also valid to write a matrix like this:
# list_2D = [ [0,1,2] , [3,4,5] , [6,7,8] ]

print("The elements of 'list_2D' are:"),
print(list_2D)


print("\n------------------------------------------------------------------------------------\n")


c = a + b # '+' is used to concatenate lists
print("The values of 'c' evaluating 'c = a + b' are:"),
print(c)


print()


c = a * 5 # '*' is used to repeat the elements in the selected list
print("The values of 'c' evaluating 'c = a * 5' are:"),
print(c)


print("\n------------------------------------------------------------------------------------\n")


flag = True

flag = 0 in a
print("Is 0 in 'a' list ?")
print(flag)

print()

flag = 0 in b
print("Is 0 in 'b' list ?")
print(flag)


print('\n')


flag = not 1 in a
print("~ { Is 1 in 'a' list ? }")
print(flag)

print()

flag = 1 not in a
print("Is 1 out of 'a' list ?")
print(flag)

print()

flag = not 10 in a
print("~ { Is 10 in 'a' list ? }")
print(flag)

print()

flag = 10 not in a
print("Is 10 out of 'a' list ?")
print(flag)


print("\n------------------------------------------------------------------------------------\n")


# Range function parameters:
# From minor to major for (+), else so: error
# From major to minor for (-), else so: error

# RANGE OUTPUT ==> [ α , β )

nums = list(range(10)) #from 0 toward 10
print("The elements of 'nums' evaluating 'list(range(10))' are:")
print(nums)

print()

nums = list(range(5,10)) #from 5 toward 10
print("The elements of 'nums' evaluating 'list(range(5,10))' are:")
print(nums)

print()

nums = list(range(0,20,2)) #from 0 hop-> (2) <-hop toward 20
print("The elements of 'nums' evaluating 'list(range(0,20,2))' are:")
print(nums)

print()

nums = list(range(20,5,-2)) #from 20 hop-> (-2) <-hop toward 5
print("The elements of 'nums' evaluating 'list(range(20,5-2))' are:")
print(nums)


print("\n------------------------------------------------------------------------------------\n")


print("Starting from the 'nums' content in [1] position toward [3] position:")
print("   No hoping. Going in straight")
print(nums[1:3])

print()

print("Starting from the 'nums' content in [0] position toward [4] position:")
print("   No hoping. Going in straight")
print(nums[:4])

print()

print("Starting from the 'nums' content in [2] position toward [ (len(nums)-1) ] position:")
print("   No hoping. Going in straight")
print(nums[2:])

print() # List Slices notation can handle lists as circular ones

print("Starting from the 'nums' content in [1] position toward [-1] position:")
print("   No hoping. Going in straight")
print(nums[1:-1])

print()

print("Starting from the 'nums' content in [0] position toward [0] position:")
print("   (-1) hoping. Going in reverse")
print(nums[::-1])


print("\n------------------------------------------------------------------------------------\n")


print("There is a special way to define a list: thru LIST COMPREHENSIONS")

nums = [ i+10 for i in range(5) ] # RANGE functions works normaly as previously
print("The elements of 'nums' evaluating '[ i+10 for i in range(5) ]' are:")
print(nums)

print()

nums = [ i+10 for i in range(5) if i % 2 == 0 ] # RANGE functions works normaly as previously
print("The elements of 'nums' evaluating '[ i+10 for i in range(5) if i % 2 == 0 ]' are:")
print(nums)


print("\n------------------------------------------------------------------------------------\n")


print("UNPACKING") # The asterisk before an object allows to identify an unpacking object

var1,var2,*var3,var4,var5 = [1,2,3,4,5,6,7,8,9,10]

print("The values of variables are:")
print("var1 = ",var1)
print("var2 = ",var2)
print("var3 = ",var3)
print("var4 = ",var4)
print("var5 = ",var5)



print('\n')
print("------------------------------------------------------------------------------------")
print("\t--->-->->     END OF LISTS     <-<--<---")
print("------------------------------------------------------------------------------------")
print(),print()





print('\n')
print("------------------------------------------------------------------------------------")
print("\t--->-->->     STANDARD OR (NATIVE) FUNCTIONS     <-<--<---")
print("------------------------------------------------------------------------------------")
print(),print()



nums = list(range(20))
print("The elements of 'nums' are: ")
print(nums)

print()

sentence = "Hello world"
print("The content of 'sentence' is: ")
print(sentence)

print(), print()

len_nums = len(nums) # By default, 'len' functions is handled as an integer
print("The lenght of 'nums' is: ")
print(len_nums)

print()

len_sentence = len(sentence) # By default, 'len' functions is handled as an integer
print("The length of 'sentence' is: ")
print(len_sentence)


print("\n------------------------------------------------------------------------------------\n")


nums.append(20) # Only one element or argument at a time
# The argument is the value to add, and it goes to the last+1 index of the selected list
print("Due to '.append()', the values of 'nums' are: ")
print(nums)
print("The lenght of 'nums' is: ")
print(len(nums))

print()

nums.insert(20,1) # .insert() can extend the range of the selected list due to 1st arg
# 1. Index to put the element (the rest elements move to the right), 2. The element
print("Due to '.insert()', the values of 'nums' are: ")
print(nums)
print("The lenght of 'nums' is: ")
print(len(nums))


print("\n------------------------------------------------------------------------------------\n")


print("The currently values of 'nums' are: ")
print(nums)
print("The maximum value of 'nums' is: ")
print(max(nums))

print()

print("The currently values of 'nums' are: ")
print(nums)
print("The minimum value of 'nums' is: ")
print(min(nums))

print()

print("The currently values of 'nums' are: ")
print(nums)
evaluated_value = 1
print("The "+str(evaluated_value)+" ('evaluated_value')' that 'nums' array has are: ")
print(nums.count(evaluated_value)) # The argument is item we want to evaluate

print()

print("The currently values of 'nums' are: ")
print(nums)
sum_nums = sum(nums)
print("The total summatory result of 'nums' list is:")
print(sum_nums)


print("\n------------------------------------------------------------------------------------\n")


nums.remove(evaluated_value) # Only one element or argument at a time
# The argument is the value to remove from the list
# This function removes the first value from the list according to the value encountered
print("Due to '.remove()', the values of 'nums' are: ")
print(nums)
print("The lenght of 'nums' is: ")
print(len(nums))

print()

nums.reverse() # This function reverses values from the list
print("Due to '.reverse()', the values of 'nums' are: ")
print(nums)
print("The lenght of 'nums' is: ")
print(len(nums))

print()

nums.sort() # This function organizes from smallest to largest the values from the list
print("Due to '.sort()', the values of 'nums' are: ")
print(nums)
print("The lenght of 'nums' is: ")
print(len(nums))

print()

nums.sort(reverse=True) # This function organizes from smallest to largest the values from the list
print("Due to '.sort(reverse=True)', the values of 'nums' are: ")
print(nums)
print("The lenght of 'nums' is: ")
print(len(nums))


print("\n------------------------------------------------------------------------------------\n")


print("The current content of 'sentence' string is: ")
print(sentence)
print("The length of 'sentence' is: ")
print(len(sentence))
print("The current content of 'nums' list is: ")
print(nums)
print("The length of 'nums' is: ")
print(len(nums))
print()

# {placeholders: to stablish an order} # (arguments: items to order)

sentence = sentence+" _ "
for i in nums :
    sentence = sentence + "{}" . format (i)
    if not ( nums.index(i) == len(nums)-1 ) :
        sentence = sentence + ","

print("Due to '.format(list[x])' upon the string, the content of 'sentence' is: ")
print(sentence)

print()

sentence = sentence+","
sentence = sentence+"{y},{x}".format(x=-2,y=-1)

print("Due to '{}.format(list[x])' upon the string with placeholders manage,")
print("The content of 'sentence' is:")
print(sentence)


print("\n------------------------------------------------------------------------------------\n")


nums2 = "0123456789"

print("The current content of 'nums2' is: ")
print(nums2)
print("The length of 'nums2' is: ")
print(len(nums2))

print()

nums2 = ",".join(nums2) # It keeps the string format, it separates each element
# 1. The placeholder contains the selected characters, 2. the list or the elements to bond
print("Due to '  .\"charecters\".join(list or elements)  ', the content of 'nums2' is: ")
print(nums2)

print()

nums2 = nums2.split(",") # Converts a string in a list of elements
# The argument is the selected characters
print("Due to '  .split(characters)  ', the content of 'nums2' is: ")
print(nums2)

print()

nums2 = str(nums2).replace("0","10")
# 1. The element in a list to be replaced, 2. The element which is occuped in the replaced position
print("Due to '.replace()', the content of 'nums2' is: ")
print(nums2)


print("\n------------------------------------------------------------------------------------\n")


flag2 = False
print("The current content of 'flag2' is: ")
print(flag2)
flag2 = nums2.startswith("10") # The function verifies if the list stars with the argument
print("Due to '.startswitch(element to evaluate)', the value of 'flag2' is: ")
print(flag2)

print()

flag2 = False
print("The current content of 'flag2' is: ")
print(flag2)

flag2 = nums2.endswith("9") # The function verifies if the list ends with the argument
print("Due to '.endswith(element to evaluate)', the value of 'flag2' is: ")
print(flag2)


print("\n------------------------------------------------------------------------------------\n")


print("The current value of 'sentence' is: ")
print(sentence)

print()

sentence = sentence.upper() # It converts each letter from minuscule to majuscule
# It does not matter that there are numbers or other character in the string
print("Due to '.upper()', the content of 'sentence' is: ")
print(sentence)

print()

sentence = sentence.lower() # It converts each letter from majuscule to minuscule
# It does not matter that there are numbers or other character in the string
print("Due to '.lower()', the content of 'sentence' is: ")
print(sentence)



print('\n')
print("------------------------------------------------------------------------------------")
print("\t--->-->->     END OF STANDARD (OR NATIVE) FUNCTIONS     <-<--<---")
print("------------------------------------------------------------------------------------")
print(),print()





print('\n')
print("------------------------------------------------------------------------------------")
print("\t--->-->->     DEF FUNCTIONS     <-<--<---")
print("------------------------------------------------------------------------------------")
print(),print()



# The next ones are called DEF STATEMENTS

text_toDef1 = "This is how this syntax goes."

def function1 (text_inDef) :
    print(text_inDef)

function1(text_toDef1)

print()

text_toDef2 = "This has to work exactly the same as above."

def function2 (text_inDef) :
    return text_inDef # Return statement stops the loop
    print("This cannot be seen. There is a return after this line of code.")

print(function2(text_toDef2))

# More than one argument or parameter must be separated by commas


print("\n------------------------------------------------------------------------------------\n")


print("Def statements can return multiple values.")

text1 = "Hello"
text2 = "World"

def function3 (str_1,str_2) :
    str_1 += " " ; str_2 += "!" # semicolon works to summarize lines of code
    return str_1 , str_2

print( "The return of 'function3' is: " , (function3(text1,text2)) )


print("\n------------------------------------------------------------------------------------\n")


print("There are two ways on which Def statements can receive multiple parameter in one.")

print()

text3 = "Hi"
text4 = "User"

def function4 (*arguments) :
    return "{t3}, {t4}.".format(t4=arguments[1],t3=arguments[0])

print( "1. The return of 'function4' is: " , (function4(text3,text4)) )

print()

def function5 (**knownArguments) :
    # for key , value in knownArguments.items() :
    #     print(f"{key}:{value}")
    return knownArguments

print( "2. The return of 'function5' is: " , (function5(noun=text4,expression=text3)) )



print('\n')
print("------------------------------------------------------------------------------------")
print("\t--->-->->     END OF FUNCTIONS     <-<--<---")
print("------------------------------------------------------------------------------------")
print(),print()





print('\n')
print("------------------------------------------------------------------------------------")
print("\t--->-->->     MODULES (OR LIBRARIES)     <-<--<---")
print("------------------------------------------------------------------------------------")
print(),print()



print("ALL ABOUT STANDARD (OR NATIVE) LIBRARY IS IN www.python.org")

print()

import math
import random # This is the way on which modules are called to a Python code

some_randNum = random.randint(1,100)

print("Using 'randint' function from 'random' module, the rand number is: " , some_randNum)

# The return of a module's functions do not need to be stored in a variable

print()

from math import pi as pi_constant # This syntax works for specific module's functions callin'
# The 'as' connector works to assign next a more understanable name for the imported function

print("The value of π is: " , pi_constant , ". It means 'pi_constant'.")
# Instead of module.function, it is used variable

# from math import exp,sqrt
# The syntax for adding various and specific functions from a module is separatin' them by commas

# from math import *
# The syntax for adding all functions from a module is puttin' an asterisk as import



print('\n')
print("------------------------------------------------------------------------------------")
print("\t--->-->->     END OF MODULES     <-<--<---")
print("------------------------------------------------------------------------------------")
print(),print()





print('\n')
print("------------------------------------------------------------------------------------")
print("\t--->-->->     EXCEPTIONS     <-<--<---")
print("------------------------------------------------------------------------------------")
print(),print()



print("""

SOME EXCEPTIONS MESSAGES ARE:

ImportError: an import fails;
IndexError: a list is indexed with an out-of-range number;
NameError: an unknown variable is used;
SyntaxError: the code can't be parsed properly;
TypeError: a function is called on a value of an inappropriate type;
ValueError: a function is called on a value of the correct type,
            but with an inappropriate value.

""")


print("\n------------------------------------------------------------------------------------\n")


print("""

try :

    statement

except :

    statement

except (exception expression) :

    statement

except (exc. exp. 1 , exc. exp. n) :

    statement

else :

    statement

finally :

    statement

""")

# FINALLY is not a mandatory statement to use within exceptions handling

# EXCEPTIONS and FINALLY depend of a TRY. No TRY, no EXCEPTIONS, FINALLY neither


print("\n------------------------------------------------------------------------------------\n")


print("Using 'raise' helps to invoke one exception.")
print("This statement can be used in any line of code.")
print("'raise' statement does not need a complete exception statement.")
print()
print("The 'raise' syntax can be:")
print(" • raise")
# raise
print(" • raise SyntaxError")
# raise SyntaxError
print(" • raise SyntaxError(\"This syntax has to be fixed\")")
# raise SyntaxError("This error has to be fixed")

# On special, raise+expression(message as arg) is used to identify in which part of code an error allocates


print("\n------------------------------------------------------------------------------------\n")


print("Using 'assert' helps to invoke one exception if an error occurs,")
print("and if not the code just keeps runnin'.")
print("'assert' statement does not need a complete exception statement.")
print()
print("The 'assert' syntax can be:")
print(" • assert ( expresssion )") # if the line has no error, no message appears
# assert ( 2 + 2 == 4 )
print(" • assert ( expresssion ) , \"message\"")
# assert ( 2 + 2 == 4 ) , "OK!"


print("\n------------------------------------------------------------------------------------\n")


print("CRUCIAL NOTE: IF AN ERROR OCCURS THE NEXT CODE DOES NOT RUN.")
print("... AN ERROR LIKE EXCEPTION, RAISE, OR ASSERT ...")



print('\n')
print("------------------------------------------------------------------------------------")
print("\t--->-->->     END OF EXCEPTIONS     <-<--<---")
print("------------------------------------------------------------------------------------")
print(),print()





print('\n')
print("------------------------------------------------------------------------------------")
print("\t--->-->->     FILES     <-<--<---")
print("------------------------------------------------------------------------------------")
print(),print()



print( " * OPEN * " )

print("The basic way to open a file is:")
print("in_Stream = open (\"eg_SoloLearn.txt\")")
# the variable is a file object, file-like object or a stream
# OPEN is the action it will be taken on the file
# The argument is the file's path

print()

print("The another way to open a file is:")
print("in_Stream = open (\"eg_Sololearn.txt , mode)")
# the variable is a file object, file-like object or a stream
# OPEN is the action it will be taken on the file
# 1. file's path
# 2. mode or the purpose thru which the file opens
print("""
MODES:
        •   r: read
        •   w: write
        •   a: append
        •   x: create

        •   r+: read and write
        •   w+: read, write and create
        •   a+: reading, appending and create

        •   _t: text file
        •   _b: binary file

E.G.:
        •   ( path , r )
        •   ( path , r+ )
        •   ( path , rt )
        •   ( path , rt+ )
""")

# Clarification: t, b and + modes need another mode before them


print("\n------------------------------------------------------------------------------------\n")


print("CRUCIAL NOTE: MODE CODES WITH EXTRA FUNCTIONS CAN CREATE A FILE,")
print("BUT IF THE FILE IS ALREADY CREATED, THE OTHER MODE ACTIONS START WORKING.")


print("\n------------------------------------------------------------------------------------\n")


print( " * CLOSE * " )

print("The basic way to close a file is:")
print("in_Stream.close()")

print()

print("The another way to close a file is:")
print("out_Stream = in_Stream.close()")


print("\n------------------------------------------------------------------------------------\n")


print( " * READ * " )

print("The way to read a file is:")
print("file_content = inStream.read()") # file_content is a string variable

print()

print("The 'read' file object function can have a number as an arg:")
print("in_Stream.read(n)") # This arg indicates how many bytes are read


print("\n------------------------------------------------------------------------------------\n")


print("The 'readlines' function stores each line of a file in an element of a list.")

print()

print("One way to handle with 'readlines' functions is:")
print("contentFile_byLines = in_Stream.readlines()")

print()

print("The another way to handle with 'readlines' functions is:")
print("print(in_Stream.readlines())")


print("\n------------------------------------------------------------------------------------\n")


print(  " *  WRITE * " )

print("The 'write' function allows to write characters in a file.")

print()

print("The way to write in a text file is:")
print("in_Stream.write . write (message)")

print()

print("The 'write' function returns the number of bytes which the message is base on.")
print("bytesMSG = in_Stream.write(message)")


print("\n------------------------------------------------------------------------------------\n")


print( " * WITH STATEMENT * " )

print("The 'with' statement helps to manage file in a more understandable way.")

print()

print("Syntax:")
print("""

with open ( path's file ) as in_Stream :

    statement

""")

# With the 'with' statement form the file object variable (in_Stream) can be used as previously



print('\n')
print("------------------------------------------------------------------------------------")
print("\t--->-->->     END OF FILES     <-<--<---")
print("------------------------------------------------------------------------------------")
print(),print()





print('\n')
print("------------------------------------------------------------------------------------")
print("\t--->-->->     DICTIONARIES     <-<--<---")
print("------------------------------------------------------------------------------------")
print(),print()



print("The Dictionary data structure which allows associate values.")

# The components of a dictionary are:
# key:value

# An empty dictionary is defined as:
# dictionary = {}

dictionary = { 1 : "one" , 2 : "two" , 3 : "tree" }

print("The content of 'dictionary' is: ")
print(dictionary)

print()

print("The content of 'dictionary' thru a foreach is:")

for i in dictionary :
    print( i , ": " + dictionary[i] )

print()

dictionary [3] = "three" # Overwriting values
dictionary [4] = "four" # Appending values

print("Adding and changing some dictionary values, the content of 'dictionary' is:")
print(dictionary)

print()

print("The current content of 'dictionary' thru a foreach is:")

for i in dictionary :
    print( i , ": " , dictionary.get(i) ) # get just woks with keys



print('\n')
print("------------------------------------------------------------------------------------")
print("\t--->-->->     END OF DICTIONARIES     <-<--<---")
print("------------------------------------------------------------------------------------")
print(),print()





print('\n')
print("------------------------------------------------------------------------------------")
print("\t--->-->->     TUPLES     <-<--<---")
print("------------------------------------------------------------------------------------")
print(),print()



# These are the same as list, but it cannot be changed their values

tuple_1 = ('a','b','c')

# The another (and faster) way to declare a TUPLE is:
# tuple_1 = 'a' , 'b' , 'c'

# An empty TUPLE is defined as:
# tuple_1 = ()

print("The content of 'tuple_1' is: " , tuple_1)

# LISTS SLICE notation also works with TUPLES



print('\n')
print("------------------------------------------------------------------------------------")
print("\t--->-->->     END OF TUPLES     <-<--<---")
print("------------------------------------------------------------------------------------")
print(),print()





print('\n')
print("------------------------------------------------------------------------------------")
print("\t--->-->->     FUNCTIONAL PROGRAMMING     <-<--<---")
print("------------------------------------------------------------------------------------")
print(),print()



print("F.P.: code based on functions")
print()
print("***WRITE THE CODE IN THE SAME ORDER THAT IS INVOKED***")
print()
print("Memozation: reducing the number of times the function is called.")



print('\n')
print("------------------------------------------------------------------------------------")
print("\t--->-->->     END OF FUNCTIONAL PROGRAMMING     <-<--<---")
print("------------------------------------------------------------------------------------")
print(),print()





print('\n')
print("------------------------------------------------------------------------------------")
print("\t--->-->->     LAMBDA CALCULUS     <-<--<---")
print("------------------------------------------------------------------------------------")
print(),print()



# LAMBDAS replace DEF STATEMENTS in a short way
# It is no possible to put FOR or IF STATEMENTS inside LAMBDA syntax

print("Lambda syntax declaration:")
print()
print( " function_name = ( Lambda parameter_0 , parameter_n : (expression) ) " )
print( " // ( parameters' values )" )

print('\n')

print("Lambda syntax invocation:")
print()
print( " function_name (arguments) " )

# Functions created thru LAMBDA syntax: ANONYMOUS FUNCTIONS



print('\n')
print("------------------------------------------------------------------------------------")
print("\t--->-->->     END OF LAMBDA CALCULUS     <-<--<---")
print("------------------------------------------------------------------------------------")
print(),print()





print('\n')
print("------------------------------------------------------------------------------------")
print("\t--->-->->     MAPS     <-<--<---")
print("------------------------------------------------------------------------------------")
print(),print()



print("Map function modifies list's elements accordin' with the function passed.")
print()
print("Syntax:")
print( " map ( function , list ) " )

# In order to express a map instead of an object, it is used a list castin'



print('\n')
print("------------------------------------------------------------------------------------")
print("\t--->-->->     END OF MAPS     <-<--<---")
print("------------------------------------------------------------------------------------")
print(),print()





print('\n')
print("------------------------------------------------------------------------------------")
print("\t--->-->->     FILTERS     <-<--<---")
print("------------------------------------------------------------------------------------")
print(),print()



print("Filter function filters an iterable by removing items that don't match a predicate.")
print()
print("Syntax:")
print( " filter ( function , list ) " ) # function-kind-condition got to return a Boolean value

# In order to express a map instead of an object, it is used a list castin'



print('\n')
print("------------------------------------------------------------------------------------")
print("\t--->-->->     END OF FILTERS     <-<--<---")
print("------------------------------------------------------------------------------------")
print(),print()





print('\n')
print("------------------------------------------------------------------------------------")
print("\t--->-->->     YIELD GENERATOR     <-<--<---")
print("------------------------------------------------------------------------------------")
print(),print()



print("Replace the return of a function.")
print("It provides a result to its caller without destroying local variables.")
print()
print("Syntax where it can be used YIELD GENERATOR:")
print("""

loop (expression) :

    yield statement

""")



print('\n')
print("------------------------------------------------------------------------------------")
print("\t--->-->->     END OF YIELD GENERATOR     <-<--<---")
print("------------------------------------------------------------------------------------")
print(),print()





print('\n')
print("------------------------------------------------------------------------------------")
print("\t--->-->->     SETS     <-<--<---")
print("------------------------------------------------------------------------------------")
print(),print()



# There are two exactly ways to declare a set data structure:

set_nums = {1,1,2,3,4,5}
# set_nums = set([1,1,2,3,4,5])

print("The content of 'set_nums' is: ",set_nums)
print("The lenght of 'set_nums' is: ",len(set_nums))

# To create an empty set:
# set_nums = set({})


print("\n------------------------------------------------------------------------------------\n")


print("CRUCIAL NOTE: SETS DATA STRUCTURES CANNOT HAVE DUPLICATED VALUES.")
print("SET DATA STRUCTURE IS UNORDERED, SO IT CANNOT BE INDEXED.")


print("\n------------------------------------------------------------------------------------\n")


# Instead of .append(), set daa structure uses .add()

set_nums.add(0) # 0 does not exist in the set
print("Due to the '.add(n)' function, the content of 'set_nums' is: ",set_nums)
print("Now, the lenght of 'set_nums' is: ",len(set_nums))

print()

set_nums.add(1) # 1 does already exist in the set
print("Due to the '.add(n)' function, the content of 'set_nums' is: ",set_nums)
print("Now, the lenght of 'set_nums' is: ",len(set_nums))

print()

set_nums.remove(1)
print("Due to the '.remove(n)' function, the content of 'set_nums' is: ",set_nums)
print("Now, the lenght of 'set_nums' is: ",len(set_nums))

print()

set_nums.pop() # This function removes the first element of the set
print("Due to the '.pop()' function, the content of 'set_nums' is: ",set_nums)
print("Now, the lenght of 'set_nums' is: ",len(set_nums))


print("\n------------------------------------------------------------------------------------\n")


print("Sets data structures can be managed as mathematical ones.")

print()

set_letters_1 = {'a','b','c','d','e'}
set_letters_2 = {'e','f','g','h','i'}

print("The content of 'set_letters_1' is: ",set_letters_1)
print("The lenght of 'set_letters_1' is: ",len(set_letters_1))
print("The content of 'set_letters_2' is: ",set_letters_2)
print("The lenght of 'set_letters_2' is: ",len(set_letters_2))

print()

print("INTERSECTION OPERATION: &")
set_letters_3 = set_letters_1 & set_letters_2
print("The content of 'set_letters_3' is: ",set_letters_3)
print("The lenght of 'set_letters_3' is: ",len(set_letters_3))

print()

print("UNION OPERATION: |")
set_letters_3 = set_letters_1 | set_letters_2
print("The content of 'set_letters_3' is: ",set_letters_3)
print("The lenght of 'set_letters_3' is: ",len(set_letters_3))

print()

print("DIFFERENCE OPERATION: -") # "What has this one that doesn't have the other one"
set_letters_3 = set_letters_1 - set_letters_2
print("The content of 'set_letters_3' is: ",set_letters_3)
print("The lenght of 'set_letters_3' is: ",len(set_letters_3))

print()

print("SYMMETRIC DIFFERENCE: ^") # ¬(INTERSECTION)
set_letters_3 = set_letters_1 ^ set_letters_2
print("The content of 'set_letters_3' is: ",set_letters_3)
print("The lenght of 'set_letters_3' is: ",len(set_letters_3))



print('\n')
print("------------------------------------------------------------------------------------")
print("\t--->-->->     END OF SETS     <-<--<---")
print("------------------------------------------------------------------------------------")
print(),print()





print('\n')
print("------------------------------------------------------------------------------------")
print("\t--->-->->     DECORATORS (@)     <-<--<---")
print("------------------------------------------------------------------------------------")
print(),print()



def function_toDecorate (function_toRecive) :

    def function_toReturn () :

        print("Some statements above")

        function_toRecive()

        print("Some statements below")

    return function_toReturn


@function_toDecorate
def function_toPass () :
    print("THIS IS THE FUNCTION TO PASS.")

function_toPass() # Calling



print('\n')
print("------------------------------------------------------------------------------------")
print("\t--->-->->     END OF DECORATORS (@)     <-<--<---")
print("------------------------------------------------------------------------------------")
print(),print()





print('\n')
print("------------------------------------------------------------------------------------")
print("\t--->-->->     OOP     <-<--<---")
print("------------------------------------------------------------------------------------")
print(),print()



print ( " * CLASS * " )
print()
print("Syntax:") # ALWAYS PUT IN CAPITAL THE FIRST LETTER OF CLASSES' NAME
print("""

class Class_name :

    statement

""")

print()

print ( " * CONSTRUCTOR * " ) # SELF PARAMETER ALWAYS GOES FIRST
print()
print("Syntax:") # __ are called dunders, but they actually are double underscore
print("""

def __init__ ( self , otherParameters ) :

    statements

""")

print()

print ( " * OBJECT OR PARAMETERS REFERENCING * " )
print()
print("Syntax:") # The parameter representation can be expressed in many other ways
print("""

self.parameter_to_reference = parameter

""")

print()

print ( " * INSTANCIATION * " )
print()
print("Syntax:") # WHOLE NAME OF WHOLE OBJECT GOES IN LOWER CASE
print("""

object = Class_name ( arguments )

""")

print()

print ( " * INHERITANCE * " )
print()
print("Syntax:")
print("""

def Subclass_name ( Superclass_name ) :

    statements

""")

print() # After the dot of super() goes an object (mthd or attbt)

print ( " * PARENT CLASS REFERENCING * " )
print()
print("Syntax:")
print("""

def Sublass_name ( Superclass_name ) :

    super().

""")


print("\n------------------------------------------------------------------------------------\n")


print ( " * PUBLIC ATTRIBUTES * " )
print()
print("Syntax:") # As a normal variable
print("""

attributename = value

""")

print()

print ( " * ACCESSING TO PUBLIC ATTRIBUTES * " )
print()
print("Syntax:") # As a normal variable
print("""

objectName.attributeName

""")

print ( " * PUBLIC METHODS * " )
print()
print("Syntax:") # As a normal method
print("""

def methodName ( self , otherParameters ) :
    
    statements

""")

print()

print ( " * ACCESSING TO PUBLIC METHODS * " )
print()
print("Syntax:") # As a normal method
print("""

objectName.methodName( arguments )

""")


print("\n------------------------------------------------------------------------------------\n")


print ( " * SLIGHTLY PRIVATE OR PROTECTED ATTRIBUTES * " )
print()
print("Syntax:") # sunder
print("""

_attributeName = value

""")

print()

print ( " * ACCESSING TO PROTECTED ATTRIBUTES * " )
print()
print("Syntax:") # As a public attribute
print("""

objectName._attributeName

""")

print()

print ( " * SLIGHTLY PRIVATE OR PROTECTED METHODS * " )
print()
print("Syntax:") # sunder
print("""

def _methodName ( self , otherParameters ) :

    statements

""")

print()

print ( " * ACCESSING TO PROTECTED METHODS * " )
print()
print("Syntax:") # As a public method
print("""

objectName._methodName( arguments )

""")


print("\n------------------------------------------------------------------------------------\n")


print ( " * STRONGLY PRIVATE ATTRIBUTES * " )
print()
print("Syntax:") # dunder
print("""

__attributeName = value

""")

print()

print ( " * ACCESSING TO STRONGLY PRIVATE ATTRIBUTES * " )
print()
print("Syntax:") # Accessing thru the class object
print("""

objectName._ClassName__privateAttributeName

""")

print()

print ( " * STRONGLY PRIVATE METHODS * " )
print()
print("Syntax:") # dunder
print("""

def __methodName ( self , parameters ) :

    statements

""")

print()

print ( " * ACCESING TO STRONGLY PRIVATE METHODS * " )
print()
print("Syntax:") # Accessing thru the class object
print("""

objectName._Class__methodName()

""")


print("\n------------------------------------------------------------------------------------\n")


print("""
MAGIC OR SPECIAL FUNCIONS:
https://docs.python.org/3/reference/datamodel.html#special-method-names"
""")


print("\n------------------------------------------------------------------------------------\n")


print ( " * CLASSMETHOD * " ) # Returns a class object
print("Calling thru an object.")

print()

print("One syntax:")
print("""

def methodName ( cls , parameters ) :

    return cls ( arguments )

""")

print()

print("Another syntax:")
print("""

@classmethod
def methodName ( cls , parawmeters ) :

    statements
    
    return cls ( arguments )

""")

print()
print()

print ( " * STATICMETHOD * " ) # Doesn't need a return
print("Calling thru a class.")

print()

print("Syntax:")
print("""

@staticmethod
def methodName ( parameters ) :

    statements

""")


print("\n------------------------------------------------------------------------------------\n")


print ( " * PROPERTY / GET METHOD * " ) # Returns any value
print("Calling thru an object. Read-only method.")
print()
print("Syntax:")
print("""
@property
def methodName ( self ) :

    statements

    return arguments
""")
print()
print ( " * ACCESSING TO GET METHOD * " )
print()
print("Syntax:")
print("""
objectName.propertyMethodName
""")

print()
print()

print ( " * SET METHOD * " ) # Returns any value
print("Calling thru an object. Modifier method.")
print()
print("Syntax:")
print("""
@methodName.setter
def methodName ( self , methodNameParameter ) :

    statements

    self.arguments = arguments
""")
print()
print ( " * ACCESSING TO SET METHOD * " )
print()
print("Syntax:")
print("""
objectName.setterMethodName = value
""")

print()
print()

print ( " * DELETE METHOD * " ) # Deletes an object's attribute
print("Calling thru an object. Deleter method.")
print()
print("Syntax:")
print("""
@methodName.deleter
def methodName ( self ) :

    statements

    self.arguments = None
""")
print()
print ( " * ACCESSING TO DELETE METHOD * " )
print()
print("Syntax:")
print("""
del objectName.methodNameToDelete
""")


print("\n------------------------------------------------------------------------------------\n")


print("CRUCIAL NOTE: AS SELF AS CLS ARE CONVENCTIONS;")
print("THEY CAN BE CHANGED TO ANYTH ELSE, BUT THIS IS THE WAY THEY ARE COMMONLY KNOWN.")



print('\n')
print("------------------------------------------------------------------------------------")
print("\t--->-->->     END OF OOP     <-<--<---")
print("------------------------------------------------------------------------------------")
print(),print()





print('\n')
print("------------------------------------------------------------------------------------")
print("\t--->-->->     REGULAR EXPRESSIONS     <-<--<---")
print("------------------------------------------------------------------------------------")
print(),print()



import re # Standard library


normal_string = "Hello \a World!"
raw_string = r"Hello \a World!"

print("The content of 'normal_string' is: " , normal_string)
print("The lenght of 'normal_string' is: " , len(normal_string))
print("The content of 'raw_string' is: " , raw_string)
print("The lenght of 'raw_string' is: " , len(raw_string))


print()
print()


print ( " * . MATCH ( PARAMETER_1 , PARAMETER_2 ) * " )
# 1. Raw string which is taken as the pattern to follow.
# 2. Normal string which is taken as any string to evaluate.

print()

check = re.match(raw_string,normal_string) ; print(check)
print(" : Evaluating \"Hello \a World!\" with \"Hello \a World!\".")
print()
check = re.match(raw_string,"Hello \a World! abc") ; print(check)
print(" : Evaluating \"Hello \a World!\" with \"Hello \a World! abc\".")
print()
check = re.match(raw_string,"Hello abc \a World!") ; print(check)
print(" : Evaluating \"Hello \a World!\" with \"Hello abc \a World!\".")
print()
check = re.match(raw_string,"abc Hello \a World!") ; print(check)
print(" : Evaluating \"Hello \a World!\" with \"abc Hello \a World!\".")
print()
check = re.match(raw_string,"abc Hello \a World! abc") ; print(check)
print(" : Evaluating \"Hello \a World!\" with \"abc Hello \a World! abc\".")

# The .match() checks the whole pattern only with the beginning of the string.
# No matter what goes after the part of the string matched.
# Returns a match object.


print()
print()


print ( " * . SEARCH ( PARAMETER_1 , PARAMETER_2 ) * " )
# 1. Raw string which is taken as the pattern to follow.
# 2. Normal string which is taken as any string to evaluate.

print()

check = re.search(raw_string,normal_string) ; print(check)
print(" : Evaluating \"Hello \a World!\" with \"Hello \a World!\".")
print()
check = re.search(raw_string,"Hello \a World! abc") ; print(check)
print(" : Evaluating \"Hello \a World!\" with \"Hello \a World! abc\".")
print()
check = re.search(raw_string,"Hello abc \a World!") ; print(check)
print(" : Evaluating \"Hello \a World!\" with \"Hello abc \a World!\".")
print()
check = re.search(raw_string,"abc Hello \a World!") ; print(check)
print(" : Evaluating \"Hello \a World!\" with \"abc Hello \a World!\".")
print()
check = re.search(raw_string,"abc Hello \a World! abc") ; print(check)
print(" : Evaluating \"Hello \a World!\" with \"abc Hello \a World! abc\".")

# The .search() checks the whole pattern throughout the string.
# No matter what goes before and/or after the part of the string searched.
# Returns a match object.


print()
print()


print ( " * . FINDALL ( PARAMETER_1 , PARAMETER_2 ) * " )
# 1. Raw string which is taken as the pattern to follow.
# 2. Normal string which is taken as any string to evaluate.

print()

check = re.findall(raw_string,normal_string) ; print(check)
print(" : Evaluating \"Hello \a World!\" with \"Hello \a World!\".")
print()
check = re.findall(raw_string,"Hello \a World! abc") ; print(check)
print(" : Evaluating \"Hello \a World!\" with \"Hello \a World! abc\".")
print()
check = re.findall(raw_string,"Hello abc \a World!") ; print(check)
print(" : Evaluating \"Hello \a World!\" with \"Hello abc \a World!\".")
print()
check = re.findall(raw_string,"abc Hello \a World!") ; print(check)
print(" : Evaluating \"Hello \a World!\" with \"abc Hello \a World!\".")
print()
check = re.findall(raw_string,"abc Hello \a World! abc") ; print(check)
print(" : Evaluating \"Hello \a World!\" with \"abc Hello \a World! abc\".")

# The .findall() checks the whole pattern throughout the string. It gives all patterns found.
# No matter what goes before and/or after the part of the string found.
# Returns a list.


print()
print()


print ( " * . FINDITER ( PARAMETER_1 , PARAMETER_2 ) * " )
# 1. Raw string which is taken as the pattern to follow.
# 2. Normal string which is taken as any string to evaluate.

print()

check = re.finditer(raw_string,normal_string) ; print(check)
print(" : Evaluating \"Hello \a World!\" with \"Hello \a World!\".")
print()
check = re.finditer(raw_string,"Hello \a World! abc") ; print(check)
print(" : Evaluating \"Hello \a World!\" with \"Hello \a World! abc\".")
print()
check = re.finditer(raw_string,"Hello abc \a World!") ; print(check)
print(" : Evaluating \"Hello \a World!\" with \"Hello abc \a World!\".")
print()
check = re.finditer(raw_string,"abc Hello \a World!") ; print(check)
print(" : Evaluating \"Hello \a World!\" with \"abc Hello \a World!\".")
print()
check = re.finditer(raw_string,"abc Hello \a World! abc") ; print(check)
print(" : Evaluating \"Hello \a World!\" with \"abc Hello \a World! abc\".")

# The .finditer() checks the whole pattern throughout the string. It returns all patterns found.
# No matter what goes before and/or after the part of the string found.
# Returns an iterator.


print()
print()


print ( " * . GROUP ( PARAMETERS ) * " )
# *. A selected group of strings to return

print()

check = re.match(r"(?P<Hi>\w+) (?P<Hi_What>\w+)","Hello World") ; print(check) # Using Named groups
print("Evaluating '.group()' function: ",check.group("Hi","Hi_What"))

# It gives one or more subgroups of the match.
# Returns a tuple witch contains the group of matches.


print()
print()


print ( " * . START () * " )

print()

check = re.search(raw_string,"abc Hello \a World! abc") ; print(check)
print("Evaluating '.start()' function: ",check.start())

# It gives the indices of the end of the substring matched by group.
# Returns an integer.


print()
print()


print ( " * . END () * " )

print()

check = re.search(raw_string,"abc Hello \a World! abc") ; print(check)
print("Evaluating '.end()' function: ",check.end())

# It gives the indices of the start of the substring matched by group.
# Returns an integer.


print()
print()


print ( " * . SPAN () * " )

print()

check = re.search(raw_string,"abc Hello \a World! abc") ; print(check)
print("Evaluating '.span()' function: ",check.span())

# It gives the indices of the start and end of the substring matched by group.
# Returns a tuple witch contains both values.


print()
print()


print ( " * . SUB ( PARAMETER_1 , PARAMETER_2 , PARAMETER_3 ) * " )
# 1. Raw string which is taken as the pattern to follow.
# 2. Normal string which is taken as any string and new value inside another string.
# 3. Normal string which is taken as the string where it is desire to change any value.

print()

new_raw_string = r"World"
new_string = "User"
new_normal_string = re.sub(new_raw_string,new_string,normal_string)
print("Evaluating 're.sub(raw_string,new_value,main_string)' function: ",new_normal_string)

# It substitutes all values inside P_3 by P_2.
# Returns a string.



print('\n')
print("------------------------------------------------------------------------------------")
print("\t--->-->->     END OF REGULAR EXPRESSIONS     <-<--<---")
print("------------------------------------------------------------------------------------")
print(),print()





print('\n')
print("------------------------------------------------------------------------------------")
print("\t--->-->->     SPECIAL CHARACTERS     <-<--<---")
print("------------------------------------------------------------------------------------")
print(),print()



raw_string = r"Hell.!" # The dot is taken as a metacharacter
# The dot character means any character in a raw string
print("The Raw String is: ",raw_string) ; print(re.match(raw_string,"Hello!"))

print()

raw_string = r"^Hell.!$"
# The caret or circumflex symbol means from what characters a string must to start, and the dollar sign what to end with
print("The Raw String is: ",raw_string) ; print(re.match(raw_string,"Hello!"))

print()

raw_string = r"H[aeiou]ll[aeiou]!" # These usage of square brackets are called character classes
# The square brackets means any of those characters must match with a string
print("The Raw String is: ",raw_string) ; print(re.match(raw_string,"Hello!"))

print()

raw_string = r"[A-Z][aeiou][a-z]l[0-9]!"
# It is possible to give a range of characters between square brackets
print("The Raw String is: ",raw_string) ; print(re.match(raw_string,"Hell0!"))

print()

raw_string = r"[^A][aeiou][a-z]l[0-9]!"
# The dot character or the dollar sign does not work with characters classes
print("The Raw String is: ",raw_string) ; print(re.match(raw_string,"Hell0!"))


print("\n------------------------------------------------------------------------------------\n")


print( "CRUCIAL NOTE: IT IS POSSIBLE TO USE A CARET BEFORE A CHARACTER CLASS." )
print( "THIS JUST HAPPENS WITH THE CARET CHARACTER TO EXCLUDE THE CHARACTER CLASS." )


print("\n------------------------------------------------------------------------------------\n")


raw_string = r"Hello (World)*" # The asterisk is taken as a metacharacter
# This character means zero or more repetitions of the previous thing, the mount of characeters in brackets
print("The Raw String is: ",raw_string) ; print(re.match(raw_string,"Hello World!"))

print()

raw_string = r"Hello (World)+" # The plus is taken as a metacharacter
# This character means one or more repetitions of the previous thing, the mount of characeters in brackets
print("The Raw String is: ",raw_string) ; print(re.match(raw_string,"Hello World!"))

print()

raw_string = r"Hello (World)?" # The question mark is taken as a metacharacter
# This character means zero or one repetitions of the previous thing, the mount of characeters in brackets
print("The Raw String is: ",raw_string) ; print(re.match(raw_string,"Hello World!"))

print()

raw_string = r"Hello World{1,2}" # The curve braces are taken as metacharacters
# This character means α to β repetitions of the previous thing
print("The Raw String is: ",raw_string) ; print(re.match(raw_string,"Hello World!"))

print()

raw_string = r"Hello (World)" # The brackets are taken as metacharacters
# This character means the creation of a group of characters to follow
print("The Raw String is: ",raw_string) ; print(re.match(raw_string,"Hello World!"))


print("\n------------------------------------------------------------------------------------\n")


print( "CRUCIAL NOTE: INSTEAD OF [W][o][r][l][d], IT IS USED (World)." )


print("\n------------------------------------------------------------------------------------\n")


raw_string = r"(Hello) (?:World)" # The question mark and the parenthesis are keeping taken as metacharacters
# This kind of expression means the exception of that amount fo characters
print("The Raw String is: ",raw_string) ; print(re.match(raw_string,"Hello World").groups())

print()

raw_string = r"Hell(|o|0) W(o|0)rld" # The pipe symbol is taken as a metacharacter
# This character means one or another character
print("The Raw String is: ",raw_string) ; print(re.match(raw_string,"Hell World"))



print('\n')
print("------------------------------------------------------------------------------------")
print("\t--->-->->     END OF SPECIAL CHARACTERS     <-<--<---")
print("------------------------------------------------------------------------------------")
print(),print()





print('\n')
print("------------------------------------------------------------------------------------")
print("\t--->-->->     SPECIAL SEQUENCES     <-<--<---")
print("------------------------------------------------------------------------------------")
print(),print()



raw_string = r"(.+) \1" # The number after backslash can be change: from 1 to 99
# It helps to match the same group of characters in the same string
print("The Raw String is: ",raw_string) ; print(re.match(raw_string,"Hello Hello").groups())

print()

raw_string = r"\w+ \d"
# one space before \d
print("The Raw String is: ",raw_string) ; print(re.match(raw_string,"Hell 0"))
# one space before number

print()

print("""
Different kind of special sequences:
    •   \d = matches with any digit
    •   \D = matches with sth that is not a digit
    •   \s = matches with any whitespace
    •   \S = matches with sth that is not a whitespace
    •   \w = matches with any word characters
    •   \W = matches with sth that is not a word characters

    •   \A = matches with the beginning of a string
    •   \Z = matches with the ending of a string
    •   \b = matches matches the empty string between word characters
    •   \B = matches the empty string anywhere else1
""")



print('\n')
print("------------------------------------------------------------------------------------")
print("\t--->-->->     END OF SPECIAL SEQUENCES     <-<--<---")
print("------------------------------------------------------------------------------------")
print(),print()





print('\n')
print("------------------------------------------------------------------------------------")
print("\t--->-->->     FINAL LESSON     <-<--<---")
print("------------------------------------------------------------------------------------")
print(),print()



print("PEP: Python Enhancement Proposals")

print()

import this



print('\n')
print("------------------------------------------------------------------------------------")
print("\t--->-->->     END OF FINAL LESSON     <-<--<---")
print("------------------------------------------------------------------------------------")
print(),print()








print("\n\n ()()()()>-- THIS IS THE END OF PYTHON --<()()()() \n\n\n\n\n\n")






# To rest --->-->->     