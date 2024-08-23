int main(){
    int startp , endp, i , year, born, die, newPopulation;
    year = 0;
    printf("enter the start of population (start from 9):");
    scanf("%i", &startp);
    while(startp < 9){
            printf("eror! the start can be 9 or above 9:");
            scanf("%i", &startp);
    }
    printf("enter the end of population:");
    scanf("%i", &endp);
    while(startp > endp){
            printf("eror! the end must be higher than start:");
            scanf("%i", &endp);
    }
    newPopulation = startp;
    while(newPopulation < endp){
        born = newPopulation/3;
        die = newPopulation/4;
        newPopulation = newPopulation + born - die;
        year +=1;
    }
    printf("years that population will reach to end: %i", year);
    return 0;
}
