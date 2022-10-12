        
            CLASS(C++)OOPS;




#include<bits/stdc++.h>
using namespace std;
 class em{               //FUNCTION WITH ARGUMENTS//
    int id;
    char ename[20];
    float sa;
    public:
    void get(int id , char ename[20] ,float sa);//function declaration//
    void put();//function declarition//
 };
 void em ::get(int id1 , char name1[20] ,float sa1)//function definition
 {
    id=id1;
    strcpy(ename ,name1);
    sa=sa1;
 }
 void em::put()// function definition
 {
    cout<<id<<endl;
    cout<<ename<<endl;
    cout<<sa<<endl;
 }
 int main()
 {
    em s;
    s.get( 15 , "shiva" ,22000.3);
    s.put();
 }


#include<bits/stdc++.h>
using name space std;
 class text{
       int a,b;
         public:
         void get(int x ,int y)
{
a=x;
b=y;
}
  void put()
{
cout<<a<<b;
}
int big()
{
  if(a>b)
{
 return a;              //FUNCTION WITH ARGUMENTS WITH RETURN/
}
else 
{
 return b;
} 
};
int main()
{
text k;
k.get(10,7);
k.put()
int m=k.big()
cout<<m<<endl;
}

     (((hacker rank));
#include<bits/stdc++.h>
using namespace std;
class stu{
     int id , set;
     string s1;
     string s2;
  public:
   void get()
{
   cin>>id;
   cin>>s1>>s2;
   cin>>set;
}
  void put()

{
  cout<<id<<endl;
  cout<<s2<<" "<<s1<<endl;
cout<<set<<endl;

  cout<<id<<" "<<s2<<" "<<s1<<" "<<set<<endl;
};
   
int main()
{
  stu k;
  k.get();
  k.put();
}





Passing class type parameters and returning class type arguments

#include<bits/stdc++.h>
using namespace std;
class text
{
  int a;
     public:
      void get()
          {
            cin>>a;
         }
       void put()
         {
            cout<<a<<endl;
          }
       int big(text s2)
        {
           if(a<s2.a)
             cout<<"s2 is bigger"<<endl;
           else if(a>s2.a)
            cout<<"S1 is bigger"<<endl;
           else 
           cout<<"both are equal";
          }
};
        int main()
        {
         text s1,s2;
           s1.get();
           s2.get();
           s1.put(); 
            s2.put();
           s1.big(s2);
       }
          
   THIS POINTER;

#include<bits/stdc++.h>
using namespace std;
 class text{
    int a,b;
    public:
    void read()
    {
        a=10;
        b=20;
        cout<<" object adress"<<this<<endl;
    }
    void put()
    {
        cout<<a<<ends<<b;
    }
    
 };
 int main()
 {
    text t;
    t.read();
    t.put();
 }
#include<bits/stdc++.h>
using namespace std;
class text{
    int a ,b;
    public:
    void read(int a , int b)
    {
       (*this).a=a;
        (*this).b=b;
    }
    void put()
    {
        cout<<a<<ends<<b;
    }
};
  int main()
  {
    text t;
    t.read(20 , 45);
    t.put();
  }


ACCESING PRIVATE MEMBEBRS;

#include<bits/stdc++.h>
using namespace std;
class text{
    private:
    int id;
    char name[20];
    float ma;
    void read()
    {
        cout<<" enter id , name and marks";
        cin>>id>>name>>ma;
    }
    public:
    void put()
    {
        read();
        cout<<id<<" "<<name<<" "<<ma;
    }
};
 int main()
 {
    text t;
    t.put();e<bits\stdc++.h>
using namespace std;
class stu{
    int id;
    char name[20];
    float m;
    public:
    void read();
    void put();
};
void stu::read()
{
    cout<<"enter id ,name , marks"<<endl;
    cin>>id>>name>>m;
}
void stu::put()
{
    cout<<id<<name<<m;
}
int main()
{
    stu s[3];
    int i,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        s[i].read();
    }
    for(i=0;i<n;i++)
    {
        s[i].put();
    }

}e<bits\stdc++.h>
using namespace std;
class stu{
    int id;
    char name[20];
    float m;
    public:
    void read();
    void put();
};
void stu::read()
{
    cout<<"enter id ,name , marks"<<endl;
    cin>>id>>name>>m;
}
void stu::put()
{
    cout<<id<<name<<m;
}
int main()
{
    stu s[3];
    int i,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        s[i].read();
    }
    for(i=0;i<n;i++)
    {
        s[i].put();
    }

}
#includstdc++.h>
using namespace std;
class stu{
    int id;
    char name[20];
    float m;
    public:
    void read();
    void put();
};
void stu::read()
{
    cout<<"enter id ,name , marks"<<endl;
    cin>>id>>name>>m;
}
void stu::put()
{
    cout<<id<<name<<m;
}
int main()
{
    stu s[3];
    int i,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        s[i].read();
    }
    for(i=0;i<n;i++)
    {
        s[i].put();
    }

}e<bits\stdc++.h>
using namespace std;
class stu{
    int id;
    char name[20];
    float m;
    public:
    void read();
    void put();
};
void stu::read()
{
    cout<<"enter id ,name , marks"<<endl;
    cin>>id>>name>>m;
}
void stu::put()
{
    cout<<id<<name<<m;
}
int main()
{
    stu s[3];
    int i,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        s[i].read();
    }
    for(i=0;i<n;i++)
    {
        s[i].put();
    }

}e<bits\stdc++.h>
using namespace std;
class stu{
    int id;
    char name[20];
    float m;
    public:
    void read();
    void put();
};
void stu::read()
{
    cout<<"enter id ,name , marks"<<endl;
    cin>>id>>name>>m;
}
void stu::put()
{
    cout<<id<<name<<m;
}
int main()
{
    stu s[3];
    int i,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        s[i].read();
    }
    for(i=0;i<n;i++)
    {
        s[i].put();
    }

}
 }

     ARRAY OF OBJECTS
