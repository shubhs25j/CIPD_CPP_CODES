#include<iostream>
class matrix
{
    int **mat;
    int m,n;
    public:
    matrix ()
    {
    }
    matrix(int r,int c)
    {
        m=r;
        n=c;
        mat= new int*[m];//creating an array of pointer dynamicaly
        for(int i=0;i<m;i++)
        {
            mat[i]=new int [n];//creating space for each row;
        }
    }
    matrix operator+(const matrix &obj)
    {
        matrix m1(m,n);
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                m1.mat[i][j]=this->mat[i][j]+obj.mat[i][j];
                
            }
        }
        return m1;
    }
    
    void getdata()
    {
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                std::cout<<"Enter the vlaue for position["<<i<<"]["<<j<<"]"<<" :";
                std::cin>>mat[i][j];
            }
        }
    }
   void display()
   {
    for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                std::cout<<mat[i][j]<<" ";
               
            }
            std::cout<<"\n";
        }

   }
//    ~matrix()
//     {
//         for(int i=0;i<m;i++)
//         {
//             delete[] mat[i];
//             std::cout<<"Distructor called";
//         }
//         delete [] mat;

//     }
};
int main()
{
    int m,n;
    std::cout<<"Enter the value of m and n\n";
    std::cin>>m>>n;
    matrix m1(m,n),m2(m,n),m3(m,n);
    m1.getdata();
    std::cout<<"Matrix m1 \n\n";
    m1.display();
    
    m2.getdata();
     std::cout<<"Matrix m2 \n\n";
    m2.display();
    
    m3=m1+m2;
    std::cout<<"Matrix m3 (sum of m1+m2)\n\n";
    m3.display();
    
        
    return 0;
}