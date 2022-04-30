# include <stdio.h> 
# include <math.h> 

float distance ( float x1, float y1, float x2, float y2); 
float area(); 

int main(){ 
    float x = area(); 
    
    printf ( "Area of the triangle = %f\n", x ); 
    
    return 0;
    }
    
    float distance ( float x1, float y1, float x2, float y2) {
        float m, d; 
        m = pow ( ( x2 - x1 ), 2) + pow ( (y2 -y1 ), 2); 
        d = sqrt(m);
        return d;
        }
    
    float area(){ 
        float triarea ( float, float, float); 
        float a, b, c, d; 
        float x1, x2, x3, x4, y1, y2, y3, y4; 
        float area1, area2, area3, totarea; 
        float a1, b1, c1 ; 
        
        printf ( "Enter the co-ordinates of three points: "); 
        scanf ( "%f%f%f%f%f%f", &x1, &y1, &x2, &y2, &x3, &y3 ); 
        printf ( "Enter the co-ordinates of one more point: "); 
        fflush(stdin);
        scanf ( "%f%f", &x4, &y4); 
        
        a = distance (x1, y1, x2, y2); 
        b= distance (x1, y1, x3, y3); 
        c= distance (x2, y2, x3, y3);
        
        d = triarea ( a, b, c); 
        
        a1 = distance (x1, y1, x4, y4 ) ; 
        b1 = distance (x2, y2, x4, y4 ) ; 
        c1 = distance ( x3, y3, x4, y4 ) ;
        
        area1 = triarea (a, a1, b1 ) ; 
        area2 = triarea ( b, a1, c1 ) ; 
        area3 = triarea ( c, b1, c1 ) ; 
        
        totarea = area1 + area2 + area3; 
        
        if((totarea-d)<=0.0009)
        /* 0.0009 is used to counter the anomaly in floating point calculations */
        printf ( "Point (%f, %f) is inside the Triangle\n", x4, y4); 
        else
        printf ( "Point (%f, %f) lies outside the Triangle\n", x4, y4);
        return d;
        } 
        
        float triarea ( float a, float b, float c){
             float s, m, x; 
             s = (a+b+c)/2; 
             m = s*(s-a)*(s-b)*(s-c); 
             
             x=sqrt (m); 
             return (x);
             }