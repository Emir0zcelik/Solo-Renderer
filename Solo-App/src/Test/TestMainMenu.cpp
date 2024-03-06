#include "TestMainMenu.h"

namespace test
{
    TestMainMenu::TestMainMenu()
    :   m_Color(glm::vec4(0.2f, 0.3f, 0.7f, 1.0f)),
        m_Positions{
        300.0f, 400.0f, 0.0f, 0.0f, // Down Left Corner
		300.0f, 600.0f, 0.0f, 1.0f, // Up Left Corner
		700.0f, 400.0f, 1.0f, 0.0f, // Down Right Corner
		700.0f, 600.0f, 1.0f, 1.0f, // Up Right Corner
        },

        m_Indices{
            0, 1, 2,
            1, 3, 2
        },
        _currentDir(_folder.GetCWD()),
        m_Va(),
        m_Vb(m_Positions, 4 * 4 * sizeof(float)),
        m_Ib(m_Indices, 6),
        m_Layout(), 
        m_Shader(_currentDir + "/Solo-Core/src/Shader/MainMenu.shader"),
        m_SoloLogo(_currentDir + "/Solo-Core/res/Solo_Logo.png"),
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
	    m_Layout.Push<float>(2);
	    m_Va.AddBuffer(m_Vb, m_Layout);

	    glEnable(GL_BLEND);
	    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

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


	    glm::mat4 trans = glm::mat3(1.0f);
	    trans = glm::translate(trans, glm::vec3(0.0f, 0.0f, 0.0f));
	    trans = glm::scale(trans, glm::vec3(0.75f, 0.75f, 0.75f));
	    trans = glm::rotate(trans, (float)glfwGetTime() / 2, glm::vec3(0.0f, 1.0f, 0.0f));

	    m_Shader.SetUniformMat4f("u_Transform", trans);
	    m_Shader.SetUniformMat4f("u_MVP", m_Mvp);

	    m_SoloLogo.Bind();
	    m_Shader.SetUniform1i("u_Texture", 0);
	    glViewport(0, 0, 1000, 750);
	    m_Renderer.Draw(m_Va, m_Ib, m_Shader);
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