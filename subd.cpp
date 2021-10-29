
#include "subd.h"
#include <iostream>
#include <fstream>

int main(int argc, char* argv[]){
    vector< vector<float> > points 
    {
        {-4.66635532059, -2.76664019908, -42.8339205358},
        {-0.995289677896, -2.60784433118, -44.9970454207},
        {-0.351475462457, 3.36058532522, -40.7822229235},
        {4.66161147923, 3.19920579046, -47.7352059517},
        {7.5310958635, -4.74173648552, -40.4538011609},
        {4.24473781681, 1.87655757442, -49.9121733511},
        {11.3653062808, -3.45799957849, -41.0441463511},
        {5.92641505025, -1.21492108245, -46.1102940295},
        {13.3221469724, 1.54142129899, -49.7183834507},
        {18.0383357784, -2.68134236792, -45.6714062854},
        {12.7220355232, 1.87942631928, -47.2636892774}
    }; 

    vector<vector<float> > subd;

    //add midpoints

    
    for(int i = 0; i < points.size(); i++){
        for(int j = 0; j < 10; j++){
            subd[i][2*j+1] = (points[i][j] + points[i][j+1]) / 2;
        }
    }

    //then filter even points

    for(int i = 0; i < points.size(); i++){
        for(int j = 0; j < 10; j++){
            subd[i][2*j] = (points[i][2*j-2] + 6 * points[i][2*j] + points[i][2*j + 2]) / 8;
        }
    }

   ofstream output;
   output.open(argv[1]);

    for(int i = 0; i < points.size(); i++){
        output << ;
    }

}