#include<bits\stdc++.h>
using namespace std;
class stu{
    int id;
    char name[20];
    float m;
    public:
    void read();
    void put();
};
void stu::read()
{
    cout<<"enter id ,name , marks"<<endl;
    cin>>id>>name>>m;
}
void stu::put()
{
    cout<<id<<name<<m;
}
int main()
{

    stu s[3];
    int i,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        s[i].read();
    }
    for(i=0;i<n;i++)
    {
        s[i].put();
    }

}
           CONSTRUCTOR;           

#include<bits/stdc++.h>
using namespace std;
class text{
    int a,b;
    public:
     text()
     {
        a=10;
        b=20;
     }
     void put()
     {
        cout<<a<<b;
     }
};
  int main()
  {
    text t;
    t.put();
  }



  CONSTRUCTOR OVERLOADING;


#include<bits/stdc++.h>
using namespace std;
class area{                                    (1)
   float r;
   public:
    area()
    {
      r=5;   //default constructor
    }
    area(float r)
       {
      (*this).r=r;  //parameters are passes so it is know as parametrised constructor
    }
    void put()
    {
      cout<<3.14*r*r<<endl;
    }

};
int main()
{
   area a1;
   area a2(25);
   a1.put();
   a2.put();
}




#include<bits/stdc++.h>
using namespace std;
class area{
   int l,b;
   public:
     area()
     {
      l=10;                             (2)
      b=15;
     }
     area(int x,int y)
     {
       l=x;
       b=y;
     }
     void put()
     {
      cout<<l*b<<endl;
     }
};
int main()
{
   area j;
   area r2(15,23);
   j.put();
   r2.put();


}



CONSTRUCTOR CALLING CONSTRUCTIOR;

#include<bits/stdc++.h>
using namespace std;
class stu{
      char name[20];
      char course[20];
      float fees;
      public:
      stu(char name[20],char course[20])
      {
         strcpy((*this).name,name);
         strcpy((*this).course,course);
         fees=0;

      }
      stu(char name[20],char course[20],float fees)
      {
         stu :: stu(name,course);
         (*this).fees=fees;
      }
      void put()
      {
          cout<<"name is"<<endl;
          cout<<"course is"<<endl;
          cout<<"fees is"<<endl;
      }
};
int main()
{
   stu s("shiva","c++");
   stu s1("shiva","c",12500.32);
   s.put();
   s1.put();
}


            DESTRUCTOR;

#include<bits/stdc++.h>
using namespace std;
class stu{
      int a,b;
      public:
      stu()
      {
         a=10;
         b=50;
      }
      ~stu()  //destuctor//
      {
         cout<<a<<b;
      }
};
int main()
{
   stu s;
}

       FRIEND class;


include<bits/stdc++.h>
using namespace std;
class sam{
   int a,b;
   friend void print(sam);
};
 void print(sam s)
 {
   s.a=15;
   s.b=12;
   cout<<s.a<<s.b<<endl;
 }
 int main()
 {
   sam s;
   print(s);
 }

                         FRIEND CLASS COMPOSITION;
#include<bits/stdc++.h>
using namespace std;
class author{
   char name[20];
   friend class book;
};
class book{
   char name1[20];
   float price;
   author a;
   public:
   void get()
   {
      cout<<"enter author name";
      cin>>a.name;
      cout<<"enter book name1";
      cin>>name1;
      cout<<"enter book price";
      cin>>price;
   }
   void put()
   {
      cout<<a.name<<name1<<price;
   }
};
int main()
{
   book b;
   b.get();
   b.put();
}



















