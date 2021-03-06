#pragma once

#include "ClassInfo.h"
#include "PropertyInfo.h"
#include "Util.h"
#include "Test.h"

D2D_DECL_TYPE_INFO(float)
D2D_DECL_TYPE_INFO(int)
D2D_DECL_TYPE_INFO(bool)
D2D_DECL_TYPE_INFO(string)	// note namespace qualification fail: std::string

D2D_DECL_TYPE_INFO(Vector2)
	D2D_DECLARE_PROPERTY_INFO(Vector2, float, X)
	D2D_DECLARE_PROPERTY_INFO(Vector2, float, Y)

D2D_DECL_TYPE_INFO(CFoo)
	D2D_DECLARE_PROPERTY_INFO(CFoo, Vector2, Position)
	D2D_DECLARE_PROPERTY_INFO(CFoo, bool, Flag)
	D2D_DECLARE_PROPERTY_INFO(CFoo, string, Str)
	D2D_DECLARE_ARRAY_PROPERTY_INFO_EX(CFoo, float, Array, PushToArray, GetArray, ArraySize)
	D2D_DECLARE_PTR_PROPERTY_INFO(CFoo, Vector2, PtrPosition)
	//D2D_DECLARE_PTR_ARRAY_PROPERTY_INFO_EX(CFoo, CFoo*, Children, PushChild, GetElement, ChildrenCount)

D2D_DECL_DERIVED_TYPE_INFO(CBarDerived, CFoo)
	D2D_DECLARE_PROPERTY_INFO(CBarDerived, int, H)
	D2D_DECLARE_PTR_PROPERTY_INFO(CBarDerived, CBarDerived, SingleBarPtr)
