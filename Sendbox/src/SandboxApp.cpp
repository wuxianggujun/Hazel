/**
* Created by WuXiangGuJun on 2023/2/19.
*/

#include "Hazel.h"

class Sandbox : public Hazel::Application {

public:
    Sandbox() {

    }

    ~Sandbox() {

    }
};

Hazel::Application* Hazel::CreateApplication() {
    return new Sandbox();
}
