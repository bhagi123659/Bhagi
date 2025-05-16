int i,num,isPrime=1;
int main() {
    printf("enter the num");
    scanf("%d",&num);
    if(num<=1){
        isPrime=0;
    }else{
        for(i=2;i<num/2;i++){
            if(num%i==0){
                isPrime=0;
                break;
            }
        }
    }
    if(isPrime){
        printf("its a prime number");
    }
    else{
        printf("its not a prime number");
    }
    }
