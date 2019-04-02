
class college
{
  protected:
    string college_name;
    string college_code;

  public:
    college(string cn, string cd)
    {
        college_name = cn;
        college_code = cd;
    }
    string collegecode() { return college_code; }
    string collegename() { return college_name; }
};
