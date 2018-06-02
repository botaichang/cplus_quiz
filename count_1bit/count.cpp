#include <iostream>

#include <stdio.h>
#include <sys/time.h>

using namespace std;

//time measure 1
//clock_t start,finish;
//clock_t elapse_time;
//start = clock();
//finish = clock();
//elapse_time = (double)(finish - start)/CLOCKS_PER_SEC;


//time measure 2
//struct timeval start,finish;
//int timeuse;
//gettimeofday(&start ,NULL);
//gettimeofday(&finish,NULL);
//timeuse = 1000000*(finish.tv_sec - start.tv_sec) + finish.tv_usec - start.tv_usec;



int count_1bit(unsigned int x)
{
  int counter=0; 
  while(x)
  {
    if(x & 0x01)
      counter++;
    x = (x>>1);
  }
  return counter;

}

int count_1bit_faster(unsigned int x)
{
  int counter ; 
  counter = ( (x >> 0)  & 0x01 )+ 
            ( (x >> 1)  & 0x01 )+ 
            ( (x >> 2)  & 0x01 )+ 
            ( (x >> 3)  & 0x01 )+ 
            ( (x >> 4)  & 0x01 )+ 
            ( (x >> 5)  & 0x01 )+ 
            ( (x >> 6)  & 0x01 )+ 
            ( (x >> 7)  & 0x01 )+ 
            ( (x >> 8)  & 0x01 )+ 
            ( (x >> 9)  & 0x01 )+ 
            ( (x >> 10) & 0x01 )+ 
            ( (x >> 11) & 0x01 )+ 
            ( (x >> 12) & 0x01 )+ 
            ( (x >> 13) & 0x01 )+ 
            ( (x >> 14) & 0x01 )+ 
            ( (x >> 15) & 0x01 )+ 
            ( (x >> 16) & 0x01 )+ 
            ( (x >> 17) & 0x01 )+ 
            ( (x >> 18) & 0x01 )+ 
            ( (x >> 19) & 0x01 )+ 
            ( (x >> 20) & 0x01 )+ 
            ( (x >> 21) & 0x01 )+ 
            ( (x >> 22) & 0x01 )+ 
            ( (x >> 23) & 0x01 )+ 
            ( (x >> 24) & 0x01 )+ 
            ( (x >> 25) & 0x01 )+ 
            ( (x >> 26) & 0x01 )+ 
            ( (x >> 27) & 0x01 )+ 
            ( (x >> 28) & 0x01 )+ 
            ( (x >> 29) & 0x01 )+ 
            ( (x >> 30) & 0x01 )+ 
            ( (x >> 31) & 0x01 );
  return counter;

}


int main()
{
  int x;
  int counter1;
  int counter2;
  int TIMES = 1000000;

  struct timeval start,finish;
  int timeuse;

  while(1)
  {
    cout<<"input x: "<<endl;
    cin>>x; 
    //----------------------------------------------------------
    //method 1 
    gettimeofday(&start ,NULL);
    for(int i=0;i<TIMES;i++)
    {
       counter1 = count_1bit(x);
    }
    gettimeofday(&finish,NULL);
    timeuse = 1000000*(finish.tv_sec - start.tv_sec) + finish.tv_usec - start.tv_usec;
    cout<<"time 1: "<<timeuse<<" us"<<endl;
    cout<<"method 1 counter bit1: "<<counter1<<endl;
    //----------------------------------------------------------
    //method 2 
    gettimeofday(&start ,NULL);
    for(int i=0;i<TIMES;i++)
    {
       counter2 = count_1bit_faster(x);
    }
    gettimeofday(&finish,NULL);
    timeuse = 1000000*(finish.tv_sec - start.tv_sec) + finish.tv_usec - start.tv_usec;
    cout<<"time 2: "<<timeuse<<" us"<<endl;
    cout<<"method 2 counter bit1: "<<counter2<<endl;
  }
  return 0;
}
