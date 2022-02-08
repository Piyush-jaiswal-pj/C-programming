//object basic run time entities
//obj =data + process ** obj interact with another object or data

//classes = set of properties  to its object 
// classes uses the abstractiion

//encapslation : wrapping up the data and function in a single unit(class)
//member function  : the data which not accessible by outside world and only those function which 
// are wrapped in the class called member function can access it.its provide interface btw data and program.

//inheritance :- the process which oject of one class get accquire the properties of the object 
// of other class. //provides idea of reusability

// Polymorphism : poly = many and morphe = shape. means ability to take more than one form.


//abstraction = hiding important details and providing only essential details.

//void= empty
//word class = abstract
//data members = variable declare inside the class.

//dynamic variable initialization : at run time .

//acessing the data member and data functions by using dot (.) operator
//three type of access method in c++
//public:can access through main function or any obj
//private :can acess through member function
//protected : similar to pivate acess method but here we can access through the member class.

//variables : used to store the element in memory
/*
local variable = inside the function (define)
gobal variable = outside main function and class
referencing variable = take the address or reference of other variable
*/

//operator
/*
scope resolution :accessing same variable in one block to other block ( :: )fist declaration is periorty for this operator
member deferencing operator =  used to access class member and member function
*** 

::* = dec pointer to member of a class
* = acces member using object and pointer to that member
->* = access member using pointer to the object and that member

***

memory management operator := free store operator (new() & delete())
manipulators =used to format the data display (endl & setw)
setw uses #include<iomanip.h> lib = common field width  for all number and forces them to be printed right justified

typecat operator =to type cast the data type
*/

/*FUnction =used to call and reduce the size of  the program

syntax
return type fun_name(arg);

to call function
function();

1. call by value 

function(x,u);//call by value of x and y
int funtion (int a, int b){

}

2. call by reference
//work like a copy of the variable 
function(&a,&b);
int function(int *a,int *b)
{

}

Inline function+ function that is expanded in line when it invoked
Syntax
inline data_type name()
{

}
*/

/*
Function overloading
it means we can use the same fuction name to create a function which performs different task (function polymorphism)

ex
function(inta);
function(int a,int b); use different parameter so that compipler easily find the function
operator overloasding : compile time polymorphmism providing special meaning
syntax
return type class name ::operator op(ags list)
*/

/* Recursion :calling itself indirectly or directly;
recursive condition =formula or meaningfull input
and base condition = termination of the calling