## Exceptions

1. An exception is an occurrence of an undesirable situation that can be 
detected during program execution.<br>
2. Some typical ways of dealing with exceptions are to use an if statement or 
the assert function.<br>
3. The function assert can check whether an expression meets the required 
condition(s). If the conditions are not met, it terminates the program.<br>
4. The `try`/`catch` block is used to handle exceptions within a program.
 5. Statements that may generate an exception are placed in a `try` block. The 
`try` block also contains statements that should not be executed if an excep
tion occurs.<br>
6. The `try` block is followed by one or more `catch` blocks.
 A `catch` block specifies the type of exception it can `catch` and contains an 
exception handler.<br>

7. If the heading of a `catch` block contains . . . (ellipsis) in place of param
eters, then this `catch` block can `catch` exceptions of all types.

8. If no exceptions are thrown in a `try` block, all `catch` blocks associated with 
that `try` block are ignored and program execution resumes after the last 
`catch` block.
9. If an exception is thrown in a `try` block, the remaining statements in the 
`try` block are ignored. The program searches the `catch` blocks, in the 
order they appear after the `try` block, and looks for an appropriate excep
tion handler. If the type of the thrown exception matches the parameter 
type in one of the `catch` blocks, then the code in that `catch` block executes 
and the remaining `catch` blocks after this `catch` block are ignored.

10. The data type of the `catch` block parameter specifies the type of exception 
that the `catch` block can `catch`.

11. A `catch` block can have, at most, one `catch` block parameter.
12. If only the data type is specified in a `catch` block heading, that is, if there is 
no `catch` block parameter, then the thrown value may not be accessible in 
the `catch` block exception-handling code.
13. In order for an exception to occur in a `try` block and be caught by a `catch` 
block, the exception must be thrown in the `try` block.
14. The general syntax to throw an exception is
 ```c++
 throw expression;
 ```
 
in which `expression` is a constant value, variable, or object. The object 
being thrown can be either a specific object or an anonymous object.

15. C++ provides support to handle exceptions via a hierarchy of classes.

16. The class exception is the base class of the exception classes provided 
by C++.
17. The function what returns the string containing the exception object 
thrown byC++’s built-in exception classes.
18. The class exception is contained in the header file exception.
19. The two classes that are immediately derived from the class exception 
are logic_error and runtime_error. Both of these classes are defined in 
the header file stdexcept.
20. The class invalid_argument is designed to deal with illegal arguments 
used in a function call.
21. The class out_of_range deals with the string subscript out_of_range error.
22. If a length greater than the maximum allowed for a string object is used, 
the class length_error deals with this error.
23. If the operator new cannot allocate memory space, this operator throws a 
bad_alloc exception.

24. The class runtime_error is designed to deal with errors that can be 
detected only during program execution. For example, to deal with arith
metic overflow and underflow exceptions, the classes overflow_error 
and underflow_error are derived from the class runtime_error.
25. A `catch` block typically handles the exception or partially processes the 
exception and then either rethrows the same exception or rethrows another 
exception in order for the calling environment to handle the exception.
26. C++ enables programmers to create their own exception classes to handle 
both the exceptions not covered by C++’s exception classes and their own 
exceptions.
27. C++ uses the same mechanism to process the exceptions you define as it 
uses for built-in exceptions. However, you must throw your own exceptions 
using the throw statement.
28. In C++, any class can be considered an exception class. It need not be 
inherited from the class exception. What makes a class an exception is 
how it is used.
 The general syntax to rethrow an exception caught by a `catch` block is
 ```c++
 throw;
 ```
 (in this case, the same exception is rethrown) or
 throw expression;
 in which expression is a constant value, variable, or object. The object 
being thrown can be either a specific object or an anonymous object.
29. A function specifies the exceptions it throws in its heading using the throw 
clause.
30. When an exception is thrown in a function, the function can do the follow
ing: do nothing; partially process the exception and throw the same excep
tion or a new exception; or throw a new exception. In each of these cases, 
the function call stack is unwound so that the exception can be caught in the 
next `try`/`catch` block. The stack unwinding continues until a `try`/`catch` 
handles the exception or the program does not handle the exception.
31. If the program does not handle the exception, then the function terminate 
is called to terminate the program
