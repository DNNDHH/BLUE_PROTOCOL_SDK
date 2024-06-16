#pragma once

 

// Package: BP_PlayerLevelStartSequence_CheckEndExpedition

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function BP_PlayerLevelStartSequence_CheckEndExpedition.BP_PlayerLevelStartSequence_CheckEndExpedition_C.ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckEndExpedition
// 0x0110 (0x0110 - 0x0000)
struct BP_PlayerLevelStartSequence_CheckEndExpedition_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckEndExpedition final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1E87[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool WasSuccessful, int32 ErrorCode, int32 IdCount)> K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	class UObject*                                Temp_object_Variable;                              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerExpeditionComponent*           CallFunc_GetFang_expeditionComponent_ReturnValue;  // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCityCurrentMapLevel_ReturnValue;        // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1E88[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMapLevelInfo                        CallFunc_GetCurrentMapLevelInfo_OutMapLevelInfo;   // 0x0040(0x0080)()
	bool                                          CallFunc_GetCurrentMapLevelInfo_ReturnValue;       // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsStandalone_ReturnValue;                 // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00C3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_WasSuccessful;                  // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1E89[0x3];                                     // 0x00C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_ErrorCode;                      // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_IdCount;                        // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00D2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1E8A[0x5];                                     // 0x00D3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1E8B[0x7];                                     // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBTextTableAsset*                      K2Node_DynamicCast_AsSBText_Table_Asset;           // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1E8C[0x2];                                     // 0x00F2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate_1;            // 0x00F4(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(BP_PlayerLevelStartSequence_CheckEndExpedition_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckEndExpedition) == 0x000010, "Wrong alignment on BP_PlayerLevelStartSequence_CheckEndExpedition_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckEndExpedition");
