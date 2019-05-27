#include <string>
#include <utility>

namespace some_namespace {
struct custom_string {
  std::string value;

  custom_string() = default;
  custom_string(std::string value) : value{ std::move(value) } {}

  char const *c_str() const { return value.c_str(); }

  std::string::size_type length() const { return value.length(); }

  bool empty() const { return value.empty(); }
};
}  // namespace some_namespace

namespace ns {
namespace some_namespace {}
}  // namespace ns

#include "custom_string_generated.h"

int main() {}
