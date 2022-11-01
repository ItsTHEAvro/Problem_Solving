# Exercises

## Inheritance
1. **InEx01**:
Create a class with a method that prints `"This is parent class"` and its subclass with another method that prints `"This is child class"`. Now, create an object for each of the class and call - </br>
    - method of parent class by object of parent class
    - method of child class by object of child class
    - method of parent class by object of child class

2. **InEx02**:
In the above example, declare the method of the parent class as private and then repeat the first two operations (You will get error in the third).

3. **InEx03**:
Create a class named 'Member' having the following members:</br>
	Data members
	- Name
	- Age
	- Phone number
	- Address
	- Salary</br>
It also has a method named '`printSalary`' which prints the salary of the members. Two classes '`Employee`' and '`Manager`' inherits the '`Member`' class. The '`Employee`' and '`Manager`' classes have data members '`specialization`' and '`department`' respectively. Now, assign name, age, phone number, address and salary to an employee and a manager by making an object of both of these classes and print the same.

4. **InEx04**:
Create a class named '`Rectangle`' with two data members '`length`' and '`breadth`' and two methods to print the area and perimeter of the rectangle respectively. Its constructor having parameters for length and breadth is used to initialize length and breadth of the rectangle. Let class '`Square`' inherit the '`Rectangle`' class with its constructor having a parameter for its  side (suppose s) calling the constructor of its parent class as '`super(s,s)`'. Print the area and perimeter of a rectangle and a square.

5. **InEx05**:
Now repeat the above example to print the area of 15 squares.
	> Hint-Use array of objects

6. **InEx06**:
Create a class named '`Shape`' with a method to print "`This is This is shape`". Then create two other classes named '`Rectangle`', '`Circle`' inheriting the `Shape` class, both having a method to print "`This is rectangular shape`" and "`This is circular shape`" respectively. Create a subclass '`Square`' of '`Rectangle`' having a method to print "`Square is a rectangle`". Now call the method of '`Shape`' and '`Rectangle`' class by the object of '`Square`' class.

7.  **InEx07**:
Write an inheritance hierarchy for classes `Quadrilateral`, `Trapezoid`, `Parallelogram`, `Rectangle` and `Square`. Use `Quadrilateral` as the superclass of the hierarchy. Create and use a `Point` class to represent the points in each shape. Make the hierarchy as deep (i.e., as many levels) as possible. Specify the instance variables and methods for each class. The private instance variables of Quadrilateral should be the x-y coordinate pairs for the four endpoints of the Quadrilateral. Write a program that instantiates objects of your classes and outputs each object's area (except Quadrilateral).
