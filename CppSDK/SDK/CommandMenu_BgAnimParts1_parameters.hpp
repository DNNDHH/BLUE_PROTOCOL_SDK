#pragma once

 

// Package: CommandMenu_BgAnimParts1

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function CommandMenu_BgAnimParts1.CommandMenu_BgAnimParts1_C.ExecuteUbergraph_CommandMenu_BgAnimParts1
// 0x0088 (0x0088 - 0x0000)
struct CommandMenu_BgAnimParts1_C_ExecuteUbergraph_CommandMenu_BgAnimParts1 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_StartTime;                      // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54EF[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue_1;         // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue_2;         // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue_3;         // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0024(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_1;               // 0x002C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54F0[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue_4;         // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54F1[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue_5;         // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54F2[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue_6;         // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54F3[0x4];                                     // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_3;              // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue_7;         // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue_8;         // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_4;              // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_5;              // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenu_BgAnimParts1_C_ExecuteUbergraph_CommandMenu_BgAnimParts1) == 0x000008, "Wrong alignment on CommandMenu_BgAnimParts1_C_ExecuteUbergraph_CommandMenu_BgAnimParts1");
static_assert(sizeof(CommandMenu_BgAnimParts1_C_ExecuteUbergraph_CommandMenu_BgAnimParts1) == 0x000088, "Wrong size on CommandMenu_BgAnimParts1_C_ExecuteUbergraph_CommandMenu_BgAnimParts1");
static_assert(offsetof(CommandMenu_BgAnimParts1_C_ExecuteUbergraph_CommandMenu_BgAnimParts1, EntryPoint) == 0x000000, "Member 'CommandMenu_BgAnimParts1_C_ExecuteUbergraph_CommandMenu_BgAnimParts1::EntryPoint' has a wrong offset!");
static_assert(offsetof(CommandMenu_BgAnimParts1_C_ExecuteUbergraph_CommandMenu_BgAnimParts1, K2Node_CustomEvent_StartTime) == 0x000004, "Member 'CommandMenu_BgAnimParts1_C_ExecuteUbergraph_CommandMenu_BgAnimParts1::K2Node_CustomEvent_StartTime' has a wrong offset!");
static_assert(offsetof(CommandMenu_BgAnimParts1_C_ExecuteUbergraph_CommandMenu_BgAnimParts1, CallFunc_RandomFloatInRange_ReturnValue) == 0x000008, "Member 'CommandMenu_BgAnimParts1_C_ExecuteUbergraph_CommandMenu_BgAnimParts1::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_BgAnimParts1_C_ExecuteUbergraph_CommandMenu_BgAnimParts1, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'CommandMenu_BgAnimParts1_C_ExecuteUbergraph_CommandMenu_BgAnimParts1::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_BgAnimParts1_C_ExecuteUbergraph_CommandMenu_BgAnimParts1, CallFunc_RandomFloatInRange_ReturnValue_1) == 0x000018, "Member 'CommandMenu_BgAnimParts1_C_ExecuteUbergraph_CommandMenu_BgAnimParts1::CallFunc_RandomFloatInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_BgAnimParts1_C_ExecuteUbergraph_CommandMenu_BgAnimParts1, CallFunc_RandomFloatInRange_ReturnValue_2) == 0x00001C, "Member 'CommandMenu_BgAnimParts1_C_ExecuteUbergraph_CommandMenu_BgAnimParts1::CallFunc_RandomFloatInRange_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommandMenu_BgAnimParts1_C_ExecuteUbergraph_CommandMenu_BgAnimParts1, CallFunc_RandomFloatInRange_ReturnValue_3) == 0x000020, "Member 'CommandMenu_BgAnimParts1_C_ExecuteUbergraph_CommandMenu_BgAnimParts1::CallFunc_RandomFloatInRange_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommandMenu_BgAnimParts1_C_ExecuteUbergraph_CommandMenu_BgAnimParts1, CallFunc_MakeVector2D_ReturnValue) == 0x000024, "Member 'CommandMenu_BgAnimParts1_C_ExecuteUbergraph_CommandMenu_BgAnimParts1::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_BgAnimParts1_C_ExecuteUbergraph_CommandMenu_BgAnimParts1, CallFunc_MakeVector2D_ReturnValue_1) == 0x00002C, "Member 'CommandMenu_BgAnimParts1_C_ExecuteUbergraph_CommandMenu_BgAnimParts1::CallFunc_MakeVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_BgAnimParts1_C_ExecuteUbergraph_CommandMenu_BgAnimParts1, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000038, "Member 'CommandMenu_BgAnimParts1_C_ExecuteUbergraph_CommandMenu_BgAnimParts1::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_BgAnimParts1_C_ExecuteUbergraph_CommandMenu_BgAnimParts1, CallFunc_RandomFloatInRange_ReturnValue_4) == 0x000040, "Member 'CommandMenu_BgAnimParts1_C_ExecuteUbergraph_CommandMenu_BgAnimParts1::CallFunc_RandomFloatInRange_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CommandMenu_BgAnimParts1_C_ExecuteUbergraph_CommandMenu_BgAnimParts1, CallFunc_PlayAnimation_ReturnValue_1) == 0x000048, "Member 'CommandMenu_BgAnimParts1_C_ExecuteUbergraph_CommandMenu_BgAnimParts1::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_BgAnimParts1_C_ExecuteUbergraph_CommandMenu_BgAnimParts1, CallFunc_RandomFloatInRange_ReturnValue_5) == 0x000050, "Member 'CommandMenu_BgAnimParts1_C_ExecuteUbergraph_CommandMenu_BgAnimParts1::CallFunc_RandomFloatInRange_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(CommandMenu_BgAnimParts1_C_ExecuteUbergraph_CommandMenu_BgAnimParts1, CallFunc_PlayAnimation_ReturnValue_2) == 0x000058, "Member 'CommandMenu_BgAnimParts1_C_ExecuteUbergraph_CommandMenu_BgAnimParts1::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommandMenu_BgAnimParts1_C_ExecuteUbergraph_CommandMenu_BgAnimParts1, CallFunc_RandomFloatInRange_ReturnValue_6) == 0x000060, "Member 'CommandMenu_BgAnimParts1_C_ExecuteUbergraph_CommandMenu_BgAnimParts1::CallFunc_RandomFloatInRange_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(CommandMenu_BgAnimParts1_C_ExecuteUbergraph_CommandMenu_BgAnimParts1, CallFunc_PlayAnimation_ReturnValue_3) == 0x000068, "Member 'CommandMenu_BgAnimParts1_C_ExecuteUbergraph_CommandMenu_BgAnimParts1::CallFunc_PlayAnimation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommandMenu_BgAnimParts1_C_ExecuteUbergraph_CommandMenu_BgAnimParts1, CallFunc_RandomFloatInRange_ReturnValue_7) == 0x000070, "Member 'CommandMenu_BgAnimParts1_C_ExecuteUbergraph_CommandMenu_BgAnimParts1::CallFunc_RandomFloatInRange_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(CommandMenu_BgAnimParts1_C_ExecuteUbergraph_CommandMenu_BgAnimParts1, CallFunc_RandomFloatInRange_ReturnValue_8) == 0x000074, "Member 'CommandMenu_BgAnimParts1_C_ExecuteUbergraph_CommandMenu_BgAnimParts1::CallFunc_RandomFloatInRange_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(CommandMenu_BgAnimParts1_C_ExecuteUbergraph_CommandMenu_BgAnimParts1, CallFunc_PlayAnimation_ReturnValue_4) == 0x000078, "Member 'CommandMenu_BgAnimParts1_C_ExecuteUbergraph_CommandMenu_BgAnimParts1::CallFunc_PlayAnimation_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CommandMenu_BgAnimParts1_C_ExecuteUbergraph_CommandMenu_BgAnimParts1, CallFunc_PlayAnimation_ReturnValue_5) == 0x000080, "Member 'CommandMenu_BgAnimParts1_C_ExecuteUbergraph_CommandMenu_BgAnimParts1::CallFunc_PlayAnimation_ReturnValue_5' has a wrong offset!");

