#pragma once

#include "Test.h"
#include "../../Solo-Core/src/Renderer/Renderer.h"

#include "glm/glm.hpp"
#include "glm/gtc/matrix_transform.hpp"

namespace test
{
    class TestMainMenu : public Test
    {
		private:
			glm::vec4 m_Color;
			float m_Positions[6];
			unsigned int m_Indices[3];

			VAO m_Va;
			VBO m_Vb;
			VBOLayout m_Layout;
			IBO m_Ib;
			Shader m_Shader;
			Renderer m_Renderer;
			
			glm::mat4 m_Proj;
			glm::mat4 m_View;
			glm::mat4 m_Model;
			glm::mat4 m_Mvp;

			float m_Width;
			float m_Height;

			bool isMainMenu;
			bool isExit;
        public:
            
            TestMainMenu();

            ~TestMainMenu();

            void OnUpdate(float deltaTime) override;

            void OnRender() override;

            void OnImGuiRender() override;

			void SetWidth(float width);

			void SetHeight(float height);

			void SetIsMainMenu(bool isMainMenu);

			inline bool GetIsExit() { return isExit; }

			inline bool GetIsMainMenu() { return isMainMenu; }
    };

}