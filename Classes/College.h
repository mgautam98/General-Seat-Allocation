class college{
	protected:
    string college_name;
    int college_code;
    public:
    college(string cn,int cd,int pref){
        c_n = cn;
        c_c = cd;
    }
    int college_code(){return c_c;}
    string college_name(){return c_n;}
}