// Function CommandMenu_BgAnimParts1.CommandMenu_BgAnimParts1_C.SetPat
// 0x0004 (0x0004 - 0x0000)
struct CommandMenu_BgAnimParts1_C_SetPat final
{
public:
	float                                         StartTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenu_BgAnimParts1_C_SetPat) == 0x000004, "Wrong alignment on CommandMenu_BgAnimParts1_C_SetPat");
static_assert(sizeof(CommandMenu_BgAnimParts1_C_SetPat) == 0x000004, "Wrong size on CommandMenu_BgAnimParts1_C_SetPat");
static_assert(offsetof(CommandMenu_BgAnimParts1_C_SetPat, StartTime) == 0x000000, "Member 'CommandMenu_BgAnimParts1_C_SetPat::StartTime' has a wrong offset!");

// Function CommandMenu_BgAnimParts1.CommandMenu_BgAnimParts1_C.StopAnim
// 0x0010 (0x0010 - 0x0000)
struct CommandMenu_BgAnimParts1_C_StopAnim final
{
public:
	class UWidgetAnimation*                       InAnim;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommandMenu_BgAnimParts1_C_StopAnim) == 0x000008, "Wrong alignment on CommandMenu_BgAnimParts1_C_StopAnim");
static_assert(sizeof(CommandMenu_BgAnimParts1_C_StopAnim) == 0x000010, "Wrong size on CommandMenu_BgAnimParts1_C_StopAnim");
static_assert(offsetof(CommandMenu_BgAnimParts1_C_StopAnim, InAnim) == 0x000000, "Member 'CommandMenu_BgAnimParts1_C_StopAnim::InAnim' has a wrong offset!");
static_assert(offsetof(CommandMenu_BgAnimParts1_C_StopAnim, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000008, "Member 'CommandMenu_BgAnimParts1_C_StopAnim::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");

}

