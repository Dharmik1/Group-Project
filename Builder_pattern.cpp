 
#include <string>
#include <iostream>
#include <memory>

using namespace std;

class Car{
private:
  string c_name;
  string c_body;
  string c_interior;
  string c_wheels;

public:
  void setName(const string& name){
    c_name = name;
  }
  void setBody(const string& body){
    c_body = body;
  }
  void setInterior(const string& interior){
    c_interior = interior;
  }
  void setWheels(const string& wheels){
    c_wheels = wheels;
  }
  void print() const{
    cout << "A " << c_name << " car with " << c_body << " body, " << c_interior << " interior and "
    << c_wheels << " wheels. " << endl;
  }
};

class CarFactory{
protected:
  unique_ptr<Car> m_car;

public:
  virtual ~CarFactory() {};

  Car* getCar(){
    return m_car.get();
  }

  void CreateNewCar(){
    m_car = make_unique<Car>();
  }

  virtual void buildName() = 0;
  virtual void buildBody() = 0;
  virtual void buildInterior() = 0;
  virtual void buildWheels() = 0;
};

class Toyota : public CarFactory{
public:
  virtual ~Toyota() {};

  virtual void buildName(){
    m_car->setName("Toyota");
  }

  virtual void buildBody(){
    m_car->setBody("SUV");
  }

  virtual void buildInterior(){
    m_car->setInterior("Designer");
  }
  virtual void buildWheels(){
    m_car->setWheels("4*4");
  }
};

class BMW : public CarFactory{
public:
  virtual ~BMW() {};

  virtual void buildName(){
    m_car->setName("BMW");
  }

  virtual void buildBody(){
    m_car->setBody("Hard");
  }

  virtual void buildInterior(){
    m_car->setInterior("Comfortable");
  }

  virtual void buildWheels(){
    m_car->setWheels("Sport");
  }
};

class Mitsubishi : public CarFactory{
public:
  virtual ~Mitsubishi() {};

  virtual void buildName(){
    m_car->setName("Mitsubishi");
  }

  virtual void buildBody(){
    m_car->setBody("Hard");
  }

  virtual void buildInterior(){
    m_car->setInterior("Rally");
  }

  virtual void buildWheels(){
    m_car->setWheels("4*4");
  }
};

class Factory{
private:
  CarFactory* m_carFactory;

public:
  void openFactory(){
    m_carFactory->getCar()->print();
  }

  void ManufactureCar(CarFactory* cf){
    m_carFactory = cf;
    m_carFactory->CreateNewCar();
    m_carFactory->buildName();
    m_carFactory->buildBody();
    m_carFactory->buildInterior();
    m_carFactory->buildWheels();
  }
};

int main(){
  Factory factory;
  Toyota toyota;
  BMW bmw;
  Mitsubishi mitsubishi;

  factory.ManufactureCar(&toyota);
  factory.openFactory();

  factory.ManufactureCar(&bmw);
  factory.openFactory();

  factory.ManufactureCar(&mitsubishi);
  factory.openFactory();

  return 0;
}