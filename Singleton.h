class Singleton{
   public:
      static Singleton* Instance();
   protected:
      Singleton();
      Singleton(const Singleton & ) ;
      Singleton &operator= (const Singleton & ) ;
   private:
      static Singleton* pinstance;
};