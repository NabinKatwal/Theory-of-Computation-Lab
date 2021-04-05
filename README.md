# Theory-of-Computation-Lab
Lab code for theory of computation


In this lab sheet, you will learn to simulate DFA and apply it to various applications. Students can
implement the programs in any programming language. However, keeping in mind that this course is a
per-requisite for compiler design, C/C++ are more preferable.

1.DFA and its Applications
1. Write a program to simulate the DFA given in the figure. Simulate your DFA for different input strings
and report the output.
2. An online portal requires its user to create passwords with following restrictions
(a) The password must be at least eight characters long
(b) The password must begin with a letter (a to z, A to z).
(c) The password must contain at least one special character and one number.
Write a program that checks whether a password complies with the above two rules.

2
Project ‘Calculator Language’: Lexical Analysis
Lexical analysis is the phase of a compiler/interpreter that reads the source-code character-by-character and
identifies the tokens in the code. For example, in a C program, the tokens can be the names of identifiers
/variables, keywords (‘for’, ‘if’,etc.), special symbols (+, -, etc.), and so on. The first two lab assignments
will ask to build a basic language which we call as the ‘Calculator Language’. Our Calculator Language
allows to write simple programs as given below.
Listing 1: A program in the Calculator Language
x=5
y=10
z=20
v=sqrt ( z )/( x+y )
print ( v )
In this assignment, you will write a program that identifies the tokens in the source code of the Calculator
Language. There can be following types of tokens in the Calculator Language.
1. Identifier: An identifier (i.e. a variable) can be of a single letter [a-z]
2. Numeral: Numerals are numbers.
3. Operator: operators can be binary (+, -, *, /, sqrt) or unary (-).
4. Functions trigonometric functions (sin, cos, tan) and the print function.
5. Parenthesis: Small brackets, i.e. (, ).
Your program should read the source code written in Calculator Language from a data file (or console)
and identify the tokens. For instance, when the source code of above example is input, your program should
display the following output.
Listing 2: Desired output of your program
v a r i a b l e s :
x y z
numerals :
5 10 20
f u n c t i o n s :
sqrt
print
operators : +
pa re nt he si s :
(
)
Some hints: The main idea is to create a different DFA for each type of the tokens and combine them
into a single DFA. In addition, you may require to read one character ahead than the current input char-
acter - such a technique is called ‘lookahead’ in compiler theory. Before attempting to write the program,
it would be easier if you first read the chapter on lexical analysis from any standard book on compiler design.
