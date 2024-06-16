#pragma once

 

// Package: MyChara_AbilityIcon

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function MyChara_AbilityIcon.MyChara_AbilityIcon_C.ExecuteUbergraph_MyChara_AbilityIcon
// 0x00B8 (0x00B8 - 0x0000)
struct MyChara_AbilityIcon_C_ExecuteUbergraph_MyChara_AbilityIcon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_83C4[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0008(0x0038)(IsPlainOldData, NoDestructor)
	struct FPointerEvent                          K2Node_Event_MouseEvent;                           // 0x0040(0x0070)(ConstParm)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyChara_AbilityIcon_C_ExecuteUbergraph_MyChara_AbilityIcon) == 0x000008, "Wrong alignment on MyChara_AbilityIcon_C_ExecuteUbergraph_MyChara_AbilityIcon");
static_assert(sizeof(MyChara_AbilityIcon_C_ExecuteUbergraph_MyChara_AbilityIcon) == 0x0000B8, "Wrong size on MyChara_AbilityIcon_C_ExecuteUbergraph_MyChara_AbilityIcon");
static_assert(offsetof(MyChara_AbilityIcon_C_ExecuteUbergraph_MyChara_AbilityIcon, EntryPoint) == 0x000000, "Member 'MyChara_AbilityIcon_C_ExecuteUbergraph_MyChara_AbilityIcon::EntryPoint' has a wrong offset!");
static_assert(offsetof(MyChara_AbilityIcon_C_ExecuteUbergraph_MyChara_AbilityIcon, CallFunc_Greater_IntInt_ReturnValue) == 0x000004, "Member 'MyChara_AbilityIcon_C_ExecuteUbergraph_MyChara_AbilityIcon::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyChara_AbilityIcon_C_ExecuteUbergraph_MyChara_AbilityIcon, K2Node_Event_MyGeometry) == 0x000008, "Member 'MyChara_AbilityIcon_C_ExecuteUbergraph_MyChara_AbilityIcon::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(MyChara_AbilityIcon_C_ExecuteUbergraph_MyChara_AbilityIcon, K2Node_Event_MouseEvent) == 0x000040, "Member 'MyChara_AbilityIcon_C_ExecuteUbergraph_MyChara_AbilityIcon::K2Node_Event_MouseEvent' has a wrong offset!");
static_assert(offsetof(MyChara_AbilityIcon_C_ExecuteUbergraph_MyChara_AbilityIcon, CallFunc_PlaySE_ReturnValue) == 0x0000B0, "Member 'MyChara_AbilityIcon_C_ExecuteUbergraph_MyChara_AbilityIcon::CallFunc_PlaySE_ReturnValue' has a wrong offset!");

// Function MyChara_AbilityIcon.MyChara_AbilityIcon_C.OnMouseEnter
// 0x00A8 (0x00A8 - 0x0000)
struct MyChara_AbilityIcon_C_OnMouseEnter final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(MyChara_AbilityIcon_C_OnMouseEnter) == 0x000008, "Wrong alignment on MyChara_AbilityIcon_C_OnMouseEnter");
static_assert(sizeof(MyChara_AbilityIcon_C_OnMouseEnter) == 0x0000A8, "Wrong size on MyChara_AbilityIcon_C_OnMouseEnter");
static_assert(offsetof(MyChara_AbilityIcon_C_OnMouseEnter, MyGeometry) == 0x000000, "Member 'MyChara_AbilityIcon_C_OnMouseEnter::MyGeometry' has a wrong offset!");
static_assert(offsetof(MyChara_AbilityIcon_C_OnMouseEnter, MouseEvent) == 0x000038, "Member 'MyChara_AbilityIcon_C_OnMouseEnter::MouseEvent' has a wrong offset!");

// Function MyChara_AbilityIcon.MyChara_AbilityIcon_C.SetAbility
// 0x0028 (0x0028 - 0x0000)
struct MyChara_AbilityIcon_C_SetAbility final
{
public:
	int32                                         InSkillId;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InSkillLevel;                                      // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  InClassType;                                       // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InIsInformationHidden;                             // 0x0009(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalIsInformationHidden;                          // 0x000A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBClassType                                  LocalClassType;                                    // 0x000B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_83C5[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerManager*                       CallFunc_GetPlayerManager_ReturnValue;             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_83C6[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             CallFunc_GetClassPassiveSkillIcon_ReturnValue;     // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyChara_AbilityIcon_C_SetAbility) == 0x000008, "Wrong alignment on MyChara_AbilityIcon_C_SetAbility");
static_assert(sizeof(MyChara_AbilityIcon_C_SetAbility) == 0x000028, "Wrong size on MyChara_AbilityIcon_C_SetAbility");
static_assert(offsetof(MyChara_AbilityIcon_C_SetAbility, InSkillId) == 0x000000, "Member 'MyChara_AbilityIcon_C_SetAbility::InSkillId' has a wrong offset!");
static_assert(offsetof(MyChara_AbilityIcon_C_SetAbility, InSkillLevel) == 0x000004, "Member 'MyChara_AbilityIcon_C_SetAbility::InSkillLevel' has a wrong offset!");
static_assert(offsetof(MyChara_AbilityIcon_C_SetAbility, InClassType) == 0x000008, "Member 'MyChara_AbilityIcon_C_SetAbility::InClassType' has a wrong offset!");
static_assert(offsetof(MyChara_AbilityIcon_C_SetAbility, InIsInformationHidden) == 0x000009, "Member 'MyChara_AbilityIcon_C_SetAbility::InIsInformationHidden' has a wrong offset!");
static_assert(offsetof(MyChara_AbilityIcon_C_SetAbility, LocalIsInformationHidden) == 0x00000A, "Member 'MyChara_AbilityIcon_C_SetAbility::LocalIsInformationHidden' has a wrong offset!");
static_assert(offsetof(MyChara_AbilityIcon_C_SetAbility, LocalClassType) == 0x00000B, "Member 'MyChara_AbilityIcon_C_SetAbility::LocalClassType' has a wrong offset!");
static_assert(offsetof(MyChara_AbilityIcon_C_SetAbility, CallFunc_Greater_IntInt_ReturnValue) == 0x00000C, "Member 'MyChara_AbilityIcon_C_SetAbility::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyChara_AbilityIcon_C_SetAbility, CallFunc_GetPlayerManager_ReturnValue) == 0x000010, "Member 'MyChara_AbilityIcon_C_SetAbility::CallFunc_GetPlayerManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyChara_AbilityIcon_C_SetAbility, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'MyChara_AbilityIcon_C_SetAbility::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyChara_AbilityIcon_C_SetAbility, CallFunc_GetClassPassiveSkillIcon_ReturnValue) == 0x000020, "Member 'MyChara_AbilityIcon_C_SetAbility::CallFunc_GetClassPassiveSkillIcon_ReturnValue' has a wrong offset!");

// Function MyChara_AbilityIcon.MyChara_AbilityIcon_C.SetIconTexture
// 0x0010 (0x0010 - 0x0000)
struct MyChara_AbilityIcon_C_SetIconTexture final
{
public:
	class UTexture2D*                             InTexture;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyChara_AbilityIcon_C_SetIconTexture) == 0x000008, "Wrong alignment on MyChara_AbilityIcon_C_SetIconTexture");
