#include<iostream>
using namespace std;


// 1
// 2 3
// 4 5 6
// 7 8 9 10
void pattern1(int n){
    int row=1;
    int count=1;
    while(row<=n){
        int col=1;
        while(col<=row){
            cout<<count<<" ";
            count++;
            col++;
        }
        cout<<endl;
        row++;
    }cout<<endl;
}

// 1
// 2 3
// 3 4 5
// 4 5 6 7
void pattern2(int n){
    int row=1;
    while(row<=n){
        int col=1;
        int temp=row;
        while(col<=row){
            cout<<temp<<" ";
            temp++;
            col++;
        }
        cout<<endl;
        row++;
    }cout<<endl;
}

// 1
// 2 1
// 3 2 1
// 4 3 2 1
void pattern3(int n){
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=row){
            cout<<row-col+1<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }cout<<endl;
}

// A A A
// B B B
// C C C
void pattern4(int n){
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=n){
            char ch='A'+row-1;
            cout<<ch;
            col++;
        }cout<<endl;
        row++;
    }cout<<endl;
}

//A B C
//A B C
//A B C
void pattern5(int n){
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=n){
            char ch='A'+col-1;
            cout<<ch;
            col++;
        }cout<<endl;
        row++;
    }cout<<endl;
}

//A B C
//D E F
//G H I
void Pattern6(int n){
    int row=1;
    char a='A';
    while(row<=n){
        int col=1;
        while(col<=n){
            cout<<a<<" ";
            a++;
            col++;
        }
        cout<<endl;
        row++;
    }cout<<endl;
}

//A B C
//B C D
//C D E
void pattern7(int n){
    int row=1;
    while(row<=n){
        int col=1;
        char ch='A'+row-1;
        while(col<=n){
            cout<<ch<<" ";
            ch++;
            col++;
        }
        cout<<endl;
        row++;
    }cout<<endl;
}

//A
//A B 
//A B C
void pattern8(int n){
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=row){
            char ch='A'+col-1;
            cout<<ch;
            col++;
        }cout<<endl;
        row++;
    }cout<<endl;
}

//A
//B B
//C C C
void pattern9(int n){
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=row){
            char ch='A'+row-1;
            cout<<ch;
            col++;
        }cout<<endl;
        row++;
    }cout<<endl;
}

//D
//C D
//B C D
void pattern10(int n){
    int row=1;
    while(row<=n){
        int col=1;
        char ch='A'+n-row;
        while(col<=row){
            cout<<ch<<" ";
            ch=ch+1;
            col++;
        }
        cout<<endl;
        row++;
    }
}

//   *
//  **
// ***
//****
void pattern11(int n){
    int row=1;
    while(row<=n){
        int space=n-row;
        //first of all we will print all the space in the pattern
        while(space!=0){
            cout<<" ";
            space--;
        }

        //then we will be printing the spaces in it
        int col=1;
        while(col<=row){
            cout<<"*";
            col++;
        }
        cout<<endl;
        row++;
    }cout<<endl;
}

// ****
// ***
// **
// *
void pattern12(int n){
    int row=1;
    while(row<=n){
        int star=n-row+1;
        while(star!=0){
            cout<<"*";
            star--;
        }cout<<endl;
        row++;
    }
}

// ****
//  ***
//   **
//    *
void pattern13(int n){
    int row=1;
    while(row<=n){
        int star=n-row+1;
        int space=row-1;
        while(space){
            cout<<" ";
            space--;
        }
        while(star){
            cout<<"*";
            star--;
        }
        cout<<endl;
        row++;
    }
}

void Final_pattern(int n){
    int row=1;
    while(row<=n){
        int space=(n-row);

        //space 
        while(space){
            cout<<" ";
            space--;
        }
        int col=1;
        while(col<=row){
            cout<<col;
            col++;
        }

        int col1=row-1;
        while(col1){
            cout<<col1;
            col1--;
        }

        cout<<endl;
        row++;
    }cout<<endl;
}


void pattern14(int n){
    int row=1;
    while(row<=n){
        int col=n-row+1;
        int c=1;
        //for printing1 to 5
        while(c <= col){
            cout<<c;
            c++;
        }
        //for printing star
        int star=(row-1)*2;
        while(star){
            cout<<"*";
            star--;
        }
        //for printing 5 to 1
        while(col){
            cout<<col;
            col--;
        }
        cout<<endl;
        row++;
    }cout<<endl;
}

//1 1  1 1
//  2  2 2
//     3 3
//       4
void pattern15(int n){
    int row=1;
    while(row<=n){
        //space
        int space=row-1;
        while(space){
            cout<<" ";
            space--;
        }
        int col=n-row+1;
        while(col){
            cout<<row;
            col--;
        }
        cout<<endl;
        row++;
    }cout<<endl;
}

//    1
//  2 2
// 3 3 3
//4 4 4 4
void pattern16(int n){
    int row=1;
    while(row<=n){
        int space=n-row+1;
        while(space){
            cout<<" ";
            space--;
        }
        int col=row;
        while(col){
            cout<<row;
            col--;
        }cout<<endl;
        row++;
    }cout<<endl;
}

//1 2 3 4
//  2 3 4
//    3 4
//      4
void pattern17(int n){
    int row=1;
    while(row<=n){
        int space=row-1;
        while(space){
            cout<<" ";
            space--;
        }
        int col=row;
        while(col<=n){
            cout<<col;
            col++;
        }
        cout<<endl;
        row++;
    }cout<<endl;
}

//   1
//  23
// 456
//78910
void pattern18(int n){
    int row=1;
    int count=1;
    while(row<=n){
        int space=n-row+1;
        while(space){
            cout<<" ";
            space--;
        }
        int col=row;
        while(col){
            cout<<count;
            count++;
            col--;
        }
        row++;
        cout<<endl;
    }cout<<endl;
}

//   1
//  121
// 12321
//1234321
void pattern19(int n){
    int row=1;
    while(row<=n){
        int space=n-row;
        while(space){
            cout<<" ";
            space--;
        }

        int col=row;
        int c=1;
        while(c<=col){
            cout<<c;
            c++;
        }
        int col1=row-1;
        while(col1){
            cout<<col1;
            col1--;
        }
        cout<<endl;
        row++;
    }cout<<endl;
}


int main()
{
    int n;
    cout<<"Number of rows - ";
    cin>>n;
    // pattern1(n);
    // pattern2(n);
    // pattern3(n);
    // pattern4(n);
    // pattern5(n);
    // Pattern6(n);
    // pattern7(n);
    // pattern8(n);
    // pattern9(n);
    // pattern10(n);
    // pattern11(n);
    // pattern12(n);
    // pattern13(n);
    // Final_pattern(n);
    // pattern14(n);
    // pattern15(n);
    pattern16(n);
    pattern17(n);
    pattern18(n);
    pattern19(n);
    return 0;
}