#pragma once

#include "common_types.hpp"
#include <string>
#include <vector>

namespace uav_vision {
  class PipelineParser {
    public:
      PipelineParser() = default;
      ~PipelineParser() = default;

      bool parsePipelineFile(const std::string &filename, std::vector<PipelineNode> &nodes);
      bool parsePipelineString(const std::string &pipelineText, std::vector<PipelineNode> &nodes);
      bool validatePipeline(const std::vector<PipelineNode> &nodes);

    private:
      bool parsePipelineNode(const std::string &line, PipelineNode &node);
      PipelineParams parseParameters(const std::string &paramStr);
      std::vector<std::string> parseFrameList(const std::string &frameStr);
      bool detectCircularDependency(const std::vector<PipelineNode> &nodes);

      std::string trim(const std::string &str);
      std::vector<std::string> split(const std::string &str, char delimiter);
      bool isNumeric(const std::string &str);
      bool isFloat(const std::string &str);
  };
} // namespace uav_vision
