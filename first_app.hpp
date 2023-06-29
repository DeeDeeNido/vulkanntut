#pragma once
#include"lve_window.hpp"
#include"lve_pipeline.hpp"
namespace lve {
	class FirstApp {
	public:
		const int WIDHT = 800;
		const int HEIGHT = 600;
		void run();
	private:
		LveWindow lveWindow{ WIDHT,HEIGHT,"Hello Vulcan!" };
		LvePipeline lvePipeline{ "shaders/vert.spv", "shaders/frag.spv" };
	};
}