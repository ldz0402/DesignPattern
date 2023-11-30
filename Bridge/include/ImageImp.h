#ifndef __IMAGEIMP_H__
#define __IMAGEIMP_H__

namespace BridgeNS {

/**
 * @brief 像素矩阵类
 *
 */
class Matrix {
  // 此处代码省略
};

/**
 * @brief 操作系统接口
 *
 */
class ImageImp {
 public:
  virtual void doPaint(Matrix* m) = 0;
};

/**
 * @brief Windows 操作系统实现类
 *
 */
class WindowsImp : public ImageImp {
  void doPaint(Matrix* m) override;
};

/**
 * @brief Linux 操作系统实现类
 *
 */
class LinuxImp : public ImageImp {
  void doPaint(Matrix* m) override;
};

/**
 * @brief UNIX 操作系统实现类
 *
 */
class UNIXImp : public ImageImp {
  void doPaint(Matrix* m) override;
};

}  // namespace BridgeNS

#endif