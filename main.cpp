#include<iostream>
#include<string>
#include"SinhVien.h"

using namespace std;
 
int main()
{
	SinhVien sv[];
	string MSV, Ten;
	float DLT,DTH;
	
	getline(cin,MSV);
	getline(cin,Ten);
	cin>>DLT;
	cin>>DTH;
	
	sv.SetMaSinhVien(MSV);
	sv.SetTenSinhVien()
	sv.SetDiemLyThuyet(DLT);
	sv.SetDiemThucHanh(DTH);
	sv.GetMaSinhVien();
	sv.GetTenSinhVien()
	sv.GetDiemLyThuyet();
	sv.GetDiemThucHanh();


	
}
