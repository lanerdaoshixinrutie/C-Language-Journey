//Azimuth Angle funtion.
//The projection direction of the sun on a horizontal plane.
#include <stdio.h>
#include <math.h>
double PI =3.14159265358979323846;
double array_month[13] = {-1,-15.6,-7.8,0,7.8,15.6,23.5,15.6,7.8,0,-7.8,-15.6,-23.5,};

double Azimuth_Angle(double longitude,double latitude,double time,int month);
int main(void)
{	//local variable.
	double longitude ;
	double latitude ;
	double time ;//hour
	int month ;
	
	//input area.
	printf("Please enter the longitude and latitude:\n");
	scanf("%lf %lf",&longitude,&latitude);
	printf("Please enter the time and month:\n");
	scanf("%lf %d",&time,&month);
	
	//funtion and control situations.
	double result =0.0;
	if (longitude>73.6 && longitude<135.02 
		&&latitude>3.9 && latitude <53.5 
		&& time>=0 && time <=24
		&& month>0 && month<=12) {
		result=Azimuth_Angle(longitude,latitude,time,month);
	}
	else {
		printf("Your data aren't current,please try again.\n");
		return 1;
	}
	
	//output area.
	printf("The Azimuth Angle is:%lf",result);
	return 0;
}

	//Note: the parameter of " double time " is the BeiJing time.
double Azimuth_Angle(double longitude,double latitude,double time,int month) {
	//prepare export.
	double result =0.0;
	//it's essential for me to make longitude located in [73.6 , 135.02 ].What's more, latitude should located in [3.9 , 53.5 ].
	double local_time = time + ( longitude - 120 ) /15.0 ;//take -or+ into account.
	
	//judge the direct_point of the sun.maybe not currently,hh.	//else if (month==2) {direct_point_of_the_sun = -7.8;}
	double direct_point_of_the_sun;
	double *pointer_month=array_month;										
	direct_point_of_the_sun = pointer_month[month];	
	
	//Formula : sin H = sinA*sinB + cosA*cosB*cosT.
	double sinH = sin(latitude * PI / 180) * sin(direct_point_of_the_sun * PI / 180) 
            + cos(latitude * PI / 180) * cos(direct_point_of_the_sun * PI / 180) * cos((local_time - 12) * 15 * PI / 180);
	double H = asin(sinH) * 180 / PI;//transform.
	
	//Formula : sin A = (cos direct_point_of_the_sun * sin local_time ) / cos H.
	if (fabs(cos(H * PI / 180)) < 1e-6) return 0.0; // prevent the zero.
	double sinA = (cos(direct_point_of_the_sun * PI / 180) * sin((local_time - 12) * 15 * PI / 180)) / cos(H * PI / 180);
	
	//return area.(transform)
	if (sinA > 1.0) sinA = 1.0;
	if (sinA < -1.0) sinA = -1.0;
	result = asin(sinA)*180/PI;
	return result;
}
