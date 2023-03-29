#include <stdio.h>
#include <stack>

using namespace std;

main() {
	int i, n;
	stack <int> st;
	while(true)
	{
		scanf("%d",&n);
		st.push(n);        // deerees ni elemntuudee nemeh;
		if(n == 0)
		   break;
	}
	if(st.empty())
	   printf("Hooson\n");
	else 
	   printf("Hooson bish\n");
	
	while(!st.empty())     // Hooson boltol ni guilgene
	{
		printf("Hamgiin deed taliin element bol %d\n",st.top());
		st.pop();
	}
	
}

/*
   stack -- hogiin sav
   (davharga, daraalal) hamgiin dood taliin element ruu hamgiin suuld ni handah bolomjtoi
   stackiin elemntuud ni zovhon omnoh elementee l medne
*/
