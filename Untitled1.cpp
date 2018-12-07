
#include <iostream>
#include<math.h>

using namespace std;

int main()
{
	int n = 0;
	int x = 0;
	int cijena = 0;
	int p1, p2, p3 = 0;
	int i = 0;
	cin >> n;
	cin >> x;


	for (int i=0;i<n;i++){
	    cin >> p1;
	    cin >> p2;
		int j = abs(p1 - p2);
		   if (j <= x) {

			    if (p1 > p2) {
			    cijena +=p1;
		        }
				else {
					cijena += p2;
				}
		   }
		   else   {
		     cin >> p3;
			cijena += p3;
		
		   }
	}
	cout << cijena;
    
    

	return 0;
}
