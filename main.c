#include <stdio.h>
#include <math.h>


int Rand_fun(int seed,int maxValue){

    int randomSeed = 0;
    int randFun;

    if(randomSeed == 0){
        randomSeed = seed;
    }

    randomSeed = randomSeed * 1105315245 + 12345;
    randFun = (randomSeed / 65536) % (maxValue + 1);
    return randFun;
}

int main(){

    int value;

    value = Rand_fun(5,12);

    printf("The random value is : %d",value);

    return 0;
}