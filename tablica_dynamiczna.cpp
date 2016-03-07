#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

class TabDyn
{
  int n;
  int *tablica;
public:
  TabDyn(int _n)
  {
    int i=0;
    n=_n;
    tablica = new int[n];
    for(i=0; i<n; i++)
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
	    {
	      cout<<tablica[i++]<<" ";
	    }
	  cout<<endl;
  }
};

void TabDyn::Dodaj(int a)
{
  int i=0;
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
  TabDyn new_tab(10);
  int el=5, i=0;

  // n=10
  clock_t start = clock();
  for(i=0; i<10; i++)
    {
      new_tab.Dodaj(el);
    }
  //new_tab.Print();
  clock_t stop = clock();
  cout<<endl<<"czas dla n=10: "<<(int)(stop-start)<<endl;

  // n=1000
  start = clock();
  for(i=0; i<1000; i++)
    {
      new_tab.Dodaj(el);
    }
  stop = clock();
  cout<<endl<<"czas dla n=10^3: "<<(int)(stop-start)<<endl;

  // n=10^5
  start = clock();
  for(i=0; i<100000; i++)
    {
      new_tab.Dodaj(el);
    }
  stop = clock();
  cout<<endl<<"czas dla n=10^5: "<<(int)(stop-start)<<endl;

  // n=10^6
  start = clock();
  for(i=0; i<1000000; i++)
    {
      new_tab.Dodaj(el);
    }
  stop = clock();
  cout<<endl<<"czas dla n=10^6: "<<(int)(stop-start)<<endl;

  // n=10^9
  start = clock();
  for(i=0; i<1000000000; i++)
    {
      new_tab.Dodaj(el);
    }
  stop = clock();
  cout<<endl<<"czas dla n=10^9: "<<(int)(stop-start)<<endl;

  
  return EXIT_SUCCESS;
}
