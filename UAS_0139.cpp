/*! \mainpage sistem penilaian Matkul pemograman dan jaringan
*
* \section intro sec_pengantar
*/

#include <iostream>
using namespace std;
class MataKuliah
{
private:
float presensi;
float activity;
float exercise;
float tugasAkhir;

public:
MataKuliah()
{
presensi = 0.0;
activity = 0.0;
exercise = 0.0;
tugasAkhir = 0.0;
}

virtual void namaMataKuliah() { return; }
virtual void inputNilai() { return; }
virtual float hitungNilaiAkhir() { return; }
virtual void cekKelulusan() { return; }

void setPresensi(float nilai)
{
this->presensi = nilai;
}
float getPresensi()
{
return presensi;
}

void setActivity(float nilai)
{
    this->activity = nilai;
}
float getActivity()
{
    return activity;
}

void setExercise(float nilai)
{
    this->exercise = nilai;
}
float getExercise()
{
    return exercise;
}

void setTugasAkhir(float nilai)
{
    this->tugasAkhir = nilai;
}
float getTugasAkhir()
{
    return tugasAkhir;
}

};
class Pemrograman : public MataKuliah
{
void inputNilai(){
    float p, a, e, t;
    
    cout << "Masukan nilai presensi : ";
    cin >> p;
    setPresensi(p);
    cout << "MAsukan niali activity : ";
    cout << "Masukan nilai exercise : ";
    cout << "Masukan nilai tugas akhir : ";
}
float hitungNilaiAkhir(){

   return (getPresensi() + getActivity() + getExercise() + getTugasAkhir())/4;
}
void cekKelulusan(){
    cout << "Selamat anda dinyatakan lulus";
}

};
class Jaringan : public MataKuliah
{
void inputNilai(){
    cout << "Masukan nilai activity : ";
    cout << "Masukan nilai exercise : ";
}
float hitungNilaiAkhir(){
    return (getActivity()+getExercise())/2;
}
void cekKelulusan(){
    cout << "Anda dinyatakan tidak lulus";
}

};
int main()
{
char pilih;
MataKuliah *mataKuliah;
Pemrograman pemrograman;
Jaringan jaringan;
do {
    system("cls");
    cout << "1. Pemograman " << endl;
    cout << "2. Jaringan " << endl;
    cout << "3. Keluar " << endl;
    cin >> pilih;

    switch(pilih)
    {
        case '1':
        pemrograman.inputNilai();
        break;

        case '2':
        pemrograman.hitungNilaiAkhir();
        break;

        case '3':
        pemrograman.cekKelulusan();
        break;
    }
}while (pilih !=3);
}