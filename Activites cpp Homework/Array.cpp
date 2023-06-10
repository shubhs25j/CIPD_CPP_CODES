// Write a class Array which will store integer elements in dynamically allocated 
// space.class Array{int size;int *arr;}Provide below functions in Array class -
// 1. Default constructor -Take 5 as default size. Initialize the array elements to 0
// 2. Parameterized constructor -Takes size as parameter. Initialize the array elements to 0.
// 3. Copy constructor -Performs deep copy of Array object.
// 4. Destructor -Deletes memory which is allocated dynamically.

#include<iostream>
#include<cstring>

class Arr
{
    int size;
    int *arr;
    public:
    Arr()
    {
        std::cout<<"Enter size of Array\n";
        std::cin>>size;
        arr=new int[size];
        for(int i=0;i<size;i++)
        {
            arr[i]=0;
        }
    }
    Arr(int siz)
    {
        size=siz;
        arr = new int[size];
        for(int i=0;i<size;i++)
        {
            arr[i]=0;
        }
    }
    Arr(Arr& a1)
    {
        size=a1.size;
        arr=new int[size];
        for(int i=0;i<size;i++)
        {
            arr[i]=a1.arr[i];
        }
    }
    ~Arr()
    {
        delete [] arr;
    }
    void getdata()
    {
        for(int i=0;i<size;i++)
        {
            std::cout<<"Enter value of position "<<i<<" : ";
            std::cin>>arr[i];
        }
    }
    void display()
    {
        for(int i=0;i<size;i++)
        {
            std::cout<<arr[i]<<"  ";
        }
    }

};
int main()
{
    Arr a2(5);
    a2.getdata();
     Arr a3(a2);
    a3.display();

}