class sig {
private:
    void(*onfunc)();
public:
    sig() {}
    sig(void(*func)()) {
        onfunc = func;
    }
    void on(void(*func)()) {
        onfunc = func;
    }
    void emit() {
        onfunc();
    }
};