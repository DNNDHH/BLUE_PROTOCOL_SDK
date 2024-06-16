#pragma once

 

// Package: P020_MarkIcon

#include "Basic.hpp"


namespace SDK::Params
{

// Function P020_MarkIcon.P020_MarkIcon_C.ExecuteUbergraph_P020_MarkIcon
// 0x0020 (0x0020 - 0x0000)
struct P020_MarkIcon_C_ExecuteUbergraph_P020_MarkIcon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7D12[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D13[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(P020_MarkIcon_C_ExecuteUbergraph_P020_MarkIcon) == 0x000008, "Wrong alignment on P020_MarkIcon_C_ExecuteUbergraph_P020_MarkIcon");
static_assert(sizeof(P020_MarkIcon_C_ExecuteUbergraph_P020_MarkIcon) == 0x000020, "Wrong size on P020_MarkIcon_C_ExecuteUbergraph_P020_MarkIcon");
static_assert(offsetof(P020_MarkIcon_C_ExecuteUbergraph_P020_MarkIcon, EntryPoint) == 0x000000, "Member 'P020_MarkIcon_C_ExecuteUbergraph_P020_MarkIcon::EntryPoint' has a wrong offset!");
static_assert(offsetof(P020_MarkIcon_C_ExecuteUbergraph_P020_MarkIcon, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'P020_MarkIcon_C_ExecuteUbergraph_P020_MarkIcon::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(P020_MarkIcon_C_ExecuteUbergraph_P020_MarkIcon, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000010, "Member 'P020_MarkIcon_C_ExecuteUbergraph_P020_MarkIcon::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(P020_MarkIcon_C_ExecuteUbergraph_P020_MarkIcon, K2Node_Event_IsDesignTime) == 0x000011, "Member 'P020_MarkIcon_C_ExecuteUbergraph_P020_MarkIcon::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(P020_MarkIcon_C_ExecuteUbergraph_P020_MarkIcon, CallFunc_PlayAnimation_ReturnValue_1) == 0x000018, "Member 'P020_MarkIcon_C_ExecuteUbergraph_P020_MarkIcon::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

// Function P020_MarkIcon.P020_MarkIcon_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct P020_MarkIcon_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(P020_MarkIcon_C_PreConstruct) == 0x000001, "Wrong alignment on P020_MarkIcon_C_PreConstruct");
static_assert(sizeof(P020_MarkIcon_C_PreConstruct) == 0x000001, "Wrong size on P020_MarkIcon_C_PreConstruct");
static_assert(offsetof(P020_MarkIcon_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'P020_MarkIcon_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function P020_MarkIcon.P020_MarkIcon_C.Show Icon BP
// 0x0020 (0x0020 - 0x0000)
struct P020_MarkIcon_C_Show_Icon_BP final
{
public:
	bool                                          bVisible;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D14[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(P020_MarkIcon_C_Show_Icon_BP) == 0x000008, "Wrong alignment on P020_MarkIcon_C_Show_Icon_BP");
static_assert(sizeof(P020_MarkIcon_C_Show_Icon_BP) == 0x000020, "Wrong size on P020_MarkIcon_C_Show_Icon_BP");
static_assert(offsetof(P020_MarkIcon_C_Show_Icon_BP, bVisible) == 0x000000, "Member 'P020_MarkIcon_C_Show_Icon_BP::bVisible' has a wrong offset!");
static_assert(offsetof(P020_MarkIcon_C_Show_Icon_BP, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'P020_MarkIcon_C_Show_Icon_BP::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(P020_MarkIcon_C_Show_Icon_BP, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'P020_MarkIcon_C_Show_Icon_BP::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(P020_MarkIcon_C_Show_Icon_BP, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000018, "Member 'P020_MarkIcon_C_Show_Icon_BP::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");

}

