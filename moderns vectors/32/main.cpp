#include <algorithm>
#include <iostream>
#include <vector>

void sum_f(std::vector <int> &_firstVector,std::vector <int> &_lastVector,int &result);
void dif_f(std::vector <int> &_firstVector,std::vector <int> &_lastVector,int &result);
void multi_f(std::vector <int> &_firstVector,std::vector <int> &_lastVector,int &result);

int main(int argc, char* argv[]) {
	
	std::vector <int> x(2),y(2),v_interxy(5),v_unixy(10);
	std::vector <int>::iterator current_interxy,current_unixy;
	int sum,dif,multi;
	
	for(auto it = x.begin();it != x.end();){
		std::cout << "Type number x->";
		std::cin >> *it;
		if((std::find(x.begin(),x.end(),*it)) != it){
			std::cout << "warnning::number found" << std::endl;
			*it = 0;
		}else{
			++it;
		}
	}
	
	for(auto it = y.begin();it != y.end();){
		std::cout << "Type number y->";
		std::cin >> *it;
		if((std::find(y.begin(),y.end(),*it)) != it){
			std::cout << "warnning::number found" << std::endl;
			*it = 0;
		}else{
			++it;
		}
	}
	
	sum_f(x,y,sum);
	dif_f(x,y,dif);
	multi_f(x,y,multi);
	std::sort(x.begin(),x.end());
	std::sort(y.begin(),y.end());
	current_interxy = std::set_intersection(x.begin(),x.end(),y.begin(),y.end(),v_interxy.begin());
	current_unixy = std::set_union(x.begin(),x.end(),y.begin(),y.end(),v_unixy.begin());
	v_interxy.resize(current_interxy - v_interxy.begin());
	v_unixy.resize(current_unixy - v_unixy.begin());
	
	std::cout << "Sum-> " << sum << std::endl << "Difference-> " << dif << std::endl << "Times-> " << multi 
			  << std::endl; 

	std::cout << "Instersection-> ";
	for(auto &it : v_interxy)
		std::cout << it << " ";
	
	std::cout << std::endl;
	
	std::cout << "Union-> ";
	for(auto &it : v_unixy)
		std::cout << it << " ";
		
	return 0;
}

void sum_f(std::vector <int> &_firstVector,std::vector <int> &_lastVector,int &result){
	
	for(size_t i = 0;i !=_firstVector.size();++i)
		result += (_firstVector.at(i) + _lastVector.at(i));

}
void dif_f(std::vector <int> &_firstVector,std::vector <int> &_lastVector,int &result){
	
	for(size_t i = 0;i !=_firstVector.size();++i)
		result -= (_firstVector.at(i) - _lastVector.at(i));
}

void multi_f(std::vector <int> &_firstVector,std::vector <int> &_lastVector,int &result){
	
	for(size_t i = 0;i !=_firstVector.size();++i)
		result *= (_firstVector.at(i) * _lastVector.at(i));
}