/*	CFCGTypes.h
	The Core Graphics geometry types, which CoreFoundation owns as in the macOS 14+ SDK, so that
	CoreFoundation clients see them without importing CoreGraphics.
*/

#if !defined(__COREFOUNDATION_CFCGTYPES__)
#define __COREFOUNDATION_CFCGTYPES__ 1

#include <float.h>

#define CF_DEFINES_CG_TYPES 1

#if defined(__LP64__) && __LP64__
#define CGFLOAT_TYPE double
#define CGFLOAT_IS_DOUBLE 1
#define CGFLOAT_MIN DBL_MIN
#define CGFLOAT_MAX DBL_MAX
#define CGFLOAT_EPSILON DBL_EPSILON
#else
#define CGFLOAT_TYPE float
#define CGFLOAT_IS_DOUBLE 0
#define CGFLOAT_MIN FLT_MIN
#define CGFLOAT_MAX FLT_MAX
#define CGFLOAT_EPSILON FLT_EPSILON
#endif

typedef CGFLOAT_TYPE CGFloat;
#define CGFLOAT_DEFINED 1

struct CGPoint {
    CGFloat x;
    CGFloat y;
};
typedef struct CGPoint CGPoint;

struct CGSize {
    CGFloat width;
    CGFloat height;
};
typedef struct CGSize CGSize;

struct CGVector {
    CGFloat dx;
    CGFloat dy;
};
typedef struct CGVector CGVector;
#define CGVECTOR_DEFINED 1

struct CGRect {
    CGPoint origin;
    CGSize size;
};
typedef struct CGRect CGRect;

#endif /* ! __COREFOUNDATION_CFCGTYPES__ */
