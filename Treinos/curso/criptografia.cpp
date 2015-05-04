#include <iostream>
#include <cstdio>
#include <string.h>
#include <ctype.h>

using namespace std;

void inplace_reverse(char * str)
{
  if (str)
  {
    char * end = str + strlen(str) - 1;

#   define XOR_SWAP(a,b) do\
    {\
      a ^= b;\
      b ^= a;\
      a ^= b;\
    } while (0)

    while (str < end)
    {
      XOR_SWAP(*str, *end);
      str++;
      end--;
    }
#   undef XOR_SWAP
  }
}

int main(){
	int n, i;
	size_t size;
	int first, second, third;
	char s[1001];
	cin >> n;	
	for(i = 0; i < n; i++){
		fgets (s, 1000, stdin);
		for(first = 0; s[first] != '\0'; first++){
			if( isalpha(s[first]) ) s[first] += 3;
		}	
		inplace_reverse(s);
		for(third = strlen(s)/2; s[third] != '\0'; third++){
			s[third] -= 1;
		}
		
		cout << s << endl;
	}

	return 0;
}
