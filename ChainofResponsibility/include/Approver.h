#ifndef __APPROVER_H__
#define __APPROVER_H__

#include "PurchaseRequest.h"

namespace ChainOfResponsibilityNS {
/**
 * @brief 审批者接口
 *
 */
class Approver {
 protected:
  Approver* successor;
  std::string name;

 public:
  Approver(std::string name) : name(name) {}

  void setSuccessor(Approver* successor) {
    this->successor = successor;
    return;
  }

  virtual void processRequest(PurchaseRequest*) = 0;
};

class Director : public Approver {
 public:
  Director(std::string name) : Approver(name) {}

 public:
  void processRequest(PurchaseRequest* request) override {
    if (request->getAmount() < 5000) {
      printf("主任：%s 审批采购单：%d，金额：%f元，采购目的：%s。\n",
             name.c_str(), request->getNumber(), request->getAmount(),
             request->getPurpose().c_str());
      printf("审批通过!\n");
    } else {
      printf("%s审批通过，", name.c_str());
      printf("进入下一层审批\n");
      this->successor->processRequest(request);
    }
    return;
  }
};

class VicePresident : public Approver {
 public:
  VicePresident(std::string name) : Approver(name) {}

 public:
  void processRequest(PurchaseRequest* request) override {
    if (request->getAmount() < 10000) {
      printf("副董事长：%s 审批采购单：%d，金额：%f元，采购目的：%s。\n",
             name.c_str(), request->getNumber(), request->getAmount(),
             request->getPurpose().c_str());
      printf("审批通过!\n");
    } else {
      printf("%s审批通过，", name.c_str());
      printf("进入下一层审批\n");
      this->successor->processRequest(request);
    }
    return;
  }
};

class President : public Approver {
 public:
  President(std::string name) : Approver(name) {}

 public:
  void processRequest(PurchaseRequest* request) override {
    if (request->getAmount() < 200000) {
      printf("董事长：%s 审批采购单：%d，金额：%f元，采购目的：%s。\n",
             name.c_str(), request->getNumber(), request->getAmount(),
             request->getPurpose().c_str());
      printf("审批通过!\n");
    } else {
      printf("%s审批通过，", name.c_str());
      printf("进入下一层审批\n");
      this->successor->processRequest(request);
    }
    return;
  }
};

class Congress : public Approver {
 public:
  Congress(std::string name) : Approver(name) {}

 public:
  void processRequest(PurchaseRequest* request) override {
    if (request->getAmount() < 1000000) {
      printf("董事会：审批采购单：%d，金额：%f元，采购目的：%s。\n",
             request->getNumber(), request->getAmount(),
             request->getPurpose().c_str());
      printf("审批通过!\n");
    } else {
      printf("董事会审批不通过!\n");
    }
    return;
  }
};

}  // namespace ChainOfResponsibilityNS

#endif