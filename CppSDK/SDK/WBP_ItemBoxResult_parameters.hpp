#pragma once

 

// Package: WBP_ItemBoxResult

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "InventoryItemData_structs.hpp"
#include "UMG_structs.hpp"
#include "InventoryData_structs.hpp"
#include "ENumberInputDialogResult_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.OnHide__DelegateSignature
// 0x0068 (0x0068 - 0x0000)
struct WBP_ItemBoxResult_C_OnHide__DelegateSignature final
{
public:
	ENumberInputDialogResult                      InResult;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C2D[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryItemData                     NewParam;                                          // 0x0008(0x0060)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ItemBoxResult_C_OnHide__DelegateSignature) == 0x000008, "Wrong alignment on WBP_ItemBoxResult_C_OnHide__DelegateSignature");
static_assert(sizeof(WBP_ItemBoxResult_C_OnHide__DelegateSignature) == 0x000068, "Wrong size on WBP_ItemBoxResult_C_OnHide__DelegateSignature");
static_assert(offsetof(WBP_ItemBoxResult_C_OnHide__DelegateSignature, InResult) == 0x000000, "Member 'WBP_ItemBoxResult_C_OnHide__DelegateSignature::InResult' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_OnHide__DelegateSignature, NewParam) == 0x000008, "Member 'WBP_ItemBoxResult_C_OnHide__DelegateSignature::NewParam' has a wrong offset!");

// Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.OnNumSliderUpdeta__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct WBP_ItemBoxResult_C_OnNumSliderUpdeta__DelegateSignature final
{
public:
	int32                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C2E[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UNumberInputDialog_C*                   CallerDialg;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ItemBoxResult_C_OnNumSliderUpdeta__DelegateSignature) == 0x000008, "Wrong alignment on WBP_ItemBoxResult_C_OnNumSliderUpdeta__DelegateSignature");
static_assert(sizeof(WBP_ItemBoxResult_C_OnNumSliderUpdeta__DelegateSignature) == 0x000010, "Wrong size on WBP_ItemBoxResult_C_OnNumSliderUpdeta__DelegateSignature");
static_assert(offsetof(WBP_ItemBoxResult_C_OnNumSliderUpdeta__DelegateSignature, Value) == 0x000000, "Member 'WBP_ItemBoxResult_C_OnNumSliderUpdeta__DelegateSignature::Value' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_OnNumSliderUpdeta__DelegateSignature, CallerDialg) == 0x000008, "Member 'WBP_ItemBoxResult_C_OnNumSliderUpdeta__DelegateSignature::CallerDialg' has a wrong offset!");

// Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.ExecuteUbergraph_WBP_ItemBoxResult
// 0x01F0 (0x01F0 - 0x0000)
struct WBP_ItemBoxResult_C_ExecuteUbergraph_WBP_ItemBoxResult final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C2F[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0010(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C30[0x2];                                     // 0x001A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue_1;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetUIManager_IsValid;                     // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5C31[0x2];                                     // 0x0026(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue;                 // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5C32[0x6];                                     // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bPlayCloseSe;                   // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C33[0x2];                                     // 0x0042(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PlaySE_ReturnValue_2;                     // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetSettingAgainItem_Result;               // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5C34[0x6];                                     // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryItemData                     CallFunc_GetSettingAgainItem_IconData;             // 0x0050(0x0060)(HasGetValueTypeHash)
	bool                                          CallFunc_Is_Disappearance_bDisappearance;          // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5C35[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x00B8(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x00E0(0x0028)()
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C36[0x7];                                     // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x0110(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_3;                    // 0x0138(0x0028)()
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0160(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0170(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0188(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x01C8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x01D8(0x0018)()
};
static_assert(alignof(WBP_ItemBoxResult_C_ExecuteUbergraph_WBP_ItemBoxResult) == 0x000008, "Wrong alignment on WBP_ItemBoxResult_C_ExecuteUbergraph_WBP_ItemBoxResult");
static_assert(sizeof(WBP_ItemBoxResult_C_ExecuteUbergraph_WBP_ItemBoxResult) == 0x0001F0, "Wrong size on WBP_ItemBoxResult_C_ExecuteUbergraph_WBP_ItemBoxResult");
static_assert(offsetof(WBP_ItemBoxResult_C_ExecuteUbergraph_WBP_ItemBoxResult, EntryPoint) == 0x000000, "Member 'WBP_ItemBoxResult_C_ExecuteUbergraph_WBP_ItemBoxResult::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_ExecuteUbergraph_WBP_ItemBoxResult, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'WBP_ItemBoxResult_C_ExecuteUbergraph_WBP_ItemBoxResult::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_ExecuteUbergraph_WBP_ItemBoxResult, K2Node_Event_Animation) == 0x000010, "Member 'WBP_ItemBoxResult_C_ExecuteUbergraph_WBP_ItemBoxResult::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_ExecuteUbergraph_WBP_ItemBoxResult, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000018, "Member 'WBP_ItemBoxResult_C_ExecuteUbergraph_WBP_ItemBoxResult::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_ExecuteUbergraph_WBP_ItemBoxResult, CallFunc_MakeLiteralByte_ReturnValue) == 0x000019, "Member 'WBP_ItemBoxResult_C_ExecuteUbergraph_WBP_ItemBoxResult::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_ExecuteUbergraph_WBP_ItemBoxResult, CallFunc_PlaySE_ReturnValue) == 0x00001C, "Member 'WBP_ItemBoxResult_C_ExecuteUbergraph_WBP_ItemBoxResult::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_ExecuteUbergraph_WBP_ItemBoxResult, CallFunc_PlaySE_ReturnValue_1) == 0x000020, "Member 'WBP_ItemBoxResult_C_ExecuteUbergraph_WBP_ItemBoxResult::CallFunc_PlaySE_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_ExecuteUbergraph_WBP_ItemBoxResult, CallFunc_IsValid_ReturnValue) == 0x000024, "Member 'WBP_ItemBoxResult_C_ExecuteUbergraph_WBP_ItemBoxResult::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_ExecuteUbergraph_WBP_ItemBoxResult, CallFunc_GetUIManager_IsValid) == 0x000025, "Member 'WBP_ItemBoxResult_C_ExecuteUbergraph_WBP_ItemBoxResult::CallFunc_GetUIManager_IsValid' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_ExecuteUbergraph_WBP_ItemBoxResult, CallFunc_GetUIManager_ReturnValue) == 0x000028, "Member 'WBP_ItemBoxResult_C_ExecuteUbergraph_WBP_ItemBoxResult::CallFunc_GetUIManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_ExecuteUbergraph_WBP_ItemBoxResult, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000030, "Member 'WBP_ItemBoxResult_C_ExecuteUbergraph_WBP_ItemBoxResult::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_ExecuteUbergraph_WBP_ItemBoxResult, CallFunc_Not_PreBool_ReturnValue) == 0x000031, "Member 'WBP_ItemBoxResult_C_ExecuteUbergraph_WBP_ItemBoxResult::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_ExecuteUbergraph_WBP_ItemBoxResult, CallFunc_PlayAnimation_ReturnValue_1) == 0x000038, "Member 'WBP_ItemBoxResult_C_ExecuteUbergraph_WBP_ItemBoxResult::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_ExecuteUbergraph_WBP_ItemBoxResult, K2Node_CustomEvent_bPlayCloseSe) == 0x000040, "Member 'WBP_ItemBoxResult_C_ExecuteUbergraph_WBP_ItemBoxResult::K2Node_CustomEvent_bPlayCloseSe' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_ExecuteUbergraph_WBP_ItemBoxResult, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000041, "Member 'WBP_ItemBoxResult_C_ExecuteUbergraph_WBP_ItemBoxResult::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_ExecuteUbergraph_WBP_ItemBoxResult, CallFunc_PlaySE_ReturnValue_2) == 0x000044, "Member 'WBP_ItemBoxResult_C_ExecuteUbergraph_WBP_ItemBoxResult::CallFunc_PlaySE_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_ExecuteUbergraph_WBP_ItemBoxResult, Temp_bool_Variable) == 0x000048, "Member 'WBP_ItemBoxResult_C_ExecuteUbergraph_WBP_ItemBoxResult::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_ExecuteUbergraph_WBP_ItemBoxResult, CallFunc_GetSettingAgainItem_Result) == 0x000049, "Member 'WBP_ItemBoxResult_C_ExecuteUbergraph_WBP_ItemBoxResult::CallFunc_GetSettingAgainItem_Result' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_ExecuteUbergraph_WBP_ItemBoxResult, CallFunc_GetSettingAgainItem_IconData) == 0x000050, "Member 'WBP_ItemBoxResult_C_ExecuteUbergraph_WBP_ItemBoxResult::CallFunc_GetSettingAgainItem_IconData' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_ExecuteUbergraph_WBP_ItemBoxResult, CallFunc_Is_Disappearance_bDisappearance) == 0x0000B0, "Member 'WBP_ItemBoxResult_C_ExecuteUbergraph_WBP_ItemBoxResult::CallFunc_Is_Disappearance_bDisappearance' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_ExecuteUbergraph_WBP_ItemBoxResult, K2Node_MakeStruct_SlateColor) == 0x0000B8, "Member 'WBP_ItemBoxResult_C_ExecuteUbergraph_WBP_ItemBoxResult::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_ExecuteUbergraph_WBP_ItemBoxResult, K2Node_MakeStruct_SlateColor_1) == 0x0000E0, "Member 'WBP_ItemBoxResult_C_ExecuteUbergraph_WBP_ItemBoxResult::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_ExecuteUbergraph_WBP_ItemBoxResult, K2Node_Select_Default) == 0x000108, "Member 'WBP_ItemBoxResult_C_ExecuteUbergraph_WBP_ItemBoxResult::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_ExecuteUbergraph_WBP_ItemBoxResult, K2Node_MakeStruct_SlateColor_2) == 0x000110, "Member 'WBP_ItemBoxResult_C_ExecuteUbergraph_WBP_ItemBoxResult::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_ExecuteUbergraph_WBP_ItemBoxResult, K2Node_MakeStruct_SlateColor_3) == 0x000138, "Member 'WBP_ItemBoxResult_C_ExecuteUbergraph_WBP_ItemBoxResult::K2Node_MakeStruct_SlateColor_3' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_ExecuteUbergraph_WBP_ItemBoxResult, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000160, "Member 'WBP_ItemBoxResult_C_ExecuteUbergraph_WBP_ItemBoxResult::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_ExecuteUbergraph_WBP_ItemBoxResult, CallFunc_Conv_StringToText_ReturnValue) == 0x000170, "Member 'WBP_ItemBoxResult_C_ExecuteUbergraph_WBP_ItemBoxResult::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_ExecuteUbergraph_WBP_ItemBoxResult, K2Node_MakeStruct_FormatArgumentData) == 0x000188, "Member 'WBP_ItemBoxResult_C_ExecuteUbergraph_WBP_ItemBoxResult::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_ExecuteUbergraph_WBP_ItemBoxResult, K2Node_MakeArray_Array) == 0x0001C8, "Member 'WBP_ItemBoxResult_C_ExecuteUbergraph_WBP_ItemBoxResult::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_ExecuteUbergraph_WBP_ItemBoxResult, CallFunc_Format_ReturnValue) == 0x0001D8, "Member 'WBP_ItemBoxResult_C_ExecuteUbergraph_WBP_ItemBoxResult::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.HideDialog
// 0x0001 (0x0001 - 0x0000)
struct WBP_ItemBoxResult_C_HideDialog final
{
public:
	bool                                          bPlayCloseSe;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_ItemBoxResult_C_HideDialog) == 0x000001, "Wrong alignment on WBP_ItemBoxResult_C_HideDialog");
