template <typename... T> struct Description {};

template <typename Flag, typename... T>
struct Description<Flag, T...> {
  using Similar = Flag;
  using Decline = Description<T...>;
};

class Cpp; class Python; class Compiler; class DB; class Developer;
using CanftIn = Description<Cpp, Python, Compiler, DB, Developer>;

