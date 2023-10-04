#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

int main(){

    vector<int> vec;    //定义与声明
    int n, t;   //定义数组长度和数组元素
    cin >> n;   //输入数组长度
    for(int i = 0; i < n; i++){
        cin >> t;   //赋值
        vec.push_back(t);   //将值传入进数组之中
    }

    sort(vec.begin(), vec.end());   //调用sort()方法进行排序，从小到大排序

    vector<int>::iterator it;   //对vector创建一个指向它的迭代器
    //迭代器循环遍历数组
    for(it = vec.begin(); it!=vec.end();it++){
        cout << *it << ' ';
    }cout << endl;

    for(int i = 0; i < vec.size(); i++){
        cout << vec[i] << ' ';
    }cout << endl;

    //使用auto自动判断数组类型
    for(auto j:vec){
        cout << j << ' ';
    }cout << endl;
    //auto无法倒序遍历

    //使用auto判定迭代器指针类型，从后向前遍历数组
    for(auto it = vec.rbegin(); it != vec.rend(); it++){
        cout << *it << ' ';
    }cout << endl;

    reverse(vec.begin(),vec.end()); //反转数组

    vec.clear();    //清空数组

    //二维数组
    vector<vector<int> > num;   //创建一个二维数组，长度为0*0
    vector<vector<int> > num1(3,vector<int>(4,0));  //建立一个3*4的数组，且都被初始化为0
    vector<vector<int> > num2(3);   //创建一个3*0的数组

    //使用vector.erase()方法删除迭代器所指向的位置
    for(auto it = vec.begin(); it!=vec.end();){
        if(*it==4)  it = vec.erase(it); //erase()方法会直接删除目前的位置并且返回下一个位置的指针，需要用原it迭代器接收，不然原it迭代器所指向的位置被删除，无法继续遍历
    }

    if(vec.size()){
        //确保数组有值才能使用以下两种方法
        cout << vec.front() << endl;    //返回第一个元素
        cout << vec.back() << endl; //返回第二个元素
    }

    vec.pop_back(); //删除末尾元素

    return 0;
}