
# IMPORTS
from termcolor import colored
from colorama import Fore,Back,Style,init
from rich.console import Console



# MAIN FUNCTION DECLARATION
def main ( ) :

    print ("\n\n\n\n")


    string = "Some text."
    function_colored ( string )
    
    function_01()


    print ("\n\n\n\n")


# OTHER FUNCTIONS
def function_colored ( string_text ) :

    ## Basic colors: red, grey back, italic.
    print ( '\033[3;31;47m' + string_text + "\033[0m" )
    ## Console colors: yellow, green back, underline.
    console.print ( string_text , style="underline yellow on green" )
    ## Termcolor colors: blue, white back, bold.
    print ( colored(string_text,"blue","on_white",attrs=["bold","reverse"]) )
    ## Colorama colors: green, yellow back, dim.
    print ( Back.YELLOW + Fore.GREEN + Style.DIM + string_text ) ; print ( Style.RESET_ALL )

def function_01 ( ) :

    print ("# CODE")



# MAIN FUNCTION IMPLEMENTATION
if __name__ == "__main__" :
    init(autoreset=True)  ## colorama
    console = Console()
    main()




# To rest -->       