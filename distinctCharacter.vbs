'Problem: Find the occurence of every distinct character in the given input String.
'For Eg:	
'Input String:
'	aabbccdd
'Output:	
'	Occurence of character 'a' in inputString is - 2
'	Occurence of character 'b' in inputString is - 2
'	Occurence of character 'c' in inputString is - 2
'	Occurence of character 'd' in inputString is - 2
' -----------------------------------------------
' Author   : Ravi Mahdan
' Email	   : inforavimahdan@gmail.com
' LinkedIn : https://www.linkedin.com/ravimahdan
' -----------------------------------------------

'Solution:
'Declare the required variables.
Dim inputString, strLen, pos, Iterator, tempChar, uniqueArr, count

'Get the input string from the user and calculate it's length.
inputString = InputBox("Enter any string: ")
strLen = len(inputString)

'Get distinct character Array from input string and store them in the "uniqueArr" array.
uniqueArr =  Mid(inputString, 1, 1)
For Iterator = 1 To strlen
    tempChar = Mid(inputString, Iterator, 1)
    If Instr(uniqueArr, tempChar) < 1 Then
        uniqueArr = uniqueArr&tempChar
    End If        
Next

tempChar = ""
pos = 1
uniqueArrLen = Len(uniqueArr)

'Print the input string.
Print "Input String - "&inputString
'Print the input string.
MsgBox "Input String - "&inputString

'Get the occurence of every character of the input string.
While(pos <= uniqueArrLen)
	'Get the first character from "uniqueArr" array.
    tempChar = Mid(uniqueArr, pos, 1)
    'Compare "tempChar" with every character in the input string.
    For Iterator = 1 To strLen
    	'Increase the count in if "tempChar" found in the input string.
        If Instr(Mid(inputString, Iterator, 1), tempChar) Then
            count = count + 1
        End If        
    Next
    'Print the Occurence of characters.
    MsgBox "Occurence of character '"tempChar&"' in inputString is - "&count
    'Print the Occurence of characters.
    Print "Occurence of character '"tempChar&"' in inputString is - "&count
    'Reset the count varaible - "count".
    count = 0
    'Increase the loop counter - "pos"
    pos = pos +1
Wend
