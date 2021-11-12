#include <iostream>
#include <vector>
#include <cmath>
double mean(std::vector<double> data){
	double sum=0;		
	for (auto i = data.begin(); i != data.end(); ++i){
        sum+=*i;
	}
	return sum/data.size();
}
double stddev(std::vector<double> data){
	double u=0;
	for (auto i = data.begin(); i != data.end(); ++i){
        u+=pow(*i-mean(data),2);
	}
	return pow(u/data.size(),0.5);
}
int main(){
	std::vector<double> a;
	for(int i=1;i<=7;i++){
		a.push_back(i);		
	}
	std::cout<<mean(a)<<"\n";
	std::cout<<stddev(a);		
}