static_assert(sizeof(BP_PlayerLevelStartSequence_CheckEndExpedition_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckEndExpedition) == 0x000110, "Wrong size on BP_PlayerLevelStartSequence_CheckEndExpedition_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckEndExpedition");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckEndExpedition_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckEndExpedition, EntryPoint) == 0x000000, "Member 'BP_PlayerLevelStartSequence_CheckEndExpedition_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckEndExpedition::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckEndExpedition_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckEndExpedition, K2Node_CustomEvent_Loaded) == 0x000008, "Member 'BP_PlayerLevelStartSequence_CheckEndExpedition_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckEndExpedition::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckEndExpedition_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckEndExpedition, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'BP_PlayerLevelStartSequence_CheckEndExpedition_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckEndExpedition::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckEndExpedition_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckEndExpedition, Temp_object_Variable) == 0x000020, "Member 'BP_PlayerLevelStartSequence_CheckEndExpedition_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckEndExpedition::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckEndExpedition_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckEndExpedition, CallFunc_GetSBPlayerController_ReturnValue) == 0x000028, "Member 'BP_PlayerLevelStartSequence_CheckEndExpedition_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckEndExpedition::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckEndExpedition_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckEndExpedition, CallFunc_GetFang_expeditionComponent_ReturnValue) == 0x000030, "Member 'BP_PlayerLevelStartSequence_CheckEndExpedition_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckEndExpedition::CallFunc_GetFang_expeditionComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckEndExpedition_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckEndExpedition, CallFunc_IsCityCurrentMapLevel_ReturnValue) == 0x000038, "Member 'BP_PlayerLevelStartSequence_CheckEndExpedition_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckEndExpedition::CallFunc_IsCityCurrentMapLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckEndExpedition_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckEndExpedition, CallFunc_GetCurrentMapLevelInfo_OutMapLevelInfo) == 0x000040, "Member 'BP_PlayerLevelStartSequence_CheckEndExpedition_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckEndExpedition::CallFunc_GetCurrentMapLevelInfo_OutMapLevelInfo' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckEndExpedition_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckEndExpedition, CallFunc_GetCurrentMapLevelInfo_ReturnValue) == 0x0000C0, "Member 'BP_PlayerLevelStartSequence_CheckEndExpedition_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckEndExpedition::CallFunc_GetCurrentMapLevelInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckEndExpedition_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckEndExpedition, CallFunc_IsStandalone_ReturnValue) == 0x0000C1, "Member 'BP_PlayerLevelStartSequence_CheckEndExpedition_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckEndExpedition::CallFunc_IsStandalone_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckEndExpedition_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckEndExpedition, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000C2, "Member 'BP_PlayerLevelStartSequence_CheckEndExpedition_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckEndExpedition::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckEndExpedition_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckEndExpedition, CallFunc_BooleanOR_ReturnValue) == 0x0000C3, "Member 'BP_PlayerLevelStartSequence_CheckEndExpedition_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckEndExpedition::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckEndExpedition_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckEndExpedition, K2Node_CustomEvent_WasSuccessful) == 0x0000C4, "Member 'BP_PlayerLevelStartSequence_CheckEndExpedition_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckEndExpedition::K2Node_CustomEvent_WasSuccessful' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckEndExpedition_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckEndExpedition, K2Node_CustomEvent_ErrorCode) == 0x0000C8, "Member 'BP_PlayerLevelStartSequence_CheckEndExpedition_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckEndExpedition::K2Node_CustomEvent_ErrorCode' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckEndExpedition_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckEndExpedition, K2Node_CustomEvent_IdCount) == 0x0000CC, "Member 'BP_PlayerLevelStartSequence_CheckEndExpedition_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckEndExpedition::K2Node_CustomEvent_IdCount' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckEndExpedition_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckEndExpedition, CallFunc_Greater_IntInt_ReturnValue) == 0x0000D0, "Member 'BP_PlayerLevelStartSequence_CheckEndExpedition_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckEndExpedition::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckEndExpedition_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckEndExpedition, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000D1, "Member 'BP_PlayerLevelStartSequence_CheckEndExpedition_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckEndExpedition::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckEndExpedition_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckEndExpedition, CallFunc_BooleanAND_ReturnValue) == 0x0000D2, "Member 'BP_PlayerLevelStartSequence_CheckEndExpedition_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckEndExpedition::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckEndExpedition_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckEndExpedition, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x0000D8, "Member 'BP_PlayerLevelStartSequence_CheckEndExpedition_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckEndExpedition::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckEndExpedition_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckEndExpedition, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x0000E0, "Member 'BP_PlayerLevelStartSequence_CheckEndExpedition_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckEndExpedition::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckEndExpedition_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckEndExpedition, K2Node_DynamicCast_AsSBText_Table_Asset) == 0x0000E8, "Member 'BP_PlayerLevelStartSequence_CheckEndExpedition_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckEndExpedition::K2Node_DynamicCast_AsSBText_Table_Asset' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckEndExpedition_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckEndExpedition, K2Node_DynamicCast_bSuccess) == 0x0000F0, "Member 'BP_PlayerLevelStartSequence_CheckEndExpedition_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckEndExpedition::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckEndExpedition_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckEndExpedition, CallFunc_IsValid_ReturnValue) == 0x0000F1, "Member 'BP_PlayerLevelStartSequence_CheckEndExpedition_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckEndExpedition::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckEndExpedition_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckEndExpedition, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000F4, "Member 'BP_PlayerLevelStartSequence_CheckEndExpedition_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckEndExpedition::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");

