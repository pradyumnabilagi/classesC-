#include"firstheader.h"

bool comparerect(getco r1,getco r2,float r,bool print)
{
    bool x;

    if((-1*r)<r1.x1-r2.x1&&r1.x1-r2.x1<r&&(-1*r)<r1.y1-r2.y1&&r1.y1-r2.y1<r&& (-1*r)<r1.x2-r2.x2&&r1.x2-r2.x2<r&&(-1*r)<r1.y2-r2.y2&&r1.y2-r2.y2<r&& (-1*r)<r1.x3-r2.x3&&r1.x3-r2.x3<r&&(-1*r)<r1.y3-r2.y3&&r1.y3-r2.y3<r &&(-1*r)<r1.x4-r2.x4&&r1.x4-r2.x4<r&&(-1*r)<r1.y4-r2.y4&&r1.y4-r2.y4<r)
    {
        x=true;
    }
    else if((-1*r)<r1.x1-r2.x2&&r1.x1-r2.x2<r&&(-1*r)<r1.y1-r2.y2&&r1.y1-r2.y2<r&& (-1*r)<r1.x2-r2.x3&&r1.x2-r2.x3<r&&(-1*r)<r1.y2-r2.y3&&r1.y2-r2.y3<r&&(-1*r)<r1.x3-r2.x4&&r1.x3-r2.x4<r&&(-1*r)<r1.y3-r2.y4&&r1.y3-r2.y4<r &&(-1*r)<r1.x4-r2.x1&&r1.x4-r2.x1<r&&(-1*r)<r1.y4-r2.y1&&r1.y4-r2.y1<r)
    {
        x=true;
    }
    else if((-1*r)<r1.x1-r2.x3&&r1.x1-r2.x3<r&&(-1*r)<r1.y1-r2.y3&&r1.y1-r2.y3<r&& (-1*r)<r1.x2-r2.x4&&r1.x2-r2.x4<r&&(-1*r)<r1.y2-r2.y4&&r1.y2-r2.y4<r&& (-1*r)<r1.x3-r2.x1&&r1.x3-r2.x1<r&&(-1*r)<r1.y3-r2.y1&&r1.y3-r2.y1<r &&(-1*r)<r1.x4-r2.x2&&r1.x4-r2.x2<r&&(-1*r)<r1.y4-r2.y2&&r1.y4-r2.y2<r)
    {
        x=true;
    }
    else if((-1*r)<r1.x1-r2.x4&&r1.x1-r2.x4<r&&(-1*r)<r1.y1-r2.y4&&r1.y1-r2.y4<r&& (-1*r)<r1.x2-r2.x1&&r1.x2-r2.x1<r&&(-1*r)<r1.y2-r2.y1&&r1.y2-r2.y1<r&& (-1*r)<r1.x3-r2.x2&&r1.x3-r2.x2<r&&(-1*r)<r1.y3-r2.y2&&r1.y3-r2.y2<r &&(-1*r)<r1.x4-r2.x3&&r1.x4-r2.x3<r&&(-1*r)<r1.y4-r2.y3&&r1.y4-r2.y3<r)
    {
        x=true;
    }
    else
    {
        x=false;
    }
   if(print==true)
   {
       if(x==true)
       {
           cout<<"the rectangles are almost same in the provided range"<<endl;
       }
       else
       {
           cout<<"the rectangles are different"<<endl;
       }
   }
    return x;

}
