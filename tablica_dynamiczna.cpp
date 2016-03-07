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
	    {
	      cout<<tablica[i++]<<" ";
	      //printf("%d ",tablica[i++]);
	    }
	  cout<<endl;
	  //printf("\n");
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
  TabDyn new_tab(2);
  int el=5;
  new_tab.Dodaj(el);
  new_tab.Dodaj(6);
  new_tab.Dodaj(8);
  new_tab.Print();
  
  clock_t stop = clock();
  cout<<endl<<"czas: "<<(int)(stop-start)<<endl;
  //printf("%d\n",(int)(stop-start));

  system("PAUSE");
  return EXIT_SUCCESS;
}
