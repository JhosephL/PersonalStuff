
<br>
<h1 align="center">
    VIM CONTROL
</h1>
<br>
<br>



# Terminal Commands
<br>

Command             | Description
------------------- | -------------
`vim <FILE NAME>`   | Create a file from terminal.
`:!<COMMAND LINE>`  | Execute terminal commands from Vim.



<br>
<br>
<br>
<br>



# Vim modes
<br>
<br>


## [ n ] Normal mode
<br>

Command         | Description
--------------- | -------------
_Escape key_    | Enter in normal mode.


<br>
<br>


## [ i ] Insert mode
<br>

Command                                 | Description
--------------------------------------- | -------------
_i (upper case) key_                    | Type at the beginning of the current line.
_i (lower case) key_ or _Insert key_    | Type before the selected character.
_a (upper case) key_                    | Type at the end of the current line.
_a (lower case) key_                    | Type after the selected character.
_o (upper case) key_                    | Type above of the current line by adding a new one.
_o (lower case) key_                    | Type below of the current line by adding a new one.


<br>
<br>


## [ v ] Visual mode
<br>

Command                             | Description
----------------------------------- | -------------
_v (lower case) key_                | Select characters one by one.
_v (upper case) key_                | Select lines.
_Control key + v (lower case) key_  | Select block of characters.



<br>
<br>
<br>
<br>



# Vim commands
<br>
<br>


## File control
<br>

Command                     | Description
--------------------------- | -------------
[ n ] ; `:e <FILE NAME>`    | New file.
[ n ] ; `:q`                | Quit.
[ n ] ; `:qa`               | Quit of all Vim open windows.
[ n ] ; `:q!`               | Quit abruptly, without saving changes.
[ n ] ; `:qa!`              | Quit abruptly of all Vim open windows.
[ n ] ; `:w`                | Save work.
[ n ] ; `:wq`               | Save work and quit.


<br>
<br>


## File changes
<br>

Command                                 | Description
--------------------------------------- | -------------
[ n ] ; `u`                             | Undoing last changes.
[ n ] ; `U`                             | Undoing just the last change.
[ n ] ; _Control key + r (both cases)_  | Redoing.


<br>
<br>


## File movement
<br>

Command                                 | Description
--------------------------------------- | -------------
[ n ] ; `h`                             | Move left.
[ n ] ; `k`                             | Move down.
[ n ] ; `j`                             | Move up.
[ n ] ; `l`                             | Move right.
[ n ] ; `w`                             | Move to the next word.
[ n ] ; _Enter key_                     | Move to the next line.
[ n ] ; _Number_ ; _Movement key_       | Move by specifying characters.

Command                                 | Description
--------------------------------------- | -------------
[ n ] ; `0`                             | Go to the first character of line.
[ n ] ; `^`                             | Go to the last character of line.
[ n ] ; `{`                             | Move backward on paragraphs.
[ n ] ; `}`                             | Move forward on paragraphs.
[ n ] ; _Control key + f (both cases)_  | Move forward on page.
[ n ] ; _Control key + b (both cases)_  | Move backward on page.
[ n ] ; `gg`                            | Go to the first line.
[ n ] ; `G`                             | Go to the last line.


<br>
<br>


## Copy
<br>

Command                                     | Description
------------------------------------------- | -------------
[ n ] ; `y`                                 | Copy one character.
[ n ] ; `yy`                                | Copy one line.
[ n ] ; [ v ] ; _Select characters_ ; `y`   | Copy more than one character.
_Select characters_ ; `"<LETTER>y`          | Copy characters to the associated letter.
_Select characters_ ; `"+y`                 | Copy characters to the clipboard.


<br>
<br>


## Cut
<br>

Command                                     | Description
------------------------------------------- | -------------
[ n ] ; `x`                                 | Cut the selected character.
[ n ] ; `X`                                 | Cut the character before the selected one.
[ n ] ; [ v ] ; _Select characters_ ; `x`   | Cut more than one character.
[ n ] ; `dd`                                | Cut one line.
[ n ] ; [ v ] ; _Select characters_ ; `X`   | Cut more than one line.


<br>
<br>


## Paste
<br>

Command                                     | Description
------------------------------------------- | -------------
[ n ] ; `P`                                 | Paste before cursor.
[ n ] ; `p`                                 | Paste after cursor.
[ n ] ; [ v ] ; _Select characters_ ; `p`   | Paste over characters.
_Select characters_ ; `"<LETTER>p`          | Paste characters from the associated letter.
_Select characters_ ; `"+p`                 | Paste characters from the clipboard.


<br>
<br>


## Find
<br>

Command                             | Description
----------------------------------- | -------------
[ n ] ; `:/<PATTERN>` ; _Enter key_ | Find forward the given pattern, highlight occurrences, and reallocate cursor.
[ n ] ; `:?<PATTERN>` ; _Enter key_ | Find backward the given pattern, highlight occurrences, and reallocate cursor.
_While finding pattern_ ; `n`       | Navegate forward through occurrences.
_While finding pattern_ ; `N`       | Navegate backward through occurrences.


<br>
<br>


## Replace
<br>

Command                                         | Description
----------------------------------------------- | -------------
[ n ] ; `r` ; _Type character_                  | Replace character.
[ n ] ; `R` ; _Type characters_ ; _Escape key_  | Replace characters.

Command                                     | Description
------------------------------------------- | -------------
[ n ] ; `:s/<PATTERN>/<REPLACEMENT>`        | Find and replace the first occurrence in the current line.
[ n ] ; `:s/<PATTERN>/<REPLACEMENT>/g`      | Find and replace all the occurrences in the current line.
[ n ] ; `:%s/<PATTERN>/<REPLACEMENT>`       | Find and replace the first occurrence in all the lines.
[ n ] ; `:%s/<PATTERN>/<REPLACEMENT>/g`     | Find and replace all the occurrences in all the lines.
[ n ] ; `:%s/<PATTERN>/<REPLACEMENT>/gc`    | Find and replace all the occurrences in all the lines, with confirmation.


<br>
<br>


## Other commands
<br>

Command                                                                                         | Description
----------------------------------------------------------------------------------------------- | -------------
[ n ] ; [ visual block ] ; _Select characters_ ; `I` or `A` ; _Type characters_ ; _Escape key_  | Multicursor.
[ n ] ; `:split <FILENAME>` or `:vsplit <FILENAME>`                                             | Split files.
[ n ] ; _Control key + w + w_                                                                   | Navegate between splited files.



<br>
<br>
<br>
<br>



# Notes

* There is no "delete" option; by cutting and no pasting is enough. It applies for "multicursor".

