#include <iostream>  
using namespace std;  
 class Animal    
{    
    public:   
    virtual void talk()=0;    
};    
 class Dog : Animal    
{    
    public:  
     void talk()    
    {    
        cout <<" Dog Talks...wuf wuf wuf" <<endl;    
    }    
};    
class Cat : Animal    
{    
    public:  
     void talk()    
    {    
        cout <<" Cat Talks...Meaoun ...Meaoun..Meaoun" <<endl;    
    }    
};    
class Horse : Animal    
{    
    public:  
     void talk()    
    {    
        cout <<" Horse Talks...hoooon..hooon...hooon" <<endl;    
    }    
};    
int main( ) {  
    Dog sound;  
    Cat voice;
    Horse say;
    sound.talk();    
    voice.talk(); 
    say.talk();  
   return 0;  
}  