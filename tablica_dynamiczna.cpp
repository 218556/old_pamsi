#include<iostream>
#include<chrono>
using namespace std;
using namespace std::chrono;

class TabDyn
{
  int n=10;
  int *tablica = new int[n];
public:
  int Dodaj(int a);
};

int TabDyn::Dodaj(int a)
{
  int i=0, j=0;
    while(tablica[i]!=NULL)
      {
        i++;
      }
    if(i>=n)
      {
        int *tablica2 = new int [n+1];
        for(j=0; j<n; j++)
          {
            tablica2[j]=tablica[j];
          }
        tablica2[j]=a;
      }
    else
      {
        int *tablica2 = new int [n];
        for(j=0; j<i; j++)
          {
            tablica2[j]=tablica[j];
          }
        tablica2[j+1]=a;
      }
    return *tablica2;
}


int main()
{
  auto epoch = high_resolution_clock::from_time_t(0);

  TabDyn new_tab;
  int el=5;
  new_tab.Dodaj(el);

  auto now   = high_resolution_clock::now();
  auto mseconds = duration_cast<milliseconds>(now - epoch).count();
  std::cout << "millis: " << mseconds;

  return(0);
}
