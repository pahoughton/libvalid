// 2017-04-19 (cc) <paul4hough@gmail.com>

#include <valid/verify.hpp>

valid::verify & v_verify01( void );

int main( int argc, const char * argv[] ) {

  valid::verify & t( v_verify01() );

  std::cout << t << std::endl;

  return( ! t.is_valid() );
}
