# CS121P6

i/o streams in c++ & Inheritance
Built By Adithya Ganesan

## Parser.cpp
```
include file stream
include input/output stream
include string stream

int main
    create input file inFile
    create stringstream ss
    
    int num1
    int num2
    string text
    int total

    string line
    
    open data.csv with inFile
    
    
    while(get current line -> ss)
        clear ss
        
        
        
        first value from ss -> num1 
        second value from ss -> num2
        third value from ss -> text
        
        total = num1 + num2
        for int i = 0; i < total
            print text + " "
    
    close inFile

    return 0
```
## coolerParser.cpp
The same as parser.cpp, but uses the length of the text string to determine how many times to print it

```
include file stream
include input/output stream
include string stream

int main
    create input file inFile
    create stringstream ss
    
    int num1
    int num2
    string text
    int total

    string line
    
    open data.csv with inFile
    
    
    while(get current line -> ss)
        clear ss
        
        
        
        first value from ss -> num1 
        second value from ss -> num2
        third value from ss -> text
        
        total = (5*num1 + num2)/length of text
        for int i = 0; i < total
            print text + " "
    
    close inFile

    return 0
```