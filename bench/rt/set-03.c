// set-03: join over set properties
// should be analyzed without disjunctions (disj_off)
void main( ){
  int a;
  int b;
  _memcad( "decl_setvars( E, F )" );
  _memcad( "set_assume( a $in E )" );
  if( b ){
    _memcad( "set_assume( E $sub F )" );
  } else {
    _memcad( "set_assume( a $in F )" );
  }
  _memcad( "set_check( a $in F )" );
  a = a + 1;
}
