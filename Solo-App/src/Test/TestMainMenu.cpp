#include "TestMainMenu.h"

namespace test
{
    TestMainMenu::TestMainMenu()
    :   m_Color(glm::vec4(0.2f, 0.3f, 0.7f, 1.0f)),
        m_Positions{
            -0.5f, -0.5f, // 0 Left Corner
             0.5f, -0.5f, // 1 Right Corner 
             0.0f,  0.5f, // 2 Upper Corner

			// 300.0f, 200.0f, 0.0f, 0.0f, //Down Left Corner 
			// 400.0f, 400.0f, 0.0f, 1.0f, //Up Left Corner   
			// 500.0f, 200.0f, 1.0f, 0.0f, //Down Right Corner
        },

        m_Indices{
            0, 1, 2,
        },

        m_Va(),
        m_Vb(m_Positions, 2 * 3 * sizeof(float)),
        m_Ib(m_Indices, 3),
        m_Layout(), 
        m_Shader("Solo-Core/src/Shader/MainMenu.shader"),
        m_Renderer(),
        m_Width(0),
        m_Height(0),
        isMainMenu(true),
        isExit(false),

        m_Proj(glm::ortho(0.0f, 1000.0f, 0.0f, 750.0f, -1.0f, 1.0f)),
	    m_View(glm::translate(glm::mat4(1.0f), glm::vec3(0, 0, 0))),
	    m_Model(glm::translate(glm::mat4(1.0f), glm::vec3(0, 0, 0))),
	    m_Mvp(m_Proj * m_View * m_Model)
    {
        m_Layout.Push<float>(2);
	    // m_Layout.Push<float>(2);
	    m_Va.AddBuffer(m_Vb, m_Layout);

	    // glEnable(GL_BLEND);
	    // glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

    }

    TestMainMenu::~TestMainMenu()
    {
        m_Shader.Unbind();
    }

    void TestMainMenu::OnUpdate(float deltaTime)
    {

    }

    void TestMainMenu::OnRender()
    {
        m_Renderer.Clear();

	    // m_Shader.SetUniformMat4f("u_MVP", m_Mvp);

        // m_Shader.SetUniform4f("u_Color", 0.2f, 0.3f, 0.7f, 1.0f);

        m_Shader.Bind();
        m_Va.Bind();
        m_Ib.Bind();

        glDrawArrays(GL_TRIANGLES, 0, 3);
        
	    // m_Renderer.Draw(m_Va, m_Ib, m_Shader);
    }

    void TestMainMenu::OnImGuiRender()
    {
        ImGuiWindowFlags window_flags = 0;
        window_flags |= ImGuiWindowFlags_NoBackground | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoTitleBar;

        ImGui::SetNextWindowPos(ImVec2(0.0, 0.0));
        ImGui::SetNextWindowSize(ImVec2(m_Width, m_Height));

        ImGui::Begin("Main Menu", nullptr, window_flags);

        ImGui::SetCursorPos(ImVec2(920.0, 0.0));
        ImGui::Text("(%.1f FPS)", ImGui::GetIO().Framerate);

        ImGui::SetCursorPos(ImVec2(300.0, 500.0));
        if (ImGui::Button("Scene", ImVec2(100, 100)))
        {
        	isMainMenu = false;	
        }

        ImGui::SameLine();
        ImGui::SetCursorPos(ImVec2(600.0, 500.0));
        
        if (ImGui::Button("Exit", ImVec2(100, 100)))
        {
        	isExit = true;
        }


        ImGui::End();
    }

    void test::TestMainMenu::SetWidth(float width)
    {
    	m_Width = width;
    }

    void test::TestMainMenu::SetHeight(float height)
    {
    	m_Height = height;
    }

    void test::TestMainMenu::SetIsMainMenu(bool isMainMenu)
    {
    	isMainMenu = isMainMenu;
    }
}