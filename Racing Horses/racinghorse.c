#include <stdio.h>

int main(void) {
	int n, p, d, c;
	scanf("%d", &n);
	
	while(n--){
	    scanf("%d", &p);
	    int s[p];
	    for(int i=0;i<p;i++){
	        scanf("%d", &s[i]);
	    }
	    d = (s[0]-s[1])>0?(s[0]-s[1]):(s[1]-s[0]);
	    for(int i=0;i<p-1;i++){
	      for(int j=i+1;j<p;j++){
	          c = (s[i]-s[j])>0?(s[i]-s[j]):(s[j]-s[i]);
	            if(d>c){
	                d = c;
	            }
	        }      
	    }
	    printf("%d\n", d);
	}
	return 0;
}
