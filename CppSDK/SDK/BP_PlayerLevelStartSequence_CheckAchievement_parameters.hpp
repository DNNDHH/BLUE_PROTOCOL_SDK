#pragma once

 

// Package: BP_PlayerLevelStartSequence_CheckAchievement

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_PlayerLevelStartSequence_CheckAchievement.BP_PlayerLevelStartSequence_CheckAchievement_C.ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckAchievement
// 0x0018 (0x0018 - 0x0000)
struct BP_PlayerLevelStartSequence_CheckAchievement_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckAchievement final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91E1[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerAchievementComponent*          CallFunc_GetPlayerAchievementComponent_ReturnValue; // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerLevelStartSequence_CheckAchievement_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckAchievement) == 0x000008, "Wrong alignment on BP_PlayerLevelStartSequence_CheckAchievement_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckAchievement");
static_assert(sizeof(BP_PlayerLevelStartSequence_CheckAchievement_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckAchievement) == 0x000018, "Wrong size on BP_PlayerLevelStartSequence_CheckAchievement_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckAchievement");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckAchievement_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckAchievement, EntryPoint) == 0x000000, "Member 'BP_PlayerLevelStartSequence_CheckAchievement_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckAchievement::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckAchievement_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckAchievement, CallFunc_GetSBPlayerController_ReturnValue) == 0x000008, "Member 'BP_PlayerLevelStartSequence_CheckAchievement_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckAchievement::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckAchievement_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckAchievement, CallFunc_GetPlayerAchievementComponent_ReturnValue) == 0x000010, "Member 'BP_PlayerLevelStartSequence_CheckAchievement_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckAchievement::CallFunc_GetPlayerAchievementComponent_ReturnValue' has a wrong offset!");

// Function BP_PlayerLevelStartSequence_CheckAchievement.BP_PlayerLevelStartSequence_CheckAchievement_C.GetDescription
// 0x0010 (0x0010 - 0x0000)
struct BP_PlayerLevelStartSequence_CheckAchievement_C_GetDescription final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerLevelStartSequence_CheckAchievement_C_GetDescription) == 0x000008, "Wrong alignment on BP_PlayerLevelStartSequence_CheckAchievement_C_GetDescription");
static_assert(sizeof(BP_PlayerLevelStartSequence_CheckAchievement_C_GetDescription) == 0x000010, "Wrong size on BP_PlayerLevelStartSequence_CheckAchievement_C_GetDescription");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckAchievement_C_GetDescription, ReturnValue) == 0x000000, "Member 'BP_PlayerLevelStartSequence_CheckAchievement_C_GetDescription::ReturnValue' has a wrong offset!");

