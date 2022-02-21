// SPDX-License-Identifier: Apache-2.0
// SPDX-FileCopyrightText: 2019-2022 Second State INC

#pragma once

#include <cstdint>
#include <string>
#include <vector>

namespace WasmEdge {
namespace Host {

class HostFuncExampleEnvironment {
public:
  /// Define your environment variables and data structures

  /// Const

  /// Variables
  uint32_t ClassID;
  std::string ClassName;
  std::vector<std::string> Students;
  std::string ClassAddr; // Add var for Custom Host Func 0 (a simple one)

  /// Initial Configurations
};

} // namespace Host
} // namespace WasmEdge
