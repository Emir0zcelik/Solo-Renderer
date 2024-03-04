#pragma once

#include "Test.h"

#include "Renderer/Renderer.h"
#include "Folder/Folder.h"

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

namespace test 
{
	class TestSampleScene : public Test
	{
		private:
			Folder _folder;
			std::string _currentDir;

			float _color[4];
			float _positions[16];
			unsigned int _indices[6];

			VAO _va;
			VBO _vb;
			VBOLayout _layout;
			IBO _ib;
			Shader _shader;
			Renderer _renderer;
			
			glm::mat4 _proj;
			glm::mat4 _view;
			glm::mat4 _model;
			glm::mat4 _mvp;

			bool _isSampleScene;
		public:

			TestSampleScene();

			~TestSampleScene();

			void OnUpdate(float deltaTime) override;

			void OnRender() override;

			void OnImGuiRender() override;

			void SetIsSampleScene(bool sampleScene);

			inline bool GetIsSampleScene() { return _isSampleScene; }
	};
}