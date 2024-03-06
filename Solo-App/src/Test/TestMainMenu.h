#pragma once

#include "Test.h"
#include "Renderer/Renderer.h"
#include "Renderer/Texture.h"
#include "Folder/Folder.h"


#include "glm/glm.hpp"
#include "glm/gtc/matrix_transform.hpp"

namespace test
{
    class TestMainMenu : public Test
    {
		private:
			Folder _folder;
			std::string _currentDir;

			glm::vec4 m_Color;
			float m_Positions[16];
			unsigned int m_Indices[6];

			VAO m_Va;
			VBO m_Vb;
			VBOLayout m_Layout;
			IBO m_Ib;
			Shader m_Shader;
			Renderer m_Renderer;
			Texture m_SoloLogo;
			
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