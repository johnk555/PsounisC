#include <iostream>
using namespace std;

class ARRAY {
  public:
    ARRAY(int in_n);
    ARRAY(const ARRAY &ob);
    ~ARRAY();
    int get_n() const; 
    int &operator[] (int i);
    ARRAY &operator=(ARRAY &right);
    ARRAY &operator+=(int i);
    void print();
  private:
    int *p;
    int n;
};


int main()
{
    int n=10;
    ARRAY pin(n);
    
    ARRAY pin2(2);
    
    for (int i=0; i<n; i++)
        pin[i]=i*i;
    
    pin.print();
    cout<<endl;
    pin2=pin;
    
    pin2+=5;
    pin2.print();

    return 0;
}

ARRAY::ARRAY(int in_n)
{
    n = in_n; 
    
    p = new int [n];
    if (!p)
        cout<<"Error allocating memory!";
}

ARRAY::ARRAY(const ARRAY &ob)
{
    n = ob.get_n(); 
    
    p = new int [n];
    if (!p) cout<<"Memory Allocation Error!";
}

ARRAY::~ARRAY()
{
    delete [] p;
}

int ARRAY::get_n() const
{
    return n;
}

void ARRAY::print()
{
    int i;
    
    for (i=0; i<n; i++)
        cout<<p[i]<<" ";
}

int &ARRAY::operator[] (int i)
{
    if (i>=0 && i<n) 
        return p[i]; 
    else
        cout<<"Index out of bounds";
}
ARRAY &ARRAY::operator=(ARRAY &right){
    if (this==&right) return *this; 
    
    delete p;
    
    n=right.n;
    
    p = new int [n];
    if (!p) cout<<"Memory Allocation Error!";
    
    for(int i=0; i<n; i++)
        p[i]=right[i];
        
    return *this;
    
}
ARRAY &ARRAY::operator+=(int i){
    int oldn = n;
    n = n + i;
    
    for(int i=oldn; i<n; i++)
        p[i]=0;

}
