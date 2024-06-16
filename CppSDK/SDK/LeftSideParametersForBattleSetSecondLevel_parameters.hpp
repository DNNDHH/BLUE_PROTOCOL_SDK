#pragma once

 

// Package: LeftSideParametersForBattleSetSecondLevel

#include "Basic.hpp"

#include "E_BattleSetInfoType_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function LeftSideParametersForBattleSetSecondLevel.LeftSideParametersForBattleSetSecondLevel_C.ExecuteUbergraph_LeftSideParametersForBattleSetSecondLevel
// 0x0004 (0x0004 - 0x0000)
struct LeftSideParametersForBattleSetSecondLevel_C_ExecuteUbergraph_LeftSideParametersForBattleSetSecondLevel final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LeftSideParametersForBattleSetSecondLevel_C_ExecuteUbergraph_LeftSideParametersForBattleSetSecondLevel) == 0x000004, "Wrong alignment on LeftSideParametersForBattleSetSecondLevel_C_ExecuteUbergraph_LeftSideParametersForBattleSetSecondLevel");
static_assert(sizeof(LeftSideParametersForBattleSetSecondLevel_C_ExecuteUbergraph_LeftSideParametersForBattleSetSecondLevel) == 0x000004, "Wrong size on LeftSideParametersForBattleSetSecondLevel_C_ExecuteUbergraph_LeftSideParametersForBattleSetSecondLevel");
static_assert(offsetof(LeftSideParametersForBattleSetSecondLevel_C_ExecuteUbergraph_LeftSideParametersForBattleSetSecondLevel, EntryPoint) == 0x000000, "Member 'LeftSideParametersForBattleSetSecondLevel_C_ExecuteUbergraph_LeftSideParametersForBattleSetSecondLevel::EntryPoint' has a wrong offset!");

// Function LeftSideParametersForBattleSetSecondLevel.LeftSideParametersForBattleSetSecondLevel_C.SetBattleSetInfoType
// 0x0048 (0x0048 - 0x0000)
struct LeftSideParametersForBattleSetSecondLevel_C_SetBattleSetInfoType final
{
public:
	E_BattleSetInfoType                           InBattleSetInfoType;                               // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_84A8[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         LocalPositionY;                                    // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LocalPositionX;                                    // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_84A9[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       LocalCanvasSlot;                                   // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_84AA[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_84AB[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x002C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetPosition_ReturnValue;                  // 0x0034(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LeftSideParametersForBattleSetSecondLevel_C_SetBattleSetInfoType) == 0x000008, "Wrong alignment on LeftSideParametersForBattleSetSecondLevel_C_SetBattleSetInfoType");
static_assert(sizeof(LeftSideParametersForBattleSetSecondLevel_C_SetBattleSetInfoType) == 0x000048, "Wrong size on LeftSideParametersForBattleSetSecondLevel_C_SetBattleSetInfoType");
static_assert(offsetof(LeftSideParametersForBattleSetSecondLevel_C_SetBattleSetInfoType, InBattleSetInfoType) == 0x000000, "Member 'LeftSideParametersForBattleSetSecondLevel_C_SetBattleSetInfoType::InBattleSetInfoType' has a wrong offset!");
static_assert(offsetof(LeftSideParametersForBattleSetSecondLevel_C_SetBattleSetInfoType, LocalPositionY) == 0x000004, "Member 'LeftSideParametersForBattleSetSecondLevel_C_SetBattleSetInfoType::LocalPositionY' has a wrong offset!");
static_assert(offsetof(LeftSideParametersForBattleSetSecondLevel_C_SetBattleSetInfoType, LocalPositionX) == 0x000008, "Member 'LeftSideParametersForBattleSetSecondLevel_C_SetBattleSetInfoType::LocalPositionX' has a wrong offset!");
static_assert(offsetof(LeftSideParametersForBattleSetSecondLevel_C_SetBattleSetInfoType, LocalCanvasSlot) == 0x000010, "Member 'LeftSideParametersForBattleSetSecondLevel_C_SetBattleSetInfoType::LocalCanvasSlot' has a wrong offset!");
static_assert(offsetof(LeftSideParametersForBattleSetSecondLevel_C_SetBattleSetInfoType, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'LeftSideParametersForBattleSetSecondLevel_C_SetBattleSetInfoType::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(LeftSideParametersForBattleSetSecondLevel_C_SetBattleSetInfoType, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000020, "Member 'LeftSideParametersForBattleSetSecondLevel_C_SetBattleSetInfoType::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(LeftSideParametersForBattleSetSecondLevel_C_SetBattleSetInfoType, CallFunc_IsValid_ReturnValue_1) == 0x000028, "Member 'LeftSideParametersForBattleSetSecondLevel_C_SetBattleSetInfoType::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LeftSideParametersForBattleSetSecondLevel_C_SetBattleSetInfoType, CallFunc_MakeVector2D_ReturnValue) == 0x00002C, "Member 'LeftSideParametersForBattleSetSecondLevel_C_SetBattleSetInfoType::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(LeftSideParametersForBattleSetSecondLevel_C_SetBattleSetInfoType, CallFunc_GetPosition_ReturnValue) == 0x000034, "Member 'LeftSideParametersForBattleSetSecondLevel_C_SetBattleSetInfoType::CallFunc_GetPosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(LeftSideParametersForBattleSetSecondLevel_C_SetBattleSetInfoType, CallFunc_BreakVector2D_X) == 0x00003C, "Member 'LeftSideParametersForBattleSetSecondLevel_C_SetBattleSetInfoType::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(LeftSideParametersForBattleSetSecondLevel_C_SetBattleSetInfoType, CallFunc_BreakVector2D_Y) == 0x000040, "Member 'LeftSideParametersForBattleSetSecondLevel_C_SetBattleSetInfoType::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(LeftSideParametersForBattleSetSecondLevel_C_SetBattleSetInfoType, K2Node_SwitchEnum_CmpSuccess) == 0x000044, "Member 'LeftSideParametersForBattleSetSecondLevel_C_SetBattleSetInfoType::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function LeftSideParametersForBattleSetSecondLevel.LeftSideParametersForBattleSetSecondLevel_C.GetLeftSideParameters
// 0x0008 (0x0008 - 0x0000)
struct LeftSideParametersForBattleSetSecondLevel_C_GetLeftSideParameters final
{
public:
	class UMyCharaMenu_LeftSideParameters_C*      OutLeftSideParameters;                             // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LeftSideParametersForBattleSetSecondLevel_C_GetLeftSideParameters) == 0x000008, "Wrong alignment on LeftSideParametersForBattleSetSecondLevel_C_GetLeftSideParameters");
static_assert(sizeof(LeftSideParametersForBattleSetSecondLevel_C_GetLeftSideParameters) == 0x000008, "Wrong size on LeftSideParametersForBattleSetSecondLevel_C_GetLeftSideParameters");
static_assert(offsetof(LeftSideParametersForBattleSetSecondLevel_C_GetLeftSideParameters, OutLeftSideParameters) == 0x000000, "Member 'LeftSideParametersForBattleSetSecondLevel_C_GetLeftSideParameters::OutLeftSideParameters' has a wrong offset!");

}

