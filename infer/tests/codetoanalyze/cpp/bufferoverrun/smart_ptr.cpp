/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#include <memory>

class smart_ptr {
 public:
  class my_class {
   public:
    my_class(int i) {
      int a[5];
      a[i] = 0;
    }

    my_class(int i, int j) {
      int a[10];
      a[i + j] = 0;
    }
  };

  void use_shared_ptr1_Good() {
    int i = 3;
    std::shared_ptr<my_class> p = std::make_shared<my_class>(i);
  }

  void use_shared_ptr1_Bad() {
    int i = 8;
    std::shared_ptr<my_class> p = std::make_shared<my_class>(i);
  }

  void use_shared_ptr2_Good() {
    int i = 3;
    int j = 5;
    std::shared_ptr<my_class> p = std::make_shared<my_class>(i, j);
  }

  void use_shared_ptr2_Bad() {
    int i = 8;
    int j = 8;
    std::shared_ptr<my_class> p = std::make_shared<my_class>(i, j);
  }
};
