/*输出PATest*/

#include<stdio.h>

int main (){

    char a[10000];
    int n[6];
    int i ;

    scanf("%s",a);
    
    for ( i = 0 ; i< 6 ;i++)
        n[i] = 0 ;

    for ( i = 0 ; a[i] != '\0' ; i++){
    
        switch ( a[i]) {
        
            case 'P' : n[0]++; break ;
            case 'A' : n[1]++; break ;
            case 'T' : n[2]++; break ;
            case 'e' : n[3]++; break ;
            case 's' : n[4]++; break ;
            case 't' : n[5]++; break ;
        }
    }

    for (  i = 0 ; i < 6 ; i++ ) {
       
    if (  n[i] > 0){
    
        switch ( i) {
        
            case 0 : printf("P");  break ;
            case 1 : printf("A");  break ;
            case 2 : printf("T");  break ; 
            case 3 : printf("e");  break ;
            case 4 : printf("s");  break ;
            case 5 : printf("t");  break ;         
        }
        n[i]--;

    }

    if( i == 5) {
       if ((n[0] > 0) || (n[1] > 0) || (n[2] > 0) || (n[3] > 0) || (n[4] > 0) || (n[5] > 0 ))
               i = -1 ; 
     } 
   
   }
    return 0 ;

}
