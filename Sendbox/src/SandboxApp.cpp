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

int main() {
    Sandbox *sandbox = new Sandbox();
    sandbox->Run();
    delete sandbox;
}