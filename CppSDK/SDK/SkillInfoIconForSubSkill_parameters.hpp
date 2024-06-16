#pragma once

 

// Package: SkillInfoIconForSubSkill

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function SkillInfoIconForSubSkill.SkillInfoIconForSubSkill_C.ExecuteUbergraph_SkillInfoIconForSubSkill
// 0x0020 (0x0020 - 0x0000)
struct SkillInfoIconForSubSkill_C_ExecuteUbergraph_SkillInfoIconForSubSkill final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81EE[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetSkillInfoItemSize_OutIsValid;          // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81EF[0x2];                                     // 0x0012(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_GetSkillInfoItemSize_OutSize;             // 0x0014(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoIconForSubSkill_C_ExecuteUbergraph_SkillInfoIconForSubSkill) == 0x000008, "Wrong alignment on SkillInfoIconForSubSkill_C_ExecuteUbergraph_SkillInfoIconForSubSkill");
static_assert(sizeof(SkillInfoIconForSubSkill_C_ExecuteUbergraph_SkillInfoIconForSubSkill) == 0x000020, "Wrong size on SkillInfoIconForSubSkill_C_ExecuteUbergraph_SkillInfoIconForSubSkill");
static_assert(offsetof(SkillInfoIconForSubSkill_C_ExecuteUbergraph_SkillInfoIconForSubSkill, EntryPoint) == 0x000000, "Member 'SkillInfoIconForSubSkill_C_ExecuteUbergraph_SkillInfoIconForSubSkill::EntryPoint' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForSubSkill_C_ExecuteUbergraph_SkillInfoIconForSubSkill, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'SkillInfoIconForSubSkill_C_ExecuteUbergraph_SkillInfoIconForSubSkill::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForSubSkill_C_ExecuteUbergraph_SkillInfoIconForSubSkill, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000008, "Member 'SkillInfoIconForSubSkill_C_ExecuteUbergraph_SkillInfoIconForSubSkill::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForSubSkill_C_ExecuteUbergraph_SkillInfoIconForSubSkill, K2Node_Event_IsDesignTime) == 0x000010, "Member 'SkillInfoIconForSubSkill_C_ExecuteUbergraph_SkillInfoIconForSubSkill::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForSubSkill_C_ExecuteUbergraph_SkillInfoIconForSubSkill, CallFunc_GetSkillInfoItemSize_OutIsValid) == 0x000011, "Member 'SkillInfoIconForSubSkill_C_ExecuteUbergraph_SkillInfoIconForSubSkill::CallFunc_GetSkillInfoItemSize_OutIsValid' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForSubSkill_C_ExecuteUbergraph_SkillInfoIconForSubSkill, CallFunc_GetSkillInfoItemSize_OutSize) == 0x000014, "Member 'SkillInfoIconForSubSkill_C_ExecuteUbergraph_SkillInfoIconForSubSkill::CallFunc_GetSkillInfoItemSize_OutSize' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForSubSkill_C_ExecuteUbergraph_SkillInfoIconForSubSkill, CallFunc_IsValid_ReturnValue_1) == 0x00001C, "Member 'SkillInfoIconForSubSkill_C_ExecuteUbergraph_SkillInfoIconForSubSkill::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function SkillInfoIconForSubSkill.SkillInfoIconForSubSkill_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct SkillInfoIconForSubSkill_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoIconForSubSkill_C_PreConstruct) == 0x000001, "Wrong alignment on SkillInfoIconForSubSkill_C_PreConstruct");
static_assert(sizeof(SkillInfoIconForSubSkill_C_PreConstruct) == 0x000001, "Wrong size on SkillInfoIconForSubSkill_C_PreConstruct");
static_assert(offsetof(SkillInfoIconForSubSkill_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'SkillInfoIconForSubSkill_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function SkillInfoIconForSubSkill.SkillInfoIconForSubSkill_C.CreateTooltip
// 0x0028 (0x0028 - 0x0000)
struct SkillInfoIconForSubSkill_C_CreateTooltip final
{
public:
	bool                                          InIsNotUseTooltip;                                 // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81F0[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_ToolTip_Skill_C*                   K2Node_DynamicCast_AsWBP_Tool_Tip_Skill;           // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81F1[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_ToolTip_Skill_C*                   CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoIconForSubSkill_C_CreateTooltip) == 0x000008, "Wrong alignment on SkillInfoIconForSubSkill_C_CreateTooltip");
static_assert(sizeof(SkillInfoIconForSubSkill_C_CreateTooltip) == 0x000028, "Wrong size on SkillInfoIconForSubSkill_C_CreateTooltip");
static_assert(offsetof(SkillInfoIconForSubSkill_C_CreateTooltip, InIsNotUseTooltip) == 0x000000, "Member 'SkillInfoIconForSubSkill_C_CreateTooltip::InIsNotUseTooltip' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForSubSkill_C_CreateTooltip, CallFunc_Not_PreBool_ReturnValue) == 0x000001, "Member 'SkillInfoIconForSubSkill_C_CreateTooltip::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForSubSkill_C_CreateTooltip, K2Node_DynamicCast_AsWBP_Tool_Tip_Skill) == 0x000008, "Member 'SkillInfoIconForSubSkill_C_CreateTooltip::K2Node_DynamicCast_AsWBP_Tool_Tip_Skill' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForSubSkill_C_CreateTooltip, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'SkillInfoIconForSubSkill_C_CreateTooltip::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForSubSkill_C_CreateTooltip, CallFunc_Create_ReturnValue) == 0x000018, "Member 'SkillInfoIconForSubSkill_C_CreateTooltip::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForSubSkill_C_CreateTooltip, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'SkillInfoIconForSubSkill_C_CreateTooltip::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForSubSkill_C_CreateTooltip, CallFunc_IsValid_ReturnValue_1) == 0x000021, "Member 'SkillInfoIconForSubSkill_C_CreateTooltip::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function SkillInfoIconForSubSkill.SkillInfoIconForSubSkill_C.SetSkillInfo
// 0x0010 (0x0010 - 0x0000)
struct SkillInfoIconForSubSkill_C_SetSkillInfo final
{
public:
	int32                                         InSkillId;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InSkillLevel;                                      // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InIsInformationHidden;                             // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          InIsSkillMastery;                                  // 0x0009(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalIsSkillMastery;                               // 0x000A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalIsInformationHidden;                          // 0x000B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoIconForSubSkill_C_SetSkillInfo) == 0x000004, "Wrong alignment on SkillInfoIconForSubSkill_C_SetSkillInfo");
static_assert(sizeof(SkillInfoIconForSubSkill_C_SetSkillInfo) == 0x000010, "Wrong size on SkillInfoIconForSubSkill_C_SetSkillInfo");
static_assert(offsetof(SkillInfoIconForSubSkill_C_SetSkillInfo, InSkillId) == 0x000000, "Member 'SkillInfoIconForSubSkill_C_SetSkillInfo::InSkillId' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForSubSkill_C_SetSkillInfo, InSkillLevel) == 0x000004, "Member 'SkillInfoIconForSubSkill_C_SetSkillInfo::InSkillLevel' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForSubSkill_C_SetSkillInfo, InIsInformationHidden) == 0x000008, "Member 'SkillInfoIconForSubSkill_C_SetSkillInfo::InIsInformationHidden' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForSubSkill_C_SetSkillInfo, InIsSkillMastery) == 0x000009, "Member 'SkillInfoIconForSubSkill_C_SetSkillInfo::InIsSkillMastery' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForSubSkill_C_SetSkillInfo, LocalIsSkillMastery) == 0x00000A, "Member 'SkillInfoIconForSubSkill_C_SetSkillInfo::LocalIsSkillMastery' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForSubSkill_C_SetSkillInfo, LocalIsInformationHidden) == 0x00000B, "Member 'SkillInfoIconForSubSkill_C_SetSkillInfo::LocalIsInformationHidden' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForSubSkill_C_SetSkillInfo, CallFunc_Not_PreBool_ReturnValue) == 0x00000C, "Member 'SkillInfoIconForSubSkill_C_SetSkillInfo::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function SkillInfoIconForSubSkill.SkillInfoIconForSubSkill_C.SetLevel
// 0x0010 (0x0010 - 0x0000)
struct SkillInfoIconForSubSkill_C_SetLevel final
{
public:
	int32                                         InLevel;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalLevel;                                        // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillInfoIconForSubSkill_C_SetLevel) == 0x000004, "Wrong alignment on SkillInfoIconForSubSkill_C_SetLevel");
static_assert(sizeof(SkillInfoIconForSubSkill_C_SetLevel) == 0x000010, "Wrong size on SkillInfoIconForSubSkill_C_SetLevel");
static_assert(offsetof(SkillInfoIconForSubSkill_C_SetLevel, InLevel) == 0x000000, "Member 'SkillInfoIconForSubSkill_C_SetLevel::InLevel' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForSubSkill_C_SetLevel, LocalLevel) == 0x000004, "Member 'SkillInfoIconForSubSkill_C_SetLevel::LocalLevel' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForSubSkill_C_SetLevel, Temp_bool_Variable) == 0x000008, "Member 'SkillInfoIconForSubSkill_C_SetLevel::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForSubSkill_C_SetLevel, CallFunc_MakeLiteralByte_ReturnValue) == 0x000009, "Member 'SkillInfoIconForSubSkill_C_SetLevel::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForSubSkill_C_SetLevel, CallFunc_IsValid_ReturnValue) == 0x00000A, "Member 'SkillInfoIconForSubSkill_C_SetLevel::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForSubSkill_C_SetLevel, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x00000B, "Member 'SkillInfoIconForSubSkill_C_SetLevel::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForSubSkill_C_SetLevel, CallFunc_Greater_IntInt_ReturnValue) == 0x00000C, "Member 'SkillInfoIconForSubSkill_C_SetLevel::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForSubSkill_C_SetLevel, K2Node_Select_Default) == 0x00000D, "Member 'SkillInfoIconForSubSkill_C_SetLevel::K2Node_Select_Default' has a wrong offset!");

// Function SkillInfoIconForSubSkill.SkillInfoIconForSubSkill_C.SetIsSkillEmpty
// 0x0018 (0x0018 - 0x0000)
struct SkillInfoIconForSubSkill_C_SetIsSkillEmpty final
{
public:
	bool                                          InIsEmpty;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetGaugeDef_OutIsValid;                   // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81F2[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USkillInfoGaugeMainDefHeal_C*           CallFunc_GetGaugeDef_OutGaugeDef;                  // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoIconForSubSkill_C_SetIsSkillEmpty) == 0x000008, "Wrong alignment on SkillInfoIconForSubSkill_C_SetIsSkillEmpty");
static_assert(sizeof(SkillInfoIconForSubSkill_C_SetIsSkillEmpty) == 0x000018, "Wrong size on SkillInfoIconForSubSkill_C_SetIsSkillEmpty");
static_assert(offsetof(SkillInfoIconForSubSkill_C_SetIsSkillEmpty, InIsEmpty) == 0x000000, "Member 'SkillInfoIconForSubSkill_C_SetIsSkillEmpty::InIsEmpty' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForSubSkill_C_SetIsSkillEmpty, CallFunc_GetGaugeDef_OutIsValid) == 0x000001, "Member 'SkillInfoIconForSubSkill_C_SetIsSkillEmpty::CallFunc_GetGaugeDef_OutIsValid' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForSubSkill_C_SetIsSkillEmpty, CallFunc_GetGaugeDef_OutGaugeDef) == 0x000008, "Member 'SkillInfoIconForSubSkill_C_SetIsSkillEmpty::CallFunc_GetGaugeDef_OutGaugeDef' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForSubSkill_C_SetIsSkillEmpty, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'SkillInfoIconForSubSkill_C_SetIsSkillEmpty::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function SkillInfoIconForSubSkill.SkillInfoIconForSubSkill_C.InitSkillEmptyColor
// 0x0028 (0x0028 - 0x0000)
struct SkillInfoIconForSubSkill_C_InitSkillEmptyColor final
{
public:
	struct FLinearColor                           CallFunc_MakeColor_ReturnValue;                    // 0x0000(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetGaugeDef_OutIsValid;                   // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81F3[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USkillInfoGaugeMainDefHeal_C*           CallFunc_GetGaugeDef_OutGaugeDef;                  // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoIconForSubSkill_C_InitSkillEmptyColor) == 0x000008, "Wrong alignment on SkillInfoIconForSubSkill_C_InitSkillEmptyColor");
static_assert(sizeof(SkillInfoIconForSubSkill_C_InitSkillEmptyColor) == 0x000028, "Wrong size on SkillInfoIconForSubSkill_C_InitSkillEmptyColor");
static_assert(offsetof(SkillInfoIconForSubSkill_C_InitSkillEmptyColor, CallFunc_MakeColor_ReturnValue) == 0x000000, "Member 'SkillInfoIconForSubSkill_C_InitSkillEmptyColor::CallFunc_MakeColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForSubSkill_C_InitSkillEmptyColor, CallFunc_GetGaugeDef_OutIsValid) == 0x000010, "Member 'SkillInfoIconForSubSkill_C_InitSkillEmptyColor::CallFunc_GetGaugeDef_OutIsValid' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForSubSkill_C_InitSkillEmptyColor, CallFunc_GetGaugeDef_OutGaugeDef) == 0x000018, "Member 'SkillInfoIconForSubSkill_C_InitSkillEmptyColor::CallFunc_GetGaugeDef_OutGaugeDef' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForSubSkill_C_InitSkillEmptyColor, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'SkillInfoIconForSubSkill_C_InitSkillEmptyColor::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

