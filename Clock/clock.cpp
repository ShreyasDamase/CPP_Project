
//note  code will give the error "No such file or directory #include<windows.h>"" if compile it on online compiler 
#include <iostream>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

using namespace std;

void delay(int seconds)
{
   
    int milli_seconds = 1000 * seconds;  // Converting time into milli_seconds
 
   
    clock_t start_time = clock();   //storing the starting time 
 
   
    while (clock() < start_time + milli_seconds)//loop upto time get 
        ;
}
int main(){
    int hrs, min, sec;
    int alrhrs, alrmin, alrsec;
    cout << "Set the time:" << endl;
     start: 
 
    cout << "Hrs:";
    cin >> hrs;
    cout << "Min:";
    cin >> min;
    cout << "Sec:";
    cin >> sec;

    cout << "Set Alarm";
    cout << "Hrs:";
    cin >> alrhrs;
    cout << "Min:";
    cin >> alrmin;


    if (hrs < 24 && min < 60 && sec < 60)
    {
        restart:
        for (hrs; hrs < 24; hrs++)
        {

            for (min; min < 60; min++)
            {
                for (sec; sec < 60; sec++)
                {
                    system("CLS");
                    cout << hrs << ":" << min << ":" << sec;
                    if (hrs < 12)
                    {
                        cout << "  AM";
                    }
                    else
                    {
                        cout << "  PM";                                    
                    }
                     if(hrs==alrhrs&&min==alrmin){
                        MessageBeep(MB_ICONEXCLAMATION);
                     }

                    delay(1);
                    
                }
                sec = 0;
            }
            min = 0;
        }
        hrs = 0;
        if (hrs==24 && min == 60 && sec==60){
            goto restart;
        }
    }
     else{
           cout << "Enter correct format"<<endl;
           goto start;
         }
    return 0;
}