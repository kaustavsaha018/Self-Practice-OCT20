#include<stdio.h>

int find_Max_Area(int [], int);

int main(){
    int size;
    do{
        if(size<=0)
            printf("Invalid Size!\n");
        printf("Enter the size of the histogram: ");
        scanf("%d", &size);
    }while(size<=0);
    
    int histogran[size];
    int i;
    printf("Enter the heights of each pillar:\n");
    for(i=0;i<size;i++){
        scanf("%d", &histogran[i]);
    }
    int area = find_Max_Area(histogran,size);
    printf("The Maximum Rectangular Area is: %d", area);
    return 0;
}

int find_Max_Area(int arr[], int size){
    int max_area=arr[0],min,i,j; 
    for(i=0;i<size;i++){    
        min=arr[i]; 
        for(j=i+1;j<size;j++){     
            if(min>arr[j])
                min=arr[j];
           
            if(max_area<((j+1-i)*min))
                max_area=(j+1-i)*min;  
        }
    }   
    return max_area;
}