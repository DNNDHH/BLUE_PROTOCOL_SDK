#pragma once

 

// Package: Loading

#include "Basic.hpp"


namespace SDK::Params
{

// Function Loading.Loading_C.ExecuteUbergraph_Loading
// 0x0020 (0x0020 - 0x0000)
struct Loading_C_ExecuteUbergraph_Loading final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5E41[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlayingAnimation_ReturnValue;           // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E42[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Loading_C_ExecuteUbergraph_Loading) == 0x000008, "Wrong alignment on Loading_C_ExecuteUbergraph_Loading");
static_assert(sizeof(Loading_C_ExecuteUbergraph_Loading) == 0x000020, "Wrong size on Loading_C_ExecuteUbergraph_Loading");
static_assert(offsetof(Loading_C_ExecuteUbergraph_Loading, EntryPoint) == 0x000000, "Member 'Loading_C_ExecuteUbergraph_Loading::EntryPoint' has a wrong offset!");
static_assert(offsetof(Loading_C_ExecuteUbergraph_Loading, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'Loading_C_ExecuteUbergraph_Loading::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Loading_C_ExecuteUbergraph_Loading, CallFunc_IsPlayingAnimation_ReturnValue) == 0x000010, "Member 'Loading_C_ExecuteUbergraph_Loading::CallFunc_IsPlayingAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Loading_C_ExecuteUbergraph_Loading, CallFunc_Not_PreBool_ReturnValue) == 0x000011, "Member 'Loading_C_ExecuteUbergraph_Loading::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(Loading_C_ExecuteUbergraph_Loading, CallFunc_PlayAnimation_ReturnValue_1) == 0x000018, "Member 'Loading_C_ExecuteUbergraph_Loading::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

}

