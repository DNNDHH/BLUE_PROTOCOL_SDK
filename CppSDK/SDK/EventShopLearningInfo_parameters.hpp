#pragma once

 

// Package: EventShopLearningInfo

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function EventShopLearningInfo.EventShopLearningInfo_C.ExecuteUbergraph_EventShopLearningInfo
// 0x0160 (0x0160 - 0x0000)
struct EventShopLearningInfo_C_ExecuteUbergraph_EventShopLearningInfo final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0004(0x0038)(IsPlainOldData, NoDestructor)
	uint8                                         Pad_63DD[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerEvent                          K2Node_Event_MouseEvent_1;                         // 0x0040(0x0070)(ConstParm)
	class UCommonIconToolTipContent_SkillUnleashed_C* K2Node_DynamicCast_AsCommon_Icon_Tool_Tip_Content_Skill_Unleashed; // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_63DE[0x7];                                     // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerEvent                          K2Node_Event_MouseEvent;                           // 0x00C0(0x0070)(ConstParm)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0131(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_63DF[0x2];                                     // 0x0132(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_GetUIPosition_ReturnValue;                // 0x0134(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_AbsoluteToViewport_PixelPosition;         // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_AbsoluteToViewport_ViewportPosition;      // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonIconToolTipContent_SkillUnleashed_C* CallFunc_Create_ReturnValue;                       // 0x0150(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue_1;                     // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShopLearningInfo_C_ExecuteUbergraph_EventShopLearningInfo) == 0x000008, "Wrong alignment on EventShopLearningInfo_C_ExecuteUbergraph_EventShopLearningInfo");
static_assert(sizeof(EventShopLearningInfo_C_ExecuteUbergraph_EventShopLearningInfo) == 0x000160, "Wrong size on EventShopLearningInfo_C_ExecuteUbergraph_EventShopLearningInfo");
static_assert(offsetof(EventShopLearningInfo_C_ExecuteUbergraph_EventShopLearningInfo, EntryPoint) == 0x000000, "Member 'EventShopLearningInfo_C_ExecuteUbergraph_EventShopLearningInfo::EntryPoint' has a wrong offset!");
static_assert(offsetof(EventShopLearningInfo_C_ExecuteUbergraph_EventShopLearningInfo, K2Node_Event_MyGeometry) == 0x000004, "Member 'EventShopLearningInfo_C_ExecuteUbergraph_EventShopLearningInfo::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(EventShopLearningInfo_C_ExecuteUbergraph_EventShopLearningInfo, K2Node_Event_MouseEvent_1) == 0x000040, "Member 'EventShopLearningInfo_C_ExecuteUbergraph_EventShopLearningInfo::K2Node_Event_MouseEvent_1' has a wrong offset!");
static_assert(offsetof(EventShopLearningInfo_C_ExecuteUbergraph_EventShopLearningInfo, K2Node_DynamicCast_AsCommon_Icon_Tool_Tip_Content_Skill_Unleashed) == 0x0000B0, "Member 'EventShopLearningInfo_C_ExecuteUbergraph_EventShopLearningInfo::K2Node_DynamicCast_AsCommon_Icon_Tool_Tip_Content_Skill_Unleashed' has a wrong offset!");
static_assert(offsetof(EventShopLearningInfo_C_ExecuteUbergraph_EventShopLearningInfo, K2Node_DynamicCast_bSuccess) == 0x0000B8, "Member 'EventShopLearningInfo_C_ExecuteUbergraph_EventShopLearningInfo::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(EventShopLearningInfo_C_ExecuteUbergraph_EventShopLearningInfo, K2Node_Event_MouseEvent) == 0x0000C0, "Member 'EventShopLearningInfo_C_ExecuteUbergraph_EventShopLearningInfo::K2Node_Event_MouseEvent' has a wrong offset!");
static_assert(offsetof(EventShopLearningInfo_C_ExecuteUbergraph_EventShopLearningInfo, CallFunc_IsValid_ReturnValue) == 0x000130, "Member 'EventShopLearningInfo_C_ExecuteUbergraph_EventShopLearningInfo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopLearningInfo_C_ExecuteUbergraph_EventShopLearningInfo, CallFunc_IsValid_ReturnValue_1) == 0x000131, "Member 'EventShopLearningInfo_C_ExecuteUbergraph_EventShopLearningInfo::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShopLearningInfo_C_ExecuteUbergraph_EventShopLearningInfo, CallFunc_GetUIPosition_ReturnValue) == 0x000134, "Member 'EventShopLearningInfo_C_ExecuteUbergraph_EventShopLearningInfo::CallFunc_GetUIPosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopLearningInfo_C_ExecuteUbergraph_EventShopLearningInfo, CallFunc_PlaySE_ReturnValue) == 0x00013C, "Member 'EventShopLearningInfo_C_ExecuteUbergraph_EventShopLearningInfo::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopLearningInfo_C_ExecuteUbergraph_EventShopLearningInfo, CallFunc_AbsoluteToViewport_PixelPosition) == 0x000140, "Member 'EventShopLearningInfo_C_ExecuteUbergraph_EventShopLearningInfo::CallFunc_AbsoluteToViewport_PixelPosition' has a wrong offset!");
static_assert(offsetof(EventShopLearningInfo_C_ExecuteUbergraph_EventShopLearningInfo, CallFunc_AbsoluteToViewport_ViewportPosition) == 0x000148, "Member 'EventShopLearningInfo_C_ExecuteUbergraph_EventShopLearningInfo::CallFunc_AbsoluteToViewport_ViewportPosition' has a wrong offset!");
static_assert(offsetof(EventShopLearningInfo_C_ExecuteUbergraph_EventShopLearningInfo, CallFunc_Create_ReturnValue) == 0x000150, "Member 'EventShopLearningInfo_C_ExecuteUbergraph_EventShopLearningInfo::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopLearningInfo_C_ExecuteUbergraph_EventShopLearningInfo, CallFunc_PlaySE_ReturnValue_1) == 0x000158, "Member 'EventShopLearningInfo_C_ExecuteUbergraph_EventShopLearningInfo::CallFunc_PlaySE_ReturnValue_1' has a wrong offset!");

// Function EventShopLearningInfo.EventShopLearningInfo_C.OnMouseLeave
// 0x0070 (0x0070 - 0x0000)
struct EventShopLearningInfo_C_OnMouseLeave final
{
public:
	struct FPointerEvent                          MouseEvent;                                        // 0x0000(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(EventShopLearningInfo_C_OnMouseLeave) == 0x000008, "Wrong alignment on EventShopLearningInfo_C_OnMouseLeave");
static_assert(sizeof(EventShopLearningInfo_C_OnMouseLeave) == 0x000070, "Wrong size on EventShopLearningInfo_C_OnMouseLeave");
static_assert(offsetof(EventShopLearningInfo_C_OnMouseLeave, MouseEvent) == 0x000000, "Member 'EventShopLearningInfo_C_OnMouseLeave::MouseEvent' has a wrong offset!");

// Function EventShopLearningInfo.EventShopLearningInfo_C.OnMouseEnter
// 0x00A8 (0x00A8 - 0x0000)
struct EventShopLearningInfo_C_OnMouseEnter final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(EventShopLearningInfo_C_OnMouseEnter) == 0x000008, "Wrong alignment on EventShopLearningInfo_C_OnMouseEnter");
static_assert(sizeof(EventShopLearningInfo_C_OnMouseEnter) == 0x0000A8, "Wrong size on EventShopLearningInfo_C_OnMouseEnter");
static_assert(offsetof(EventShopLearningInfo_C_OnMouseEnter, MyGeometry) == 0x000000, "Member 'EventShopLearningInfo_C_OnMouseEnter::MyGeometry' has a wrong offset!");
static_assert(offsetof(EventShopLearningInfo_C_OnMouseEnter, MouseEvent) == 0x000038, "Member 'EventShopLearningInfo_C_OnMouseEnter::MouseEvent' has a wrong offset!");

// Function EventShopLearningInfo.EventShopLearningInfo_C.SetSkillId
// 0x00D8 (0x00D8 - 0x0000)
struct EventShopLearningInfo_C_SetSkillId final
{
public:
	int32                                         Param_SkillId;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Exchangeable;                                      // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_63E0[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindSkillDataDataBySkillId_IsExists;      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_63E1[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSkillDataMasterData                 CallFunc_FindSkillDataDataBySkillId_ReturnValue;   // 0x0018(0x0058)()
	class FText                                   CallFunc_GetTextSkillConditions_Skill;             // 0x0070(0x0018)()
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_63E2[0x3];                                     // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetCurrentSkillLevelOthersIncluded_ReturnValue; // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetTextSkillConditions_Skill_1;           // 0x0090(0x0018)()
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_63E3[0x2];                                     // 0x00AA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetCurrentSkillLevelOthersIncluded_ReturnValue_1; // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_63E4[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetTextClassLevel_ClassText;              // 0x00B8(0x0018)()
	int32                                         CallFunc_GetClassLevelFromClassType_ReturnValue;   // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_2;        // 0x00D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00D5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x00D6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EventShopLearningInfo_C_SetSkillId) == 0x000008, "Wrong alignment on EventShopLearningInfo_C_SetSkillId");
static_assert(sizeof(EventShopLearningInfo_C_SetSkillId) == 0x0000D8, "Wrong size on EventShopLearningInfo_C_SetSkillId");
static_assert(offsetof(EventShopLearningInfo_C_SetSkillId, Param_SkillId) == 0x000000, "Member 'EventShopLearningInfo_C_SetSkillId::Param_SkillId' has a wrong offset!");
static_assert(offsetof(EventShopLearningInfo_C_SetSkillId, Exchangeable) == 0x000004, "Member 'EventShopLearningInfo_C_SetSkillId::Exchangeable' has a wrong offset!");
static_assert(offsetof(EventShopLearningInfo_C_SetSkillId, CallFunc_GetMasterDataManager_IsValid) == 0x000005, "Member 'EventShopLearningInfo_C_SetSkillId::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(EventShopLearningInfo_C_SetSkillId, CallFunc_GetMasterDataManager_ReturnValue) == 0x000008, "Member 'EventShopLearningInfo_C_SetSkillId::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopLearningInfo_C_SetSkillId, CallFunc_FindSkillDataDataBySkillId_IsExists) == 0x000010, "Member 'EventShopLearningInfo_C_SetSkillId::CallFunc_FindSkillDataDataBySkillId_IsExists' has a wrong offset!");
static_assert(offsetof(EventShopLearningInfo_C_SetSkillId, CallFunc_FindSkillDataDataBySkillId_ReturnValue) == 0x000018, "Member 'EventShopLearningInfo_C_SetSkillId::CallFunc_FindSkillDataDataBySkillId_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopLearningInfo_C_SetSkillId, CallFunc_GetTextSkillConditions_Skill) == 0x000070, "Member 'EventShopLearningInfo_C_SetSkillId::CallFunc_GetTextSkillConditions_Skill' has a wrong offset!");
static_assert(offsetof(EventShopLearningInfo_C_SetSkillId, CallFunc_Greater_IntInt_ReturnValue) == 0x000088, "Member 'EventShopLearningInfo_C_SetSkillId::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopLearningInfo_C_SetSkillId, CallFunc_GetCurrentSkillLevelOthersIncluded_ReturnValue) == 0x00008C, "Member 'EventShopLearningInfo_C_SetSkillId::CallFunc_GetCurrentSkillLevelOthersIncluded_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopLearningInfo_C_SetSkillId, CallFunc_GetTextSkillConditions_Skill_1) == 0x000090, "Member 'EventShopLearningInfo_C_SetSkillId::CallFunc_GetTextSkillConditions_Skill_1' has a wrong offset!");
static_assert(offsetof(EventShopLearningInfo_C_SetSkillId, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x0000A8, "Member 'EventShopLearningInfo_C_SetSkillId::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopLearningInfo_C_SetSkillId, CallFunc_Greater_IntInt_ReturnValue_1) == 0x0000A9, "Member 'EventShopLearningInfo_C_SetSkillId::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShopLearningInfo_C_SetSkillId, CallFunc_GetCurrentSkillLevelOthersIncluded_ReturnValue_1) == 0x0000AC, "Member 'EventShopLearningInfo_C_SetSkillId::CallFunc_GetCurrentSkillLevelOthersIncluded_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShopLearningInfo_C_SetSkillId, CallFunc_GreaterEqual_IntInt_ReturnValue_1) == 0x0000B0, "Member 'EventShopLearningInfo_C_SetSkillId::CallFunc_GreaterEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShopLearningInfo_C_SetSkillId, CallFunc_GetTextClassLevel_ClassText) == 0x0000B8, "Member 'EventShopLearningInfo_C_SetSkillId::CallFunc_GetTextClassLevel_ClassText' has a wrong offset!");
static_assert(offsetof(EventShopLearningInfo_C_SetSkillId, CallFunc_GetClassLevelFromClassType_ReturnValue) == 0x0000D0, "Member 'EventShopLearningInfo_C_SetSkillId::CallFunc_GetClassLevelFromClassType_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopLearningInfo_C_SetSkillId, CallFunc_GreaterEqual_IntInt_ReturnValue_2) == 0x0000D4, "Member 'EventShopLearningInfo_C_SetSkillId::CallFunc_GreaterEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EventShopLearningInfo_C_SetSkillId, CallFunc_BooleanAND_ReturnValue) == 0x0000D5, "Member 'EventShopLearningInfo_C_SetSkillId::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopLearningInfo_C_SetSkillId, CallFunc_BooleanAND_ReturnValue_1) == 0x0000D6, "Member 'EventShopLearningInfo_C_SetSkillId::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");

// Function EventShopLearningInfo.EventShopLearningInfo_C.GetTextSkillConditions
// 0x0180 (0x0180 - 0x0000)
struct EventShopLearningInfo_C_GetTextSkillConditions final
{
public:
	int32                                         ConditionSkillId;                                  // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ConditionSkillLv;                                  // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   Skill;                                             // 0x0008(0x0018)(Parm, OutParm)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0030(0x0018)()
	bool                                          CallFunc_GetSkillMasteryParam_IsExists;            // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_63E5[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSkillMasteryParam                   CallFunc_GetSkillMasteryParam_ReturnValue;         // 0x004C(0x0008)(NoDestructor)
	bool                                          CallFunc_FindSkillDataDataBySkillId_IsExists;      // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_63E6[0x3];                                     // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSkillDataMasterData                 CallFunc_FindSkillDataDataBySkillId_ReturnValue;   // 0x0058(0x0058)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x00B0(0x0040)(HasGetValueTypeHash)
	class FString                                 CallFunc_GetMasterSkillDataText_ReturnValue;       // 0x00F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0100(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0118(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0158(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0168(0x0018)()
};
static_assert(alignof(EventShopLearningInfo_C_GetTextSkillConditions) == 0x000008, "Wrong alignment on EventShopLearningInfo_C_GetTextSkillConditions");
static_assert(sizeof(EventShopLearningInfo_C_GetTextSkillConditions) == 0x000180, "Wrong size on EventShopLearningInfo_C_GetTextSkillConditions");
static_assert(offsetof(EventShopLearningInfo_C_GetTextSkillConditions, ConditionSkillId) == 0x000000, "Member 'EventShopLearningInfo_C_GetTextSkillConditions::ConditionSkillId' has a wrong offset!");
static_assert(offsetof(EventShopLearningInfo_C_GetTextSkillConditions, ConditionSkillLv) == 0x000004, "Member 'EventShopLearningInfo_C_GetTextSkillConditions::ConditionSkillLv' has a wrong offset!");
static_assert(offsetof(EventShopLearningInfo_C_GetTextSkillConditions, Skill) == 0x000008, "Member 'EventShopLearningInfo_C_GetTextSkillConditions::Skill' has a wrong offset!");
static_assert(offsetof(EventShopLearningInfo_C_GetTextSkillConditions, CallFunc_GetTextFromAsset_ReturnValue) == 0x000020, "Member 'EventShopLearningInfo_C_GetTextSkillConditions::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopLearningInfo_C_GetTextSkillConditions, CallFunc_Conv_StringToText_ReturnValue) == 0x000030, "Member 'EventShopLearningInfo_C_GetTextSkillConditions::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopLearningInfo_C_GetTextSkillConditions, CallFunc_GetSkillMasteryParam_IsExists) == 0x000048, "Member 'EventShopLearningInfo_C_GetTextSkillConditions::CallFunc_GetSkillMasteryParam_IsExists' has a wrong offset!");
static_assert(offsetof(EventShopLearningInfo_C_GetTextSkillConditions, CallFunc_GetSkillMasteryParam_ReturnValue) == 0x00004C, "Member 'EventShopLearningInfo_C_GetTextSkillConditions::CallFunc_GetSkillMasteryParam_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopLearningInfo_C_GetTextSkillConditions, CallFunc_FindSkillDataDataBySkillId_IsExists) == 0x000054, "Member 'EventShopLearningInfo_C_GetTextSkillConditions::CallFunc_FindSkillDataDataBySkillId_IsExists' has a wrong offset!");
static_assert(offsetof(EventShopLearningInfo_C_GetTextSkillConditions, CallFunc_FindSkillDataDataBySkillId_ReturnValue) == 0x000058, "Member 'EventShopLearningInfo_C_GetTextSkillConditions::CallFunc_FindSkillDataDataBySkillId_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopLearningInfo_C_GetTextSkillConditions, K2Node_MakeStruct_FormatArgumentData) == 0x0000B0, "Member 'EventShopLearningInfo_C_GetTextSkillConditions::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(EventShopLearningInfo_C_GetTextSkillConditions, CallFunc_GetMasterSkillDataText_ReturnValue) == 0x0000F0, "Member 'EventShopLearningInfo_C_GetTextSkillConditions::CallFunc_GetMasterSkillDataText_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopLearningInfo_C_GetTextSkillConditions, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000100, "Member 'EventShopLearningInfo_C_GetTextSkillConditions::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShopLearningInfo_C_GetTextSkillConditions, K2Node_MakeStruct_FormatArgumentData_1) == 0x000118, "Member 'EventShopLearningInfo_C_GetTextSkillConditions::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(EventShopLearningInfo_C_GetTextSkillConditions, K2Node_MakeArray_Array) == 0x000158, "Member 'EventShopLearningInfo_C_GetTextSkillConditions::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(EventShopLearningInfo_C_GetTextSkillConditions, CallFunc_Format_ReturnValue) == 0x000168, "Member 'EventShopLearningInfo_C_GetTextSkillConditions::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function EventShopLearningInfo.EventShopLearningInfo_C.GetTextClassLevel
// 0x0118 (0x0118 - 0x0000)
struct EventShopLearningInfo_C_GetTextClassLevel final
{
public:
	ESBClassType                                  Param_ClassType;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_63E7[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ClassLevel;                                        // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   Param_ClassText;                                   // 0x0008(0x0018)(Parm, OutParm)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0030(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0070(0x0018)()
	class FString                                 CallFunc_GetClassNameText_ReturnValue;             // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0098(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x00B0(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00F0(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0100(0x0018)()
};
static_assert(alignof(EventShopLearningInfo_C_GetTextClassLevel) == 0x000008, "Wrong alignment on EventShopLearningInfo_C_GetTextClassLevel");
static_assert(sizeof(EventShopLearningInfo_C_GetTextClassLevel) == 0x000118, "Wrong size on EventShopLearningInfo_C_GetTextClassLevel");
static_assert(offsetof(EventShopLearningInfo_C_GetTextClassLevel, Param_ClassType) == 0x000000, "Member 'EventShopLearningInfo_C_GetTextClassLevel::Param_ClassType' has a wrong offset!");
static_assert(offsetof(EventShopLearningInfo_C_GetTextClassLevel, ClassLevel) == 0x000004, "Member 'EventShopLearningInfo_C_GetTextClassLevel::ClassLevel' has a wrong offset!");
static_assert(offsetof(EventShopLearningInfo_C_GetTextClassLevel, Param_ClassText) == 0x000008, "Member 'EventShopLearningInfo_C_GetTextClassLevel::Param_ClassText' has a wrong offset!");
static_assert(offsetof(EventShopLearningInfo_C_GetTextClassLevel, CallFunc_GetTextFromAsset_ReturnValue) == 0x000020, "Member 'EventShopLearningInfo_C_GetTextClassLevel::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopLearningInfo_C_GetTextClassLevel, K2Node_MakeStruct_FormatArgumentData) == 0x000030, "Member 'EventShopLearningInfo_C_GetTextClassLevel::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(EventShopLearningInfo_C_GetTextClassLevel, CallFunc_Conv_StringToText_ReturnValue) == 0x000070, "Member 'EventShopLearningInfo_C_GetTextClassLevel::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopLearningInfo_C_GetTextClassLevel, CallFunc_GetClassNameText_ReturnValue) == 0x000088, "Member 'EventShopLearningInfo_C_GetTextClassLevel::CallFunc_GetClassNameText_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopLearningInfo_C_GetTextClassLevel, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000098, "Member 'EventShopLearningInfo_C_GetTextClassLevel::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShopLearningInfo_C_GetTextClassLevel, K2Node_MakeStruct_FormatArgumentData_1) == 0x0000B0, "Member 'EventShopLearningInfo_C_GetTextClassLevel::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(EventShopLearningInfo_C_GetTextClassLevel, K2Node_MakeArray_Array) == 0x0000F0, "Member 'EventShopLearningInfo_C_GetTextClassLevel::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(EventShopLearningInfo_C_GetTextClassLevel, CallFunc_Format_ReturnValue) == 0x000100, "Member 'EventShopLearningInfo_C_GetTextClassLevel::CallFunc_Format_ReturnValue' has a wrong offset!");

}

