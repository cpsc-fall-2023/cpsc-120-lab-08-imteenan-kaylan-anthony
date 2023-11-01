// Kaylan Fan
// kyf.0525@csu.fullerton.edu
// @Kaylankayy
// Partners: @imteenann

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (argc < 2) {
    std::cout << "error: you must supply at least one number";
    return 1;
  }
  double sum = 0.0;

  for (int i = 1; i < argc; i++) {
    sum += std::stod(arguments[i]);
  }

  double average = sum / (argc - 1);

  std::cout << "average = " << average << std::endl;

  return 0;
}
