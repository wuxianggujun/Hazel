/**
* Created by WuXiangGuJun on 2023/2/20.
*/

#pragma once

//#include "Application.h"


extern Hazel::Application *Hazel::CreateApplication();

int main(int argc, char **argv) {
    Hazel::Log::Init();
    printf("Hazel Engine!\n");
    auto app = Hazel::CreateApplication();
    app->Run();
    delete app;
}
