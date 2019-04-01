class college{
	protected:
    string c_n;
    int c_c;
    public:
    college(string cn,int cd){
        c_n = cn;
        c_c = cd;
    }
    int college_code(){return c_c;}
    string college_name(){return c_n;}
}
