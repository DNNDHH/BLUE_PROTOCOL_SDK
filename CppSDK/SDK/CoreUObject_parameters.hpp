#pragma once

 

// Package: CoreUObject

#include "Basic.hpp"


namespace SDK::Params
{

// Function CoreUObject.Object.ExecuteUbergraph
// 0x0004 (0x0004 - 0x0000)
struct Object_ExecuteUbergraph final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(Object_ExecuteUbergraph) == 0x000004, "Wrong alignment on Object_ExecuteUbergraph");
static_assert(sizeof(Object_ExecuteUbergraph) == 0x000004, "Wrong size on Object_ExecuteUbergraph");
static_assert(offsetof(Object_ExecuteUbergraph, EntryPoint) == 0x000000, "Member 'Object_ExecuteUbergraph::EntryPoint' has a wrong offset!");

}
