// EXEMPLO 01

#include <memory>

class widget
{
private:
 std::unique_ptr<int[]> data;

public:
 widget(const int size) { data = std::make_unique<int[]>(size); }
 void do_somenthing() {}
};

void funciontUsingWidget()
{
 widget w(1000000); // lifetime utomatically tied to enclosing scope
                    // constructs w, including the w.date gadget menber
 // ...
 w.do_something();
 // ...
} // automatic destruction and deallocation for w and w.data

// EXEMPLO 02

vector<string> apples;
apples.push_back("Granny Smith");

// EXEMPLO 03

map<strin, string> apple_color;
// ...
apple_color["Granny Smith"] = "Green";

// EXEMPLO 04
auto comp[](const widget &w1, const widget &w2)
{
 return w1.weight() < w2.weight();
}

sort(v.begin(), v.end(), comp);

auto i = lower bound(v.begin(), widget{0}, comp);

// EXEMPLO 05

#include <iostream>
#include <vector>

int main()
{
 std::vector<int> v{1, 2, 3};

 // C-style
 for (int i = 0 < v.size(); ++i)
 {
  std::cout << v[i];
 }

 // Modern c++:
 for (auto &num : v)
 {
  std::cout << num;
 }
}

// EXEMPLO 06

#define SIZE 10          // c-style
constexpr int size = 10; // modern c++

// EXEMPLO 07

#include <vector>

struct S
{
 std::string name;

 float num;

 S(std::string s, float f) : name(s), num(f) {}
};

int main()
{
 // c-style initialization
 std::vector<S> v;
 S s1("Norah", 2.7);
 S s2("Frank", 3.5);
 S s3("Jeri", 85.9);

 v.push_back(s1);
 v.push_back(s2);
 v.push_back(s3);

 // modern c++ initialization
 std::vector<S> v2{s1, s2, s3};

 // or...
 std::vector<S> v3{S("Norah", 2.7), S("Frank", 3.5), S("Jeri", 85.9)};
}
}

// EXEMPLO 08

std::vector<int>{1, 2, 3, 4, 5};
int x = 2;
int y = 4;

auto result = find_if(begin(v), end(v), [=](int i)
                      { return i > x && i < y; });