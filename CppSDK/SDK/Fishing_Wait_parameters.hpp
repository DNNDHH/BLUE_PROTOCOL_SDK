#pragma once

 

// Package: Fishing_Wait

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function Fishing_Wait.Fishing_Wait_C.ExecuteUbergraph_Fishing_Wait
// 0x04D0 (0x04D0 - 0x0000)
struct Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_470A[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayTextByAction_ReturnValue;       // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
	class UBP_Dialog_C*                           CallFunc_Create_ReturnValue;                       // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0038(0x0040)(HasGetValueTypeHash)
	EDialogResult                                 K2Node_CustomEvent_Result;                         // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_470B[0x6];                                     // 0x007A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00A0(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x00B8(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x00D0(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x0110(0x0040)(HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayTextByAction_ReturnValue_1;     // 0x0150(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayTextByAction_ReturnValue_2;     // 0x0160(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0170(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_4;          // 0x0188(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_3;            // 0x01A0(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_4;            // 0x01E0(0x0040)(HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_2;           // 0x0220(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate;              // 0x0230(0x0010)(ZeroConstructor, NoDestructor)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_5;          // 0x0240(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_5;            // 0x0258(0x0040)(HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayTextByAction_ReturnValue_3;     // 0x0298(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x02A8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_6;          // 0x02B8(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x02D0(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_6;            // 0x02E8(0x0040)(HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0328(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_470C[0x7];                                     // 0x0329(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0330(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBOperateMode                                CallFunc_GetOperateMode_ReturnValue;               // 0x0338(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_470D[0x7];                                     // 0x0339(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_3;           // 0x0340(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0350(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_470E[0x7];                                     // 0x0351(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_7;          // 0x0358(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_4;           // 0x0370(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_7;            // 0x0380(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_8;          // 0x03C0(0x0018)()
	class FString                                 CallFunc_GetDisplayTextByAction_ReturnValue_4;     // 0x03D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_8;            // 0x03E8(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_9;          // 0x0428(0x0018)()
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x0440(0x0010)(ReferenceParm)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_9;            // 0x0450(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x0490(0x0018)()
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_2;                          // 0x04A8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_2;                     // 0x04B8(0x0018)()
};
static_assert(alignof(Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait) == 0x000008, "Wrong alignment on Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait");
static_assert(sizeof(Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait) == 0x0004D0, "Wrong size on Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait");
static_assert(offsetof(Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait, EntryPoint) == 0x000000, "Member 'Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait::EntryPoint' has a wrong offset!");
static_assert(offsetof(Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait, CallFunc_GetDisplayTextByAction_ReturnValue) == 0x000008, "Member 'Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait::CallFunc_GetDisplayTextByAction_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait, CallFunc_Create_ReturnValue) == 0x000030, "Member 'Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait, K2Node_MakeStruct_FormatArgumentData) == 0x000038, "Member 'Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait, K2Node_CustomEvent_Result) == 0x000078, "Member 'Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait, K2Node_SwitchEnum_CmpSuccess) == 0x000079, "Member 'Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait, CallFunc_GetTextFromAsset_ReturnValue) == 0x000080, "Member 'Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000090, "Member 'Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000A0, "Member 'Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0000B8, "Member 'Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait, K2Node_MakeStruct_FormatArgumentData_1) == 0x0000D0, "Member 'Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait, K2Node_MakeStruct_FormatArgumentData_2) == 0x000110, "Member 'Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait, CallFunc_GetDisplayTextByAction_ReturnValue_1) == 0x000150, "Member 'Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait::CallFunc_GetDisplayTextByAction_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait, CallFunc_GetDisplayTextByAction_ReturnValue_2) == 0x000160, "Member 'Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait::CallFunc_GetDisplayTextByAction_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000170, "Member 'Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait, CallFunc_Conv_StringToText_ReturnValue_4) == 0x000188, "Member 'Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait::CallFunc_Conv_StringToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait, K2Node_MakeStruct_FormatArgumentData_3) == 0x0001A0, "Member 'Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait::K2Node_MakeStruct_FormatArgumentData_3' has a wrong offset!");
static_assert(offsetof(Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait, K2Node_MakeStruct_FormatArgumentData_4) == 0x0001E0, "Member 'Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait::K2Node_MakeStruct_FormatArgumentData_4' has a wrong offset!");
static_assert(offsetof(Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait, CallFunc_GetTextFromAsset_ReturnValue_2) == 0x000220, "Member 'Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait::CallFunc_GetTextFromAsset_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait, K2Node_CreateDelegate_OutputDelegate) == 0x000230, "Member 'Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait, CallFunc_Conv_StringToText_ReturnValue_5) == 0x000240, "Member 'Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait::CallFunc_Conv_StringToText_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait, K2Node_MakeStruct_FormatArgumentData_5) == 0x000258, "Member 'Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait::K2Node_MakeStruct_FormatArgumentData_5' has a wrong offset!");
static_assert(offsetof(Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait, CallFunc_GetDisplayTextByAction_ReturnValue_3) == 0x000298, "Member 'Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait::CallFunc_GetDisplayTextByAction_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait, K2Node_MakeArray_Array) == 0x0002A8, "Member 'Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait, CallFunc_Conv_StringToText_ReturnValue_6) == 0x0002B8, "Member 'Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait::CallFunc_Conv_StringToText_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait, CallFunc_Format_ReturnValue) == 0x0002D0, "Member 'Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait, K2Node_MakeStruct_FormatArgumentData_6) == 0x0002E8, "Member 'Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait::K2Node_MakeStruct_FormatArgumentData_6' has a wrong offset!");
static_assert(offsetof(Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait, CallFunc_GetConfigSaveManager_IsValid) == 0x000328, "Member 'Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000330, "Member 'Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait, CallFunc_GetOperateMode_ReturnValue) == 0x000338, "Member 'Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait::CallFunc_GetOperateMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait, CallFunc_GetTextFromAsset_ReturnValue_3) == 0x000340, "Member 'Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait::CallFunc_GetTextFromAsset_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait, K2Node_SwitchEnum_CmpSuccess_1) == 0x000350, "Member 'Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait, CallFunc_Conv_StringToText_ReturnValue_7) == 0x000358, "Member 'Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait::CallFunc_Conv_StringToText_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait, CallFunc_GetTextFromAsset_ReturnValue_4) == 0x000370, "Member 'Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait::CallFunc_GetTextFromAsset_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait, K2Node_MakeStruct_FormatArgumentData_7) == 0x000380, "Member 'Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait::K2Node_MakeStruct_FormatArgumentData_7' has a wrong offset!");
static_assert(offsetof(Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait, CallFunc_Conv_StringToText_ReturnValue_8) == 0x0003C0, "Member 'Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait::CallFunc_Conv_StringToText_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait, CallFunc_GetDisplayTextByAction_ReturnValue_4) == 0x0003D8, "Member 'Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait::CallFunc_GetDisplayTextByAction_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait, K2Node_MakeStruct_FormatArgumentData_8) == 0x0003E8, "Member 'Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait::K2Node_MakeStruct_FormatArgumentData_8' has a wrong offset!");
static_assert(offsetof(Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait, CallFunc_Conv_StringToText_ReturnValue_9) == 0x000428, "Member 'Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait::CallFunc_Conv_StringToText_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait, K2Node_MakeArray_Array_1) == 0x000440, "Member 'Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait, K2Node_MakeStruct_FormatArgumentData_9) == 0x000450, "Member 'Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait::K2Node_MakeStruct_FormatArgumentData_9' has a wrong offset!");
static_assert(offsetof(Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait, CallFunc_Format_ReturnValue_1) == 0x000490, "Member 'Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait, K2Node_MakeArray_Array_2) == 0x0004A8, "Member 'Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait, CallFunc_Format_ReturnValue_2) == 0x0004B8, "Member 'Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait::CallFunc_Format_ReturnValue_2' has a wrong offset!");

// Function Fishing_Wait.Fishing_Wait_C.DialogAction
// 0x0001 (0x0001 - 0x0000)
struct Fishing_Wait_C_DialogAction final
{
public:
	EDialogResult                                 Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fishing_Wait_C_DialogAction) == 0x000001, "Wrong alignment on Fishing_Wait_C_DialogAction");
static_assert(sizeof(Fishing_Wait_C_DialogAction) == 0x000001, "Wrong size on Fishing_Wait_C_DialogAction");
static_assert(offsetof(Fishing_Wait_C_DialogAction, Result) == 0x000000, "Member 'Fishing_Wait_C_DialogAction::Result' has a wrong offset!");

// Function Fishing_Wait.Fishing_Wait_C.CheckBackPack
// 0x0028 (0x0028 - 0x0000)
struct Fishing_Wait_C_CheckBackPack final
{
public:
	bool                                          Ret;                                               // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_470F[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetInventory_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBTemporallyStorage*                   CallFunc_GetTemporallyStorage_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetUseBlockNum_ReturnValue;               // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCapacity_ReturnValue;                  // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fishing_Wait_C_CheckBackPack) == 0x000008, "Wrong alignment on Fishing_Wait_C_CheckBackPack");
static_assert(sizeof(Fishing_Wait_C_CheckBackPack) == 0x000028, "Wrong size on Fishing_Wait_C_CheckBackPack");
static_assert(offsetof(Fishing_Wait_C_CheckBackPack, Ret) == 0x000000, "Member 'Fishing_Wait_C_CheckBackPack::Ret' has a wrong offset!");
static_assert(offsetof(Fishing_Wait_C_CheckBackPack, CallFunc_GetInventory_ReturnValue) == 0x000008, "Member 'Fishing_Wait_C_CheckBackPack::CallFunc_GetInventory_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Wait_C_CheckBackPack, CallFunc_GetTemporallyStorage_ReturnValue) == 0x000010, "Member 'Fishing_Wait_C_CheckBackPack::CallFunc_GetTemporallyStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Wait_C_CheckBackPack, CallFunc_GetUseBlockNum_ReturnValue) == 0x000018, "Member 'Fishing_Wait_C_CheckBackPack::CallFunc_GetUseBlockNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Wait_C_CheckBackPack, CallFunc_GetCapacity_ReturnValue) == 0x00001C, "Member 'Fishing_Wait_C_CheckBackPack::CallFunc_GetCapacity_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Wait_C_CheckBackPack, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000020, "Member 'Fishing_Wait_C_CheckBackPack::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");

// Function Fishing_Wait.Fishing_Wait_C.CheckFirstOpen
// 0x0030 (0x0030 - 0x0000)
struct Fishing_Wait_C_CheckFirstOpen final
{
public:
	bool                                          Ret;                                               // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4710[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4711[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBCharactersLogComponent*              CallFunc_GetCharacterLogComponent_ReturnValue;     // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsUnlockTutorialHelp_ReturnValue;         // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fishing_Wait_C_CheckFirstOpen) == 0x000008, "Wrong alignment on Fishing_Wait_C_CheckFirstOpen");
static_assert(sizeof(Fishing_Wait_C_CheckFirstOpen) == 0x000030, "Wrong size on Fishing_Wait_C_CheckFirstOpen");
static_assert(offsetof(Fishing_Wait_C_CheckFirstOpen, Ret) == 0x000000, "Member 'Fishing_Wait_C_CheckFirstOpen::Ret' has a wrong offset!");
static_assert(offsetof(Fishing_Wait_C_CheckFirstOpen, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'Fishing_Wait_C_CheckFirstOpen::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Wait_C_CheckFirstOpen, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000010, "Member 'Fishing_Wait_C_CheckFirstOpen::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(Fishing_Wait_C_CheckFirstOpen, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'Fishing_Wait_C_CheckFirstOpen::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Fishing_Wait_C_CheckFirstOpen, CallFunc_GetCharacterLogComponent_ReturnValue) == 0x000020, "Member 'Fishing_Wait_C_CheckFirstOpen::CallFunc_GetCharacterLogComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Wait_C_CheckFirstOpen, CallFunc_IsUnlockTutorialHelp_ReturnValue) == 0x000028, "Member 'Fishing_Wait_C_CheckFirstOpen::CallFunc_IsUnlockTutorialHelp_ReturnValue' has a wrong offset!");

}

