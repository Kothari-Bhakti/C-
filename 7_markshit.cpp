#include <iostream>

int main()
{
    char name[10];
    int rollnumber;
    float c,html,en,iks,cf,maths;
    int failcount =0;//count of failed subjects
     
    // input
    std::cout<<"ENTER NAME:";
    std::cin>>name;

    std::cout<<"ENTER ROLL NUMBER:";
    std::cin>>rollnumber;

    std::cout<<"ENTER MARKS  OUT OF 100\n";

    std::cout<<"enter marks for c:";
    std::cin>>c;

    std::cout<<"enter marks for html:";
    std::cin>>html;

    std::cout<<"enter marks for en:";
    std::cin>>en;

    std::cout<<"enter marks for iks:";
    std::cin>>iks;

    std::cout<<"enter marks for cf:";
    std::cin>>cf;

    std::cout<<"enter marks for maths:";
    std::cin>>maths; 
    
    //count failed subjects
    if(c<40)failcount++;
    if(html<40)failcount++;
    if(en<40)failcount++;
    if(iks<40)failcount++;
    if(cf<40)failcount++;
    if(maths<40)failcount++;

    
    //calculate total and average
    
    int total=c+html+en+iks+cf+maths;
  
     int per =total/6;
    
    //output
    std::cout<<"\n---marksheet---";
    std::cout<<"\nstudent name:"<<name;
    std::cout<<"\nroll number:"<<rollnumber;
    std::cout<<"\ntotal is:"<<total;
    // std::cout<<"\ntotal mark:"<<total/600;
    std::cout<<"\npercentage:"<<per;
    //std::cout<<"\n";

    if(failcount>0)
    {
        std::cout<<" \nresult:FAIL\n";
        std::cout<<"failed subject:";
        if(c<40)std::cout<<"c\n";
        if(html<40)std::cout<<"html\n";
        if(en<40)std::cout<<"en\n";
        if(iks<40)std::cout<<"iks\n";
        if(cf<40)std::cout<<"cf\n";
        if(maths<40)std::cout<<"maths\n";

        std::cout<<"grade:NO grade (failed)\n";
    }
    else
    {
         std::cout<<"result:PASS\n";
         std::cout<<"grade:";
         if(per>=90)
         std::cout<<"A\n";
         else if(per>=75)
         std::cout<<"B\n";
         else if(per>=60)
         std::cout<<"C\n";
         else
         std::cout<<"D";

        return 0;
    }

}