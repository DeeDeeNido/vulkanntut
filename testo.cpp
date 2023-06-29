#include<vector>
#include<iostream>
int main (){
    std::string str = "9fjgdfigghjghjghjh";
    std::vector<char> vect (str.begin(), str.end());
    std::vector<char> &po = vect;
    std::cout<<po.size();
    std::cout<<vect.size();
    float a = 0;
    std::cout<<"\n"<<typeid(vect[0]).name();
    std::cout<<"\n"<<sizeof(vect);
    return 0;
}