static_assert(sizeof(MyChara_AbilityIcon_C_SetIconTexture) == 0x000010, "Wrong size on MyChara_AbilityIcon_C_SetIconTexture");
static_assert(offsetof(MyChara_AbilityIcon_C_SetIconTexture, InTexture) == 0x000000, "Member 'MyChara_AbilityIcon_C_SetIconTexture::InTexture' has a wrong offset!");
static_assert(offsetof(MyChara_AbilityIcon_C_SetIconTexture, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'MyChara_AbilityIcon_C_SetIconTexture::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function MyChara_AbilityIcon.MyChara_AbilityIcon_C.CreateTooltip
// 0x0028 (0x0028 - 0x0000)
struct MyChara_AbilityIcon_C_CreateTooltip final
{
public:
	bool                                          InNotUseTooltip;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_83C7[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_ToolTip_SkillBoard_C*              K2Node_DynamicCast_AsWBP_Tool_Tip_Skill_Board;     // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_83C8[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_ToolTip_SkillBoard_C*              CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyChara_AbilityIcon_C_CreateTooltip) == 0x000008, "Wrong alignment on MyChara_AbilityIcon_C_CreateTooltip");
static_assert(sizeof(MyChara_AbilityIcon_C_CreateTooltip) == 0x000028, "Wrong size on MyChara_AbilityIcon_C_CreateTooltip");
static_assert(offsetof(MyChara_AbilityIcon_C_CreateTooltip, InNotUseTooltip) == 0x000000, "Member 'MyChara_AbilityIcon_C_CreateTooltip::InNotUseTooltip' has a wrong offset!");
static_assert(offsetof(MyChara_AbilityIcon_C_CreateTooltip, CallFunc_Not_PreBool_ReturnValue) == 0x000001, "Member 'MyChara_AbilityIcon_C_CreateTooltip::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyChara_AbilityIcon_C_CreateTooltip, K2Node_DynamicCast_AsWBP_Tool_Tip_Skill_Board) == 0x000008, "Member 'MyChara_AbilityIcon_C_CreateTooltip::K2Node_DynamicCast_AsWBP_Tool_Tip_Skill_Board' has a wrong offset!");
static_assert(offsetof(MyChara_AbilityIcon_C_CreateTooltip, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'MyChara_AbilityIcon_C_CreateTooltip::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MyChara_AbilityIcon_C_CreateTooltip, CallFunc_Create_ReturnValue) == 0x000018, "Member 'MyChara_AbilityIcon_C_CreateTooltip::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyChara_AbilityIcon_C_CreateTooltip, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'MyChara_AbilityIcon_C_CreateTooltip::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyChara_AbilityIcon_C_CreateTooltip, CallFunc_IsValid_ReturnValue_1) == 0x000021, "Member 'MyChara_AbilityIcon_C_CreateTooltip::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

}

