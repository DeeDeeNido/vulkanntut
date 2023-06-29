#include"lve_pipeline.hpp"
#include<fstream>
#include<stdexcept>
#include<iostream>
namespace lve {
	LvePipeline::LvePipeline(LveDevice &device, 
	const std::string& vertfilepath, 
	const std::string& fragfilepath, 
	const PipelineConfigInfo &configInfo) : lveDevice{device} {
		createGraphicsPipeline(vertfilepath, fragfilepath, configInfo);
	}

	std::vector<char> LvePipeline::readFile(const std::string& filepath) {
		std::ifstream file(filepath, std::ios::ate | std::ios::binary);
		if (!file.is_open()) {
			throw std::runtime_error("failed to open file" + filepath);
		}
		size_t fileSize = static_cast<size_t>(file.tellg());
		std::vector<char> buffer(fileSize);
		file.seekg(0);
		file.read(buffer.data(), fileSize);
		file.close();
		return buffer;
	}
	void LvePipeline::createGraphicsPipeline(const std::string& vertfilepath, const std::string& fragfilepath, const PipelineConfigInfo &configInfo) {
		auto vertCode = readFile(vertfilepath);
		auto fragCode = readFile(fragfilepath);
		std::cout << "vertex code size = " << vertCode.size();
		std::cout << "frag code size = " << fragCode.size();
	}
	void LvePipeline::createShaderModule(std::vector<char> &code, VkShaderModule shaderModule){
		VkShaderModuleCreateInfo createInfo{};
		createInfo.sType = VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO;
		createInfo.codeSize - code.size();
	}
}