#include<iostream>
#include<stdio.h>
#include<time.h>
#include<cstdlib>
using namespace std;

class TabDyn
{
  int n;
  int *tablica;
public:
  TabDyn(int _n)
  {
    n=_n;
    tablica = new int[n];
    for(int i=0; i<n; i++)
      tablica[i]=0;
  }
  ~TabDyn()
  {
    delete tablica;
  }
  void Dodaj(int a);
  void Print()
  {
	  int i=0;
	  while (i<n)
		  printf("%d ",tablica[i++]);
	  printf("\n");
  }
};

void TabDyn::Dodaj(int a)
{
  int i=0, j=0;
  while(tablica[i]!=0)
      {
        i++;
      }
  if(i<n)
    tablica[i]=a;
  else
  {
	  int *tablica2 = new int [n+1];
	  i=0; while (i<n) {tablica2[i] = tablica[i]; i++;}
	  tablica2[i]=a;
	  tablica = tablica2;
	  n++;
  }
  
}


int main()
{
  // auto epoch = high_resolution_clock::from_time_t(0);
  clock_t start = clock();
  TabDyn new_tab(2);
  int el=5;
  new_tab.Dodaj(el);
  new_tab.Dodaj(6);
  new_tab.Dodaj(8);
  new_tab.Print();
  
  clock_t stop = clock();
  printf("%d\n",(int)(stop-start));
  system("PAUSE");

  // auto now   = high_resolution_clock::now();
  //  auto mseconds = duration_cast<milliseconds>(now - epoch).count();
  //  std::cout << "millis: " << mseconds;

  return(0);
}
