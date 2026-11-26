//Azimuth Angle funtion.
//The projection direction of the sun on a horizontal plane.
#include <stdio.h>
#include <stdio.h>

double Azimuth_Angle(double longitude,double latitude,int local_time);
int main(void)
{
	
	return 0;
}
//Note: the parameter of " double time " is the BeiJing time.
double Azimuth_Angle(double longitude,double latitude,double time,double month) {
	double result;
//it's essential for me to make longitude located in [73.6 , 135.02 ].
	double longitude_difference= longitude - 120;// maybe it - or + 
	int time_difference = longitude_difference / 15 ;
	double local_time = time + time_difference ;
	
	
	
	
	
	
	
	
	
	return result;
}