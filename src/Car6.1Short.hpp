class Car {
 private:
  float speed;
  const float maxSpeed;
  ...

 public:
  Car(float maxSpeed) : speed(0.0f), maxSpeed(maxSpeed){}
  ...
};