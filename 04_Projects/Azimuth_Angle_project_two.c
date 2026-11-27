//Azimuth Angle funtion.
//The projection direction of the sun on a horizontal plane.
#include <stdio.h>
#include <math.h>
double PI =3.14159265358979323846;

double Azimuth_Angle(double longitude,double latitude,int time,int month);

int main(void)
{//local variable.
	double longitude ;
	double latitude ;
	int time ;//hour
	int month ;
//input area.
	printf("Please enter the longitude and latitude:\n");
	scanf("%lf %lf",&longitude,&latitude);
	printf("Please enter the time and month:\n");
	scanf("%d %d",&time,&month);
//funtion and control situations.
	double result =0.0;
	if (longitude>73.6 && longitude<135.02 
		&&latitude>3.9 && latitude <53.5 
		&& time>=0 && time <=24
		&& month>0 && month<=12) {
		result=Azimuth_Angle(longitude,latitude,time,month);
	}
	else {
		printf("Your datas are't current,please try again.\n");
		return 1;
	}
//output area.
	printf("The Azimuth Angle is:%lf",result);
	return 0;
}
//Note: the parameter of " double time " is the BeiJing time.
double Azimuth_Angle(double longitude,double latitude,int time,int month) {
	double result =0.0;//prepare export.
//it's essential for me to make longitude located in [73.6 , 135.02 ].What's more, latitude should located in [3.9 , 53.5 ].
	double longitude_difference= longitude - 120 ;// maybe it - or + 
	double time_difference = longitude_difference / 15.0 ;
	double local_time = time + time_difference ;	
//judge the direct_point of the sun.maybe not currently,hh.
	double direct_point_of_the_sun;
	double array_month[13] = 													//  Old Version:
	{-1,-15.6,-7.8,0,7.8,15.6,23.5,15.6,7.8,0,-7.8,-15.6,-23.5,};				//	if    (month==1){direct_point_of_the_sun = -15.6;}
	double *pointer_month=&array_month;											//else if (month==2) {direct_point_of_the_sun = -7.8;}
	direct_point_of_the_sun = *pointer_month[month];							//else if (month==3) {direct_point_of_the_sun = 0;   }
																				//else if (month==4) {direct_point_of_the_sun = 7.8; }
																				//else if (month==5) {direct_point_of_the_sun = 15.6;}
																				//else if (month==6) {direct_point_of_the_sun = 23.5;}
																				//else if (month==7) {direct_point_of_the_sun = 15.6;}
																				//else if (month==8) {direct_point_of_the_sun = 7.8; }
																				//else if (month==9) {direct_point_of_the_sun = 0;   }
																				//else if (month==10){direct_point_of_the_sun = -7.8;}
																				//else if(month==11){direct_point_of_the_sun = -15.6;}
																				//else   			{direct_point_of_the_sun = -23.5;}
//Formula : H = 90 - | local_latitude +or- direct_point_of_the_sun |. Because the address is in China,this funtion isn't such complex.
//Old_Version: double H = 90 - (latitude - direct_point_of_the_sun);	
//Old_Version: double H = 90 - fabs(latitude - direct_point_of_the_sun);
	double sinH = sin(latitude * PI / 180) * sin(direct_point_of_the_sun * PI / 180) 
            + cos(latitude * PI / 180) * cos(direct_point_of_the_sun * PI / 180) * cos((local_time - 12) * 15 * PI / 180);
	double H = asin(sinH) * 180 / PI;//transform.
//Formula : sin H = sinA*sinB + cosA*cosB*cosT.
//Formula : sin A = (cos direct_point_of_the_sun * sin local_time ) / cos H.
	if (fabs(cos(H * PI / 180)) < 1e-6) return 0.0; // prevent the zero.
	double sinA = (cos(direct_point_of_the_sun * PI / 180) * sin((local_time - 12) * 15 * PI / 180)) / cos(H * PI / 180);
//return area.
	if (sinA > 1.0) sinA = 1.0;
	if (sinA < -1.0) sinA = -1.0;
	result = asin(sinA)*180/PI;
	return result;
}
