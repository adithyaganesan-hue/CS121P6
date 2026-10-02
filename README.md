# CS121P6

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
    
    bool lineLeft = true
    while(lineLeft)
        clear ss
        
        get current line -> ss
        
        first value from ss -> num1
        second value from ss -> num2
        third value from ss -> text
        
        total = num1 + num2
        for int i = 0; i < total
            print text + " "

        if inFile.eof()
            lineLeft = false
    
    close inFile

    return 0