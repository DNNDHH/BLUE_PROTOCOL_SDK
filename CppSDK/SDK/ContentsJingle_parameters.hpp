#pragma once

 

// Package: ContentsJingle

#include "Basic.hpp"


namespace SDK::Params
{

// Function ContentsJingle.ContentsJingle_C.ExecuteUbergraph_ContentsJingle
// 0x0010 (0x0010 - 0x0000)
struct ContentsJingle_C_ExecuteUbergraph_ContentsJingle final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_74E7[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ContentsJingle_C_ExecuteUbergraph_ContentsJingle) == 0x000008, "Wrong alignment on ContentsJingle_C_ExecuteUbergraph_ContentsJingle");
static_assert(sizeof(ContentsJingle_C_ExecuteUbergraph_ContentsJingle) == 0x000010, "Wrong size on ContentsJingle_C_ExecuteUbergraph_ContentsJingle");
static_assert(offsetof(ContentsJingle_C_ExecuteUbergraph_ContentsJingle, EntryPoint) == 0x000000, "Member 'ContentsJingle_C_ExecuteUbergraph_ContentsJingle::EntryPoint' has a wrong offset!");
static_assert(offsetof(ContentsJingle_C_ExecuteUbergraph_ContentsJingle, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'ContentsJingle_C_ExecuteUbergraph_ContentsJingle::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function ContentsJingle.ContentsJingle_C.IsAnyAnimationPlaying?
// 0x0004 (0x0004 - 0x0000)
struct ContentsJingle_C_IsAnyAnimationPlaying_ final
{
public:
	bool                                          bIsPlaying;                                        // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ContentsJingle_C_IsAnyAnimationPlaying_) == 0x000001, "Wrong alignment on ContentsJingle_C_IsAnyAnimationPlaying_");
static_assert(sizeof(ContentsJingle_C_IsAnyAnimationPlaying_) == 0x000004, "Wrong size on ContentsJingle_C_IsAnyAnimationPlaying_");
static_assert(offsetof(ContentsJingle_C_IsAnyAnimationPlaying_, bIsPlaying) == 0x000000, "Member 'ContentsJingle_C_IsAnyAnimationPlaying_::bIsPlaying' has a wrong offset!");
static_assert(offsetof(ContentsJingle_C_IsAnyAnimationPlaying_, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000001, "Member 'ContentsJingle_C_IsAnyAnimationPlaying_::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(ContentsJingle_C_IsAnyAnimationPlaying_, CallFunc_IsValid_ReturnValue) == 0x000002, "Member 'ContentsJingle_C_IsAnyAnimationPlaying_::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ContentsJingle_C_IsAnyAnimationPlaying_, CallFunc_BooleanOR_ReturnValue) == 0x000003, "Member 'ContentsJingle_C_IsAnyAnimationPlaying_::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

}

