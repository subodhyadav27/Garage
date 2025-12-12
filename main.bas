Rem Revision
Print "This is way to print any message"

Rem to take input
Input "Enter 1st number: "; x
Input "Enter 2nd number: "; y
If x = y Then
    Print "Both are equal "; x
ElseIf x > y Then
    Print x; "is greater than "; y
Else
    Print y; "is greater than"; x
End If



Rem loop
For i = 1 To 10
    Print i
Next i


REM WAP to find area using sub procedure
Declare sub area(l,b)
Cls
Input "Enter length"; l
Input "Enter breadth"; b
Call area(l, b)
End


Sub area (l, b)
    a = l * b
    Print a
End Sub


REM WAP to find area using function procedure

Declare function area(l,b)
cls
input "Enter length";l
input"Enter breadth";b
x = area(l,b)
print x
end

function area(l,b)
Ar =l*b
 area = Ar
end function



REM WAP to find perimeter using sub procedure
Declare sub perimeter(l,b)
cls
input"Enter length";l
Input"Enter breadth";l
call perimeter(l,b)
end

sub perimeter(l,b)
perimeter = 2*(l+b)
print p
end sub









