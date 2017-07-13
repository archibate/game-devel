#include <math.h>
#include <complex.h>

void trans(float &x, float &y, float R)
{
	_Complex float z = x + y * I;
	z = R / (R + cabsf(z));
	x = crealf(z);
	y = cimagf(z);
}

int main(int argc, char *argv[])
{
}


/*
auto   double   int   struct
break   else   long   switch
case   enum   register   typedef
char   extern   return   union
const   float   short   unsigned
continue   for   signed   void
default   goto   sizeof   volatile
do   if   static   while  noreturn

and   dynamic_cast   operator   true
and_eq   explicit   or   try    char32_t
asm   export   or_eq   typeid    static_assert
bitand   false   char16_t  private   typename
bitor   friend   protected   using   final
bool   inline   public   virtual     alignas
catch   mutable   reinterpret_cast   wchar_t
class   namespace   static_cast   xor
compl   new   template   xor_eq   noexcept
const_cast   not   this    thread_local
delete   not_eq   throw    decltype   char16_t
constexpr  alignof   nullptr  override   complex

_Alignas _Alignof _Atomic _Bool _Complex
_Generic _Imaginary _Noreturn _Static_assert
_Thread_local _Pragma
*/
