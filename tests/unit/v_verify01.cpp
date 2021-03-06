// 2017-04-19 (cc) <paul4hough@gmail.com>

#include <valid/verify.hpp>


class validate {
public:
  validate( int v = 0 ) : m_v(v) {};
  int        val(void) const { return m_v; };
  validate & val( int v ) { m_v = v; return( *this ); };
protected:
  int m_v;
};

valid::verify &
v_verify01( void )
{
  static VVDESC( "class valid::verify" );
  {
    VVWHEN( validate t );

    VVTRUE( t.val() == 0 );
    VVTRUE( t.val(10).val() == 10 );
   }
  {
    VVWHEN( validate t(5) );

    VVTRUE( t.val() == 5 );
    VVFILE( "data/verify.01" );
  }
  return( VALID_VALIDATOR );
}
