template <class T>
struct A{
    using MemberTypeAlias = float;
    struct B {};
    B* b; // A<T>::B
    A(const A& other);

    void foo();
    void bar(){
        foo(); // A<T>::foo
    }
};

template<class T> struct B{
    using AnotherAlias = T::MemberTypeAlias; // no disambiguator req
    typename T::MemberTypeAlias* ptr; // REQ    !
};

template<class T> struct A{
    template <class R>
    R convert(T value){return static_cast<R>(value);}
};

template <class T> T foo(){
    A<int> a; 
    return a.template convert<T>(42);
}

int main(){
    B<A>::AnotherAlias value = 42.0f; // OUTSIDE TEMPLATE DECL-> NO DIS. REQ.
}

