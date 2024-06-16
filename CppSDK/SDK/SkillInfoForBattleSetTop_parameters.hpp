#pragma once

 

// Package: SkillInfoForBattleSetTop

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.OnTacticalSkillIconPressed__DelegateSignature
// 0x000C (0x000C - 0x0000)
struct SkillInfoForBattleSetTop_C_OnTacticalSkillIconPressed__DelegateSignature final
{
public:
	ESkillActionPosition                          InTacticalSkillSAP;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_665C[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InSkillId;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InSkillLevel;                                      // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillInfoForBattleSetTop_C_OnTacticalSkillIconPressed__DelegateSignature) == 0x000004, "Wrong alignment on SkillInfoForBattleSetTop_C_OnTacticalSkillIconPressed__DelegateSignature");
static_assert(sizeof(SkillInfoForBattleSetTop_C_OnTacticalSkillIconPressed__DelegateSignature) == 0x00000C, "Wrong size on SkillInfoForBattleSetTop_C_OnTacticalSkillIconPressed__DelegateSignature");
static_assert(offsetof(SkillInfoForBattleSetTop_C_OnTacticalSkillIconPressed__DelegateSignature, InTacticalSkillSAP) == 0x000000, "Member 'SkillInfoForBattleSetTop_C_OnTacticalSkillIconPressed__DelegateSignature::InTacticalSkillSAP' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_OnTacticalSkillIconPressed__DelegateSignature, InSkillId) == 0x000004, "Member 'SkillInfoForBattleSetTop_C_OnTacticalSkillIconPressed__DelegateSignature::InSkillId' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_OnTacticalSkillIconPressed__DelegateSignature, InSkillLevel) == 0x000008, "Member 'SkillInfoForBattleSetTop_C_OnTacticalSkillIconPressed__DelegateSignature::InSkillLevel' has a wrong offset!");

// Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.OnBattleImagineIconPresssed__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct SkillInfoForBattleSetTop_C_OnBattleImagineIconPresssed__DelegateSignature final
{
public:
	ESkillActionPosition                          InBattleImagineSAP;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_665D[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 InBattleImagineUniqueId;                           // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillInfoForBattleSetTop_C_OnBattleImagineIconPresssed__DelegateSignature) == 0x000008, "Wrong alignment on SkillInfoForBattleSetTop_C_OnBattleImagineIconPresssed__DelegateSignature");
static_assert(sizeof(SkillInfoForBattleSetTop_C_OnBattleImagineIconPresssed__DelegateSignature) == 0x000018, "Wrong size on SkillInfoForBattleSetTop_C_OnBattleImagineIconPresssed__DelegateSignature");
static_assert(offsetof(SkillInfoForBattleSetTop_C_OnBattleImagineIconPresssed__DelegateSignature, InBattleImagineSAP) == 0x000000, "Member 'SkillInfoForBattleSetTop_C_OnBattleImagineIconPresssed__DelegateSignature::InBattleImagineSAP' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_OnBattleImagineIconPresssed__DelegateSignature, InBattleImagineUniqueId) == 0x000008, "Member 'SkillInfoForBattleSetTop_C_OnBattleImagineIconPresssed__DelegateSignature::InBattleImagineUniqueId' has a wrong offset!");

// Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.ExecuteUbergraph_SkillInfoForBattleSetTop
// 0x00E0 (0x00E0 - 0x0000)
struct SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_665E[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_665F[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6660[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                     CallFunc_SlotAsHorizontalBoxSlot_ReturnValue;      // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6661[0x2];                                     // 0x0042(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESkillActionPosition                          K2Node_ComponentBoundEvent_InBattleImagineSAP_1;   // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6662[0x6];                                     // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_ComponentBoundEvent_InBattleImagineUniqueId_1; // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESkillActionPosition                          K2Node_ComponentBoundEvent_InBattleImagineSAP;     // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6663[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_ComponentBoundEvent_InBattleImagineUniqueId; // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bInSwitchToSubSkillPalette; // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_InIsEnabled;                    // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6664[0x6];                                     // 0x007A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0080(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetAnimationCurrentTime_ReturnValue;      // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x008D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x008E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6665[0x1];                                     // 0x008F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USkillInfoIconForTacticalSkill_C*> K2Node_MakeArray_Array;                            // 0x0090(0x0010)(ReferenceParm, ContainsInstancedReference)
	TArray<class USkillInfoIconForTacticalSkill_C*> K2Node_MakeArray_Array_1;                          // 0x00A0(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_1;           // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetPosition_ReturnValue;                  // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetPosition_ReturnValue_1;                // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  CallFunc_GetClassType_ReturnValue;                 // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x00D2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSubPaletteReleased_ReturnValue;         // 0x00D3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESkillActionPosition                          K2Node_CustomEvent_InTacticalSkillSAP;             // 0x00D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6666[0x3];                                     // 0x00D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_InSkillId;                      // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InSkillLevel;                   // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop) == 0x000008, "Wrong alignment on SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop");
static_assert(sizeof(SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop) == 0x0000E0, "Wrong size on SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop");
static_assert(offsetof(SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop, EntryPoint) == 0x000000, "Member 'SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop::EntryPoint' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop, Temp_byte_Variable) == 0x000004, "Member 'SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop, K2Node_Event_IsDesignTime) == 0x000005, "Member 'SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop, CallFunc_GetChildrenCount_ReturnValue) == 0x000008, "Member 'SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop, CallFunc_IsValid_ReturnValue) == 0x00000C, "Member 'SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop, CallFunc_Subtract_IntInt_ReturnValue) == 0x000010, "Member 'SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop, Temp_int_Variable) == 0x000014, "Member 'SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop, K2Node_MakeStruct_Margin) == 0x000018, "Member 'SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop, CallFunc_Greater_IntInt_ReturnValue) == 0x000028, "Member 'SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop, CallFunc_GetChildAt_ReturnValue) == 0x000030, "Member 'SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop, CallFunc_SlotAsHorizontalBoxSlot_ReturnValue) == 0x000038, "Member 'SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop::CallFunc_SlotAsHorizontalBoxSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop, CallFunc_IsValid_ReturnValue_1) == 0x000040, "Member 'SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000041, "Member 'SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop, CallFunc_Add_IntInt_ReturnValue) == 0x000044, "Member 'SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop, Temp_bool_Variable) == 0x000048, "Member 'SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop, K2Node_ComponentBoundEvent_InBattleImagineSAP_1) == 0x000049, "Member 'SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop::K2Node_ComponentBoundEvent_InBattleImagineSAP_1' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop, K2Node_ComponentBoundEvent_InBattleImagineUniqueId_1) == 0x000050, "Member 'SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop::K2Node_ComponentBoundEvent_InBattleImagineUniqueId_1' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop, K2Node_ComponentBoundEvent_InBattleImagineSAP) == 0x000060, "Member 'SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop::K2Node_ComponentBoundEvent_InBattleImagineSAP' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop, K2Node_ComponentBoundEvent_InBattleImagineUniqueId) == 0x000068, "Member 'SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop::K2Node_ComponentBoundEvent_InBattleImagineUniqueId' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop, K2Node_ComponentBoundEvent_bInSwitchToSubSkillPalette) == 0x000078, "Member 'SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop::K2Node_ComponentBoundEvent_bInSwitchToSubSkillPalette' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop, K2Node_CustomEvent_InIsEnabled) == 0x000079, "Member 'SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop::K2Node_CustomEvent_InIsEnabled' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop, K2Node_Event_Animation) == 0x000080, "Member 'SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop, CallFunc_GetAnimationCurrentTime_ReturnValue) == 0x000088, "Member 'SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop::CallFunc_GetAnimationCurrentTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x00008C, "Member 'SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x00008D, "Member 'SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop, CallFunc_BooleanAND_ReturnValue) == 0x00008E, "Member 'SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop, K2Node_MakeArray_Array) == 0x000090, "Member 'SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop, K2Node_MakeArray_Array_1) == 0x0000A0, "Member 'SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x0000B0, "Member 'SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop, CallFunc_SlotAsCanvasSlot_ReturnValue_1) == 0x0000B8, "Member 'SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop::CallFunc_SlotAsCanvasSlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop, CallFunc_GetPosition_ReturnValue) == 0x0000C0, "Member 'SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop::CallFunc_GetPosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop, CallFunc_GetPosition_ReturnValue_1) == 0x0000C8, "Member 'SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop::CallFunc_GetPosition_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop, Temp_byte_Variable_1) == 0x0000D0, "Member 'SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop, CallFunc_GetClassType_ReturnValue) == 0x0000D1, "Member 'SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop::CallFunc_GetClassType_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop, K2Node_Select_Default) == 0x0000D2, "Member 'SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop, CallFunc_IsSubPaletteReleased_ReturnValue) == 0x0000D3, "Member 'SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop::CallFunc_IsSubPaletteReleased_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop, K2Node_CustomEvent_InTacticalSkillSAP) == 0x0000D4, "Member 'SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop::K2Node_CustomEvent_InTacticalSkillSAP' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop, K2Node_CustomEvent_InSkillId) == 0x0000D8, "Member 'SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop::K2Node_CustomEvent_InSkillId' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop, K2Node_CustomEvent_InSkillLevel) == 0x0000DC, "Member 'SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop::K2Node_CustomEvent_InSkillLevel' has a wrong offset!");

// Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.OnTacticalSkillIconSelected
// 0x000C (0x000C - 0x0000)
struct SkillInfoForBattleSetTop_C_OnTacticalSkillIconSelected final
{
public:
	ESkillActionPosition                          InTacticalSkillSAP;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6667[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InSkillId;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InSkillLevel;                                      // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillInfoForBattleSetTop_C_OnTacticalSkillIconSelected) == 0x000004, "Wrong alignment on SkillInfoForBattleSetTop_C_OnTacticalSkillIconSelected");
static_assert(sizeof(SkillInfoForBattleSetTop_C_OnTacticalSkillIconSelected) == 0x00000C, "Wrong size on SkillInfoForBattleSetTop_C_OnTacticalSkillIconSelected");
static_assert(offsetof(SkillInfoForBattleSetTop_C_OnTacticalSkillIconSelected, InTacticalSkillSAP) == 0x000000, "Member 'SkillInfoForBattleSetTop_C_OnTacticalSkillIconSelected::InTacticalSkillSAP' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_OnTacticalSkillIconSelected, InSkillId) == 0x000004, "Member 'SkillInfoForBattleSetTop_C_OnTacticalSkillIconSelected::InSkillId' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_OnTacticalSkillIconSelected, InSkillLevel) == 0x000008, "Member 'SkillInfoForBattleSetTop_C_OnTacticalSkillIconSelected::InSkillLevel' has a wrong offset!");

// Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct SkillInfoForBattleSetTop_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillInfoForBattleSetTop_C_OnAnimationFinished) == 0x000008, "Wrong alignment on SkillInfoForBattleSetTop_C_OnAnimationFinished");
static_assert(sizeof(SkillInfoForBattleSetTop_C_OnAnimationFinished) == 0x000008, "Wrong size on SkillInfoForBattleSetTop_C_OnAnimationFinished");
static_assert(offsetof(SkillInfoForBattleSetTop_C_OnAnimationFinished, Animation) == 0x000000, "Member 'SkillInfoForBattleSetTop_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.SetUIBlockerMostFrontEnable
// 0x0001 (0x0001 - 0x0000)
struct SkillInfoForBattleSetTop_C_SetUIBlockerMostFrontEnable final
{
public:
	bool                                          InIsEnabled;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoForBattleSetTop_C_SetUIBlockerMostFrontEnable) == 0x000001, "Wrong alignment on SkillInfoForBattleSetTop_C_SetUIBlockerMostFrontEnable");
static_assert(sizeof(SkillInfoForBattleSetTop_C_SetUIBlockerMostFrontEnable) == 0x000001, "Wrong size on SkillInfoForBattleSetTop_C_SetUIBlockerMostFrontEnable");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetUIBlockerMostFrontEnable, InIsEnabled) == 0x000000, "Member 'SkillInfoForBattleSetTop_C_SetUIBlockerMostFrontEnable::InIsEnabled' has a wrong offset!");

// Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.BndEvt__SkillInfoForBattleSetTop_SkillPaletteSwitchBtn_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct SkillInfoForBattleSetTop_C_BndEvt__SkillInfoForBattleSetTop_SkillPaletteSwitchBtn_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature final
{
public:
	bool                                          bInSwitchToSubSkillPalette;                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoForBattleSetTop_C_BndEvt__SkillInfoForBattleSetTop_SkillPaletteSwitchBtn_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature) == 0x000001, "Wrong alignment on SkillInfoForBattleSetTop_C_BndEvt__SkillInfoForBattleSetTop_SkillPaletteSwitchBtn_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature");
static_assert(sizeof(SkillInfoForBattleSetTop_C_BndEvt__SkillInfoForBattleSetTop_SkillPaletteSwitchBtn_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature) == 0x000001, "Wrong size on SkillInfoForBattleSetTop_C_BndEvt__SkillInfoForBattleSetTop_SkillPaletteSwitchBtn_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature");
static_assert(offsetof(SkillInfoForBattleSetTop_C_BndEvt__SkillInfoForBattleSetTop_SkillPaletteSwitchBtn_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature, bInSwitchToSubSkillPalette) == 0x000000, "Member 'SkillInfoForBattleSetTop_C_BndEvt__SkillInfoForBattleSetTop_SkillPaletteSwitchBtn_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature::bInSwitchToSubSkillPalette' has a wrong offset!");

// Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.BndEvt__SkillInfoForBattleSetTop_BattleImagine2a_K2Node_ComponentBoundEvent_7_OnBattleImagineIconPressed__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct SkillInfoForBattleSetTop_C_BndEvt__SkillInfoForBattleSetTop_BattleImagine2a_K2Node_ComponentBoundEvent_7_OnBattleImagineIconPressed__DelegateSignature final
{
public:
	ESkillActionPosition                          InBattleImagineSAP;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6668[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 InBattleImagineUniqueId;                           // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillInfoForBattleSetTop_C_BndEvt__SkillInfoForBattleSetTop_BattleImagine2a_K2Node_ComponentBoundEvent_7_OnBattleImagineIconPressed__DelegateSignature) == 0x000008, "Wrong alignment on SkillInfoForBattleSetTop_C_BndEvt__SkillInfoForBattleSetTop_BattleImagine2a_K2Node_ComponentBoundEvent_7_OnBattleImagineIconPressed__DelegateSignature");
static_assert(sizeof(SkillInfoForBattleSetTop_C_BndEvt__SkillInfoForBattleSetTop_BattleImagine2a_K2Node_ComponentBoundEvent_7_OnBattleImagineIconPressed__DelegateSignature) == 0x000018, "Wrong size on SkillInfoForBattleSetTop_C_BndEvt__SkillInfoForBattleSetTop_BattleImagine2a_K2Node_ComponentBoundEvent_7_OnBattleImagineIconPressed__DelegateSignature");
static_assert(offsetof(SkillInfoForBattleSetTop_C_BndEvt__SkillInfoForBattleSetTop_BattleImagine2a_K2Node_ComponentBoundEvent_7_OnBattleImagineIconPressed__DelegateSignature, InBattleImagineSAP) == 0x000000, "Member 'SkillInfoForBattleSetTop_C_BndEvt__SkillInfoForBattleSetTop_BattleImagine2a_K2Node_ComponentBoundEvent_7_OnBattleImagineIconPressed__DelegateSignature::InBattleImagineSAP' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_BndEvt__SkillInfoForBattleSetTop_BattleImagine2a_K2Node_ComponentBoundEvent_7_OnBattleImagineIconPressed__DelegateSignature, InBattleImagineUniqueId) == 0x000008, "Member 'SkillInfoForBattleSetTop_C_BndEvt__SkillInfoForBattleSetTop_BattleImagine2a_K2Node_ComponentBoundEvent_7_OnBattleImagineIconPressed__DelegateSignature::InBattleImagineUniqueId' has a wrong offset!");

// Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.BndEvt__SkillInfoForBattleSetTop_BattleImagine1a_K2Node_ComponentBoundEvent_6_OnBattleImagineIconPressed__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct SkillInfoForBattleSetTop_C_BndEvt__SkillInfoForBattleSetTop_BattleImagine1a_K2Node_ComponentBoundEvent_6_OnBattleImagineIconPressed__DelegateSignature final
{
public:
	ESkillActionPosition                          InBattleImagineSAP;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6669[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 InBattleImagineUniqueId;                           // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillInfoForBattleSetTop_C_BndEvt__SkillInfoForBattleSetTop_BattleImagine1a_K2Node_ComponentBoundEvent_6_OnBattleImagineIconPressed__DelegateSignature) == 0x000008, "Wrong alignment on SkillInfoForBattleSetTop_C_BndEvt__SkillInfoForBattleSetTop_BattleImagine1a_K2Node_ComponentBoundEvent_6_OnBattleImagineIconPressed__DelegateSignature");
static_assert(sizeof(SkillInfoForBattleSetTop_C_BndEvt__SkillInfoForBattleSetTop_BattleImagine1a_K2Node_ComponentBoundEvent_6_OnBattleImagineIconPressed__DelegateSignature) == 0x000018, "Wrong size on SkillInfoForBattleSetTop_C_BndEvt__SkillInfoForBattleSetTop_BattleImagine1a_K2Node_ComponentBoundEvent_6_OnBattleImagineIconPressed__DelegateSignature");
static_assert(offsetof(SkillInfoForBattleSetTop_C_BndEvt__SkillInfoForBattleSetTop_BattleImagine1a_K2Node_ComponentBoundEvent_6_OnBattleImagineIconPressed__DelegateSignature, InBattleImagineSAP) == 0x000000, "Member 'SkillInfoForBattleSetTop_C_BndEvt__SkillInfoForBattleSetTop_BattleImagine1a_K2Node_ComponentBoundEvent_6_OnBattleImagineIconPressed__DelegateSignature::InBattleImagineSAP' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_BndEvt__SkillInfoForBattleSetTop_BattleImagine1a_K2Node_ComponentBoundEvent_6_OnBattleImagineIconPressed__DelegateSignature, InBattleImagineUniqueId) == 0x000008, "Member 'SkillInfoForBattleSetTop_C_BndEvt__SkillInfoForBattleSetTop_BattleImagine1a_K2Node_ComponentBoundEvent_6_OnBattleImagineIconPressed__DelegateSignature::InBattleImagineUniqueId' has a wrong offset!");

// Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct SkillInfoForBattleSetTop_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoForBattleSetTop_C_PreConstruct) == 0x000001, "Wrong alignment on SkillInfoForBattleSetTop_C_PreConstruct");
static_assert(sizeof(SkillInfoForBattleSetTop_C_PreConstruct) == 0x000001, "Wrong size on SkillInfoForBattleSetTop_C_PreConstruct");
static_assert(offsetof(SkillInfoForBattleSetTop_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'SkillInfoForBattleSetTop_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.SetupTacticalSkill
// 0x0120 (0x0120 - 0x0000)
struct SkillInfoForBattleSetTop_C_SetupTacticalSkill final
{
public:
	int32                                         LocalDirtySkillId;                                 // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalSlotId;                                       // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkillInfoIconForTacticalSkill_C*       LocalSkillInfoIcon;                                // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalSkillId;                                      // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_666A[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   LocalMasterDataManager;                            // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetEquipedArtsId_ReturnValue;             // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBClassType                                  CallFunc_GetClassType_ReturnValue;                 // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSubPaletteReleased_ReturnValue;         // 0x002E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x002F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCurrentSkillLevel_ReturnValue;         // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetEquipedActiveArtsAbility_OutIsActiveAbilityEquiped; // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBSkillAbilityType                           CallFunc_GetEquipedActiveArtsAbility_OutEquipedActiveAbilityType; // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_666B[0x2];                                     // 0x003E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetEquipedActiveArtsAbility_OutEquipedActiveAbilitySkillId; // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_666C[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetSkillMasteryParam_IsExists;            // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_666D[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSkillMasteryParam                   CallFunc_GetSkillMasteryParam_ReturnValue;         // 0x0054(0x0008)(NoDestructor)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkillInfoIconForTacticalSkill_C*       K2Node_DynamicCast_AsSkill_Info_Icon_for_Tactical_Skill; // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0072(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_666E[0x1];                                     // 0x0073(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindSkillDataDataBySkillId_IsExists;      // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_666F[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSkillDataMasterData                 CallFunc_FindSkillDataDataBySkillId_ReturnValue;   // 0x0080(0x0058)()
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6670[0x3];                                     // 0x00D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetEquipedArtsId_ReturnValue_1;           // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6671[0x7];                                     // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6672[0x7];                                     // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue_1;                 // 0x00F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue_1;           // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6673[0x4];                                     // 0x0104(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USkillInfoIconForTacticalSkill_C*       K2Node_DynamicCast_AsSkill_Info_Icon_for_Tactical_Skill_1; // 0x0108(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6674[0x3];                                     // 0x0111(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0119(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoForBattleSetTop_C_SetupTacticalSkill) == 0x000008, "Wrong alignment on SkillInfoForBattleSetTop_C_SetupTacticalSkill");
static_assert(sizeof(SkillInfoForBattleSetTop_C_SetupTacticalSkill) == 0x000120, "Wrong size on SkillInfoForBattleSetTop_C_SetupTacticalSkill");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkill, LocalDirtySkillId) == 0x000000, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkill::LocalDirtySkillId' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkill, LocalSlotId) == 0x000004, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkill::LocalSlotId' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkill, LocalSkillInfoIcon) == 0x000008, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkill::LocalSkillInfoIcon' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkill, LocalSkillId) == 0x000010, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkill::LocalSkillId' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkill, LocalMasterDataManager) == 0x000018, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkill::LocalMasterDataManager' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkill, Temp_int_Variable) == 0x000020, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkill::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkill, CallFunc_GetEquipedArtsId_ReturnValue) == 0x000024, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkill::CallFunc_GetEquipedArtsId_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkill, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkill::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkill, Temp_bool_Variable) == 0x00002C, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkill::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkill, CallFunc_GetClassType_ReturnValue) == 0x00002D, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkill::CallFunc_GetClassType_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkill, CallFunc_IsSubPaletteReleased_ReturnValue) == 0x00002E, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkill::CallFunc_IsSubPaletteReleased_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkill, CallFunc_IsValid_ReturnValue) == 0x00002F, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkill::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkill, CallFunc_GetChildrenCount_ReturnValue) == 0x000030, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkill::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkill, CallFunc_Subtract_IntInt_ReturnValue) == 0x000034, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkill::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkill, CallFunc_GetCurrentSkillLevel_ReturnValue) == 0x000038, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkill::CallFunc_GetCurrentSkillLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkill, CallFunc_GetEquipedActiveArtsAbility_OutIsActiveAbilityEquiped) == 0x00003C, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkill::CallFunc_GetEquipedActiveArtsAbility_OutIsActiveAbilityEquiped' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkill, CallFunc_GetEquipedActiveArtsAbility_OutEquipedActiveAbilityType) == 0x00003D, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkill::CallFunc_GetEquipedActiveArtsAbility_OutEquipedActiveAbilityType' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkill, CallFunc_GetEquipedActiveArtsAbility_OutEquipedActiveAbilitySkillId) == 0x000040, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkill::CallFunc_GetEquipedActiveArtsAbility_OutEquipedActiveAbilitySkillId' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkill, K2Node_Select_Default) == 0x000044, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkill::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkill, CallFunc_Greater_IntInt_ReturnValue) == 0x000048, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkill::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkill, Temp_int_Variable_1) == 0x00004C, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkill::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkill, CallFunc_GetSkillMasteryParam_IsExists) == 0x000050, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkill::CallFunc_GetSkillMasteryParam_IsExists' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkill, CallFunc_GetSkillMasteryParam_ReturnValue) == 0x000054, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkill::CallFunc_GetSkillMasteryParam_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkill, CallFunc_Add_IntInt_ReturnValue_1) == 0x00005C, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkill::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkill, CallFunc_GetChildAt_ReturnValue) == 0x000060, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkill::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkill, K2Node_DynamicCast_AsSkill_Info_Icon_for_Tactical_Skill) == 0x000068, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkill::K2Node_DynamicCast_AsSkill_Info_Icon_for_Tactical_Skill' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkill, K2Node_DynamicCast_bSuccess) == 0x000070, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkill::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkill, CallFunc_IsValid_ReturnValue_1) == 0x000071, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkill::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkill, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000072, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkill::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkill, CallFunc_Add_IntInt_ReturnValue_2) == 0x000074, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkill::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkill, CallFunc_FindSkillDataDataBySkillId_IsExists) == 0x000078, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkill::CallFunc_FindSkillDataDataBySkillId_IsExists' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkill, CallFunc_FindSkillDataDataBySkillId_ReturnValue) == 0x000080, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkill::CallFunc_FindSkillDataDataBySkillId_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkill, CallFunc_BooleanAND_ReturnValue) == 0x0000D8, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkill::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkill, CallFunc_GetEquipedArtsId_ReturnValue_1) == 0x0000DC, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkill::CallFunc_GetEquipedArtsId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkill, CallFunc_GetMasterDataManager_IsValid) == 0x0000E0, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkill::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkill, CallFunc_GetMasterDataManager_ReturnValue) == 0x0000E8, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkill::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkill, CallFunc_IsValid_ReturnValue_2) == 0x0000F0, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkill::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkill, CallFunc_GetChildAt_ReturnValue_1) == 0x0000F8, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkill::CallFunc_GetChildAt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkill, CallFunc_GetChildrenCount_ReturnValue_1) == 0x000100, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkill::CallFunc_GetChildrenCount_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkill, K2Node_DynamicCast_AsSkill_Info_Icon_for_Tactical_Skill_1) == 0x000108, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkill::K2Node_DynamicCast_AsSkill_Info_Icon_for_Tactical_Skill_1' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkill, K2Node_DynamicCast_bSuccess_1) == 0x000110, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkill::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkill, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000114, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkill::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkill, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000118, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkill::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkill, CallFunc_IsValid_ReturnValue_3) == 0x000119, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkill::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");

// Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.SetupMainSubULTSkill
// 0x0268 (0x0268 - 0x0000)
struct SkillInfoForBattleSetTop_C_SetupMainSubULTSkill final
{
public:
	bool                                          LocalSkillMasteryParamFounded;                     // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalSkillDataMasterFounded;                       // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalIsMasterySkill;                               // 0x0002(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBClassType                                  LocalClassType;                                    // 0x0003(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalSkillLevel;                                   // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalSkillId;                                      // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6675[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           LocalSkillDataTableRowNames;                       // 0x0010(0x0010)(Edit, BlueprintVisible)
	class UDataTable*                             LocalSkillDataTable;                               // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0030(0x0010)(ReferenceParm)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0044(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBClassType                                  CallFunc_GetPlayerClassType_ClassType;             // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0053(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6676[0x3];                                     // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetCurrentSkillLevel_ReturnValue;         // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x005D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsMasterySkill_ReturnValue;               // 0x005E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBSkillType                                  CallFunc_GetSkillType_ReturnValue;                 // 0x005F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindSkillMasteryParam_bIsValid;           // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6677[0x3];                                     // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSkillMasteryParam                   CallFunc_FindSkillMasteryParam_OutSkillMasteryParam; // 0x0064(0x0008)(NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindSkillDataMaster_bIsValid;             // 0x006D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6678[0x2];                                     // 0x006E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSkillDataMasterData                 CallFunc_FindSkillDataMaster_SkillDataMaster;      // 0x0070(0x0058)()
	struct FSBPlayerSkillData                     CallFunc_GetDataTableRowFromName_OutRow;           // 0x00C8(0x0180)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0248(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0249(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6679[0x6];                                     // 0x024A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerManager*                       CallFunc_GetPlayerManager_ReturnValue;             // 0x0250(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                             CallFunc_GetSkillDataTable_ReturnValue;            // 0x0258(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0260(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0261(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoForBattleSetTop_C_SetupMainSubULTSkill) == 0x000008, "Wrong alignment on SkillInfoForBattleSetTop_C_SetupMainSubULTSkill");
static_assert(sizeof(SkillInfoForBattleSetTop_C_SetupMainSubULTSkill) == 0x000268, "Wrong size on SkillInfoForBattleSetTop_C_SetupMainSubULTSkill");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupMainSubULTSkill, LocalSkillMasteryParamFounded) == 0x000000, "Member 'SkillInfoForBattleSetTop_C_SetupMainSubULTSkill::LocalSkillMasteryParamFounded' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupMainSubULTSkill, LocalSkillDataMasterFounded) == 0x000001, "Member 'SkillInfoForBattleSetTop_C_SetupMainSubULTSkill::LocalSkillDataMasterFounded' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupMainSubULTSkill, LocalIsMasterySkill) == 0x000002, "Member 'SkillInfoForBattleSetTop_C_SetupMainSubULTSkill::LocalIsMasterySkill' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupMainSubULTSkill, LocalClassType) == 0x000003, "Member 'SkillInfoForBattleSetTop_C_SetupMainSubULTSkill::LocalClassType' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupMainSubULTSkill, LocalSkillLevel) == 0x000004, "Member 'SkillInfoForBattleSetTop_C_SetupMainSubULTSkill::LocalSkillLevel' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupMainSubULTSkill, LocalSkillId) == 0x000008, "Member 'SkillInfoForBattleSetTop_C_SetupMainSubULTSkill::LocalSkillId' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupMainSubULTSkill, LocalSkillDataTableRowNames) == 0x000010, "Member 'SkillInfoForBattleSetTop_C_SetupMainSubULTSkill::LocalSkillDataTableRowNames' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupMainSubULTSkill, LocalSkillDataTable) == 0x000020, "Member 'SkillInfoForBattleSetTop_C_SetupMainSubULTSkill::LocalSkillDataTable' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupMainSubULTSkill, Temp_int_Array_Index_Variable) == 0x000028, "Member 'SkillInfoForBattleSetTop_C_SetupMainSubULTSkill::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupMainSubULTSkill, Temp_int_Loop_Counter_Variable) == 0x00002C, "Member 'SkillInfoForBattleSetTop_C_SetupMainSubULTSkill::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupMainSubULTSkill, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000030, "Member 'SkillInfoForBattleSetTop_C_SetupMainSubULTSkill::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupMainSubULTSkill, CallFunc_Add_IntInt_ReturnValue) == 0x000040, "Member 'SkillInfoForBattleSetTop_C_SetupMainSubULTSkill::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupMainSubULTSkill, CallFunc_Array_Get_Item) == 0x000044, "Member 'SkillInfoForBattleSetTop_C_SetupMainSubULTSkill::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupMainSubULTSkill, CallFunc_Array_Length_ReturnValue) == 0x00004C, "Member 'SkillInfoForBattleSetTop_C_SetupMainSubULTSkill::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupMainSubULTSkill, CallFunc_Less_IntInt_ReturnValue) == 0x000050, "Member 'SkillInfoForBattleSetTop_C_SetupMainSubULTSkill::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupMainSubULTSkill, CallFunc_GetPlayerClassType_ClassType) == 0x000051, "Member 'SkillInfoForBattleSetTop_C_SetupMainSubULTSkill::CallFunc_GetPlayerClassType_ClassType' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupMainSubULTSkill, CallFunc_IsValid_ReturnValue) == 0x000052, "Member 'SkillInfoForBattleSetTop_C_SetupMainSubULTSkill::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupMainSubULTSkill, CallFunc_IsValid_ReturnValue_1) == 0x000053, "Member 'SkillInfoForBattleSetTop_C_SetupMainSubULTSkill::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupMainSubULTSkill, CallFunc_IsValid_ReturnValue_2) == 0x000054, "Member 'SkillInfoForBattleSetTop_C_SetupMainSubULTSkill::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupMainSubULTSkill, CallFunc_GetCurrentSkillLevel_ReturnValue) == 0x000058, "Member 'SkillInfoForBattleSetTop_C_SetupMainSubULTSkill::CallFunc_GetCurrentSkillLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupMainSubULTSkill, CallFunc_Not_PreBool_ReturnValue) == 0x00005C, "Member 'SkillInfoForBattleSetTop_C_SetupMainSubULTSkill::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupMainSubULTSkill, CallFunc_Not_PreBool_ReturnValue_1) == 0x00005D, "Member 'SkillInfoForBattleSetTop_C_SetupMainSubULTSkill::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupMainSubULTSkill, CallFunc_IsMasterySkill_ReturnValue) == 0x00005E, "Member 'SkillInfoForBattleSetTop_C_SetupMainSubULTSkill::CallFunc_IsMasterySkill_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupMainSubULTSkill, CallFunc_GetSkillType_ReturnValue) == 0x00005F, "Member 'SkillInfoForBattleSetTop_C_SetupMainSubULTSkill::CallFunc_GetSkillType_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupMainSubULTSkill, CallFunc_FindSkillMasteryParam_bIsValid) == 0x000060, "Member 'SkillInfoForBattleSetTop_C_SetupMainSubULTSkill::CallFunc_FindSkillMasteryParam_bIsValid' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupMainSubULTSkill, CallFunc_FindSkillMasteryParam_OutSkillMasteryParam) == 0x000064, "Member 'SkillInfoForBattleSetTop_C_SetupMainSubULTSkill::CallFunc_FindSkillMasteryParam_OutSkillMasteryParam' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupMainSubULTSkill, K2Node_SwitchEnum_CmpSuccess) == 0x00006C, "Member 'SkillInfoForBattleSetTop_C_SetupMainSubULTSkill::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupMainSubULTSkill, CallFunc_FindSkillDataMaster_bIsValid) == 0x00006D, "Member 'SkillInfoForBattleSetTop_C_SetupMainSubULTSkill::CallFunc_FindSkillDataMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupMainSubULTSkill, CallFunc_FindSkillDataMaster_SkillDataMaster) == 0x000070, "Member 'SkillInfoForBattleSetTop_C_SetupMainSubULTSkill::CallFunc_FindSkillDataMaster_SkillDataMaster' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupMainSubULTSkill, CallFunc_GetDataTableRowFromName_OutRow) == 0x0000C8, "Member 'SkillInfoForBattleSetTop_C_SetupMainSubULTSkill::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupMainSubULTSkill, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000248, "Member 'SkillInfoForBattleSetTop_C_SetupMainSubULTSkill::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupMainSubULTSkill, CallFunc_BooleanAND_ReturnValue) == 0x000249, "Member 'SkillInfoForBattleSetTop_C_SetupMainSubULTSkill::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupMainSubULTSkill, CallFunc_GetPlayerManager_ReturnValue) == 0x000250, "Member 'SkillInfoForBattleSetTop_C_SetupMainSubULTSkill::CallFunc_GetPlayerManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupMainSubULTSkill, CallFunc_GetSkillDataTable_ReturnValue) == 0x000258, "Member 'SkillInfoForBattleSetTop_C_SetupMainSubULTSkill::CallFunc_GetSkillDataTable_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupMainSubULTSkill, CallFunc_IsValid_ReturnValue_3) == 0x000260, "Member 'SkillInfoForBattleSetTop_C_SetupMainSubULTSkill::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupMainSubULTSkill, CallFunc_IsValid_ReturnValue_4) == 0x000261, "Member 'SkillInfoForBattleSetTop_C_SetupMainSubULTSkill::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");

// Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.SetupBattleImagine
// 0x0048 (0x0048 - 0x0000)
struct SkillInfoForBattleSetTop_C_SetupBattleImagine final
{
public:
	class ASBPlayerCharacter*                     LocalSBPlayerCharacter;                            // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBClassType                                  CallFunc_GetClassType_ReturnValue;                 // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  CallFunc_GetClassType_ReturnValue_1;               // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_667A[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetImagineUniqueID_ReturnValue;           // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_667B[0x5];                                     // 0x002B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetImagineUniqueID_ReturnValue_1;         // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoForBattleSetTop_C_SetupBattleImagine) == 0x000008, "Wrong alignment on SkillInfoForBattleSetTop_C_SetupBattleImagine");
static_assert(sizeof(SkillInfoForBattleSetTop_C_SetupBattleImagine) == 0x000048, "Wrong size on SkillInfoForBattleSetTop_C_SetupBattleImagine");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupBattleImagine, LocalSBPlayerCharacter) == 0x000000, "Member 'SkillInfoForBattleSetTop_C_SetupBattleImagine::LocalSBPlayerCharacter' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupBattleImagine, CallFunc_MakeLiteralByte_ReturnValue) == 0x000008, "Member 'SkillInfoForBattleSetTop_C_SetupBattleImagine::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupBattleImagine, CallFunc_IsValid_ReturnValue) == 0x000009, "Member 'SkillInfoForBattleSetTop_C_SetupBattleImagine::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupBattleImagine, CallFunc_IsValid_ReturnValue_1) == 0x00000A, "Member 'SkillInfoForBattleSetTop_C_SetupBattleImagine::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupBattleImagine, CallFunc_GetClassType_ReturnValue) == 0x00000B, "Member 'SkillInfoForBattleSetTop_C_SetupBattleImagine::CallFunc_GetClassType_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupBattleImagine, CallFunc_GetClassType_ReturnValue_1) == 0x00000C, "Member 'SkillInfoForBattleSetTop_C_SetupBattleImagine::CallFunc_GetClassType_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupBattleImagine, CallFunc_GetImagineUniqueID_ReturnValue) == 0x000010, "Member 'SkillInfoForBattleSetTop_C_SetupBattleImagine::CallFunc_GetImagineUniqueID_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupBattleImagine, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000020, "Member 'SkillInfoForBattleSetTop_C_SetupBattleImagine::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupBattleImagine, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000028, "Member 'SkillInfoForBattleSetTop_C_SetupBattleImagine::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupBattleImagine, CallFunc_IsValid_ReturnValue_2) == 0x000029, "Member 'SkillInfoForBattleSetTop_C_SetupBattleImagine::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupBattleImagine, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x00002A, "Member 'SkillInfoForBattleSetTop_C_SetupBattleImagine::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupBattleImagine, CallFunc_GetImagineUniqueID_ReturnValue_1) == 0x000030, "Member 'SkillInfoForBattleSetTop_C_SetupBattleImagine::CallFunc_GetImagineUniqueID_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupBattleImagine, CallFunc_EqualEqual_StrStr_ReturnValue_1) == 0x000040, "Member 'SkillInfoForBattleSetTop_C_SetupBattleImagine::CallFunc_EqualEqual_StrStr_ReturnValue_1' has a wrong offset!");

// Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.SetStorageMode
// 0x0001 (0x0001 - 0x0000)
struct SkillInfoForBattleSetTop_C_SetStorageMode final
{
public:
	bool                                          InIsStorageMode;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoForBattleSetTop_C_SetStorageMode) == 0x000001, "Wrong alignment on SkillInfoForBattleSetTop_C_SetStorageMode");
static_assert(sizeof(SkillInfoForBattleSetTop_C_SetStorageMode) == 0x000001, "Wrong size on SkillInfoForBattleSetTop_C_SetStorageMode");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetStorageMode, InIsStorageMode) == 0x000000, "Member 'SkillInfoForBattleSetTop_C_SetStorageMode::InIsStorageMode' has a wrong offset!");

// Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.SetSkillPaletteGrpSwtichEnable
// 0x000A (0x000A - 0x0000)
struct SkillInfoForBattleSetTop_C_SetSkillPaletteGrpSwtichEnable final
{
public:
	bool                                          InIsEnabled;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillInfoForBattleSetTop_C_SetSkillPaletteGrpSwtichEnable) == 0x000001, "Wrong alignment on SkillInfoForBattleSetTop_C_SetSkillPaletteGrpSwtichEnable");
