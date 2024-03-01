#pragma once

#include "Test/Test.h"

namespace test
{
    class TestMainMenu : public Test
    {
        public:
            
            TestMainMenu();

            ~TestMainMenu();

            void OnUpdate(float deltaTime) override;

            void OnRender() override;

            void OnImGuiRender() override;
    };
}