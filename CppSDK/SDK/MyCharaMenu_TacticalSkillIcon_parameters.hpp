#pragma once

 

// Package: MyCharaMenu_TacticalSkillIcon

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function MyCharaMenu_TacticalSkillIcon.MyCharaMenu_TacticalSkillIcon_C.ExecuteUbergraph_MyCharaMenu_TacticalSkillIcon
// 0x00B8 (0x00B8 - 0x0000)
struct MyCharaMenu_TacticalSkillIcon_C_ExecuteUbergraph_MyCharaMenu_TacticalSkillIcon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0004(0x0038)(IsPlainOldData, NoDestructor)
	uint8                                         Pad_83B0[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerEvent                          K2Node_Event_MouseEvent;                           // 0x0040(0x0070)(ConstParm)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00B5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_TacticalSkillIcon_C_ExecuteUbergraph_MyCharaMenu_TacticalSkillIcon) == 0x000008, "Wrong alignment on MyCharaMenu_TacticalSkillIcon_C_ExecuteUbergraph_MyCharaMenu_TacticalSkillIcon");
static_assert(sizeof(MyCharaMenu_TacticalSkillIcon_C_ExecuteUbergraph_MyCharaMenu_TacticalSkillIcon) == 0x0000B8, "Wrong size on MyCharaMenu_TacticalSkillIcon_C_ExecuteUbergraph_MyCharaMenu_TacticalSkillIcon");
static_assert(offsetof(MyCharaMenu_TacticalSkillIcon_C_ExecuteUbergraph_MyCharaMenu_TacticalSkillIcon, EntryPoint) == 0x000000, "Member 'MyCharaMenu_TacticalSkillIcon_C_ExecuteUbergraph_MyCharaMenu_TacticalSkillIcon::EntryPoint' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_TacticalSkillIcon_C_ExecuteUbergraph_MyCharaMenu_TacticalSkillIcon, K2Node_Event_MyGeometry) == 0x000004, "Member 'MyCharaMenu_TacticalSkillIcon_C_ExecuteUbergraph_MyCharaMenu_TacticalSkillIcon::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_TacticalSkillIcon_C_ExecuteUbergraph_MyCharaMenu_TacticalSkillIcon, K2Node_Event_MouseEvent) == 0x000040, "Member 'MyCharaMenu_TacticalSkillIcon_C_ExecuteUbergraph_MyCharaMenu_TacticalSkillIcon::K2Node_Event_MouseEvent' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_TacticalSkillIcon_C_ExecuteUbergraph_MyCharaMenu_TacticalSkillIcon, CallFunc_PlaySE_ReturnValue) == 0x0000B0, "Member 'MyCharaMenu_TacticalSkillIcon_C_ExecuteUbergraph_MyCharaMenu_TacticalSkillIcon::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_TacticalSkillIcon_C_ExecuteUbergraph_MyCharaMenu_TacticalSkillIcon, CallFunc_Greater_IntInt_ReturnValue) == 0x0000B4, "Member 'MyCharaMenu_TacticalSkillIcon_C_ExecuteUbergraph_MyCharaMenu_TacticalSkillIcon::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_TacticalSkillIcon_C_ExecuteUbergraph_MyCharaMenu_TacticalSkillIcon, CallFunc_BooleanAND_ReturnValue) == 0x0000B5, "Member 'MyCharaMenu_TacticalSkillIcon_C_ExecuteUbergraph_MyCharaMenu_TacticalSkillIcon::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_TacticalSkillIcon.MyCharaMenu_TacticalSkillIcon_C.OnMouseEnter
// 0x00A8 (0x00A8 - 0x0000)
struct MyCharaMenu_TacticalSkillIcon_C_OnMouseEnter final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(MyCharaMenu_TacticalSkillIcon_C_OnMouseEnter) == 0x000008, "Wrong alignment on MyCharaMenu_TacticalSkillIcon_C_OnMouseEnter");
static_assert(sizeof(MyCharaMenu_TacticalSkillIcon_C_OnMouseEnter) == 0x0000A8, "Wrong size on MyCharaMenu_TacticalSkillIcon_C_OnMouseEnter");
static_assert(offsetof(MyCharaMenu_TacticalSkillIcon_C_OnMouseEnter, MyGeometry) == 0x000000, "Member 'MyCharaMenu_TacticalSkillIcon_C_OnMouseEnter::MyGeometry' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_TacticalSkillIcon_C_OnMouseEnter, MouseEvent) == 0x000038, "Member 'MyCharaMenu_TacticalSkillIcon_C_OnMouseEnter::MouseEvent' has a wrong offset!");

// Function MyCharaMenu_TacticalSkillIcon.MyCharaMenu_TacticalSkillIcon_C.SetSKill
// 0x00E0 (0x00E0 - 0x0000)
struct MyCharaMenu_TacticalSkillIcon_C_SetSKill final
{
public:
	int32                                         InSkillId;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InSkillLevel;                                      // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InIsInformationHidden;                             // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_83B1[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     LocalSBPlayerCharacter;                            // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerManager*                       LocalSBPlayerManager;                              // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LocalIsInformationHidden;                          // 0x0020(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_83B2[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBSkillElementIconType                       CallFunc_GetSkillIconElementType_ReturnValue;      // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSkillIconBgType                            CallFunc_GetSkillIconBgType_ReturnValue;           // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_83B3[0x5];                                     // 0x0033(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             CallFunc_Map_Find_Value;                           // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_83B4[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             CallFunc_Map_Find_Value_1;                         // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_1;                   // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_83B5[0x5];                                     // 0x0053(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindSkillDataDataBySkillId_IsExists;      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_83B6[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSkillDataMasterData                 CallFunc_FindSkillDataDataBySkillId_ReturnValue;   // 0x0068(0x0058)()
	class UTexture2D*                             CallFunc_GetSkillIconSmall_ReturnValue;            // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEquipedArtsSkillId_ReturnValue;         // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEquipedArtsSkillId_ReturnValue_1;       // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_83B7[0x6];                                     // 0x00CA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerManager*                       CallFunc_GetPlayerManager_ReturnValue;             // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_TacticalSkillIcon_C_SetSKill) == 0x000008, "Wrong alignment on MyCharaMenu_TacticalSkillIcon_C_SetSKill");
static_assert(sizeof(MyCharaMenu_TacticalSkillIcon_C_SetSKill) == 0x0000E0, "Wrong size on MyCharaMenu_TacticalSkillIcon_C_SetSKill");
static_assert(offsetof(MyCharaMenu_TacticalSkillIcon_C_SetSKill, InSkillId) == 0x000000, "Member 'MyCharaMenu_TacticalSkillIcon_C_SetSKill::InSkillId' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_TacticalSkillIcon_C_SetSKill, InSkillLevel) == 0x000004, "Member 'MyCharaMenu_TacticalSkillIcon_C_SetSKill::InSkillLevel' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_TacticalSkillIcon_C_SetSKill, InIsInformationHidden) == 0x000008, "Member 'MyCharaMenu_TacticalSkillIcon_C_SetSKill::InIsInformationHidden' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_TacticalSkillIcon_C_SetSKill, LocalSBPlayerCharacter) == 0x000010, "Member 'MyCharaMenu_TacticalSkillIcon_C_SetSKill::LocalSBPlayerCharacter' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_TacticalSkillIcon_C_SetSKill, LocalSBPlayerManager) == 0x000018, "Member 'MyCharaMenu_TacticalSkillIcon_C_SetSKill::LocalSBPlayerManager' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_TacticalSkillIcon_C_SetSKill, LocalIsInformationHidden) == 0x000020, "Member 'MyCharaMenu_TacticalSkillIcon_C_SetSKill::LocalIsInformationHidden' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_TacticalSkillIcon_C_SetSKill, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000028, "Member 'MyCharaMenu_TacticalSkillIcon_C_SetSKill::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_TacticalSkillIcon_C_SetSKill, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'MyCharaMenu_TacticalSkillIcon_C_SetSKill::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_TacticalSkillIcon_C_SetSKill, CallFunc_GetSkillIconElementType_ReturnValue) == 0x000031, "Member 'MyCharaMenu_TacticalSkillIcon_C_SetSKill::CallFunc_GetSkillIconElementType_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_TacticalSkillIcon_C_SetSKill, CallFunc_GetSkillIconBgType_ReturnValue) == 0x000032, "Member 'MyCharaMenu_TacticalSkillIcon_C_SetSKill::CallFunc_GetSkillIconBgType_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_TacticalSkillIcon_C_SetSKill, CallFunc_Map_Find_Value) == 0x000038, "Member 'MyCharaMenu_TacticalSkillIcon_C_SetSKill::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_TacticalSkillIcon_C_SetSKill, CallFunc_Map_Find_ReturnValue) == 0x000040, "Member 'MyCharaMenu_TacticalSkillIcon_C_SetSKill::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_TacticalSkillIcon_C_SetSKill, CallFunc_Map_Find_Value_1) == 0x000048, "Member 'MyCharaMenu_TacticalSkillIcon_C_SetSKill::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_TacticalSkillIcon_C_SetSKill, CallFunc_Map_Find_ReturnValue_1) == 0x000050, "Member 'MyCharaMenu_TacticalSkillIcon_C_SetSKill::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_TacticalSkillIcon_C_SetSKill, CallFunc_Greater_IntInt_ReturnValue) == 0x000051, "Member 'MyCharaMenu_TacticalSkillIcon_C_SetSKill::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_TacticalSkillIcon_C_SetSKill, CallFunc_GetMasterDataManager_IsValid) == 0x000052, "Member 'MyCharaMenu_TacticalSkillIcon_C_SetSKill::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_TacticalSkillIcon_C_SetSKill, CallFunc_GetMasterDataManager_ReturnValue) == 0x000058, "Member 'MyCharaMenu_TacticalSkillIcon_C_SetSKill::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_TacticalSkillIcon_C_SetSKill, CallFunc_FindSkillDataDataBySkillId_IsExists) == 0x000060, "Member 'MyCharaMenu_TacticalSkillIcon_C_SetSKill::CallFunc_FindSkillDataDataBySkillId_IsExists' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_TacticalSkillIcon_C_SetSKill, CallFunc_FindSkillDataDataBySkillId_ReturnValue) == 0x000068, "Member 'MyCharaMenu_TacticalSkillIcon_C_SetSKill::CallFunc_FindSkillDataDataBySkillId_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_TacticalSkillIcon_C_SetSKill, CallFunc_GetSkillIconSmall_ReturnValue) == 0x0000C0, "Member 'MyCharaMenu_TacticalSkillIcon_C_SetSKill::CallFunc_GetSkillIconSmall_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_TacticalSkillIcon_C_SetSKill, CallFunc_IsEquipedArtsSkillId_ReturnValue) == 0x0000C8, "Member 'MyCharaMenu_TacticalSkillIcon_C_SetSKill::CallFunc_IsEquipedArtsSkillId_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_TacticalSkillIcon_C_SetSKill, CallFunc_IsEquipedArtsSkillId_ReturnValue_1) == 0x0000C9, "Member 'MyCharaMenu_TacticalSkillIcon_C_SetSKill::CallFunc_IsEquipedArtsSkillId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_TacticalSkillIcon_C_SetSKill, CallFunc_GetPlayerManager_ReturnValue) == 0x0000D0, "Member 'MyCharaMenu_TacticalSkillIcon_C_SetSKill::CallFunc_GetPlayerManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_TacticalSkillIcon_C_SetSKill, CallFunc_IsValid_ReturnValue_1) == 0x0000D8, "Member 'MyCharaMenu_TacticalSkillIcon_C_SetSKill::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function MyCharaMenu_TacticalSkillIcon.MyCharaMenu_TacticalSkillIcon_C.CreateTooltip
// 0x0020 (0x0020 - 0x0000)
struct MyCharaMenu_TacticalSkillIcon_C_CreateTooltip final
{
public:
	bool                                          InNotUseTooltip;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_83B8[0x5];                                     // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_ToolTip_SkillBoard_C*              CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_ToolTip_SkillBoard_C*              K2Node_DynamicCast_AsWBP_Tool_Tip_Skill_Board;     // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_TacticalSkillIcon_C_CreateTooltip) == 0x000008, "Wrong alignment on MyCharaMenu_TacticalSkillIcon_C_CreateTooltip");
static_assert(sizeof(MyCharaMenu_TacticalSkillIcon_C_CreateTooltip) == 0x000020, "Wrong size on MyCharaMenu_TacticalSkillIcon_C_CreateTooltip");
static_assert(offsetof(MyCharaMenu_TacticalSkillIcon_C_CreateTooltip, InNotUseTooltip) == 0x000000, "Member 'MyCharaMenu_TacticalSkillIcon_C_CreateTooltip::InNotUseTooltip' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_TacticalSkillIcon_C_CreateTooltip, CallFunc_Not_PreBool_ReturnValue) == 0x000001, "Member 'MyCharaMenu_TacticalSkillIcon_C_CreateTooltip::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_TacticalSkillIcon_C_CreateTooltip, CallFunc_IsValid_ReturnValue) == 0x000002, "Member 'MyCharaMenu_TacticalSkillIcon_C_CreateTooltip::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_TacticalSkillIcon_C_CreateTooltip, CallFunc_Create_ReturnValue) == 0x000008, "Member 'MyCharaMenu_TacticalSkillIcon_C_CreateTooltip::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_TacticalSkillIcon_C_CreateTooltip, K2Node_DynamicCast_AsWBP_Tool_Tip_Skill_Board) == 0x000010, "Member 'MyCharaMenu_TacticalSkillIcon_C_CreateTooltip::K2Node_DynamicCast_AsWBP_Tool_Tip_Skill_Board' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_TacticalSkillIcon_C_CreateTooltip, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'MyCharaMenu_TacticalSkillIcon_C_CreateTooltip::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_TacticalSkillIcon_C_CreateTooltip, CallFunc_IsValid_ReturnValue_1) == 0x000019, "Member 'MyCharaMenu_TacticalSkillIcon_C_CreateTooltip::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function MyCharaMenu_TacticalSkillIcon.MyCharaMenu_TacticalSkillIcon_C.SetIconTexture
// 0x0010 (0x0010 - 0x0000)
struct MyCharaMenu_TacticalSkillIcon_C_SetIconTexture final
{
public:
	class UTexture2D*                             InTexture;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_TacticalSkillIcon_C_SetIconTexture) == 0x000008, "Wrong alignment on MyCharaMenu_TacticalSkillIcon_C_SetIconTexture");