static_assert(sizeof(SkillInfoForBattleSetTop_C_SetSkillPaletteGrpSwtichEnable) == 0x00000A, "Wrong size on SkillInfoForBattleSetTop_C_SetSkillPaletteGrpSwtichEnable");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetSkillPaletteGrpSwtichEnable, InIsEnabled) == 0x000000, "Member 'SkillInfoForBattleSetTop_C_SetSkillPaletteGrpSwtichEnable::InIsEnabled' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetSkillPaletteGrpSwtichEnable, Temp_byte_Variable) == 0x000001, "Member 'SkillInfoForBattleSetTop_C_SetSkillPaletteGrpSwtichEnable::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetSkillPaletteGrpSwtichEnable, Temp_bool_Variable) == 0x000002, "Member 'SkillInfoForBattleSetTop_C_SetSkillPaletteGrpSwtichEnable::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetSkillPaletteGrpSwtichEnable, Temp_byte_Variable_1) == 0x000003, "Member 'SkillInfoForBattleSetTop_C_SetSkillPaletteGrpSwtichEnable::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetSkillPaletteGrpSwtichEnable, Temp_byte_Variable_2) == 0x000004, "Member 'SkillInfoForBattleSetTop_C_SetSkillPaletteGrpSwtichEnable::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetSkillPaletteGrpSwtichEnable, Temp_byte_Variable_3) == 0x000005, "Member 'SkillInfoForBattleSetTop_C_SetSkillPaletteGrpSwtichEnable::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetSkillPaletteGrpSwtichEnable, K2Node_Select_Default) == 0x000006, "Member 'SkillInfoForBattleSetTop_C_SetSkillPaletteGrpSwtichEnable::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetSkillPaletteGrpSwtichEnable, Temp_bool_Variable_1) == 0x000007, "Member 'SkillInfoForBattleSetTop_C_SetSkillPaletteGrpSwtichEnable::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetSkillPaletteGrpSwtichEnable, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'SkillInfoForBattleSetTop_C_SetSkillPaletteGrpSwtichEnable::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetSkillPaletteGrpSwtichEnable, K2Node_Select_Default_1) == 0x000009, "Member 'SkillInfoForBattleSetTop_C_SetSkillPaletteGrpSwtichEnable::K2Node_Select_Default_1' has a wrong offset!");

// Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.StartSkillPaletteGrpSwitchAnimation
// 0x0018 (0x0018 - 0x0000)
struct SkillInfoForBattleSetTop_C_StartSkillPaletteGrpSwitchAnimation final
{
public:
	bool                                          InSwitchToSubSkillPalette;                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          InIsAnimation;                                     // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_667C[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillInfoForBattleSetTop_C_StartSkillPaletteGrpSwitchAnimation) == 0x000008, "Wrong alignment on SkillInfoForBattleSetTop_C_StartSkillPaletteGrpSwitchAnimation");
static_assert(sizeof(SkillInfoForBattleSetTop_C_StartSkillPaletteGrpSwitchAnimation) == 0x000018, "Wrong size on SkillInfoForBattleSetTop_C_StartSkillPaletteGrpSwitchAnimation");
static_assert(offsetof(SkillInfoForBattleSetTop_C_StartSkillPaletteGrpSwitchAnimation, InSwitchToSubSkillPalette) == 0x000000, "Member 'SkillInfoForBattleSetTop_C_StartSkillPaletteGrpSwitchAnimation::InSwitchToSubSkillPalette' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_StartSkillPaletteGrpSwitchAnimation, InIsAnimation) == 0x000001, "Member 'SkillInfoForBattleSetTop_C_StartSkillPaletteGrpSwitchAnimation::InIsAnimation' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_StartSkillPaletteGrpSwitchAnimation, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000008, "Member 'SkillInfoForBattleSetTop_C_StartSkillPaletteGrpSwitchAnimation::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_StartSkillPaletteGrpSwitchAnimation, CallFunc_PlayAnimationForward_ReturnValue) == 0x000010, "Member 'SkillInfoForBattleSetTop_C_StartSkillPaletteGrpSwitchAnimation::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

// Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.SwitchTacticalSkillBg
// 0x0040 (0x0040 - 0x0000)
struct SkillInfoForBattleSetTop_C_SwitchTacticalSkillBg final
{
public:
	bool                                          IsSubSkillPaletteAtFront;                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsAnimation;                                       // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_667D[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_667E[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkillInfoIconForTacticalSkill_C*       CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkillInfoIconForTacticalSkill_C*       CallFunc_Array_Get_Item_1;                         // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_667F[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoForBattleSetTop_C_SwitchTacticalSkillBg) == 0x000008, "Wrong alignment on SkillInfoForBattleSetTop_C_SwitchTacticalSkillBg");
static_assert(sizeof(SkillInfoForBattleSetTop_C_SwitchTacticalSkillBg) == 0x000040, "Wrong size on SkillInfoForBattleSetTop_C_SwitchTacticalSkillBg");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SwitchTacticalSkillBg, IsSubSkillPaletteAtFront) == 0x000000, "Member 'SkillInfoForBattleSetTop_C_SwitchTacticalSkillBg::IsSubSkillPaletteAtFront' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SwitchTacticalSkillBg, IsAnimation) == 0x000001, "Member 'SkillInfoForBattleSetTop_C_SwitchTacticalSkillBg::IsAnimation' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SwitchTacticalSkillBg, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'SkillInfoForBattleSetTop_C_SwitchTacticalSkillBg::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SwitchTacticalSkillBg, CallFunc_Not_PreBool_ReturnValue) == 0x000008, "Member 'SkillInfoForBattleSetTop_C_SwitchTacticalSkillBg::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SwitchTacticalSkillBg, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'SkillInfoForBattleSetTop_C_SwitchTacticalSkillBg::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SwitchTacticalSkillBg, Temp_int_Array_Index_Variable) == 0x000010, "Member 'SkillInfoForBattleSetTop_C_SwitchTacticalSkillBg::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SwitchTacticalSkillBg, Temp_int_Array_Index_Variable_1) == 0x000014, "Member 'SkillInfoForBattleSetTop_C_SwitchTacticalSkillBg::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SwitchTacticalSkillBg, CallFunc_Array_Get_Item) == 0x000018, "Member 'SkillInfoForBattleSetTop_C_SwitchTacticalSkillBg::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SwitchTacticalSkillBg, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'SkillInfoForBattleSetTop_C_SwitchTacticalSkillBg::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SwitchTacticalSkillBg, Temp_int_Loop_Counter_Variable_1) == 0x000024, "Member 'SkillInfoForBattleSetTop_C_SwitchTacticalSkillBg::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SwitchTacticalSkillBg, CallFunc_Array_Get_Item_1) == 0x000028, "Member 'SkillInfoForBattleSetTop_C_SwitchTacticalSkillBg::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SwitchTacticalSkillBg, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'SkillInfoForBattleSetTop_C_SwitchTacticalSkillBg::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SwitchTacticalSkillBg, CallFunc_Add_IntInt_ReturnValue_1) == 0x000034, "Member 'SkillInfoForBattleSetTop_C_SwitchTacticalSkillBg::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SwitchTacticalSkillBg, CallFunc_Array_Length_ReturnValue_1) == 0x000038, "Member 'SkillInfoForBattleSetTop_C_SwitchTacticalSkillBg::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SwitchTacticalSkillBg, CallFunc_Less_IntInt_ReturnValue_1) == 0x00003C, "Member 'SkillInfoForBattleSetTop_C_SwitchTacticalSkillBg::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

// Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.SetupTacticalSkillPosition
// 0x0048 (0x0048 - 0x0000)
struct SkillInfoForBattleSetTop_C_SetupTacticalSkillPosition final
{
public:
	bool                                          IsSkillPaletteGrp2AtFront;                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsGrp2AtFront;                                     // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6680[0x1];                                     // 0x0003(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6681[0x2];                                     // 0x000E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_2;                               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6682[0x2];                                     // 0x001E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_1;                           // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              K2Node_Select_Default_2;                           // 0x002C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              K2Node_Select_Default_3;                           // 0x0034(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6683[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_1;           // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillInfoForBattleSetTop_C_SetupTacticalSkillPosition) == 0x000008, "Wrong alignment on SkillInfoForBattleSetTop_C_SetupTacticalSkillPosition");
static_assert(sizeof(SkillInfoForBattleSetTop_C_SetupTacticalSkillPosition) == 0x000048, "Wrong size on SkillInfoForBattleSetTop_C_SetupTacticalSkillPosition");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkillPosition, IsSkillPaletteGrp2AtFront) == 0x000000, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkillPosition::IsSkillPaletteGrp2AtFront' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkillPosition, IsGrp2AtFront) == 0x000001, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkillPosition::IsGrp2AtFront' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkillPosition, Temp_bool_Variable) == 0x000002, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkillPosition::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkillPosition, Temp_int_Variable) == 0x000004, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkillPosition::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkillPosition, Temp_int_Variable_1) == 0x000008, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkillPosition::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkillPosition, Temp_bool_Variable_1) == 0x00000C, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkillPosition::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkillPosition, Temp_bool_Variable_2) == 0x00000D, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkillPosition::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkillPosition, Temp_int_Variable_2) == 0x000010, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkillPosition::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkillPosition, K2Node_Select_Default) == 0x000014, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkillPosition::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkillPosition, Temp_int_Variable_3) == 0x000018, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkillPosition::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkillPosition, Temp_bool_Variable_3) == 0x00001C, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkillPosition::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkillPosition, CallFunc_Not_PreBool_ReturnValue) == 0x00001D, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkillPosition::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkillPosition, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000020, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkillPosition::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkillPosition, K2Node_Select_Default_1) == 0x000028, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkillPosition::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkillPosition, K2Node_Select_Default_2) == 0x00002C, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkillPosition::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkillPosition, K2Node_Select_Default_3) == 0x000034, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkillPosition::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkillPosition, CallFunc_SlotAsCanvasSlot_ReturnValue_1) == 0x000040, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkillPosition::CallFunc_SlotAsCanvasSlot_ReturnValue_1' has a wrong offset!");

// Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.SetSkillPaletteType
// 0x0028 (0x0028 - 0x0000)
struct SkillInfoForBattleSetTop_C_SetSkillPaletteType final
{
public:
	bool                                          bInIsSubSkillPalette;                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bInIgnoreSwitchBtn;                                // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalIsSubSkillPalette;                            // 0x0002(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6684[0x1];                                     // 0x0003(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6685[0x2];                                     // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6686[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_3;                               // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_1;                           // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoForBattleSetTop_C_SetSkillPaletteType) == 0x000004, "Wrong alignment on SkillInfoForBattleSetTop_C_SetSkillPaletteType");
static_assert(sizeof(SkillInfoForBattleSetTop_C_SetSkillPaletteType) == 0x000028, "Wrong size on SkillInfoForBattleSetTop_C_SetSkillPaletteType");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetSkillPaletteType, bInIsSubSkillPalette) == 0x000000, "Member 'SkillInfoForBattleSetTop_C_SetSkillPaletteType::bInIsSubSkillPalette' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetSkillPaletteType, bInIgnoreSwitchBtn) == 0x000001, "Member 'SkillInfoForBattleSetTop_C_SetSkillPaletteType::bInIgnoreSwitchBtn' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetSkillPaletteType, LocalIsSubSkillPalette) == 0x000002, "Member 'SkillInfoForBattleSetTop_C_SetSkillPaletteType::LocalIsSubSkillPalette' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetSkillPaletteType, Temp_int_Variable) == 0x000004, "Member 'SkillInfoForBattleSetTop_C_SetSkillPaletteType::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetSkillPaletteType, CallFunc_Not_PreBool_ReturnValue) == 0x000008, "Member 'SkillInfoForBattleSetTop_C_SetSkillPaletteType::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetSkillPaletteType, Temp_bool_Variable) == 0x000009, "Member 'SkillInfoForBattleSetTop_C_SetSkillPaletteType::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetSkillPaletteType, Temp_int_Variable_1) == 0x00000C, "Member 'SkillInfoForBattleSetTop_C_SetSkillPaletteType::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetSkillPaletteType, Temp_int_Variable_2) == 0x000010, "Member 'SkillInfoForBattleSetTop_C_SetSkillPaletteType::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetSkillPaletteType, Temp_bool_Variable_1) == 0x000014, "Member 'SkillInfoForBattleSetTop_C_SetSkillPaletteType::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetSkillPaletteType, Temp_int_Variable_3) == 0x000018, "Member 'SkillInfoForBattleSetTop_C_SetSkillPaletteType::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetSkillPaletteType, K2Node_Select_Default) == 0x00001C, "Member 'SkillInfoForBattleSetTop_C_SetSkillPaletteType::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetSkillPaletteType, K2Node_Select_Default_1) == 0x000020, "Member 'SkillInfoForBattleSetTop_C_SetSkillPaletteType::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetSkillPaletteType, CallFunc_IsValid_ReturnValue) == 0x000024, "Member 'SkillInfoForBattleSetTop_C_SetSkillPaletteType::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetSkillPaletteType, CallFunc_IsValid_ReturnValue_1) == 0x000025, "Member 'SkillInfoForBattleSetTop_C_SetSkillPaletteType::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.BindTacticalSkillIconEvents
// 0x0098 (0x0098 - 0x0000)
struct SkillInfoForBattleSetTop_C_BindTacticalSkillIconEvents final
{
public:
	bool                                          bInUnbindEvent;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6687[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USkillInfoIconForTacticalSkill_C*       LocalObj;                                          // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UHorizontalBox*>                 LocalHBArray;                                      // 0x0010(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	bool                                          LocalUnbindEvent;                                  // 0x0020(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6688[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBox*                         CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6689[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_668A[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(ESkillActionPosition InTacticalSkillSAP, int32 InSkillId, int32 InSkillLevel)> K2Node_CreateDelegate_OutputDelegate;              // 0x004C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(ESkillActionPosition InTacticalSkillSAP, int32 InSkillId, int32 InSkillLevel)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x005C(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Variable;                                 // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkillInfoIconForTacticalSkill_C*       K2Node_DynamicCast_AsSkill_Info_Icon_for_Tactical_Skill; // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0082(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_668B[0x1];                                     // 0x0083(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UHorizontalBox*>                 K2Node_MakeArray_Array;                            // 0x0088(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(SkillInfoForBattleSetTop_C_BindTacticalSkillIconEvents) == 0x000008, "Wrong alignment on SkillInfoForBattleSetTop_C_BindTacticalSkillIconEvents");
static_assert(sizeof(SkillInfoForBattleSetTop_C_BindTacticalSkillIconEvents) == 0x000098, "Wrong size on SkillInfoForBattleSetTop_C_BindTacticalSkillIconEvents");
static_assert(offsetof(SkillInfoForBattleSetTop_C_BindTacticalSkillIconEvents, bInUnbindEvent) == 0x000000, "Member 'SkillInfoForBattleSetTop_C_BindTacticalSkillIconEvents::bInUnbindEvent' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_BindTacticalSkillIconEvents, LocalObj) == 0x000008, "Member 'SkillInfoForBattleSetTop_C_BindTacticalSkillIconEvents::LocalObj' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_BindTacticalSkillIconEvents, LocalHBArray) == 0x000010, "Member 'SkillInfoForBattleSetTop_C_BindTacticalSkillIconEvents::LocalHBArray' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_BindTacticalSkillIconEvents, LocalUnbindEvent) == 0x000020, "Member 'SkillInfoForBattleSetTop_C_BindTacticalSkillIconEvents::LocalUnbindEvent' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_BindTacticalSkillIconEvents, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'SkillInfoForBattleSetTop_C_BindTacticalSkillIconEvents::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_BindTacticalSkillIconEvents, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'SkillInfoForBattleSetTop_C_BindTacticalSkillIconEvents::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_BindTacticalSkillIconEvents, Temp_int_Array_Index_Variable) == 0x00002C, "Member 'SkillInfoForBattleSetTop_C_BindTacticalSkillIconEvents::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_BindTacticalSkillIconEvents, CallFunc_Array_Get_Item) == 0x000030, "Member 'SkillInfoForBattleSetTop_C_BindTacticalSkillIconEvents::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_BindTacticalSkillIconEvents, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'SkillInfoForBattleSetTop_C_BindTacticalSkillIconEvents::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_BindTacticalSkillIconEvents, CallFunc_GetChildrenCount_ReturnValue) == 0x00003C, "Member 'SkillInfoForBattleSetTop_C_BindTacticalSkillIconEvents::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_BindTacticalSkillIconEvents, CallFunc_Less_IntInt_ReturnValue) == 0x000040, "Member 'SkillInfoForBattleSetTop_C_BindTacticalSkillIconEvents::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_BindTacticalSkillIconEvents, CallFunc_Subtract_IntInt_ReturnValue) == 0x000044, "Member 'SkillInfoForBattleSetTop_C_BindTacticalSkillIconEvents::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_BindTacticalSkillIconEvents, CallFunc_IsValid_ReturnValue) == 0x000048, "Member 'SkillInfoForBattleSetTop_C_BindTacticalSkillIconEvents::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_BindTacticalSkillIconEvents, K2Node_CreateDelegate_OutputDelegate) == 0x00004C, "Member 'SkillInfoForBattleSetTop_C_BindTacticalSkillIconEvents::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_BindTacticalSkillIconEvents, K2Node_CreateDelegate_OutputDelegate_1) == 0x00005C, "Member 'SkillInfoForBattleSetTop_C_BindTacticalSkillIconEvents::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_BindTacticalSkillIconEvents, Temp_int_Variable) == 0x00006C, "Member 'SkillInfoForBattleSetTop_C_BindTacticalSkillIconEvents::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_BindTacticalSkillIconEvents, CallFunc_GetChildAt_ReturnValue) == 0x000070, "Member 'SkillInfoForBattleSetTop_C_BindTacticalSkillIconEvents::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_BindTacticalSkillIconEvents, K2Node_DynamicCast_AsSkill_Info_Icon_for_Tactical_Skill) == 0x000078, "Member 'SkillInfoForBattleSetTop_C_BindTacticalSkillIconEvents::K2Node_DynamicCast_AsSkill_Info_Icon_for_Tactical_Skill' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_BindTacticalSkillIconEvents, K2Node_DynamicCast_bSuccess) == 0x000080, "Member 'SkillInfoForBattleSetTop_C_BindTacticalSkillIconEvents::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_BindTacticalSkillIconEvents, CallFunc_IsValid_ReturnValue_1) == 0x000081, "Member 'SkillInfoForBattleSetTop_C_BindTacticalSkillIconEvents::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_BindTacticalSkillIconEvents, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000082, "Member 'SkillInfoForBattleSetTop_C_BindTacticalSkillIconEvents::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_BindTacticalSkillIconEvents, CallFunc_Add_IntInt_ReturnValue_1) == 0x000084, "Member 'SkillInfoForBattleSetTop_C_BindTacticalSkillIconEvents::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_BindTacticalSkillIconEvents, K2Node_MakeArray_Array) == 0x000088, "Member 'SkillInfoForBattleSetTop_C_BindTacticalSkillIconEvents::K2Node_MakeArray_Array' has a wrong offset!");

// Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.SetupTacticalSkillButtonEnable
// 0x0090 (0x0090 - 0x0000)
struct SkillInfoForBattleSetTop_C_SetupTacticalSkillButtonEnable final
{
public:
	bool                                          bInIsSkillPaletteGrp2AtFront;                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalIsSkillPaletteGrp2;                           // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_668C[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USkillInfoIconForTacticalSkill_C*       LocalSkillIcon;                                    // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBox*                         LocalArrayElement;                                 // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UHorizontalBox*>                 LocalArray;                                        // 0x0018(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	bool                                          LocalIsSkillPaletteGrp2AtFront;                    // 0x0028(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_668D[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_668E[0x2];                                     // 0x0032(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_668F[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6690[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UHorizontalBox*                         CallFunc_Array_Get_Item;                           // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkillInfoIconForTacticalSkill_C*       K2Node_DynamicCast_AsSkill_Info_Icon_for_Tactical_Skill; // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x006A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x006B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6691[0x3];                                     // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UHorizontalBox*>                 K2Node_MakeArray_Array;                            // 0x0078(0x0010)(ReferenceParm, ContainsInstancedReference)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default;                             // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoForBattleSetTop_C_SetupTacticalSkillButtonEnable) == 0x000008, "Wrong alignment on SkillInfoForBattleSetTop_C_SetupTacticalSkillButtonEnable");
static_assert(sizeof(SkillInfoForBattleSetTop_C_SetupTacticalSkillButtonEnable) == 0x000090, "Wrong size on SkillInfoForBattleSetTop_C_SetupTacticalSkillButtonEnable");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkillButtonEnable, bInIsSkillPaletteGrp2AtFront) == 0x000000, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkillButtonEnable::bInIsSkillPaletteGrp2AtFront' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkillButtonEnable, LocalIsSkillPaletteGrp2) == 0x000001, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkillButtonEnable::LocalIsSkillPaletteGrp2' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkillButtonEnable, LocalSkillIcon) == 0x000008, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkillButtonEnable::LocalSkillIcon' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkillButtonEnable, LocalArrayElement) == 0x000010, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkillButtonEnable::LocalArrayElement' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkillButtonEnable, LocalArray) == 0x000018, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkillButtonEnable::LocalArray' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkillButtonEnable, LocalIsSkillPaletteGrp2AtFront) == 0x000028, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkillButtonEnable::LocalIsSkillPaletteGrp2AtFront' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkillButtonEnable, Temp_int_Array_Index_Variable) == 0x00002C, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkillButtonEnable::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkillButtonEnable, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000030, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkillButtonEnable::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkillButtonEnable, CallFunc_Not_PreBool_ReturnValue) == 0x000031, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkillButtonEnable::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkillButtonEnable, Temp_int_Loop_Counter_Variable) == 0x000034, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkillButtonEnable::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkillButtonEnable, CallFunc_Add_IntInt_ReturnValue) == 0x000038, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkillButtonEnable::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkillButtonEnable, Temp_bool_Variable) == 0x00003C, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkillButtonEnable::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkillButtonEnable, CallFunc_GetChildrenCount_ReturnValue) == 0x000040, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkillButtonEnable::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkillButtonEnable, CallFunc_Subtract_IntInt_ReturnValue) == 0x000044, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkillButtonEnable::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkillButtonEnable, Temp_int_Variable) == 0x000048, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkillButtonEnable::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkillButtonEnable, CallFunc_Array_Get_Item) == 0x000050, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkillButtonEnable::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkillButtonEnable, CallFunc_GetChildAt_ReturnValue) == 0x000058, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkillButtonEnable::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkillButtonEnable, K2Node_DynamicCast_AsSkill_Info_Icon_for_Tactical_Skill) == 0x000060, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkillButtonEnable::K2Node_DynamicCast_AsSkill_Info_Icon_for_Tactical_Skill' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkillButtonEnable, K2Node_DynamicCast_bSuccess) == 0x000068, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkillButtonEnable::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkillButtonEnable, CallFunc_IsValid_ReturnValue) == 0x000069, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkillButtonEnable::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkillButtonEnable, CallFunc_IsValid_ReturnValue_1) == 0x00006A, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkillButtonEnable::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkillButtonEnable, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00006B, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkillButtonEnable::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkillButtonEnable, CallFunc_Add_IntInt_ReturnValue_1) == 0x00006C, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkillButtonEnable::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkillButtonEnable, CallFunc_Array_Length_ReturnValue) == 0x000070, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkillButtonEnable::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkillButtonEnable, CallFunc_Less_IntInt_ReturnValue) == 0x000074, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkillButtonEnable::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkillButtonEnable, K2Node_MakeArray_Array) == 0x000078, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkillButtonEnable::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkillButtonEnable, CallFunc_Not_PreBool_ReturnValue_1) == 0x000088, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkillButtonEnable::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillInfoForBattleSetTop_C_SetupTacticalSkillButtonEnable, K2Node_Select_Default) == 0x000089, "Member 'SkillInfoForBattleSetTop_C_SetupTacticalSkillButtonEnable::K2Node_Select_Default' has a wrong offset!");

}

