#include <iostream>
#include <string>

using namespace std;

class Persona{
private: 
	string nombre;
	int edad;
public:
	Persona(string ="", int=18);
	~Persona();
	void setNombre(string ="");
	void setEdad(int);
	string getNombre();
	int getEdad();
};

Persona::Persona(string s, int n){
	edad = n;
	nombre = s;
}

Persona::~Persona(){
	edad = 18;
	nombre = "";
}

void Persona::setNombre(string s){
	nombre = s;
}

void Persona::setEdad(int n){
	edad = n;
}

string Persona::getNombre(){
	return nombre;
}

int Persona::getEdad(){
	return edad;
}

class Alumno: public Persona{
private:
	int matricula;
public:
	Alumno(string ="", int =18, int =2017000000);
	void setMatricula(int =2017000000);
	int getMatricula();
}

Alumno::Alumno(string s, int n, int m): Persona(s, n){
	matricula = m;
}

void Alumno::setMatricula(int n){
	matricula = n;
}

int Alumno::getMatricula(){
	return matricula;
}

class Academico: public Persona{
private:
	int horasT;
public:
	Academico(string ="", int =18, int =6);
	void setHorasT(int =8);
	int getHorasT();
}

Academico::Academico(string s, int n, int m): Persona(s, n){
	horasT = m;
}

void Academico::setHorasT(int n){
	horasT = n;
}

int Academico::getHorasT(){
	return horasT;
}

class Administrativo: public Persona{
private:
	int horasT;
public:
	Administrativo(string ="", int =30, int =8);
	void setHorasT(int =8);
	int getHorasT();
}

Administrativo::Administrativo(string s, int n, int m): Persona(s, n){
	horasT = m;
}

void Administrativo::setHorasT(int n){
	horasT = n;
}

int Administrativo::getHorasT(){
	return horasT;
}

class ALic: public Alumno{
private:
	string carrera;
public:
	ALic(string ="", int =18, int =2017000000, string ="");
	void setCarrera(string ="");
	int getCarrera();
}

ALic::ALic(string s, int n, int m, string s2): Alumno(s, n, m){
	carrera = s2;
}

void ALic::setMaestria(string s){
	carrera = s;
}

int ALic::getMaestria(){
	return carrera;
}

class Posgrado: public Alumno{
private:
	string tesis;
public:
	Posgrado(string ="", int =18, int =2017000000, string ="");
	void setTesis(string ="");
	string getTesis();
}

Posgrado::Posgrado(string s, int n, int m, string t): Alumno(s,n,m){
	setTesis(t);
}

void Posgrado::setTesis(string s){
	tesis = s;
}

string Posgrado::getTesis(){
	return tesis;
}

/* //Segundo diagrama que puso el profesor
class Maestria: public Posgrado{
private:
	string carrera;
public:
	Maestria(string ="", int =18, int =2017000000, string ="", string ="");
	void setCarrera(string ="");
	string getCarrera();
}

Maestria::Maestria(string s, int n, int m, string t, string c): Posgrado(s,n,m,t){
	setCarrera(c);
}

void Maestria::setCarrera(string s){
	carrera = s;
}

string Maestria::getCarrera(){
	return carrera;
}

class Doctorado: public Posgrado{
private:
	string carrera;
public:
	Doctorado(string ="", int =18, int =2017000000, string ="", sring ="");
	void setCarrera(string ="");
	string getCarrera();
}

Doctorado::Doctorado(string s, int n, int m, string t, string c): Posgrado(s,n,m,t){
	getCarrera(c);
}

void Doctorado::setCarrera(string s){
	carrera = s;
}

string Doctorado::getCarrera(){
	return carrera;
}
*/


int main(){



	return 0;
}