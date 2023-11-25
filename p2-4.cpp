#include<iostream>
#include<conio.h>
using namespace std;

class matrix
{
    int **m;
    public:
    int r,c;
    matrix(){}

    matrix(int row,int column)
    {
        r=row;
        c=column;
        m=new int*[r];
        for(int i = 0; i < r; ++i)
            m[i] = new int[c];

    }

    void setMatrix()
    {
        int data;
        static int k=1;
        for(int i=0;i<r;i++)
        { 
                
            for(int j=0;j<c;j++)
            {  
                cout<<"Enter Element:"<<k++<<"\n";
                cin>>data;
                m[i][j]=data;
            }
        }
    }

    friend ostream& operator <<(matrix &obj,ostream &op)
    {
        int data;
        //int r = obj.getrow();
        //int c = obj.getcol();
        for(int i=0;i<obj.r;i++)
        {
            for(int j=0;j<obj.c;j++)
            {
                op<<obj.m[i][j]<<"\t";
            }
            op<<"\n";
        }

        return op;
    }  

};



int main()
{
    matrix m(3,3);
    m.setMatrix();
    m<<cout;
    //m.dispMatrix();
    getch();
}