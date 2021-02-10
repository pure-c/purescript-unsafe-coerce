#include <purescript.h>

PURS_FFI_FUNC_1(Unsafe_Coerce_unsafeCoerce, x) {
	PURS_ANY_RETAIN(x);
	return x;
}