// Function BP_PlayerLevelStartSequence_CheckEndExpedition.BP_PlayerLevelStartSequence_CheckEndExpedition_C.CompleteWork
// 0x000C (0x000C - 0x0000)
struct BP_PlayerLevelStartSequence_CheckEndExpedition_C_CompleteWork final
{
public:
	bool                                          WasSuccessful;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1E8D[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ErrorCode;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         IdCount;                                           // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerLevelStartSequence_CheckEndExpedition_C_CompleteWork) == 0x000004, "Wrong alignment on BP_PlayerLevelStartSequence_CheckEndExpedition_C_CompleteWork");
static_assert(sizeof(BP_PlayerLevelStartSequence_CheckEndExpedition_C_CompleteWork) == 0x00000C, "Wrong size on BP_PlayerLevelStartSequence_CheckEndExpedition_C_CompleteWork");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckEndExpedition_C_CompleteWork, WasSuccessful) == 0x000000, "Member 'BP_PlayerLevelStartSequence_CheckEndExpedition_C_CompleteWork::WasSuccessful' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckEndExpedition_C_CompleteWork, ErrorCode) == 0x000004, "Member 'BP_PlayerLevelStartSequence_CheckEndExpedition_C_CompleteWork::ErrorCode' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckEndExpedition_C_CompleteWork, IdCount) == 0x000008, "Member 'BP_PlayerLevelStartSequence_CheckEndExpedition_C_CompleteWork::IdCount' has a wrong offset!");

// Function BP_PlayerLevelStartSequence_CheckEndExpedition.BP_PlayerLevelStartSequence_CheckEndExpedition_C.OnLoaded_D99C7E054941241745424DB27741E175
// 0x0008 (0x0008 - 0x0000)
struct BP_PlayerLevelStartSequence_CheckEndExpedition_C_OnLoaded_D99C7E054941241745424DB27741E175 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerLevelStartSequence_CheckEndExpedition_C_OnLoaded_D99C7E054941241745424DB27741E175) == 0x000008, "Wrong alignment on BP_PlayerLevelStartSequence_CheckEndExpedition_C_OnLoaded_D99C7E054941241745424DB27741E175");
static_assert(sizeof(BP_PlayerLevelStartSequence_CheckEndExpedition_C_OnLoaded_D99C7E054941241745424DB27741E175) == 0x000008, "Wrong size on BP_PlayerLevelStartSequence_CheckEndExpedition_C_OnLoaded_D99C7E054941241745424DB27741E175");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckEndExpedition_C_OnLoaded_D99C7E054941241745424DB27741E175, Loaded) == 0x000000, "Member 'BP_PlayerLevelStartSequence_CheckEndExpedition_C_OnLoaded_D99C7E054941241745424DB27741E175::Loaded' has a wrong offset!");

// Function BP_PlayerLevelStartSequence_CheckEndExpedition.BP_PlayerLevelStartSequence_CheckEndExpedition_C.GetDescription
// 0x0010 (0x0010 - 0x0000)
struct BP_PlayerLevelStartSequence_CheckEndExpedition_C_GetDescription final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerLevelStartSequence_CheckEndExpedition_C_GetDescription) == 0x000008, "Wrong alignment on BP_PlayerLevelStartSequence_CheckEndExpedition_C_GetDescription");
static_assert(sizeof(BP_PlayerLevelStartSequence_CheckEndExpedition_C_GetDescription) == 0x000010, "Wrong size on BP_PlayerLevelStartSequence_CheckEndExpedition_C_GetDescription");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckEndExpedition_C_GetDescription, ReturnValue) == 0x000000, "Member 'BP_PlayerLevelStartSequence_CheckEndExpedition_C_GetDescription::ReturnValue' has a wrong offset!");

