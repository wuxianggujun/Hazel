/**
* Created by WuXiangGuJun on 2023/2/20.
*/
#pragma once

#include "Core.h"

namespace Hazel {

    class HAZEL_EXPORT_API Application {
    public:
        Application();

        virtual ~Application();

        void Run();
    };


    //To be defined Client
    Application* CreateApplication();


}

