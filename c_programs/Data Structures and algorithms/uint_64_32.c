#include <stdio.h>
#include <cstdint>
#include <cstdlib>
int main(void) {
    uint64_t i = 1648550501270353460;
    char* string = (char*)calloc(4000, 1);
    sprintf(string,"%lld", i);
    printf("%s\n",string);//0001011011100000110100111111001001001110100000101111011000110100
    //                                                      00010110111000001101001111110010
    //                                                      01001110100000101111011000110100
    //                                                      01011110111000101111011111110110
    free(string);
    string = (char*)calloc(4000, 1);
    
    sprintf(string,"%d", (uint32_t)(i>>32));//383833074
    printf("%s\n",string);
    free(string);
    string = (char*)calloc(4000, 1);
    
    sprintf(string,"%d", (uint32_t)i);//
    printf("%s\n",string);
    free(string);
    string = (char*)calloc(4000, 1);
    
    //sprintf(string,"%lu%lu", (uint32_t)(i>>32),(uint32_t)i));
    sprintf(string,"%lu%lu", i>>32);
    printf("%s\n",string);
    printf("%lld\n",i);
}