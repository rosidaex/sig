#ifndef     sig_h
    #define sig_h
template<typename _RET = void>
class sig {
private:
    _RET(*onfunc)();
public:
    sig() {}
    sig(_RET(*func)()) {
        onfunc = func;
    }
    void on(_RET(*func)()) {
        onfunc = func;
    }
    _RET emit() {
        return onfunc();
    }
};

#endif   // sig_h