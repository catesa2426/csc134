"""
This is the Template Repl for Python with Turtle.

Python with Turtle lets you make graphics easily in Python.

Check out the official docs here: https://docs.python.org/3/library/turtle.html

CSC 134
M1Quiz
Cates
8/30/23
"""
""""
# Draw a shape with turtle graphics
import turtle

t = turtle.Turtle()

t.color('darkblue')
t.pensize(3)
t.penup()
t.goto(-150,0)
t.pendown()

t.color ('darkred')
t.circle(75,180)
t.color('darkblue')
t.circle(75,180)

#lets move the turtle
t.penup()
t.left(90)
t.forward(180)
t.left(90)
t.forward(300)
t.pendown()

#Draw an 'A'
#Draw top of 'A'

for count in range(4):
    t.forward(75)
    t.left(90)

#triangle without loops
size = 75
t.forward(size)
t.left(120)
t.forward(size)

#Draw the legs of 'A'
#Left leg
t.right(90)
t.forward(75)
t.back(75)
t.left(90)
t.forward(75)
#right leg
t.right(90)
t.forward(75)
# Bottom
t.right(90)
"""
import turtle

t = turtle.Turtle()

t.color('red')
t.pensize(3)

#Draw two humps
t.left(90)
t.circle(100,180)
t.left(180)
t.circle(100,180)

#Creating length on left hump
t.forward(30)

#Draw the lines
t.left(30)
t.forward(400)
t.left(120)
t.forward(400)

#creating length on right hump
t.left(30)
t.forward(30)

#moving turtle
t.penup()
t.goto(100,50)
t.pendown()

#drawing the arrow stick
t.left(120)
t.forward(115)

t.penup()
t.goto(-150,-80)
t.pendown()
t.forward(100)

t.penup()
t.goto(-315, -180)
t.pendown()
t.forward(85)

#Draw arrowhead
t.right(90)
t.forward(25)
t.left(130)
t.forward(30)
t.left(90)
t.forward(30)
t.left(130)
t.forward(25)

#draw end 'v'
t.penup()
t.goto(100,50)
t.pendown()
t.right(50)
t.forward(25)
t.backward(25)
t.right(50)
t.forward(25)
t.backward(25)
t.left(25)

# Second 'V'
t.backward(15)
t.left(25)
t.forward(25)
t.backward(25)
t.right(50)
t.forward(25)
t.backward(25)
t.left(25)

#third 'V'
t.backward(15)
t.left(25)
t.forward(25)
t.backward(25)
t.right(50)
t.forward(25)
t.backward(25)
t.left(25)