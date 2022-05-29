# Class-Point-

Problem	[30 Marks]
1.	Define a class name Point based on the following class diagram.

Point
-	x: int
-	y:int
+ Point(int,int)
+ Point(const Point &)
+ display():void
+ display(string):void
+ operator+(Point):Point
The description for each function member is given below.


Point (int,int)	Constructor to set the data members.
Point(const Point &)	Copy constructor.
display():void	Method that displays the coordinates.
Example:
x = 3	y = 6
display(string):void	Method that displays the coordinates with title.
Example A
Point 1 : x = 3 y = 6
Example B
Coordinates : x = 5 y =10

Note:  “Point 1 ”	and “Coordinates” are the titles of the points.
operator+(Point):Point	Overloaded + operator which is meant for point addition.
Example :
Point1: x = 1, y = 2. Point2: x = 2, y = 3.
Point1 + Point2 : x = 3, y = 5.
 
2.	Define a friend function to class Point name slope which calculates the slope between two points. The formula of calculating the slope is as follow.

slope =𝑦2−𝑦1
𝑥2−𝑥1


3.	Write an appropriate main function that do the following
a.	Create two Point objects with the following coordinates: x=1,y=2 and x=3, and y=4.
b.	Create a third Point object and assign the object with the addition of two objects in (a).
c.	Display the coordinates of the first and second points in (a) without title.
d.	Display the coordinates of the third point in (b) with the title “Third point”.
e.	Print the slope between the two points in (a).



Figure 1: Sample output
 
Table 1: Assessment Criteria

Item	Criteria	Marks
A	i) The program is able to run.	2
	ii) Using an appropriate structure for the program (e.g. the code is properly indented, all
the required header files are included, the main function is properly written, etc.).	1
B	The definition of class Point

i.	Data members

ii.	Point(int,int)

iii.	Point(const Point &)

iv.	display():void

v.	display(string):void

vi.	operator+(Point):Point	

C	The declaration and definition of friend function slope.	3
D	Function main
i.	Object 1 and object 2 creation

ii.	Object 3 creation

iii.	Coordinates display of the two objects without title

iv.	Third coordinates display with title

v.	Print the slope between two points	

Total	30

