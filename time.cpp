#include<iostream>

using namespace std;

int  main()
{int hours , seconds ,minutes;

cout<<"\n enter time in seconds: ";
cin>>seconds;
minutes=seconds/60;
hours=minutes/60;
cout<<"seconds is equivalent to "<<int(hours)<<"hours "<<int(minutes%60)<<"minutes"<<int(seconds%60)<<"seconds";

}
