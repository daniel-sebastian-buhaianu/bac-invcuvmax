#include <iostream>
#include <cstring>
using namespace std;
char s[101], aux[101], *p;
int lg, lgmax;
char* strrev(char*); 
int main()
{
	cin.get(s, 101);
	strcpy(aux, s);
	// calculez lungimea maxima a unui cuvant din sir
	p = strtok(s, "#");
	while (p)
	{
		lg = strlen(p);
		if (lg > lgmax) lgmax = lg; 
		p = strtok(NULL, "#");
	}
	// inversez cuvintele de lungime maxima
	p = strtok(aux, "#");
	while (p)
	{
		lg = strlen(p);
		if (lg == lgmax) strrev(p);
		cout << "#" << p;
		p = strtok(NULL, "#");
	}
	cout << "#";
	return 0;
}
char* strrev(char* str)
{
      char *p1, *p2;

      if (! str || ! *str)
            return str;
      for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
      {
            *p1 ^= *p2;
            *p2 ^= *p1;
            *p1 ^= *p2;
      }
      return str;
}
