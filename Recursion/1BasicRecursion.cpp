#include <iostream>
using namespace std;

void fun1()
{
    cout << "Function 1" << endl;
}

void fun2()
{
    cout << "before Function 1" << endl;
    fun1();
    cout << "After Function 1" << endl;
}

void gfg(int n){
    if(n==0)
    return ;
    cout<<"GFG "<<endl;
    gfg(n-1);
}
int main()
{
    cout << "Recusrsion" << endl;
    cout << "before Function 2" << endl;
    fun2();
    cout << "After Function 2" << endl;

    gfg(3);
    
}

// Application of the recursion
// 1) many algorithm techniquws are based on the recursion 
//     a. dynamic programming
//     b. backtracking 
//     c. divide and concquer (Binary search, quick sort and merge sort)

// 2) Many problems are inherently recursive 
//     a. Tower of Hanoi 
//     b. DFS based traversal (DFS of the graph and Inorder/preorder and postorder traversal of tree)