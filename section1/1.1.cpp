// Writing a simple C++ program



//function 
int main(){
    return 0;
}
/* 
Vocab
return type = int - the type that the fuction will return
function name = main() - the name you chose of the function
built in type = int... - one of the types included in basic c++
function body = {....} - statements that go inside the function
return statement = return 0 - terminates the function and returns the given value

KEY CONCEPT: TYPES
Types are one of the most fundamental concepts in programming and a concept that
we will come back to over and over in this Primer. A type defines both the contents of
a data element and the operations that are possible on those data.
The data our programs manipulate are stored in variables and every variable has a
type. When the type of a variable named v is T, we often say that “v has type T” or,
interchangeably, that “v is a T. 


Running the Compiler from the Command Line
If we are using a command-line interface, we will typically compile a program in
a console window (such as a shell window on a UNIX system or a Command
Prompt window on Windows). Assuming that our main program is in a file
named prog1.cc, we might compile it by using a command such as
$ CC prog1.cc
where CC names the compiler and $ is the system prompt. The compiler generates an executable file. On a Windows system, that executable file is named
prog1.exe. UNIX compilers tend to put their executables in files named a.out.
To run an executable on Windows, we supply the executable file name and can
omit the .exe file extension:
$ prog1
On some systems you must specify the file’s location explicitly, even if the file is in
the current directory or folder. In such cases, we would write
$ .\prog1
The “.” followed by a backslash indicates that the file is in the current directory.
To run an executable on UNIX, we use the full file name, including the file
extension:
$ a.out
If we need to specify the file’s location, we’d use a “.” followed by a forward slash
to indicate that our executable is in the current directory:
$ ./a.out
The value returned from main is accessed in a system-dependent manner. On
both UNIX and Windows systems, after executing the program, you must issue an
appropriate echo command.
On UNIX systems, we obtain the status by writing
$ echo $?
To see the status on a Windows system, we write
$ echo %ERRORLEVEL%

*/