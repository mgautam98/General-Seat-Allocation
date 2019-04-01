class seat : public Branch{
  protected:
	  int prf;
  public:
	  void set_preference(int ch){prf=ch;}
    int preference(){return prf;}
}
