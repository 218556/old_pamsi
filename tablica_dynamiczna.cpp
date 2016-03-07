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
  clock_t start = clock();
  TabDyn new_tab(10);
  int el=5, i=0;
  for(i=0; i<10; i++)
    {
      new_tab.Dodaj(el);
    }
  new_tab.Print();

  
  clock_t stop = clock();
  cout<<endl<<"czas: "<<(int)(stop-start)<<endl;


  return EXIT_SUCCESS;
}
