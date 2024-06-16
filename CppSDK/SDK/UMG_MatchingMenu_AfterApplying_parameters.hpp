#pragma once

 

// Package: UMG_MatchingMenu_AfterApplying

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.OnClickSupplyIcon__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UMG_MatchingMenu_AfterApplying_C_OnClickSupplyIcon__DelegateSignature final
{
public:
	struct FSBDungeonSupply                       DungeonSupply;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(UMG_MatchingMenu_AfterApplying_C_OnClickSupplyIcon__DelegateSignature) == 0x000004, "Wrong alignment on UMG_MatchingMenu_AfterApplying_C_OnClickSupplyIcon__DelegateSignature");
static_assert(sizeof(UMG_MatchingMenu_AfterApplying_C_OnClickSupplyIcon__DelegateSignature) == 0x000008, "Wrong size on UMG_MatchingMenu_AfterApplying_C_OnClickSupplyIcon__DelegateSignature");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_OnClickSupplyIcon__DelegateSignature, DungeonSupply) == 0x000000, "Member 'UMG_MatchingMenu_AfterApplying_C_OnClickSupplyIcon__DelegateSignature::DungeonSupply' has a wrong offset!");

// Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.ExecuteUbergraph_UMG_MatchingMenu_AfterApplying
// 0x0098 (0x0098 - 0x0000)
struct UMG_MatchingMenu_AfterApplying_C_ExecuteUbergraph_UMG_MatchingMenu_AfterApplying final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_74C3[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0008(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_74C4[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_DefaultGameInstance_C*              K2Node_DynamicCast_AsBP_Default_Game_Instance;     // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_74C5[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x002C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_74C6[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue_1;            // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0048(0x0010)(ZeroConstructor, NoDestructor)
	class UBP_DefaultGameInstance_C*              K2Node_DynamicCast_AsBP_Default_Game_Instance_1;   // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_74C7[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetActiveWidget_ReturnValue;              // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue_1;         // 0x0072(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0073(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_74C8[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidgetAnimation*                       K2Node_Select_Default;                             // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBDungeonSupply                       K2Node_ComponentBoundEvent_DungeonSupply;          // 0x0088(0x0008)(NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MatchingMenu_AfterApplying_C_ExecuteUbergraph_UMG_MatchingMenu_AfterApplying) == 0x000008, "Wrong alignment on UMG_MatchingMenu_AfterApplying_C_ExecuteUbergraph_UMG_MatchingMenu_AfterApplying");
static_assert(sizeof(UMG_MatchingMenu_AfterApplying_C_ExecuteUbergraph_UMG_MatchingMenu_AfterApplying) == 0x000098, "Wrong size on UMG_MatchingMenu_AfterApplying_C_ExecuteUbergraph_UMG_MatchingMenu_AfterApplying");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_ExecuteUbergraph_UMG_MatchingMenu_AfterApplying, EntryPoint) == 0x000000, "Member 'UMG_MatchingMenu_AfterApplying_C_ExecuteUbergraph_UMG_MatchingMenu_AfterApplying::EntryPoint' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_ExecuteUbergraph_UMG_MatchingMenu_AfterApplying, Temp_bool_Variable) == 0x000004, "Member 'UMG_MatchingMenu_AfterApplying_C_ExecuteUbergraph_UMG_MatchingMenu_AfterApplying::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_ExecuteUbergraph_UMG_MatchingMenu_AfterApplying, Temp_bool_Variable_1) == 0x000005, "Member 'UMG_MatchingMenu_AfterApplying_C_ExecuteUbergraph_UMG_MatchingMenu_AfterApplying::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_ExecuteUbergraph_UMG_MatchingMenu_AfterApplying, Temp_byte_Variable) == 0x000006, "Member 'UMG_MatchingMenu_AfterApplying_C_ExecuteUbergraph_UMG_MatchingMenu_AfterApplying::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_ExecuteUbergraph_UMG_MatchingMenu_AfterApplying, K2Node_Event_Animation) == 0x000008, "Member 'UMG_MatchingMenu_AfterApplying_C_ExecuteUbergraph_UMG_MatchingMenu_AfterApplying::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_ExecuteUbergraph_UMG_MatchingMenu_AfterApplying, CallFunc_GetGameInstance_ReturnValue) == 0x000010, "Member 'UMG_MatchingMenu_AfterApplying_C_ExecuteUbergraph_UMG_MatchingMenu_AfterApplying::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_ExecuteUbergraph_UMG_MatchingMenu_AfterApplying, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000018, "Member 'UMG_MatchingMenu_AfterApplying_C_ExecuteUbergraph_UMG_MatchingMenu_AfterApplying::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_ExecuteUbergraph_UMG_MatchingMenu_AfterApplying, K2Node_DynamicCast_AsBP_Default_Game_Instance) == 0x000020, "Member 'UMG_MatchingMenu_AfterApplying_C_ExecuteUbergraph_UMG_MatchingMenu_AfterApplying::K2Node_DynamicCast_AsBP_Default_Game_Instance' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_ExecuteUbergraph_UMG_MatchingMenu_AfterApplying, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'UMG_MatchingMenu_AfterApplying_C_ExecuteUbergraph_UMG_MatchingMenu_AfterApplying::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_ExecuteUbergraph_UMG_MatchingMenu_AfterApplying, K2Node_CreateDelegate_OutputDelegate) == 0x00002C, "Member 'UMG_MatchingMenu_AfterApplying_C_ExecuteUbergraph_UMG_MatchingMenu_AfterApplying::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_ExecuteUbergraph_UMG_MatchingMenu_AfterApplying, CallFunc_GetGameInstance_ReturnValue_1) == 0x000040, "Member 'UMG_MatchingMenu_AfterApplying_C_ExecuteUbergraph_UMG_MatchingMenu_AfterApplying::CallFunc_GetGameInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_ExecuteUbergraph_UMG_MatchingMenu_AfterApplying, K2Node_CreateDelegate_OutputDelegate_1) == 0x000048, "Member 'UMG_MatchingMenu_AfterApplying_C_ExecuteUbergraph_UMG_MatchingMenu_AfterApplying::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_ExecuteUbergraph_UMG_MatchingMenu_AfterApplying, K2Node_DynamicCast_AsBP_Default_Game_Instance_1) == 0x000058, "Member 'UMG_MatchingMenu_AfterApplying_C_ExecuteUbergraph_UMG_MatchingMenu_AfterApplying::K2Node_DynamicCast_AsBP_Default_Game_Instance_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_ExecuteUbergraph_UMG_MatchingMenu_AfterApplying, K2Node_DynamicCast_bSuccess_1) == 0x000060, "Member 'UMG_MatchingMenu_AfterApplying_C_ExecuteUbergraph_UMG_MatchingMenu_AfterApplying::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_ExecuteUbergraph_UMG_MatchingMenu_AfterApplying, CallFunc_GetActiveWidget_ReturnValue) == 0x000068, "Member 'UMG_MatchingMenu_AfterApplying_C_ExecuteUbergraph_UMG_MatchingMenu_AfterApplying::CallFunc_GetActiveWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_ExecuteUbergraph_UMG_MatchingMenu_AfterApplying, CallFunc_EqualEqual_ObjectObject_ReturnValue_1) == 0x000070, "Member 'UMG_MatchingMenu_AfterApplying_C_ExecuteUbergraph_UMG_MatchingMenu_AfterApplying::CallFunc_EqualEqual_ObjectObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_ExecuteUbergraph_UMG_MatchingMenu_AfterApplying, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000071, "Member 'UMG_MatchingMenu_AfterApplying_C_ExecuteUbergraph_UMG_MatchingMenu_AfterApplying::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_ExecuteUbergraph_UMG_MatchingMenu_AfterApplying, CallFunc_IsAnimationPlaying_ReturnValue_1) == 0x000072, "Member 'UMG_MatchingMenu_AfterApplying_C_ExecuteUbergraph_UMG_MatchingMenu_AfterApplying::CallFunc_IsAnimationPlaying_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_ExecuteUbergraph_UMG_MatchingMenu_AfterApplying, CallFunc_BooleanOR_ReturnValue) == 0x000073, "Member 'UMG_MatchingMenu_AfterApplying_C_ExecuteUbergraph_UMG_MatchingMenu_AfterApplying::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_ExecuteUbergraph_UMG_MatchingMenu_AfterApplying, K2Node_Select_Default) == 0x000078, "Member 'UMG_MatchingMenu_AfterApplying_C_ExecuteUbergraph_UMG_MatchingMenu_AfterApplying::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_ExecuteUbergraph_UMG_MatchingMenu_AfterApplying, CallFunc_PlayAnimationForward_ReturnValue) == 0x000080, "Member 'UMG_MatchingMenu_AfterApplying_C_ExecuteUbergraph_UMG_MatchingMenu_AfterApplying::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_ExecuteUbergraph_UMG_MatchingMenu_AfterApplying, K2Node_ComponentBoundEvent_DungeonSupply) == 0x000088, "Member 'UMG_MatchingMenu_AfterApplying_C_ExecuteUbergraph_UMG_MatchingMenu_AfterApplying::K2Node_ComponentBoundEvent_DungeonSupply' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_ExecuteUbergraph_UMG_MatchingMenu_AfterApplying, K2Node_Select_Default_1) == 0x000090, "Member 'UMG_MatchingMenu_AfterApplying_C_ExecuteUbergraph_UMG_MatchingMenu_AfterApplying::K2Node_Select_Default_1' has a wrong offset!");

// Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.BndEvt__UMG_MatchingMenu_AfterApplying_UMG_MatchingMenu_MissionDetail_K2Node_ComponentBoundEvent_3_OnClickSupplyIcon__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UMG_MatchingMenu_AfterApplying_C_BndEvt__UMG_MatchingMenu_AfterApplying_UMG_MatchingMenu_MissionDetail_K2Node_ComponentBoundEvent_3_OnClickSupplyIcon__DelegateSignature final
{
public:
	struct FSBDungeonSupply                       DungeonSupply;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(UMG_MatchingMenu_AfterApplying_C_BndEvt__UMG_MatchingMenu_AfterApplying_UMG_MatchingMenu_MissionDetail_K2Node_ComponentBoundEvent_3_OnClickSupplyIcon__DelegateSignature) == 0x000004, "Wrong alignment on UMG_MatchingMenu_AfterApplying_C_BndEvt__UMG_MatchingMenu_AfterApplying_UMG_MatchingMenu_MissionDetail_K2Node_ComponentBoundEvent_3_OnClickSupplyIcon__DelegateSignature");
static_assert(sizeof(UMG_MatchingMenu_AfterApplying_C_BndEvt__UMG_MatchingMenu_AfterApplying_UMG_MatchingMenu_MissionDetail_K2Node_ComponentBoundEvent_3_OnClickSupplyIcon__DelegateSignature) == 0x000008, "Wrong size on UMG_MatchingMenu_AfterApplying_C_BndEvt__UMG_MatchingMenu_AfterApplying_UMG_MatchingMenu_MissionDetail_K2Node_ComponentBoundEvent_3_OnClickSupplyIcon__DelegateSignature");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_BndEvt__UMG_MatchingMenu_AfterApplying_UMG_MatchingMenu_MissionDetail_K2Node_ComponentBoundEvent_3_OnClickSupplyIcon__DelegateSignature, DungeonSupply) == 0x000000, "Member 'UMG_MatchingMenu_AfterApplying_C_BndEvt__UMG_MatchingMenu_AfterApplying_UMG_MatchingMenu_MissionDetail_K2Node_ComponentBoundEvent_3_OnClickSupplyIcon__DelegateSignature::DungeonSupply' has a wrong offset!");

// Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct UMG_MatchingMenu_AfterApplying_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MatchingMenu_AfterApplying_C_OnAnimationFinished) == 0x000008, "Wrong alignment on UMG_MatchingMenu_AfterApplying_C_OnAnimationFinished");
static_assert(sizeof(UMG_MatchingMenu_AfterApplying_C_OnAnimationFinished) == 0x000008, "Wrong size on UMG_MatchingMenu_AfterApplying_C_OnAnimationFinished");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_OnAnimationFinished, Animation) == 0x000000, "Member 'UMG_MatchingMenu_AfterApplying_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.WaitIn
// 0x0008 (0x0008 - 0x0000)
struct UMG_MatchingMenu_AfterApplying_C_WaitIn final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MatchingMenu_AfterApplying_C_WaitIn) == 0x000008, "Wrong alignment on UMG_MatchingMenu_AfterApplying_C_WaitIn");
static_assert(sizeof(UMG_MatchingMenu_AfterApplying_C_WaitIn) == 0x000008, "Wrong size on UMG_MatchingMenu_AfterApplying_C_WaitIn");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_WaitIn, CallFunc_PlayAnimationForward_ReturnValue) == 0x000000, "Member 'UMG_MatchingMenu_AfterApplying_C_WaitIn::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

// Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.ConfirmIn
// 0x0008 (0x0008 - 0x0000)
struct UMG_MatchingMenu_AfterApplying_C_ConfirmIn final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MatchingMenu_AfterApplying_C_ConfirmIn) == 0x000008, "Wrong alignment on UMG_MatchingMenu_AfterApplying_C_ConfirmIn");
static_assert(sizeof(UMG_MatchingMenu_AfterApplying_C_ConfirmIn) == 0x000008, "Wrong size on UMG_MatchingMenu_AfterApplying_C_ConfirmIn");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_ConfirmIn, CallFunc_PlayAnimationForward_ReturnValue) == 0x000000, "Member 'UMG_MatchingMenu_AfterApplying_C_ConfirmIn::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

// Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.Out
// 0x0010 (0x0010 - 0x0000)
struct UMG_MatchingMenu_AfterApplying_C_Out final
{
public:
	class UWidget*                                CallFunc_GetActiveWidget_ReturnValue;              // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_MatchingMenu_AfterApplying_C_Out) == 0x000008, "Wrong alignment on UMG_MatchingMenu_AfterApplying_C_Out");
static_assert(sizeof(UMG_MatchingMenu_AfterApplying_C_Out) == 0x000010, "Wrong size on UMG_MatchingMenu_AfterApplying_C_Out");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_Out, CallFunc_GetActiveWidget_ReturnValue) == 0x000000, "Member 'UMG_MatchingMenu_AfterApplying_C_Out::CallFunc_GetActiveWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_Out, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000008, "Member 'UMG_MatchingMenu_AfterApplying_C_Out::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.WaitOut
// 0x0008 (0x0008 - 0x0000)
struct UMG_MatchingMenu_AfterApplying_C_WaitOut final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MatchingMenu_AfterApplying_C_WaitOut) == 0x000008, "Wrong alignment on UMG_MatchingMenu_AfterApplying_C_WaitOut");
static_assert(sizeof(UMG_MatchingMenu_AfterApplying_C_WaitOut) == 0x000008, "Wrong size on UMG_MatchingMenu_AfterApplying_C_WaitOut");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_WaitOut, CallFunc_PlayAnimationForward_ReturnValue) == 0x000000, "Member 'UMG_MatchingMenu_AfterApplying_C_WaitOut::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

// Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.ConfirmOut
// 0x0008 (0x0008 - 0x0000)
struct UMG_MatchingMenu_AfterApplying_C_ConfirmOut final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MatchingMenu_AfterApplying_C_ConfirmOut) == 0x000008, "Wrong alignment on UMG_MatchingMenu_AfterApplying_C_ConfirmOut");
static_assert(sizeof(UMG_MatchingMenu_AfterApplying_C_ConfirmOut) == 0x000008, "Wrong size on UMG_MatchingMenu_AfterApplying_C_ConfirmOut");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_ConfirmOut, CallFunc_PlayAnimationForward_ReturnValue) == 0x000000, "Member 'UMG_MatchingMenu_AfterApplying_C_ConfirmOut::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

// Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.SetDungeonInfo
// 0x0238 (0x0238 - 0x0000)
struct UMG_MatchingMenu_AfterApplying_C_SetDungeonInfo final
{
public:
	class FName                                   GameContentId;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         HelpMatchingModeId;                                // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_74C9[0x2];                                     // 0x000E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBDungeonRecordList*                   CallFunc_GetDungeonRecordList_ReturnValue;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBMapInfo                             CallFunc_GetDungeonMapInfo_MapInfo;                // 0x0020(0x01E0)()
	bool                                          CallFunc_GetDungeonMapInfo_ReturnValue;            // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_74CA[0x7];                                     // 0x0201(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBDungeonRecord                       CallFunc_GetDungeonRecord_OutRecord;               // 0x0208(0x0030)()
};
static_assert(alignof(UMG_MatchingMenu_AfterApplying_C_SetDungeonInfo) == 0x000008, "Wrong alignment on UMG_MatchingMenu_AfterApplying_C_SetDungeonInfo");
static_assert(sizeof(UMG_MatchingMenu_AfterApplying_C_SetDungeonInfo) == 0x000238, "Wrong size on UMG_MatchingMenu_AfterApplying_C_SetDungeonInfo");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_SetDungeonInfo, GameContentId) == 0x000000, "Member 'UMG_MatchingMenu_AfterApplying_C_SetDungeonInfo::GameContentId' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_SetDungeonInfo, HelpMatchingModeId) == 0x000008, "Member 'UMG_MatchingMenu_AfterApplying_C_SetDungeonInfo::HelpMatchingModeId' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_SetDungeonInfo, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00000C, "Member 'UMG_MatchingMenu_AfterApplying_C_SetDungeonInfo::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_SetDungeonInfo, CallFunc_GetNetworkDataCache_IsValid) == 0x00000D, "Member 'UMG_MatchingMenu_AfterApplying_C_SetDungeonInfo::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_SetDungeonInfo, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000010, "Member 'UMG_MatchingMenu_AfterApplying_C_SetDungeonInfo::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_SetDungeonInfo, CallFunc_GetDungeonRecordList_ReturnValue) == 0x000018, "Member 'UMG_MatchingMenu_AfterApplying_C_SetDungeonInfo::CallFunc_GetDungeonRecordList_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_SetDungeonInfo, CallFunc_GetDungeonMapInfo_MapInfo) == 0x000020, "Member 'UMG_MatchingMenu_AfterApplying_C_SetDungeonInfo::CallFunc_GetDungeonMapInfo_MapInfo' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_SetDungeonInfo, CallFunc_GetDungeonMapInfo_ReturnValue) == 0x000200, "Member 'UMG_MatchingMenu_AfterApplying_C_SetDungeonInfo::CallFunc_GetDungeonMapInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_SetDungeonInfo, CallFunc_GetDungeonRecord_OutRecord) == 0x000208, "Member 'UMG_MatchingMenu_AfterApplying_C_SetDungeonInfo::CallFunc_GetDungeonRecord_OutRecord' has a wrong offset!");

// Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.SetTerm
// 0x0050 (0x0050 - 0x0000)
struct UMG_MatchingMenu_AfterApplying_C_SetTerm final
{
public:
	class FName                                   EventTerm;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_74CB[0x5];                                     // 0x000B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_74CC[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBGameInstance*                        CallFunc_GetSBGameInstance_ReturnValue;            // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventScheduler*                      CallFunc_GetEventScheduler_ReturnValue;            // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_74CD[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_GetEventTermNextOffLabelDataTimeToNowTime_OutEndTime; // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetEventTermNextOffLabelDataTimeToNowTime_ReturnValue; // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_MatchingMenu_AfterApplying_C_SetTerm) == 0x000008, "Wrong alignment on UMG_MatchingMenu_AfterApplying_C_SetTerm");
static_assert(sizeof(UMG_MatchingMenu_AfterApplying_C_SetTerm) == 0x000050, "Wrong size on UMG_MatchingMenu_AfterApplying_C_SetTerm");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_SetTerm, EventTerm) == 0x000000, "Member 'UMG_MatchingMenu_AfterApplying_C_SetTerm::EventTerm' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_SetTerm, Temp_bool_Variable) == 0x000008, "Member 'UMG_MatchingMenu_AfterApplying_C_SetTerm::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_SetTerm, Temp_byte_Variable) == 0x000009, "Member 'UMG_MatchingMenu_AfterApplying_C_SetTerm::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_SetTerm, Temp_byte_Variable_1) == 0x00000A, "Member 'UMG_MatchingMenu_AfterApplying_C_SetTerm::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_SetTerm, CallFunc_Conv_NameToString_ReturnValue) == 0x000010, "Member 'UMG_MatchingMenu_AfterApplying_C_SetTerm::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_SetTerm, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000020, "Member 'UMG_MatchingMenu_AfterApplying_C_SetTerm::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_SetTerm, CallFunc_GetSBGameInstance_ReturnValue) == 0x000028, "Member 'UMG_MatchingMenu_AfterApplying_C_SetTerm::CallFunc_GetSBGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_SetTerm, CallFunc_GetEventScheduler_ReturnValue) == 0x000030, "Member 'UMG_MatchingMenu_AfterApplying_C_SetTerm::CallFunc_GetEventScheduler_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_SetTerm, K2Node_Select_Default) == 0x000038, "Member 'UMG_MatchingMenu_AfterApplying_C_SetTerm::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_SetTerm, CallFunc_GetEventTermNextOffLabelDataTimeToNowTime_OutEndTime) == 0x000040, "Member 'UMG_MatchingMenu_AfterApplying_C_SetTerm::CallFunc_GetEventTermNextOffLabelDataTimeToNowTime_OutEndTime' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_SetTerm, CallFunc_GetEventTermNextOffLabelDataTimeToNowTime_ReturnValue) == 0x000048, "Member 'UMG_MatchingMenu_AfterApplying_C_SetTerm::CallFunc_GetEventTermNextOffLabelDataTimeToNowTime_ReturnValue' has a wrong offset!");

// Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.MakeHelpModeInfo
// 0x0230 (0x0230 - 0x0000)
struct UMG_MatchingMenu_AfterApplying_C_MakeHelpModeInfo final
{
public:
	int32                                         ModeId;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_74CE[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_GetHelpMatchingModeInfoMasterDataById_bExists; // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_74CF[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBHelpMatchingModeInfo                CallFunc_BP_GetHelpMatchingModeInfoMasterDataById_ReturnValue; // 0x0018(0x0028)()
	int32                                         CallFunc_GetHelpMatchingRequiredInfo_BattleScore;  // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetHelpMatchingRequiredInfo_ClassLevel;   // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetRewardSearchName_SearchName;           // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBMapInfo                             K2Node_MakeStruct_SBMapInfo;                       // 0x0050(0x01E0)()
};
static_assert(alignof(UMG_MatchingMenu_AfterApplying_C_MakeHelpModeInfo) == 0x000008, "Wrong alignment on UMG_MatchingMenu_AfterApplying_C_MakeHelpModeInfo");
static_assert(sizeof(UMG_MatchingMenu_AfterApplying_C_MakeHelpModeInfo) == 0x000230, "Wrong size on UMG_MatchingMenu_AfterApplying_C_MakeHelpModeInfo");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_MakeHelpModeInfo, ModeId) == 0x000000, "Member 'UMG_MatchingMenu_AfterApplying_C_MakeHelpModeInfo::ModeId' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_MakeHelpModeInfo, CallFunc_GetMasterDataManager_IsValid) == 0x000004, "Member 'UMG_MatchingMenu_AfterApplying_C_MakeHelpModeInfo::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_MakeHelpModeInfo, CallFunc_GetMasterDataManager_ReturnValue) == 0x000008, "Member 'UMG_MatchingMenu_AfterApplying_C_MakeHelpModeInfo::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_MakeHelpModeInfo, CallFunc_BP_GetHelpMatchingModeInfoMasterDataById_bExists) == 0x000010, "Member 'UMG_MatchingMenu_AfterApplying_C_MakeHelpModeInfo::CallFunc_BP_GetHelpMatchingModeInfoMasterDataById_bExists' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_MakeHelpModeInfo, CallFunc_BP_GetHelpMatchingModeInfoMasterDataById_ReturnValue) == 0x000018, "Member 'UMG_MatchingMenu_AfterApplying_C_MakeHelpModeInfo::CallFunc_BP_GetHelpMatchingModeInfoMasterDataById_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_MakeHelpModeInfo, CallFunc_GetHelpMatchingRequiredInfo_BattleScore) == 0x000040, "Member 'UMG_MatchingMenu_AfterApplying_C_MakeHelpModeInfo::CallFunc_GetHelpMatchingRequiredInfo_BattleScore' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_MakeHelpModeInfo, CallFunc_GetHelpMatchingRequiredInfo_ClassLevel) == 0x000044, "Member 'UMG_MatchingMenu_AfterApplying_C_MakeHelpModeInfo::CallFunc_GetHelpMatchingRequiredInfo_ClassLevel' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_MakeHelpModeInfo, CallFunc_GetRewardSearchName_SearchName) == 0x000048, "Member 'UMG_MatchingMenu_AfterApplying_C_MakeHelpModeInfo::CallFunc_GetRewardSearchName_SearchName' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_MakeHelpModeInfo, K2Node_MakeStruct_SBMapInfo) == 0x000050, "Member 'UMG_MatchingMenu_AfterApplying_C_MakeHelpModeInfo::K2Node_MakeStruct_SBMapInfo' has a wrong offset!");

// Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.GetHelpMatchingRequiredInfo
// 0x0070 (0x0070 - 0x0000)
struct UMG_MatchingMenu_AfterApplying_C_GetHelpMatchingRequiredInfo final
{
public:
	int32                                         ModeId;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         BattleScore;                                       // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ClassLevel;                                        // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBHelpMatchingRequiredInfo            FixedMaster;                                       // 0x000C(0x0010)(Edit, BlueprintVisible, NoDestructor)
	int32                                         Sub;                                               // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetClassLevel_ReturnValue;                // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_74D0[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBHelpMatchingRequiredInfo>    CallFunc_BP_GetHelpMatchingRequiredInfoMasterData_ReturnValue; // 0x0040(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBHelpMatchingRequiredInfo            CallFunc_Array_Get_Item;                           // 0x0054(0x0010)(NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0065(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_74D1[0x2];                                     // 0x0066(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x006D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x006E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_MatchingMenu_AfterApplying_C_GetHelpMatchingRequiredInfo) == 0x000008, "Wrong alignment on UMG_MatchingMenu_AfterApplying_C_GetHelpMatchingRequiredInfo");
static_assert(sizeof(UMG_MatchingMenu_AfterApplying_C_GetHelpMatchingRequiredInfo) == 0x000070, "Wrong size on UMG_MatchingMenu_AfterApplying_C_GetHelpMatchingRequiredInfo");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_GetHelpMatchingRequiredInfo, ModeId) == 0x000000, "Member 'UMG_MatchingMenu_AfterApplying_C_GetHelpMatchingRequiredInfo::ModeId' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_GetHelpMatchingRequiredInfo, BattleScore) == 0x000004, "Member 'UMG_MatchingMenu_AfterApplying_C_GetHelpMatchingRequiredInfo::BattleScore' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_GetHelpMatchingRequiredInfo, ClassLevel) == 0x000008, "Member 'UMG_MatchingMenu_AfterApplying_C_GetHelpMatchingRequiredInfo::ClassLevel' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_GetHelpMatchingRequiredInfo, FixedMaster) == 0x00000C, "Member 'UMG_MatchingMenu_AfterApplying_C_GetHelpMatchingRequiredInfo::FixedMaster' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_GetHelpMatchingRequiredInfo, Sub) == 0x00001C, "Member 'UMG_MatchingMenu_AfterApplying_C_GetHelpMatchingRequiredInfo::Sub' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_GetHelpMatchingRequiredInfo, Temp_int_Array_Index_Variable) == 0x000020, "Member 'UMG_MatchingMenu_AfterApplying_C_GetHelpMatchingRequiredInfo::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_GetHelpMatchingRequiredInfo, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'UMG_MatchingMenu_AfterApplying_C_GetHelpMatchingRequiredInfo::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_GetHelpMatchingRequiredInfo, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'UMG_MatchingMenu_AfterApplying_C_GetHelpMatchingRequiredInfo::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_GetHelpMatchingRequiredInfo, CallFunc_GetClassLevel_ReturnValue) == 0x00002C, "Member 'UMG_MatchingMenu_AfterApplying_C_GetHelpMatchingRequiredInfo::CallFunc_GetClassLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_GetHelpMatchingRequiredInfo, CallFunc_GetMasterDataManager_IsValid) == 0x000030, "Member 'UMG_MatchingMenu_AfterApplying_C_GetHelpMatchingRequiredInfo::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_GetHelpMatchingRequiredInfo, CallFunc_GetMasterDataManager_ReturnValue) == 0x000038, "Member 'UMG_MatchingMenu_AfterApplying_C_GetHelpMatchingRequiredInfo::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_GetHelpMatchingRequiredInfo, CallFunc_BP_GetHelpMatchingRequiredInfoMasterData_ReturnValue) == 0x000040, "Member 'UMG_MatchingMenu_AfterApplying_C_GetHelpMatchingRequiredInfo::CallFunc_BP_GetHelpMatchingRequiredInfoMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_GetHelpMatchingRequiredInfo, CallFunc_Array_Length_ReturnValue) == 0x000050, "Member 'UMG_MatchingMenu_AfterApplying_C_GetHelpMatchingRequiredInfo::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_GetHelpMatchingRequiredInfo, CallFunc_Array_Get_Item) == 0x000054, "Member 'UMG_MatchingMenu_AfterApplying_C_GetHelpMatchingRequiredInfo::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_GetHelpMatchingRequiredInfo, CallFunc_Less_IntInt_ReturnValue) == 0x000064, "Member 'UMG_MatchingMenu_AfterApplying_C_GetHelpMatchingRequiredInfo::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_GetHelpMatchingRequiredInfo, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000065, "Member 'UMG_MatchingMenu_AfterApplying_C_GetHelpMatchingRequiredInfo::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_GetHelpMatchingRequiredInfo, CallFunc_Subtract_IntInt_ReturnValue) == 0x000068, "Member 'UMG_MatchingMenu_AfterApplying_C_GetHelpMatchingRequiredInfo::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_GetHelpMatchingRequiredInfo, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x00006C, "Member 'UMG_MatchingMenu_AfterApplying_C_GetHelpMatchingRequiredInfo::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_GetHelpMatchingRequiredInfo, CallFunc_Less_IntInt_ReturnValue_1) == 0x00006D, "Member 'UMG_MatchingMenu_AfterApplying_C_GetHelpMatchingRequiredInfo::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_GetHelpMatchingRequiredInfo, CallFunc_BooleanAND_ReturnValue) == 0x00006E, "Member 'UMG_MatchingMenu_AfterApplying_C_GetHelpMatchingRequiredInfo::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.GetRewardSearchName
// 0x0088 (0x0088 - 0x0000)
struct UMG_MatchingMenu_AfterApplying_C_GetRewardSearchName final
{
public:
	int32                                         ModeId;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   SearchName;                                        // 0x0004(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Param_Name;                                        // 0x000C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Sub;                                               // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetAdventurerRank_ReturnValue;            // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_74D2[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBHelpMatchingRewardInfo>      CallFunc_BP_GetHelpMatchingRewardInfoMasterData_ReturnValue; // 0x0038(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_74D3[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBHelpMatchingRewardInfo              CallFunc_Array_Get_Item;                           // 0x0050(0x0020)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_74D4[0x3];                                     // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0074(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0082(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0083(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_MatchingMenu_AfterApplying_C_GetRewardSearchName) == 0x000008, "Wrong alignment on UMG_MatchingMenu_AfterApplying_C_GetRewardSearchName");
static_assert(sizeof(UMG_MatchingMenu_AfterApplying_C_GetRewardSearchName) == 0x000088, "Wrong size on UMG_MatchingMenu_AfterApplying_C_GetRewardSearchName");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_GetRewardSearchName, ModeId) == 0x000000, "Member 'UMG_MatchingMenu_AfterApplying_C_GetRewardSearchName::ModeId' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_GetRewardSearchName, SearchName) == 0x000004, "Member 'UMG_MatchingMenu_AfterApplying_C_GetRewardSearchName::SearchName' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_GetRewardSearchName, Param_Name) == 0x00000C, "Member 'UMG_MatchingMenu_AfterApplying_C_GetRewardSearchName::Param_Name' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_GetRewardSearchName, Sub) == 0x000014, "Member 'UMG_MatchingMenu_AfterApplying_C_GetRewardSearchName::Sub' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_GetRewardSearchName, Temp_int_Array_Index_Variable) == 0x000018, "Member 'UMG_MatchingMenu_AfterApplying_C_GetRewardSearchName::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_GetRewardSearchName, Temp_int_Loop_Counter_Variable) == 0x00001C, "Member 'UMG_MatchingMenu_AfterApplying_C_GetRewardSearchName::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_GetRewardSearchName, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'UMG_MatchingMenu_AfterApplying_C_GetRewardSearchName::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_GetRewardSearchName, CallFunc_GetAdventurerRank_ReturnValue) == 0x000024, "Member 'UMG_MatchingMenu_AfterApplying_C_GetRewardSearchName::CallFunc_GetAdventurerRank_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_GetRewardSearchName, CallFunc_GetMasterDataManager_IsValid) == 0x000028, "Member 'UMG_MatchingMenu_AfterApplying_C_GetRewardSearchName::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_GetRewardSearchName, CallFunc_GetMasterDataManager_ReturnValue) == 0x000030, "Member 'UMG_MatchingMenu_AfterApplying_C_GetRewardSearchName::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_GetRewardSearchName, CallFunc_BP_GetHelpMatchingRewardInfoMasterData_ReturnValue) == 0x000038, "Member 'UMG_MatchingMenu_AfterApplying_C_GetRewardSearchName::CallFunc_BP_GetHelpMatchingRewardInfoMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_GetRewardSearchName, CallFunc_Array_Length_ReturnValue) == 0x000048, "Member 'UMG_MatchingMenu_AfterApplying_C_GetRewardSearchName::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_GetRewardSearchName, CallFunc_Array_Get_Item) == 0x000050, "Member 'UMG_MatchingMenu_AfterApplying_C_GetRewardSearchName::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_GetRewardSearchName, CallFunc_Less_IntInt_ReturnValue) == 0x000070, "Member 'UMG_MatchingMenu_AfterApplying_C_GetRewardSearchName::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_GetRewardSearchName, CallFunc_Conv_StringToName_ReturnValue) == 0x000074, "Member 'UMG_MatchingMenu_AfterApplying_C_GetRewardSearchName::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_GetRewardSearchName, CallFunc_Subtract_IntInt_ReturnValue) == 0x00007C, "Member 'UMG_MatchingMenu_AfterApplying_C_GetRewardSearchName::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_GetRewardSearchName, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000080, "Member 'UMG_MatchingMenu_AfterApplying_C_GetRewardSearchName::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_GetRewardSearchName, CallFunc_Less_IntInt_ReturnValue_1) == 0x000081, "Member 'UMG_MatchingMenu_AfterApplying_C_GetRewardSearchName::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_GetRewardSearchName, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000082, "Member 'UMG_MatchingMenu_AfterApplying_C_GetRewardSearchName::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_AfterApplying_C_GetRewardSearchName, CallFunc_BooleanAND_ReturnValue) == 0x000083, "Member 'UMG_MatchingMenu_AfterApplying_C_GetRewardSearchName::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

}

