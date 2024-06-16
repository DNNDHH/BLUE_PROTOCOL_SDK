#pragma once

 

// Package: SkillInfoIconULTSkill

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function SkillInfoIconULTSkill.SkillInfoIconULTSkill_C.ExecuteUbergraph_SkillInfoIconULTSkill
// 0x0020 (0x0020 - 0x0000)
struct SkillInfoIconULTSkill_C_ExecuteUbergraph_SkillInfoIconULTSkill final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4765[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetSkillInfoItemSize_OutIsValid;          // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4766[0x2];                                     // 0x0012(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_GetSkillInfoItemSize_OutSize;             // 0x0014(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoIconULTSkill_C_ExecuteUbergraph_SkillInfoIconULTSkill) == 0x000008, "Wrong alignment on SkillInfoIconULTSkill_C_ExecuteUbergraph_SkillInfoIconULTSkill");
static_assert(sizeof(SkillInfoIconULTSkill_C_ExecuteUbergraph_SkillInfoIconULTSkill) == 0x000020, "Wrong size on SkillInfoIconULTSkill_C_ExecuteUbergraph_SkillInfoIconULTSkill");
static_assert(offsetof(SkillInfoIconULTSkill_C_ExecuteUbergraph_SkillInfoIconULTSkill, EntryPoint) == 0x000000, "Member 'SkillInfoIconULTSkill_C_ExecuteUbergraph_SkillInfoIconULTSkill::EntryPoint' has a wrong offset!");
static_assert(offsetof(SkillInfoIconULTSkill_C_ExecuteUbergraph_SkillInfoIconULTSkill, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'SkillInfoIconULTSkill_C_ExecuteUbergraph_SkillInfoIconULTSkill::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoIconULTSkill_C_ExecuteUbergraph_SkillInfoIconULTSkill, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000008, "Member 'SkillInfoIconULTSkill_C_ExecuteUbergraph_SkillInfoIconULTSkill::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoIconULTSkill_C_ExecuteUbergraph_SkillInfoIconULTSkill, K2Node_Event_IsDesignTime) == 0x000010, "Member 'SkillInfoIconULTSkill_C_ExecuteUbergraph_SkillInfoIconULTSkill::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(SkillInfoIconULTSkill_C_ExecuteUbergraph_SkillInfoIconULTSkill, CallFunc_GetSkillInfoItemSize_OutIsValid) == 0x000011, "Member 'SkillInfoIconULTSkill_C_ExecuteUbergraph_SkillInfoIconULTSkill::CallFunc_GetSkillInfoItemSize_OutIsValid' has a wrong offset!");
static_assert(offsetof(SkillInfoIconULTSkill_C_ExecuteUbergraph_SkillInfoIconULTSkill, CallFunc_GetSkillInfoItemSize_OutSize) == 0x000014, "Member 'SkillInfoIconULTSkill_C_ExecuteUbergraph_SkillInfoIconULTSkill::CallFunc_GetSkillInfoItemSize_OutSize' has a wrong offset!");
static_assert(offsetof(SkillInfoIconULTSkill_C_ExecuteUbergraph_SkillInfoIconULTSkill, CallFunc_IsValid_ReturnValue_1) == 0x00001C, "Member 'SkillInfoIconULTSkill_C_ExecuteUbergraph_SkillInfoIconULTSkill::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function SkillInfoIconULTSkill.SkillInfoIconULTSkill_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct SkillInfoIconULTSkill_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoIconULTSkill_C_PreConstruct) == 0x000001, "Wrong alignment on SkillInfoIconULTSkill_C_PreConstruct");
static_assert(sizeof(SkillInfoIconULTSkill_C_PreConstruct) == 0x000001, "Wrong size on SkillInfoIconULTSkill_C_PreConstruct");
static_assert(offsetof(SkillInfoIconULTSkill_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'SkillInfoIconULTSkill_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function SkillInfoIconULTSkill.SkillInfoIconULTSkill_C.CreateTooltip
// 0x0048 (0x0048 - 0x0000)
struct SkillInfoIconULTSkill_C_CreateTooltip final
{
public:
	bool                                          InIsNotUseTooltip;                                 // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          InIsSkillMastered;                                 // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4767[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LocalSkillReleasedLevel;                           // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindSkillMasteryParam_bIsValid;           // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4768[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSkillMasteryParam                   CallFunc_FindSkillMasteryParam_OutSkillMasteryParam; // 0x000C(0x0008)(NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4769[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_ToolTip_Skill_C*                   K2Node_DynamicCast_AsWBP_Tool_Tip_Skill;           // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_476A[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_ToolTip_Skill_C*                   K2Node_DynamicCast_AsWBP_Tool_Tip_Skill_1;         // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_476B[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_ToolTip_Skill_C*                   CallFunc_Create_ReturnValue;                       // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoIconULTSkill_C_CreateTooltip) == 0x000008, "Wrong alignment on SkillInfoIconULTSkill_C_CreateTooltip");
static_assert(sizeof(SkillInfoIconULTSkill_C_CreateTooltip) == 0x000048, "Wrong size on SkillInfoIconULTSkill_C_CreateTooltip");
static_assert(offsetof(SkillInfoIconULTSkill_C_CreateTooltip, InIsNotUseTooltip) == 0x000000, "Member 'SkillInfoIconULTSkill_C_CreateTooltip::InIsNotUseTooltip' has a wrong offset!");
static_assert(offsetof(SkillInfoIconULTSkill_C_CreateTooltip, InIsSkillMastered) == 0x000001, "Member 'SkillInfoIconULTSkill_C_CreateTooltip::InIsSkillMastered' has a wrong offset!");
static_assert(offsetof(SkillInfoIconULTSkill_C_CreateTooltip, LocalSkillReleasedLevel) == 0x000004, "Member 'SkillInfoIconULTSkill_C_CreateTooltip::LocalSkillReleasedLevel' has a wrong offset!");
static_assert(offsetof(SkillInfoIconULTSkill_C_CreateTooltip, CallFunc_FindSkillMasteryParam_bIsValid) == 0x000008, "Member 'SkillInfoIconULTSkill_C_CreateTooltip::CallFunc_FindSkillMasteryParam_bIsValid' has a wrong offset!");
static_assert(offsetof(SkillInfoIconULTSkill_C_CreateTooltip, CallFunc_FindSkillMasteryParam_OutSkillMasteryParam) == 0x00000C, "Member 'SkillInfoIconULTSkill_C_CreateTooltip::CallFunc_FindSkillMasteryParam_OutSkillMasteryParam' has a wrong offset!");
static_assert(offsetof(SkillInfoIconULTSkill_C_CreateTooltip, CallFunc_Not_PreBool_ReturnValue) == 0x000014, "Member 'SkillInfoIconULTSkill_C_CreateTooltip::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoIconULTSkill_C_CreateTooltip, K2Node_DynamicCast_AsWBP_Tool_Tip_Skill) == 0x000018, "Member 'SkillInfoIconULTSkill_C_CreateTooltip::K2Node_DynamicCast_AsWBP_Tool_Tip_Skill' has a wrong offset!");
static_assert(offsetof(SkillInfoIconULTSkill_C_CreateTooltip, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'SkillInfoIconULTSkill_C_CreateTooltip::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SkillInfoIconULTSkill_C_CreateTooltip, K2Node_DynamicCast_AsWBP_Tool_Tip_Skill_1) == 0x000028, "Member 'SkillInfoIconULTSkill_C_CreateTooltip::K2Node_DynamicCast_AsWBP_Tool_Tip_Skill_1' has a wrong offset!");
static_assert(offsetof(SkillInfoIconULTSkill_C_CreateTooltip, K2Node_DynamicCast_bSuccess_1) == 0x000030, "Member 'SkillInfoIconULTSkill_C_CreateTooltip::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(SkillInfoIconULTSkill_C_CreateTooltip, CallFunc_Create_ReturnValue) == 0x000038, "Member 'SkillInfoIconULTSkill_C_CreateTooltip::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoIconULTSkill_C_CreateTooltip, CallFunc_IsValid_ReturnValue) == 0x000040, "Member 'SkillInfoIconULTSkill_C_CreateTooltip::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoIconULTSkill_C_CreateTooltip, CallFunc_IsValid_ReturnValue_1) == 0x000041, "Member 'SkillInfoIconULTSkill_C_CreateTooltip::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function SkillInfoIconULTSkill.SkillInfoIconULTSkill_C.SetSkillInfo
// 0x001C (0x001C - 0x0000)
struct SkillInfoIconULTSkill_C_SetSkillInfo final
{
public:
	int32                                         InSkillId;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InSkillLevel;                                      // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  InClassType;                                       // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InIsSkillMastery;                                  // 0x0009(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          InIsInformationHidden;                             // 0x000A(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalIsSkillMastery;                               // 0x000B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalIsInformationHidden;                          // 0x000C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_476C[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_476D[0x2];                                     // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillInfoIconULTSkill_C_SetSkillInfo) == 0x000004, "Wrong alignment on SkillInfoIconULTSkill_C_SetSkillInfo");
static_assert(sizeof(SkillInfoIconULTSkill_C_SetSkillInfo) == 0x00001C, "Wrong size on SkillInfoIconULTSkill_C_SetSkillInfo");
static_assert(offsetof(SkillInfoIconULTSkill_C_SetSkillInfo, InSkillId) == 0x000000, "Member 'SkillInfoIconULTSkill_C_SetSkillInfo::InSkillId' has a wrong offset!");
static_assert(offsetof(SkillInfoIconULTSkill_C_SetSkillInfo, InSkillLevel) == 0x000004, "Member 'SkillInfoIconULTSkill_C_SetSkillInfo::InSkillLevel' has a wrong offset!");
static_assert(offsetof(SkillInfoIconULTSkill_C_SetSkillInfo, InClassType) == 0x000008, "Member 'SkillInfoIconULTSkill_C_SetSkillInfo::InClassType' has a wrong offset!");
static_assert(offsetof(SkillInfoIconULTSkill_C_SetSkillInfo, InIsSkillMastery) == 0x000009, "Member 'SkillInfoIconULTSkill_C_SetSkillInfo::InIsSkillMastery' has a wrong offset!");
static_assert(offsetof(SkillInfoIconULTSkill_C_SetSkillInfo, InIsInformationHidden) == 0x00000A, "Member 'SkillInfoIconULTSkill_C_SetSkillInfo::InIsInformationHidden' has a wrong offset!");
static_assert(offsetof(SkillInfoIconULTSkill_C_SetSkillInfo, LocalIsSkillMastery) == 0x00000B, "Member 'SkillInfoIconULTSkill_C_SetSkillInfo::LocalIsSkillMastery' has a wrong offset!");
static_assert(offsetof(SkillInfoIconULTSkill_C_SetSkillInfo, LocalIsInformationHidden) == 0x00000C, "Member 'SkillInfoIconULTSkill_C_SetSkillInfo::LocalIsInformationHidden' has a wrong offset!");
static_assert(offsetof(SkillInfoIconULTSkill_C_SetSkillInfo, Temp_int_Variable) == 0x000010, "Member 'SkillInfoIconULTSkill_C_SetSkillInfo::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(SkillInfoIconULTSkill_C_SetSkillInfo, CallFunc_Not_PreBool_ReturnValue) == 0x000014, "Member 'SkillInfoIconULTSkill_C_SetSkillInfo::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoIconULTSkill_C_SetSkillInfo, Temp_bool_Variable) == 0x000015, "Member 'SkillInfoIconULTSkill_C_SetSkillInfo::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SkillInfoIconULTSkill_C_SetSkillInfo, K2Node_Select_Default) == 0x000018, "Member 'SkillInfoIconULTSkill_C_SetSkillInfo::K2Node_Select_Default' has a wrong offset!");

// Function SkillInfoIconULTSkill.SkillInfoIconULTSkill_C.SetLevel
// 0x0010 (0x0010 - 0x0000)
struct SkillInfoIconULTSkill_C_SetLevel final
{
public:
	int32                                         InLevel;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalLevel;                                        // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillInfoIconULTSkill_C_SetLevel) == 0x000004, "Wrong alignment on SkillInfoIconULTSkill_C_SetLevel");
static_assert(sizeof(SkillInfoIconULTSkill_C_SetLevel) == 0x000010, "Wrong size on SkillInfoIconULTSkill_C_SetLevel");
static_assert(offsetof(SkillInfoIconULTSkill_C_SetLevel, InLevel) == 0x000000, "Member 'SkillInfoIconULTSkill_C_SetLevel::InLevel' has a wrong offset!");
static_assert(offsetof(SkillInfoIconULTSkill_C_SetLevel, LocalLevel) == 0x000004, "Member 'SkillInfoIconULTSkill_C_SetLevel::LocalLevel' has a wrong offset!");
static_assert(offsetof(SkillInfoIconULTSkill_C_SetLevel, CallFunc_MakeLiteralByte_ReturnValue) == 0x000008, "Member 'SkillInfoIconULTSkill_C_SetLevel::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoIconULTSkill_C_SetLevel, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000009, "Member 'SkillInfoIconULTSkill_C_SetLevel::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillInfoIconULTSkill_C_SetLevel, CallFunc_IsValid_ReturnValue) == 0x00000A, "Member 'SkillInfoIconULTSkill_C_SetLevel::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoIconULTSkill_C_SetLevel, Temp_bool_Variable) == 0x00000B, "Member 'SkillInfoIconULTSkill_C_SetLevel::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SkillInfoIconULTSkill_C_SetLevel, CallFunc_Greater_IntInt_ReturnValue) == 0x00000C, "Member 'SkillInfoIconULTSkill_C_SetLevel::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoIconULTSkill_C_SetLevel, K2Node_Select_Default) == 0x00000D, "Member 'SkillInfoIconULTSkill_C_SetLevel::K2Node_Select_Default' has a wrong offset!");

// Function SkillInfoIconULTSkill.SkillInfoIconULTSkill_C.SetIsSkillEmpty
// 0x0018 (0x0018 - 0x0000)
struct SkillInfoIconULTSkill_C_SetIsSkillEmpty final
{
public:
	bool                                          InIsEmpty;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetGaugeSpecial_OutIsValid;               // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_476E[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USkillInfoGaugeSpecial_C*               CallFunc_GetGaugeSpecial_OutGaugeSpecial;          // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoIconULTSkill_C_SetIsSkillEmpty) == 0x000008, "Wrong alignment on SkillInfoIconULTSkill_C_SetIsSkillEmpty");
static_assert(sizeof(SkillInfoIconULTSkill_C_SetIsSkillEmpty) == 0x000018, "Wrong size on SkillInfoIconULTSkill_C_SetIsSkillEmpty");
static_assert(offsetof(SkillInfoIconULTSkill_C_SetIsSkillEmpty, InIsEmpty) == 0x000000, "Member 'SkillInfoIconULTSkill_C_SetIsSkillEmpty::InIsEmpty' has a wrong offset!");
static_assert(offsetof(SkillInfoIconULTSkill_C_SetIsSkillEmpty, CallFunc_GetGaugeSpecial_OutIsValid) == 0x000001, "Member 'SkillInfoIconULTSkill_C_SetIsSkillEmpty::CallFunc_GetGaugeSpecial_OutIsValid' has a wrong offset!");
static_assert(offsetof(SkillInfoIconULTSkill_C_SetIsSkillEmpty, CallFunc_GetGaugeSpecial_OutGaugeSpecial) == 0x000008, "Member 'SkillInfoIconULTSkill_C_SetIsSkillEmpty::CallFunc_GetGaugeSpecial_OutGaugeSpecial' has a wrong offset!");
static_assert(offsetof(SkillInfoIconULTSkill_C_SetIsSkillEmpty, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'SkillInfoIconULTSkill_C_SetIsSkillEmpty::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function SkillInfoIconULTSkill.SkillInfoIconULTSkill_C.InitSkillStopUpdate
// 0x0018 (0x0018 - 0x0000)
struct SkillInfoIconULTSkill_C_InitSkillStopUpdate final
{
public:
	bool                                          CallFunc_GetGaugeSpecial_OutIsValid;               // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_476F[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USkillInfoGaugeSpecial_C*               CallFunc_GetGaugeSpecial_OutGaugeSpecial;          // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoIconULTSkill_C_InitSkillStopUpdate) == 0x000008, "Wrong alignment on SkillInfoIconULTSkill_C_InitSkillStopUpdate");
static_assert(sizeof(SkillInfoIconULTSkill_C_InitSkillStopUpdate) == 0x000018, "Wrong size on SkillInfoIconULTSkill_C_InitSkillStopUpdate");
static_assert(offsetof(SkillInfoIconULTSkill_C_InitSkillStopUpdate, CallFunc_GetGaugeSpecial_OutIsValid) == 0x000000, "Member 'SkillInfoIconULTSkill_C_InitSkillStopUpdate::CallFunc_GetGaugeSpecial_OutIsValid' has a wrong offset!");
static_assert(offsetof(SkillInfoIconULTSkill_C_InitSkillStopUpdate, CallFunc_GetGaugeSpecial_OutGaugeSpecial) == 0x000008, "Member 'SkillInfoIconULTSkill_C_InitSkillStopUpdate::CallFunc_GetGaugeSpecial_OutGaugeSpecial' has a wrong offset!");
static_assert(offsetof(SkillInfoIconULTSkill_C_InitSkillStopUpdate, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'SkillInfoIconULTSkill_C_InitSkillStopUpdate::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function SkillInfoIconULTSkill.SkillInfoIconULTSkill_C.UpdateSkillIcon
// 0x0018 (0x0018 - 0x0000)
struct SkillInfoIconULTSkill_C_UpdateSkillIcon final
{
public:
	bool                                          InIsMastery;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetGaugeSpecial_OutIsValid;               // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4770[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USkillInfoGaugeSpecial_C*               CallFunc_GetGaugeSpecial_OutGaugeSpecial;          // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoIconULTSkill_C_UpdateSkillIcon) == 0x000008, "Wrong alignment on SkillInfoIconULTSkill_C_UpdateSkillIcon");
static_assert(sizeof(SkillInfoIconULTSkill_C_UpdateSkillIcon) == 0x000018, "Wrong size on SkillInfoIconULTSkill_C_UpdateSkillIcon");
static_assert(offsetof(SkillInfoIconULTSkill_C_UpdateSkillIcon, InIsMastery) == 0x000000, "Member 'SkillInfoIconULTSkill_C_UpdateSkillIcon::InIsMastery' has a wrong offset!");
static_assert(offsetof(SkillInfoIconULTSkill_C_UpdateSkillIcon, CallFunc_GetGaugeSpecial_OutIsValid) == 0x000001, "Member 'SkillInfoIconULTSkill_C_UpdateSkillIcon::CallFunc_GetGaugeSpecial_OutIsValid' has a wrong offset!");
static_assert(offsetof(SkillInfoIconULTSkill_C_UpdateSkillIcon, CallFunc_GetGaugeSpecial_OutGaugeSpecial) == 0x000008, "Member 'SkillInfoIconULTSkill_C_UpdateSkillIcon::CallFunc_GetGaugeSpecial_OutGaugeSpecial' has a wrong offset!");
static_assert(offsetof(SkillInfoIconULTSkill_C_UpdateSkillIcon, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'SkillInfoIconULTSkill_C_UpdateSkillIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

