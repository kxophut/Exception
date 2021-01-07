#ifndef EXCEPTION_H
#define EXCEPTION_H

//#include <iostream>
class Exception{
private:
    int code;
public:
    Exception(int code_){
        code = code_;
//        printf("\n\tException code:%d\n\t",code);
        switch (code_) {
            case 1: {
//                printf("Index out of range\n\t");
                break;
            }
            case 2: {
//                printf("Appeal to the empty memory\n\t");
                break;
            }
            case 3: {
//                printf("Incorrect data\n\t");
                break;
            }
            case 4: {
//                printf("Stack overflow\n\t");
                break;
            }
            default:
            {
//                printf("Unknown error\n\t");
                break;
            }
        }
    }
};

#endif
