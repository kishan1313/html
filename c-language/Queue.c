int f=-1, r=-1,size=5,Q[5],i;
void insert (int n){
    if(r==size-1){
    printf("Queue is full\n");
    return;
}
if(r == -1){
    f = 0;
}
r++;
Q[r]=n;
}
void delete(){
    int n;
    if(f == -1){
        printf("Queue is empty\n");
        return;
    }
    n=Q[f];
    printf("%d is removed\n");
    if(f == r){
        r = -1;
        f = -1;
    }else
       f++;
}
void display(){
    int ;
    printf("");
    if()
    

}