#pragma once
#include"lve_window.hpp"
#include"lve_pipeline.hpp"
#include"lve_device.hpp"
namespace lve {
	class FirstApp {
	public:
		static constexpr int WIDHT = 800;
		static constexpr int HEIGHT = 600;
		void run();
	private:
		LveWindow lveWindow{ WIDHT,HEIGHT,"Hello Vulcan!" };
		LveDevice lveDevice{lveWindow};
		LvePipeline lvePipeline{lveDevice, "shaders/vert.spv", "shaders/frag.spv", 
		LvePipeline::defaultPipelineConfigInfo(WIDHT,HEIGHT)};
	};
}