static_assert(sizeof(MyCharaMenu_TacticalSkillIcon_C_SetIconTexture) == 0x000010, "Wrong size on MyCharaMenu_TacticalSkillIcon_C_SetIconTexture");
static_assert(offsetof(MyCharaMenu_TacticalSkillIcon_C_SetIconTexture, InTexture) == 0x000000, "Member 'MyCharaMenu_TacticalSkillIcon_C_SetIconTexture::InTexture' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_TacticalSkillIcon_C_SetIconTexture, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'MyCharaMenu_TacticalSkillIcon_C_SetIconTexture::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_TacticalSkillIcon.MyCharaMenu_TacticalSkillIcon_C.SetIsIconEnabled
// 0x0006 (0x0006 - 0x0000)
struct MyCharaMenu_TacticalSkillIcon_C_SetIsIconEnabled final
{
public:
	bool                                          InIsEnabled;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_TacticalSkillIcon_C_SetIsIconEnabled) == 0x000001, "Wrong alignment on MyCharaMenu_TacticalSkillIcon_C_SetIsIconEnabled");
static_assert(sizeof(MyCharaMenu_TacticalSkillIcon_C_SetIsIconEnabled) == 0x000006, "Wrong size on MyCharaMenu_TacticalSkillIcon_C_SetIsIconEnabled");
static_assert(offsetof(MyCharaMenu_TacticalSkillIcon_C_SetIsIconEnabled, InIsEnabled) == 0x000000, "Member 'MyCharaMenu_TacticalSkillIcon_C_SetIsIconEnabled::InIsEnabled' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_TacticalSkillIcon_C_SetIsIconEnabled, Temp_bool_Variable) == 0x000001, "Member 'MyCharaMenu_TacticalSkillIcon_C_SetIsIconEnabled::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_TacticalSkillIcon_C_SetIsIconEnabled, Temp_byte_Variable) == 0x000002, "Member 'MyCharaMenu_TacticalSkillIcon_C_SetIsIconEnabled::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_TacticalSkillIcon_C_SetIsIconEnabled, Temp_byte_Variable_1) == 0x000003, "Member 'MyCharaMenu_TacticalSkillIcon_C_SetIsIconEnabled::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_TacticalSkillIcon_C_SetIsIconEnabled, CallFunc_Not_PreBool_ReturnValue) == 0x000004, "Member 'MyCharaMenu_TacticalSkillIcon_C_SetIsIconEnabled::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_TacticalSkillIcon_C_SetIsIconEnabled, K2Node_Select_Default) == 0x000005, "Member 'MyCharaMenu_TacticalSkillIcon_C_SetIsIconEnabled::K2Node_Select_Default' has a wrong offset!");

// Function MyCharaMenu_TacticalSkillIcon.MyCharaMenu_TacticalSkillIcon_C.SetIsHoverEnabled
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_TacticalSkillIcon_C_SetIsHoverEnabled final
{
public:
	bool                                          InIsEnabled;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_TacticalSkillIcon_C_SetIsHoverEnabled) == 0x000001, "Wrong alignment on MyCharaMenu_TacticalSkillIcon_C_SetIsHoverEnabled");
static_assert(sizeof(MyCharaMenu_TacticalSkillIcon_C_SetIsHoverEnabled) == 0x000001, "Wrong size on MyCharaMenu_TacticalSkillIcon_C_SetIsHoverEnabled");
static_assert(offsetof(MyCharaMenu_TacticalSkillIcon_C_SetIsHoverEnabled, InIsEnabled) == 0x000000, "Member 'MyCharaMenu_TacticalSkillIcon_C_SetIsHoverEnabled::InIsEnabled' has a wrong offset!");

}

