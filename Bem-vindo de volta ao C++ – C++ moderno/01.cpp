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