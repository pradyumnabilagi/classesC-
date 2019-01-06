
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
using namespace std;

#ifndef firstheader_H
#define firstheader_H
struct getco{
  float x1;
  float y1;
  float x2;
  float y2;
  float x3;
  float y3;
  float x4;
  float y4;
};
typedef struct getco getco;


class rectangle{
  private:
      float x1;
      float y1;
      float x2;
      float y2;
      float rot;
      float tx1;
      float tx2;
      float ty1;
      float ty2;
      bool rev;
      char *temp;
  public:
      void setrect()
      {
          bool check,check1;

          check=false;
          while(!check)
          {
              cout << "x1= ";
              cin>>x1;
              cout << "x2= ";
              cin>>x2;
              cout << "y1= ";
              cin>>y1;
              cout << "y2= ";
              cin>>y2;
              if(x1>x2||y1<y2)
              {
                  cout<<"please write the valid coordinats"<<endl;
                  check=false;
              }
              else
              {
                  cout<<"rot= ";
                  cin>>rot;
                  cout<<"enter y if you want to reverse order enter n if you don't want to reverse order\n"<<endl;
                  temp=(char*)malloc(100*sizeof(char));
                  check1=false;
                  while(!check1)
                  {
                      scanf("%s",temp);
                      if(temp[0]=='y'&&temp[1]=='\0')
                      {
                          rev=true;
                          check1=true;
                          free(temp);
                      }
                      else if(temp[0]=='n'&&temp[1]=='\0')
                      {
                          rev=false;
                          check1=true;
                          free(temp);
                      }
                      else
                      {
                          cout<<"please enter valid characters"<<endl;
                          check1=false;
                      }
                  }
                  rot=rot*(-3.14/180);
                  tx1=x1;
                  tx2=x2;
                  ty1=y1;
                  ty2=y2;
                  x1=((tx1+tx2)/2)+((tx1-tx2)*(cos(rot)/2))+((ty1-ty2)*(sin(rot)/2));
                  y1=((ty1+ty2)/2)-((tx1-tx2)*(sin(rot)/2))+((ty1-ty2)*(cos(rot)/2));
                  x2=((tx1+tx2)/2)+((tx2-tx1)*(cos(rot)/2))+((ty2-ty1)*(sin(rot)/2));
                  y2=((ty1+ty2)/2)-((tx2-tx1)*(sin(rot)/2))+((ty2-ty1)*(cos(rot)/2));
                  rot=-1*rot;
                  check=true;
              }
          }
      }

       getco getrectangle(bool print)
       {

           getco COO;
           if(rev==true)
           {
               COO.x1=x1;
               COO.x3=x2;
               COO.y1=y1;
               COO.y3=y2;
               COO.x4=x1+((tx2-tx1)*(cos(rot)));
               COO.y4=y1-((tx2-tx1)*(sin(rot)));
               COO.x2=x2-((tx2-tx1)*(cos(rot)));
               COO.y2=y2+((tx2-tx1)*(sin(rot)));
           }
           else
           {
               COO.x1=x1;
               COO.x3=x2;
               COO.y1=y1;
               COO.y3=y2;
               COO.x2=x1+((tx2-tx1)*(cos(rot)));
               COO.y2=y1-((tx2-tx1)*(sin(rot)));
               COO.x4=x2-((tx2-tx1)*(cos(rot)));
               COO.y4=y2+((tx2-tx1)*(sin(rot)));
           }
           if(print==true)
           {
               cout<<COO.x1<<" "<<COO.y1<<" || "<<COO.x2<<" "<<COO.y2<<"\n"<<COO.x4<<" "<<COO.y4<<" || "<<COO.x3<<" "<<COO.y3 <<endl;
           }
           return COO;
       }
       void scale(float sc)
       {
           float tex1,tex2,tey1,tey2;
           cout << "scaling by "<< sc<<"..." <<endl;
           tex1=x1;tey1=y1;
           tex2=x2;tey2=y2;
           x1=(sc*(tex1-((tex1+tex2)/2)))+((tex1+tex2)/2);
           y1=(sc*(tey1-((tey1+tey2)/2)))+((tey1+tey2)/2);
           x2=(sc*(tex2-((tex1+tex2)/2)))+((tex1+tex2)/2);
           y2=(sc*(tey2-((tey1+tey2)/2)))+((tey1+tey2)/2);
           tex1=tx1;tey1=ty1;
           tex2=tx2;tey2=ty2;
           tx1=(sc*(tex1-((tex1+tex2)/2)))+((tex1+tex2)/2);
           ty1=(sc*(tey1-((tey1+tey2)/2)))+((tey1+tey2)/2);
           tx2=(sc*(tex2-((tex1+tex2)/2)))+((tex1+tex2)/2);
           ty2=(sc*(tey2-((tey1+tey2)/2)))+((tey1+tey2)/2);
       }

       void moverect(float X,float Y)
       {
           x1=x1+X; y1=y1+Y;
           x2=x2+X; y2=y2+Y;
           tx1=tx1+X; ty1=ty1+Y;
           tx2=tx2+X; ty2=ty2+Y;
       }
       void rotaterect(float rotation)
       {
           cout<<"rotating by "<<rotation<<"..."<<endl;
           rotation=rotation*(-3.14/180);
           float tex1,tex2,tey1,tey2;
           tex1=x1;tey1=y1;
           tex2=x2;tey2=y2;
           x1=((tex1+tex2)/2)+((tex1-tex2)*(cos(rotation)/2))+((tey1-tey2)*(sin(rotation)/2));
           y1=((tey1+tey2)/2)-((tex1-tex2)*(sin(rotation)/2))+((tey1-tey2)*(cos(rotation)/2));
           x2=((tex1+tex2)/2)+((tex2-tex1)*(cos(rotation)/2))+((tey2-tey1)*(sin(rotation)/2));
           y2=((tey1+tey2)/2)-((tex2-tex1)*(sin(rotation)/2))+((tey2-tey1)*(cos(rotation)/2));
           rot=rot-rotation;
       }
       float getarea(bool print)
       {
           if(print==true)
           {
              cout<<"calculating area ..."<<endl;
           }
           float area;
           area=(tx2-tx1)*(ty1-ty2);
           if(print==true)
           {
               cout<<"the area is "<<area<<endl;
           }
           return area;
       }

};

bool comparerect(getco r1,getco r2,float r,bool print);
#endif // firstheader_H
