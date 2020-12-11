
 int status(int status, int address )
 {
     int S=status;
     int L=address;            //location
     
     
     
//               v0  ,v1  ,v2 ,v3
    int stat[] = {0,  0,  0,  0}; 
    printf("befor updation: ");
    printf("%d", stat[L]);
    
    stat[L] = S;
    printf("status updated sucessfully.^.\n");
    printf("status: ");
    printf("%d", stat[L]);

 }
 
 int main()
 {
     
    status (1 , 1 ); // status followed by valve number(location)
     
    
 }
