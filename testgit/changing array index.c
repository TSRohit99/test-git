#include<stdio.h>
    #include<string.h>
    
   
    int main()
    {
    
    int n;
    
    scanf("%d",&n);
       int a[n], i,j=0;
    
    for (i=0; i<n; i++) 
    scanf("%d",&a[i]);
    
    for (i=0; i<(n/2); i++) 
    {
    j=a[i];
    a[i]= a[n-(i+1)];
    a[n-(i+1)]=j;  
    }
    
    
    
    for (i=0; i<n; i++) 
    printf("%d",a[i]);
    
    
    
    
    
    
    
    
    return 0;
            }