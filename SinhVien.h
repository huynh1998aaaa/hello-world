#include<iostream>
using namespace std;

class SinhVien
{
	private:
		string MaSinhVien;
		string TenSinhVien;
		float DiemLyThuyet;
		float DiemThucHanh;
	public:
		SinhVien(string MSV, string Ten,float DLT, float DTH)
		{
			MaSinhVien = MSV;
			TenSinhVien = Ten;
			DiemLyThuyet = DLT;
			DiemThucHanh = DTH;
			
		}
		
		void SetMaSinhVien(string MSV)
		{
			MaSinhVien = MSV;
		}
		void SetTenSinhVien(string TSV)
		{
			TenSinhVien = TSV;
		}
		void SetDiemLyThuyet(float DLT)
		{
			DiemLyThuyet = DLT;
		}
		void SetDiemThucHanh(float DTH)
		{
			DiemThucHanh = DTH;
		}
		string GetMaSinhVien()
		{
			return MaSinhVien;
		}
		string GetTenSinhVien()
		{
			return TenSinhVien;
		}
		float GetDiemLyThuyet()
		{
			return DiemLyThuyet;
		}
		float GetDiemThucHanh()
		{
			return DiemThucHanh;
		}
		float TinhDiemTongKet()
		{
			return DiemThucHanh*0.7+DiemLyThuyet*0.3;
		}
		
};