static_assert(sizeof(WBP_ItemBoxResult_C_HideDialog) == 0x000001, "Wrong size on WBP_ItemBoxResult_C_HideDialog");
static_assert(offsetof(WBP_ItemBoxResult_C_HideDialog, bPlayCloseSe) == 0x000000, "Member 'WBP_ItemBoxResult_C_HideDialog::bPlayCloseSe' has a wrong offset!");

// Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct WBP_ItemBoxResult_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ItemBoxResult_C_OnAnimationFinished) == 0x000008, "Wrong alignment on WBP_ItemBoxResult_C_OnAnimationFinished");
static_assert(sizeof(WBP_ItemBoxResult_C_OnAnimationFinished) == 0x000008, "Wrong size on WBP_ItemBoxResult_C_OnAnimationFinished");
static_assert(offsetof(WBP_ItemBoxResult_C_OnAnimationFinished, Animation) == 0x000000, "Member 'WBP_ItemBoxResult_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.CreateBagList
// 0x0140 (0x0140 - 0x0000)
struct WBP_ItemBoxResult_C_CreateBagList final
{
public:
	TArray<int32>                                 NewLocalVar_1;                                     // 0x0000(0x0010)(Edit, BlueprintVisible)
	TArray<EItemType>                             NewLocalVar_0;                                     // 0x0010(0x0010)(Edit, BlueprintVisible)
	bool                                          Temp_bool_Variable;                                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_3;                              // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_4;                              // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5C37[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_5;                              // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5C38[0x2];                                     // 0x0032(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_6;                              // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5C39[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_7;                              // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EItemType                                     Temp_byte_Variable;                                // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5C3A[0x5];                                     // 0x0043(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCityCurrentMapLevel_ReturnValue;        // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5C3B[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemType                                     CallFunc_Array_Get_Item;                           // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C3C[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default;                             // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0062(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5C3D[0x1];                                     // 0x0063(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemMasterData_IsExists;               // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5C3E[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_GetItemMasterData_ReturnValue;            // 0x0070(0x00D0)()
};
static_assert(alignof(WBP_ItemBoxResult_C_CreateBagList) == 0x000008, "Wrong alignment on WBP_ItemBoxResult_C_CreateBagList");
static_assert(sizeof(WBP_ItemBoxResult_C_CreateBagList) == 0x000140, "Wrong size on WBP_ItemBoxResult_C_CreateBagList");
static_assert(offsetof(WBP_ItemBoxResult_C_CreateBagList, NewLocalVar_1) == 0x000000, "Member 'WBP_ItemBoxResult_C_CreateBagList::NewLocalVar_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_CreateBagList, NewLocalVar_0) == 0x000010, "Member 'WBP_ItemBoxResult_C_CreateBagList::NewLocalVar_0' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_CreateBagList, Temp_bool_Variable) == 0x000020, "Member 'WBP_ItemBoxResult_C_CreateBagList::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_CreateBagList, Temp_bool_Variable_1) == 0x000021, "Member 'WBP_ItemBoxResult_C_CreateBagList::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_CreateBagList, Temp_bool_Variable_2) == 0x000022, "Member 'WBP_ItemBoxResult_C_CreateBagList::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_CreateBagList, Temp_bool_Variable_3) == 0x000023, "Member 'WBP_ItemBoxResult_C_CreateBagList::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_CreateBagList, Temp_bool_Variable_4) == 0x000024, "Member 'WBP_ItemBoxResult_C_CreateBagList::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_CreateBagList, Temp_int_Array_Index_Variable) == 0x000028, "Member 'WBP_ItemBoxResult_C_CreateBagList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_CreateBagList, CallFunc_Array_Length_ReturnValue) == 0x00002C, "Member 'WBP_ItemBoxResult_C_CreateBagList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_CreateBagList, Temp_bool_Variable_5) == 0x000030, "Member 'WBP_ItemBoxResult_C_CreateBagList::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_CreateBagList, CallFunc_Greater_IntInt_ReturnValue) == 0x000031, "Member 'WBP_ItemBoxResult_C_CreateBagList::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_CreateBagList, Temp_int_Loop_Counter_Variable) == 0x000034, "Member 'WBP_ItemBoxResult_C_CreateBagList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_CreateBagList, Temp_bool_Variable_6) == 0x000038, "Member 'WBP_ItemBoxResult_C_CreateBagList::Temp_bool_Variable_6' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_CreateBagList, CallFunc_Add_IntInt_ReturnValue) == 0x00003C, "Member 'WBP_ItemBoxResult_C_CreateBagList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_CreateBagList, Temp_bool_Variable_7) == 0x000040, "Member 'WBP_ItemBoxResult_C_CreateBagList::Temp_bool_Variable_7' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_CreateBagList, Temp_byte_Variable) == 0x000041, "Member 'WBP_ItemBoxResult_C_CreateBagList::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_CreateBagList, CallFunc_GetMasterDataManager_IsValid) == 0x000042, "Member 'WBP_ItemBoxResult_C_CreateBagList::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_CreateBagList, CallFunc_GetMasterDataManager_ReturnValue) == 0x000048, "Member 'WBP_ItemBoxResult_C_CreateBagList::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_CreateBagList, CallFunc_IsCityCurrentMapLevel_ReturnValue) == 0x000050, "Member 'WBP_ItemBoxResult_C_CreateBagList::CallFunc_IsCityCurrentMapLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_CreateBagList, CallFunc_Array_Add_ReturnValue) == 0x000054, "Member 'WBP_ItemBoxResult_C_CreateBagList::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_CreateBagList, CallFunc_Array_Get_Item) == 0x000058, "Member 'WBP_ItemBoxResult_C_CreateBagList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_CreateBagList, CallFunc_Array_Length_ReturnValue_1) == 0x00005C, "Member 'WBP_ItemBoxResult_C_CreateBagList::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_CreateBagList, CallFunc_Less_IntInt_ReturnValue) == 0x000060, "Member 'WBP_ItemBoxResult_C_CreateBagList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_CreateBagList, K2Node_Select_Default) == 0x000061, "Member 'WBP_ItemBoxResult_C_CreateBagList::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_CreateBagList, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000062, "Member 'WBP_ItemBoxResult_C_CreateBagList::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_CreateBagList, CallFunc_Array_Add_ReturnValue_1) == 0x000064, "Member 'WBP_ItemBoxResult_C_CreateBagList::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_CreateBagList, CallFunc_GetItemMasterData_IsExists) == 0x000068, "Member 'WBP_ItemBoxResult_C_CreateBagList::CallFunc_GetItemMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_CreateBagList, CallFunc_GetItemMasterData_ReturnValue) == 0x000070, "Member 'WBP_ItemBoxResult_C_CreateBagList::CallFunc_GetItemMasterData_ReturnValue' has a wrong offset!");

// Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.CreateStorageList
// 0x0130 (0x0130 - 0x0000)
struct WBP_ItemBoxResult_C_CreateStorageList final
{
public:
	TArray<int32>                                 NewLocalVar_3;                                     // 0x0000(0x0010)(Edit, BlueprintVisible)
	TArray<EItemType>                             NewLocalVar_2;                                     // 0x0010(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsCityCurrentMapLevel_ReturnValue;        // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5C3F[0x2];                                     // 0x002A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5C40[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemType                                     CallFunc_Array_Get_Item;                           // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C41[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5C42[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemMasterData_IsExists;               // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5C43[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_GetItemMasterData_ReturnValue;            // 0x0058(0x00D0)()
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x012C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x012D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_ItemBoxResult_C_CreateStorageList) == 0x000008, "Wrong alignment on WBP_ItemBoxResult_C_CreateStorageList");
static_assert(sizeof(WBP_ItemBoxResult_C_CreateStorageList) == 0x000130, "Wrong size on WBP_ItemBoxResult_C_CreateStorageList");
static_assert(offsetof(WBP_ItemBoxResult_C_CreateStorageList, NewLocalVar_3) == 0x000000, "Member 'WBP_ItemBoxResult_C_CreateStorageList::NewLocalVar_3' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_CreateStorageList, NewLocalVar_2) == 0x000010, "Member 'WBP_ItemBoxResult_C_CreateStorageList::NewLocalVar_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_CreateStorageList, Temp_int_Array_Index_Variable) == 0x000020, "Member 'WBP_ItemBoxResult_C_CreateStorageList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_CreateStorageList, CallFunc_Array_Length_ReturnValue) == 0x000024, "Member 'WBP_ItemBoxResult_C_CreateStorageList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_CreateStorageList, CallFunc_Greater_IntInt_ReturnValue) == 0x000028, "Member 'WBP_ItemBoxResult_C_CreateStorageList::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_CreateStorageList, CallFunc_IsCityCurrentMapLevel_ReturnValue) == 0x000029, "Member 'WBP_ItemBoxResult_C_CreateStorageList::CallFunc_IsCityCurrentMapLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_CreateStorageList, Temp_int_Loop_Counter_Variable) == 0x00002C, "Member 'WBP_ItemBoxResult_C_CreateStorageList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_CreateStorageList, CallFunc_Add_IntInt_ReturnValue) == 0x000030, "Member 'WBP_ItemBoxResult_C_CreateStorageList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_CreateStorageList, CallFunc_GetMasterDataManager_IsValid) == 0x000034, "Member 'WBP_ItemBoxResult_C_CreateStorageList::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_CreateStorageList, CallFunc_GetMasterDataManager_ReturnValue) == 0x000038, "Member 'WBP_ItemBoxResult_C_CreateStorageList::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_CreateStorageList, CallFunc_Array_Get_Item) == 0x000040, "Member 'WBP_ItemBoxResult_C_CreateStorageList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_CreateStorageList, CallFunc_Array_Add_ReturnValue) == 0x000044, "Member 'WBP_ItemBoxResult_C_CreateStorageList::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_CreateStorageList, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000048, "Member 'WBP_ItemBoxResult_C_CreateStorageList::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_CreateStorageList, CallFunc_Array_Add_ReturnValue_1) == 0x00004C, "Member 'WBP_ItemBoxResult_C_CreateStorageList::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_CreateStorageList, CallFunc_GetItemMasterData_IsExists) == 0x000050, "Member 'WBP_ItemBoxResult_C_CreateStorageList::CallFunc_GetItemMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_CreateStorageList, CallFunc_GetItemMasterData_ReturnValue) == 0x000058, "Member 'WBP_ItemBoxResult_C_CreateStorageList::CallFunc_GetItemMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_CreateStorageList, CallFunc_Array_Length_ReturnValue_1) == 0x000128, "Member 'WBP_ItemBoxResult_C_CreateStorageList::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_CreateStorageList, CallFunc_Less_IntInt_ReturnValue) == 0x00012C, "Member 'WBP_ItemBoxResult_C_CreateStorageList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_CreateStorageList, CallFunc_Not_PreBool_ReturnValue) == 0x00012D, "Member 'WBP_ItemBoxResult_C_CreateStorageList::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.SearchSettingAgainItem
// 0x0258 (0x0258 - 0x0000)
struct WBP_ItemBoxResult_C_SearchSettingAgainItem final
{
public:
	bool                                          IsBag;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Param_Result;                                      // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5C44[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryItemData                     IconData;                                          // 0x0008(0x0060)(Parm, OutParm, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue;                   // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetItemBag_ReturnValue;                   // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5C45[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                K2Node_Select_Default;                             // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetItemsNum_ReturnValue;                  // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C46[0x4];                                     // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_GetItem_ReturnValue;                   // 0x0098(0x0118)(ConstParm)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x01B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C47[0x4];                                     // 0x01B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryData                         CallFunc_CreateInventoryData_InventoryData;        // 0x01B8(0x0098)(HasGetValueTypeHash)
	bool                                          CallFunc_CreateInventoryData_IsSuccess;            // 0x0250(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0251(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0252(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0253(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0254(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0255(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0256(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_ItemBoxResult_C_SearchSettingAgainItem) == 0x000008, "Wrong alignment on WBP_ItemBoxResult_C_SearchSettingAgainItem");
static_assert(sizeof(WBP_ItemBoxResult_C_SearchSettingAgainItem) == 0x000258, "Wrong size on WBP_ItemBoxResult_C_SearchSettingAgainItem");
static_assert(offsetof(WBP_ItemBoxResult_C_SearchSettingAgainItem, IsBag) == 0x000000, "Member 'WBP_ItemBoxResult_C_SearchSettingAgainItem::IsBag' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_SearchSettingAgainItem, Param_Result) == 0x000001, "Member 'WBP_ItemBoxResult_C_SearchSettingAgainItem::Param_Result' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_SearchSettingAgainItem, IconData) == 0x000008, "Member 'WBP_ItemBoxResult_C_SearchSettingAgainItem::IconData' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_SearchSettingAgainItem, Temp_int_Variable) == 0x000068, "Member 'WBP_ItemBoxResult_C_SearchSettingAgainItem::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_SearchSettingAgainItem, CallFunc_Add_IntInt_ReturnValue) == 0x00006C, "Member 'WBP_ItemBoxResult_C_SearchSettingAgainItem::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_SearchSettingAgainItem, CallFunc_GetStorage_ReturnValue) == 0x000070, "Member 'WBP_ItemBoxResult_C_SearchSettingAgainItem::CallFunc_GetStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_SearchSettingAgainItem, CallFunc_GetItemBag_ReturnValue) == 0x000078, "Member 'WBP_ItemBoxResult_C_SearchSettingAgainItem::CallFunc_GetItemBag_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_SearchSettingAgainItem, Temp_bool_Variable) == 0x000080, "Member 'WBP_ItemBoxResult_C_SearchSettingAgainItem::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_SearchSettingAgainItem, K2Node_Select_Default) == 0x000088, "Member 'WBP_ItemBoxResult_C_SearchSettingAgainItem::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_SearchSettingAgainItem, CallFunc_GetItemsNum_ReturnValue) == 0x000090, "Member 'WBP_ItemBoxResult_C_SearchSettingAgainItem::CallFunc_GetItemsNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_SearchSettingAgainItem, CallFunc_BP_GetItem_ReturnValue) == 0x000098, "Member 'WBP_ItemBoxResult_C_SearchSettingAgainItem::CallFunc_BP_GetItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_SearchSettingAgainItem, CallFunc_Subtract_IntInt_ReturnValue) == 0x0001B0, "Member 'WBP_ItemBoxResult_C_SearchSettingAgainItem::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_SearchSettingAgainItem, CallFunc_CreateInventoryData_InventoryData) == 0x0001B8, "Member 'WBP_ItemBoxResult_C_SearchSettingAgainItem::CallFunc_CreateInventoryData_InventoryData' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_SearchSettingAgainItem, CallFunc_CreateInventoryData_IsSuccess) == 0x000250, "Member 'WBP_ItemBoxResult_C_SearchSettingAgainItem::CallFunc_CreateInventoryData_IsSuccess' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_SearchSettingAgainItem, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000251, "Member 'WBP_ItemBoxResult_C_SearchSettingAgainItem::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_SearchSettingAgainItem, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000252, "Member 'WBP_ItemBoxResult_C_SearchSettingAgainItem::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_SearchSettingAgainItem, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000253, "Member 'WBP_ItemBoxResult_C_SearchSettingAgainItem::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_SearchSettingAgainItem, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000254, "Member 'WBP_ItemBoxResult_C_SearchSettingAgainItem::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_SearchSettingAgainItem, CallFunc_BooleanAND_ReturnValue) == 0x000255, "Member 'WBP_ItemBoxResult_C_SearchSettingAgainItem::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_SearchSettingAgainItem, CallFunc_BooleanAND_ReturnValue_1) == 0x000256, "Member 'WBP_ItemBoxResult_C_SearchSettingAgainItem::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");

// Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.CreateItemScrollList
// 0x0058 (0x0058 - 0x0000)
struct WBP_ItemBoxResult_C_CreateItemScrollList final
{
public:
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5C48[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0028(0x0018)()
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x0040(0x0018)()
};
static_assert(alignof(WBP_ItemBoxResult_C_CreateItemScrollList) == 0x000008, "Wrong alignment on WBP_ItemBoxResult_C_CreateItemScrollList");
static_assert(sizeof(WBP_ItemBoxResult_C_CreateItemScrollList) == 0x000058, "Wrong size on WBP_ItemBoxResult_C_CreateItemScrollList");
static_assert(offsetof(WBP_ItemBoxResult_C_CreateItemScrollList, CallFunc_Conv_IntToString_ReturnValue) == 0x000000, "Member 'WBP_ItemBoxResult_C_CreateItemScrollList::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_CreateItemScrollList, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000010, "Member 'WBP_ItemBoxResult_C_CreateItemScrollList::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_CreateItemScrollList, CallFunc_Concat_StrStr_ReturnValue) == 0x000018, "Member 'WBP_ItemBoxResult_C_CreateItemScrollList::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_CreateItemScrollList, CallFunc_Conv_StringToText_ReturnValue) == 0x000028, "Member 'WBP_ItemBoxResult_C_CreateItemScrollList::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_CreateItemScrollList, CallFunc_MakeLiteralText_ReturnValue) == 0x000040, "Member 'WBP_ItemBoxResult_C_CreateItemScrollList::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");

// Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.GetSettingAgainItem
// 0x0278 (0x0278 - 0x0000)
struct WBP_ItemBoxResult_C_GetSettingAgainItem final
{
public:
	bool                                          Param_Result;                                      // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5C49[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryItemData                     IconData;                                          // 0x0008(0x0060)(Parm, OutParm, HasGetValueTypeHash)
	bool                                          CallFunc_SearchSettingAgainItem_Result;            // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5C4A[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryItemData                     CallFunc_SearchSettingAgainItem_IconData;          // 0x0070(0x0060)(HasGetValueTypeHash)
	bool                                          CallFunc_SearchSettingAgainItem_Result_1;          // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5C4B[0x7];                                     // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryItemData                     CallFunc_SearchSettingAgainItem_IconData_1;        // 0x00D8(0x0060)(HasGetValueTypeHash)
	bool                                          CallFunc_SearchSettingAgainItem_Result_2;          // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5C4C[0x7];                                     // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryItemData                     CallFunc_SearchSettingAgainItem_IconData_2;        // 0x0140(0x0060)(HasGetValueTypeHash)
	bool                                          CallFunc_SearchSettingAgainItem_Result_3;          // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5C4D[0x7];                                     // 0x01A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryItemData                     CallFunc_SearchSettingAgainItem_IconData_3;        // 0x01A8(0x0060)(HasGetValueTypeHash)
	bool                                          CallFunc_SearchSettingAgainItem_Result_4;          // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5C4E[0x7];                                     // 0x0209(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryItemData                     CallFunc_SearchSettingAgainItem_IconData_4;        // 0x0210(0x0060)(HasGetValueTypeHash)
	bool                                          CallFunc_IsInventoryStorageNumber_ReturnValue;     // 0x0270(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_ItemBoxResult_C_GetSettingAgainItem) == 0x000008, "Wrong alignment on WBP_ItemBoxResult_C_GetSettingAgainItem");
static_assert(sizeof(WBP_ItemBoxResult_C_GetSettingAgainItem) == 0x000278, "Wrong size on WBP_ItemBoxResult_C_GetSettingAgainItem");
static_assert(offsetof(WBP_ItemBoxResult_C_GetSettingAgainItem, Param_Result) == 0x000000, "Member 'WBP_ItemBoxResult_C_GetSettingAgainItem::Param_Result' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_GetSettingAgainItem, IconData) == 0x000008, "Member 'WBP_ItemBoxResult_C_GetSettingAgainItem::IconData' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_GetSettingAgainItem, CallFunc_SearchSettingAgainItem_Result) == 0x000068, "Member 'WBP_ItemBoxResult_C_GetSettingAgainItem::CallFunc_SearchSettingAgainItem_Result' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_GetSettingAgainItem, CallFunc_SearchSettingAgainItem_IconData) == 0x000070, "Member 'WBP_ItemBoxResult_C_GetSettingAgainItem::CallFunc_SearchSettingAgainItem_IconData' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_GetSettingAgainItem, CallFunc_SearchSettingAgainItem_Result_1) == 0x0000D0, "Member 'WBP_ItemBoxResult_C_GetSettingAgainItem::CallFunc_SearchSettingAgainItem_Result_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_GetSettingAgainItem, CallFunc_SearchSettingAgainItem_IconData_1) == 0x0000D8, "Member 'WBP_ItemBoxResult_C_GetSettingAgainItem::CallFunc_SearchSettingAgainItem_IconData_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_GetSettingAgainItem, CallFunc_SearchSettingAgainItem_Result_2) == 0x000138, "Member 'WBP_ItemBoxResult_C_GetSettingAgainItem::CallFunc_SearchSettingAgainItem_Result_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_GetSettingAgainItem, CallFunc_SearchSettingAgainItem_IconData_2) == 0x000140, "Member 'WBP_ItemBoxResult_C_GetSettingAgainItem::CallFunc_SearchSettingAgainItem_IconData_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_GetSettingAgainItem, CallFunc_SearchSettingAgainItem_Result_3) == 0x0001A0, "Member 'WBP_ItemBoxResult_C_GetSettingAgainItem::CallFunc_SearchSettingAgainItem_Result_3' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_GetSettingAgainItem, CallFunc_SearchSettingAgainItem_IconData_3) == 0x0001A8, "Member 'WBP_ItemBoxResult_C_GetSettingAgainItem::CallFunc_SearchSettingAgainItem_IconData_3' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_GetSettingAgainItem, CallFunc_SearchSettingAgainItem_Result_4) == 0x000208, "Member 'WBP_ItemBoxResult_C_GetSettingAgainItem::CallFunc_SearchSettingAgainItem_Result_4' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_GetSettingAgainItem, CallFunc_SearchSettingAgainItem_IconData_4) == 0x000210, "Member 'WBP_ItemBoxResult_C_GetSettingAgainItem::CallFunc_SearchSettingAgainItem_IconData_4' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_GetSettingAgainItem, CallFunc_IsInventoryStorageNumber_ReturnValue) == 0x000270, "Member 'WBP_ItemBoxResult_C_GetSettingAgainItem::CallFunc_IsInventoryStorageNumber_ReturnValue' has a wrong offset!");

// Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.Is Disappearance
// 0x00B4 (0x00B4 - 0x0000)
struct WBP_ItemBoxResult_C_Is_Disappearance final
{
public:
	bool                                          bDisappearance;                                    // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5C4F[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_3;                  // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_3;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBItemBoxResultItemData               CallFunc_Array_Get_Item;                           // 0x0038(0x0018)(NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5C50[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBItemBoxResultItemData               CallFunc_Array_Get_Item_1;                         // 0x0058(0x0018)(NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5C51[0x3];                                     // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBItemBoxResultItemData               CallFunc_Array_Get_Item_2;                         // 0x0078(0x0018)(NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5C52[0x3];                                     // 0x0091(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBItemBoxResultItemData               CallFunc_Array_Get_Item_3;                         // 0x0098(0x0018)(NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_3;                // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_ItemBoxResult_C_Is_Disappearance) == 0x000004, "Wrong alignment on WBP_ItemBoxResult_C_Is_Disappearance");
static_assert(sizeof(WBP_ItemBoxResult_C_Is_Disappearance) == 0x0000B4, "Wrong size on WBP_ItemBoxResult_C_Is_Disappearance");
static_assert(offsetof(WBP_ItemBoxResult_C_Is_Disappearance, bDisappearance) == 0x000000, "Member 'WBP_ItemBoxResult_C_Is_Disappearance::bDisappearance' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_Is_Disappearance, Temp_int_Array_Index_Variable) == 0x000004, "Member 'WBP_ItemBoxResult_C_Is_Disappearance::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_Is_Disappearance, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'WBP_ItemBoxResult_C_Is_Disappearance::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_Is_Disappearance, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'WBP_ItemBoxResult_C_Is_Disappearance::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_Is_Disappearance, Temp_int_Loop_Counter_Variable_1) == 0x000010, "Member 'WBP_ItemBoxResult_C_Is_Disappearance::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_Is_Disappearance, Temp_int_Loop_Counter_Variable_2) == 0x000014, "Member 'WBP_ItemBoxResult_C_Is_Disappearance::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_Is_Disappearance, CallFunc_Add_IntInt_ReturnValue_1) == 0x000018, "Member 'WBP_ItemBoxResult_C_Is_Disappearance::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_Is_Disappearance, CallFunc_Add_IntInt_ReturnValue_2) == 0x00001C, "Member 'WBP_ItemBoxResult_C_Is_Disappearance::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_Is_Disappearance, Temp_int_Array_Index_Variable_1) == 0x000020, "Member 'WBP_ItemBoxResult_C_Is_Disappearance::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_Is_Disappearance, Temp_int_Array_Index_Variable_2) == 0x000024, "Member 'WBP_ItemBoxResult_C_Is_Disappearance::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_Is_Disappearance, Temp_int_Loop_Counter_Variable_3) == 0x000028, "Member 'WBP_ItemBoxResult_C_Is_Disappearance::Temp_int_Loop_Counter_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_Is_Disappearance, CallFunc_Add_IntInt_ReturnValue_3) == 0x00002C, "Member 'WBP_ItemBoxResult_C_Is_Disappearance::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_Is_Disappearance, Temp_int_Array_Index_Variable_3) == 0x000030, "Member 'WBP_ItemBoxResult_C_Is_Disappearance::Temp_int_Array_Index_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_Is_Disappearance, CallFunc_Array_Length_ReturnValue) == 0x000034, "Member 'WBP_ItemBoxResult_C_Is_Disappearance::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_Is_Disappearance, CallFunc_Array_Get_Item) == 0x000038, "Member 'WBP_ItemBoxResult_C_Is_Disappearance::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_Is_Disappearance, CallFunc_Less_IntInt_ReturnValue) == 0x000050, "Member 'WBP_ItemBoxResult_C_Is_Disappearance::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_Is_Disappearance, CallFunc_Array_Length_ReturnValue_1) == 0x000054, "Member 'WBP_ItemBoxResult_C_Is_Disappearance::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_Is_Disappearance, CallFunc_Array_Get_Item_1) == 0x000058, "Member 'WBP_ItemBoxResult_C_Is_Disappearance::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_Is_Disappearance, CallFunc_Less_IntInt_ReturnValue_1) == 0x000070, "Member 'WBP_ItemBoxResult_C_Is_Disappearance::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_Is_Disappearance, CallFunc_Array_Length_ReturnValue_2) == 0x000074, "Member 'WBP_ItemBoxResult_C_Is_Disappearance::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_Is_Disappearance, CallFunc_Array_Get_Item_2) == 0x000078, "Member 'WBP_ItemBoxResult_C_Is_Disappearance::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_Is_Disappearance, CallFunc_Less_IntInt_ReturnValue_2) == 0x000090, "Member 'WBP_ItemBoxResult_C_Is_Disappearance::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_Is_Disappearance, CallFunc_Array_Length_ReturnValue_3) == 0x000094, "Member 'WBP_ItemBoxResult_C_Is_Disappearance::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_Is_Disappearance, CallFunc_Array_Get_Item_3) == 0x000098, "Member 'WBP_ItemBoxResult_C_Is_Disappearance::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxResult_C_Is_Disappearance, CallFunc_Less_IntInt_ReturnValue_3) == 0x0000B0, "Member 'WBP_ItemBoxResult_C_Is_Disappearance::CallFunc_Less_IntInt_ReturnValue_3' has a wrong offset!");

}

