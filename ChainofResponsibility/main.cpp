#include <iostream>

#include "Approver.h"

using namespace std;
using namespace ChainOfResponsibilityNS;

int main(int argc, char** argv) {
  printf("I'm Chain Of Responsibility Pattern!\n");
  // begin test
  Approver *num1, *num2, *num3, *num4;
  num1 = new Director("季");
  num2 = new VicePresident("叔");
  num3 = new President("仲");
  num4 = new Congress("伯");

  num1->setSuccessor(num2);
  num2->setSuccessor(num3);
  num3->setSuccessor(num4);

  PurchaseRequest* request = new PurchaseRequest(500, 10001, "差旅报销");
  num1->processRequest(request);

  PurchaseRequest* request2 = new PurchaseRequest(5000, 10002, "差旅报销");
  num1->processRequest(request2);

  PurchaseRequest* request3 = new PurchaseRequest(50000, 10003, "差旅报销");
  num1->processRequest(request3);

  PurchaseRequest* request4 = new PurchaseRequest(500000, 10004, "差旅报销");
  num1->processRequest(request4);

  PurchaseRequest* request5 = new PurchaseRequest(5000000, 10005, "差旅报销");
  num1->processRequest(request5);

  // end test
  return 0;
}