// Function BP_PlayerLevelStartSequence_CheckAchievement.BP_PlayerLevelStartSequence_CheckAchievement_C.SetMessage
// 0x00F8 (0x00F8 - 0x0000)
struct BP_PlayerLevelStartSequence_CheckAchievement_C_SetMessage final
{
public:
	class USBTextTableAsset*                      TableObject;                                       // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHUD*                                   HUD;                                               // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91E2[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91E3[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBTextTableAsset*                      K2Node_DynamicCast_AsSBText_Table_Asset;           // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91E4[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBNotifyMessageInterface> K2Node_DynamicCast_AsSBNotify_Message_Interface;   // 0x0050(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91E5[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91E6[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AHUD*                                   CallFunc_GetHUD_ReturnValue;                       // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_1;      // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerExpeditionComponent*           CallFunc_GetFang_expeditionComponent_ReturnValue;  // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         CallFunc_GetEndCheckData_IdList;                   // 0x0090(0x0010)(ReferenceParm)
	TArray<class FString>                         CallFunc_GetEndCheckData_NameList;                 // 0x00A0(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91E7[0x4];                                     // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Array_Get_Item;                           // 0x00B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91E8[0x7];                                     // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Replace_ReturnValue;                      // 0x00D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00E0(0x0018)()
};
static_assert(alignof(BP_PlayerLevelStartSequence_CheckAchievement_C_SetMessage) == 0x000008, "Wrong alignment on BP_PlayerLevelStartSequence_CheckAchievement_C_SetMessage");
static_assert(sizeof(BP_PlayerLevelStartSequence_CheckAchievement_C_SetMessage) == 0x0000F8, "Wrong size on BP_PlayerLevelStartSequence_CheckAchievement_C_SetMessage");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckAchievement_C_SetMessage, TableObject) == 0x000000, "Member 'BP_PlayerLevelStartSequence_CheckAchievement_C_SetMessage::TableObject' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckAchievement_C_SetMessage, HUD) == 0x000008, "Member 'BP_PlayerLevelStartSequence_CheckAchievement_C_SetMessage::HUD' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckAchievement_C_SetMessage, Temp_int_Array_Index_Variable) == 0x000010, "Member 'BP_PlayerLevelStartSequence_CheckAchievement_C_SetMessage::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckAchievement_C_SetMessage, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'BP_PlayerLevelStartSequence_CheckAchievement_C_SetMessage::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckAchievement_C_SetMessage, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'BP_PlayerLevelStartSequence_CheckAchievement_C_SetMessage::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckAchievement_C_SetMessage, CallFunc_GetTextFromAsset_ReturnValue) == 0x000020, "Member 'BP_PlayerLevelStartSequence_CheckAchievement_C_SetMessage::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckAchievement_C_SetMessage, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'BP_PlayerLevelStartSequence_CheckAchievement_C_SetMessage::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckAchievement_C_SetMessage, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x000038, "Member 'BP_PlayerLevelStartSequence_CheckAchievement_C_SetMessage::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckAchievement_C_SetMessage, K2Node_DynamicCast_AsSBText_Table_Asset) == 0x000040, "Member 'BP_PlayerLevelStartSequence_CheckAchievement_C_SetMessage::K2Node_DynamicCast_AsSBText_Table_Asset' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckAchievement_C_SetMessage, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'BP_PlayerLevelStartSequence_CheckAchievement_C_SetMessage::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckAchievement_C_SetMessage, K2Node_DynamicCast_AsSBNotify_Message_Interface) == 0x000050, "Member 'BP_PlayerLevelStartSequence_CheckAchievement_C_SetMessage::K2Node_DynamicCast_AsSBNotify_Message_Interface' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckAchievement_C_SetMessage, K2Node_DynamicCast_bSuccess_1) == 0x000060, "Member 'BP_PlayerLevelStartSequence_CheckAchievement_C_SetMessage::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckAchievement_C_SetMessage, CallFunc_GetSBPlayerController_ReturnValue) == 0x000068, "Member 'BP_PlayerLevelStartSequence_CheckAchievement_C_SetMessage::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckAchievement_C_SetMessage, CallFunc_IsValid_ReturnValue_1) == 0x000070, "Member 'BP_PlayerLevelStartSequence_CheckAchievement_C_SetMessage::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckAchievement_C_SetMessage, CallFunc_GetHUD_ReturnValue) == 0x000078, "Member 'BP_PlayerLevelStartSequence_CheckAchievement_C_SetMessage::CallFunc_GetHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckAchievement_C_SetMessage, CallFunc_GetSBPlayerController_ReturnValue_1) == 0x000080, "Member 'BP_PlayerLevelStartSequence_CheckAchievement_C_SetMessage::CallFunc_GetSBPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckAchievement_C_SetMessage, CallFunc_GetFang_expeditionComponent_ReturnValue) == 0x000088, "Member 'BP_PlayerLevelStartSequence_CheckAchievement_C_SetMessage::CallFunc_GetFang_expeditionComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckAchievement_C_SetMessage, CallFunc_GetEndCheckData_IdList) == 0x000090, "Member 'BP_PlayerLevelStartSequence_CheckAchievement_C_SetMessage::CallFunc_GetEndCheckData_IdList' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckAchievement_C_SetMessage, CallFunc_GetEndCheckData_NameList) == 0x0000A0, "Member 'BP_PlayerLevelStartSequence_CheckAchievement_C_SetMessage::CallFunc_GetEndCheckData_NameList' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckAchievement_C_SetMessage, CallFunc_Array_Length_ReturnValue) == 0x0000B0, "Member 'BP_PlayerLevelStartSequence_CheckAchievement_C_SetMessage::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckAchievement_C_SetMessage, CallFunc_Array_Get_Item) == 0x0000B8, "Member 'BP_PlayerLevelStartSequence_CheckAchievement_C_SetMessage::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckAchievement_C_SetMessage, CallFunc_Less_IntInt_ReturnValue) == 0x0000C8, "Member 'BP_PlayerLevelStartSequence_CheckAchievement_C_SetMessage::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckAchievement_C_SetMessage, CallFunc_Replace_ReturnValue) == 0x0000D0, "Member 'BP_PlayerLevelStartSequence_CheckAchievement_C_SetMessage::CallFunc_Replace_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckAchievement_C_SetMessage, CallFunc_Conv_StringToText_ReturnValue) == 0x0000E0, "Member 'BP_PlayerLevelStartSequence_CheckAchievement_C_SetMessage::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

}

