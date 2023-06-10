#include<iostream>
   
class Matrix
{
     int a;
    int b;
    int arr[3][3]; 
    public:
    Matrix()
    {
        
    }
    void setmatrix();
    void getmatrix();
};
void Matrix :: setmatrix()
{
    for (int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            std::cout<<"arr["<<i<<"]["<<j<<"] : ";
            std::cin>>arr[i][j];
        }
    }
}
void Matrix::getmatrix()
{
     for (int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            std::cout<<arr[i][j]<<" ";
        }
        std::cout<<"\n";
    }
}
int main()
{
    // int a,b;
    // std::cin>>a;
    // std::cin>>b;
    // int arr[a][b];

    Matrix m1;
    m1.setmatrix();
    m1.getmatrix();
    return 0;
}