// Function BP_PlayerLevelStartSequence_CheckEndExpedition.BP_PlayerLevelStartSequence_CheckEndExpedition_C.SetMessage
// 0x01A8 (0x01A8 - 0x0000)
struct BP_PlayerLevelStartSequence_CheckEndExpedition_C_SetMessage final
{
public:
	class USBPlayerExpeditionComponent*           ExpeditionComponent;                               // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBTextTableAsset*                      TableObject;                                       // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHUD*                                   HUD;                                               // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1E8E[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0038(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1E8F[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1E90[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBTextTableAsset*                      K2Node_DynamicCast_AsSBText_Table_Asset;           // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1E91[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBNotifyMessageInterface> K2Node_DynamicCast_AsSBNotify_Message_Interface;   // 0x0088(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1E92[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_1;      // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerExpeditionComponent*           CallFunc_GetFang_expeditionComponent_ReturnValue;  // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerExpeditionComponent*           CallFunc_GetFang_expeditionComponent_ReturnValue_1; // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         CallFunc_GetEndCheckData_IdList;                   // 0x00C0(0x0010)(ReferenceParm)
	TArray<class FString>                         CallFunc_GetEndCheckData_NameList;                 // 0x00D0(0x0010)(ReferenceParm)
	class AHUD*                                   CallFunc_GetHUD_ReturnValue;                       // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Array_Get_Item;                           // 0x00E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00F8(0x0018)()
	class FString                                 CallFunc_Replace_ReturnValue;                      // 0x0110(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0120(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0160(0x0018)()
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0178(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0188(0x0018)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x01A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerLevelStartSequence_CheckEndExpedition_C_SetMessage) == 0x000008, "Wrong alignment on BP_PlayerLevelStartSequence_CheckEndExpedition_C_SetMessage");
static_assert(sizeof(BP_PlayerLevelStartSequence_CheckEndExpedition_C_SetMessage) == 0x0001A8, "Wrong size on BP_PlayerLevelStartSequence_CheckEndExpedition_C_SetMessage");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckEndExpedition_C_SetMessage, ExpeditionComponent) == 0x000000, "Member 'BP_PlayerLevelStartSequence_CheckEndExpedition_C_SetMessage::ExpeditionComponent' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckEndExpedition_C_SetMessage, TableObject) == 0x000008, "Member 'BP_PlayerLevelStartSequence_CheckEndExpedition_C_SetMessage::TableObject' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckEndExpedition_C_SetMessage, HUD) == 0x000010, "Member 'BP_PlayerLevelStartSequence_CheckEndExpedition_C_SetMessage::HUD' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckEndExpedition_C_SetMessage, Temp_int_Loop_Counter_Variable) == 0x000018, "Member 'BP_PlayerLevelStartSequence_CheckEndExpedition_C_SetMessage::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckEndExpedition_C_SetMessage, CallFunc_IsValid_ReturnValue) == 0x00001C, "Member 'BP_PlayerLevelStartSequence_CheckEndExpedition_C_SetMessage::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckEndExpedition_C_SetMessage, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'BP_PlayerLevelStartSequence_CheckEndExpedition_C_SetMessage::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckEndExpedition_C_SetMessage, Temp_int_Array_Index_Variable) == 0x000024, "Member 'BP_PlayerLevelStartSequence_CheckEndExpedition_C_SetMessage::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckEndExpedition_C_SetMessage, CallFunc_GetTextFromAsset_ReturnValue) == 0x000028, "Member 'BP_PlayerLevelStartSequence_CheckEndExpedition_C_SetMessage::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckEndExpedition_C_SetMessage, CallFunc_Conv_StringToText_ReturnValue) == 0x000038, "Member 'BP_PlayerLevelStartSequence_CheckEndExpedition_C_SetMessage::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckEndExpedition_C_SetMessage, CallFunc_IsValid_ReturnValue_1) == 0x000050, "Member 'BP_PlayerLevelStartSequence_CheckEndExpedition_C_SetMessage::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckEndExpedition_C_SetMessage, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000058, "Member 'BP_PlayerLevelStartSequence_CheckEndExpedition_C_SetMessage::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckEndExpedition_C_SetMessage, CallFunc_IsValid_ReturnValue_2) == 0x000068, "Member 'BP_PlayerLevelStartSequence_CheckEndExpedition_C_SetMessage::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckEndExpedition_C_SetMessage, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x000070, "Member 'BP_PlayerLevelStartSequence_CheckEndExpedition_C_SetMessage::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckEndExpedition_C_SetMessage, K2Node_DynamicCast_AsSBText_Table_Asset) == 0x000078, "Member 'BP_PlayerLevelStartSequence_CheckEndExpedition_C_SetMessage::K2Node_DynamicCast_AsSBText_Table_Asset' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckEndExpedition_C_SetMessage, K2Node_DynamicCast_bSuccess) == 0x000080, "Member 'BP_PlayerLevelStartSequence_CheckEndExpedition_C_SetMessage::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckEndExpedition_C_SetMessage, K2Node_DynamicCast_AsSBNotify_Message_Interface) == 0x000088, "Member 'BP_PlayerLevelStartSequence_CheckEndExpedition_C_SetMessage::K2Node_DynamicCast_AsSBNotify_Message_Interface' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckEndExpedition_C_SetMessage, K2Node_DynamicCast_bSuccess_1) == 0x000098, "Member 'BP_PlayerLevelStartSequence_CheckEndExpedition_C_SetMessage::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckEndExpedition_C_SetMessage, CallFunc_GetSBPlayerController_ReturnValue) == 0x0000A0, "Member 'BP_PlayerLevelStartSequence_CheckEndExpedition_C_SetMessage::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckEndExpedition_C_SetMessage, CallFunc_GetSBPlayerController_ReturnValue_1) == 0x0000A8, "Member 'BP_PlayerLevelStartSequence_CheckEndExpedition_C_SetMessage::CallFunc_GetSBPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckEndExpedition_C_SetMessage, CallFunc_GetFang_expeditionComponent_ReturnValue) == 0x0000B0, "Member 'BP_PlayerLevelStartSequence_CheckEndExpedition_C_SetMessage::CallFunc_GetFang_expeditionComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckEndExpedition_C_SetMessage, CallFunc_GetFang_expeditionComponent_ReturnValue_1) == 0x0000B8, "Member 'BP_PlayerLevelStartSequence_CheckEndExpedition_C_SetMessage::CallFunc_GetFang_expeditionComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckEndExpedition_C_SetMessage, CallFunc_GetEndCheckData_IdList) == 0x0000C0, "Member 'BP_PlayerLevelStartSequence_CheckEndExpedition_C_SetMessage::CallFunc_GetEndCheckData_IdList' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckEndExpedition_C_SetMessage, CallFunc_GetEndCheckData_NameList) == 0x0000D0, "Member 'BP_PlayerLevelStartSequence_CheckEndExpedition_C_SetMessage::CallFunc_GetEndCheckData_NameList' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckEndExpedition_C_SetMessage, CallFunc_GetHUD_ReturnValue) == 0x0000E0, "Member 'BP_PlayerLevelStartSequence_CheckEndExpedition_C_SetMessage::CallFunc_GetHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckEndExpedition_C_SetMessage, CallFunc_Array_Get_Item) == 0x0000E8, "Member 'BP_PlayerLevelStartSequence_CheckEndExpedition_C_SetMessage::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckEndExpedition_C_SetMessage, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000F8, "Member 'BP_PlayerLevelStartSequence_CheckEndExpedition_C_SetMessage::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckEndExpedition_C_SetMessage, CallFunc_Replace_ReturnValue) == 0x000110, "Member 'BP_PlayerLevelStartSequence_CheckEndExpedition_C_SetMessage::CallFunc_Replace_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckEndExpedition_C_SetMessage, K2Node_MakeStruct_FormatArgumentData) == 0x000120, "Member 'BP_PlayerLevelStartSequence_CheckEndExpedition_C_SetMessage::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckEndExpedition_C_SetMessage, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000160, "Member 'BP_PlayerLevelStartSequence_CheckEndExpedition_C_SetMessage::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckEndExpedition_C_SetMessage, K2Node_MakeArray_Array) == 0x000178, "Member 'BP_PlayerLevelStartSequence_CheckEndExpedition_C_SetMessage::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckEndExpedition_C_SetMessage, CallFunc_Format_ReturnValue) == 0x000188, "Member 'BP_PlayerLevelStartSequence_CheckEndExpedition_C_SetMessage::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckEndExpedition_C_SetMessage, CallFunc_Array_Length_ReturnValue) == 0x0001A0, "Member 'BP_PlayerLevelStartSequence_CheckEndExpedition_C_SetMessage::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckEndExpedition_C_SetMessage, CallFunc_Less_IntInt_ReturnValue) == 0x0001A4, "Member 'BP_PlayerLevelStartSequence_CheckEndExpedition_C_SetMessage::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

}

