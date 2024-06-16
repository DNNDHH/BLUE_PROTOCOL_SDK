#pragma once

 

// Package: WBP_CommandMenuBookmarkRegister

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Config_KeyconfigItems_structs.hpp"
#include "InputCore_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function WBP_CommandMenuBookmarkRegister.WBP_CommandMenuBookmarkRegister_C.UpdateFinish__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct WBP_CommandMenuBookmarkRegister_C_UpdateFinish__DelegateSignature final
{
public:
	ESBBookMarkerSlot                             BookmarkSlot;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8E51[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 KeyString;                                         // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CommandMenuBookmarkRegister_C_UpdateFinish__DelegateSignature) == 0x000008, "Wrong alignment on WBP_CommandMenuBookmarkRegister_C_UpdateFinish__DelegateSignature");
static_assert(sizeof(WBP_CommandMenuBookmarkRegister_C_UpdateFinish__DelegateSignature) == 0x000018, "Wrong size on WBP_CommandMenuBookmarkRegister_C_UpdateFinish__DelegateSignature");
static_assert(offsetof(WBP_CommandMenuBookmarkRegister_C_UpdateFinish__DelegateSignature, BookmarkSlot) == 0x000000, "Member 'WBP_CommandMenuBookmarkRegister_C_UpdateFinish__DelegateSignature::BookmarkSlot' has a wrong offset!");
static_assert(offsetof(WBP_CommandMenuBookmarkRegister_C_UpdateFinish__DelegateSignature, KeyString) == 0x000008, "Member 'WBP_CommandMenuBookmarkRegister_C_UpdateFinish__DelegateSignature::KeyString' has a wrong offset!");

// Function WBP_CommandMenuBookmarkRegister.WBP_CommandMenuBookmarkRegister_C.ExecuteUbergraph_WBP_CommandMenuBookmarkRegister
// 0x0210 (0x0210 - 0x0000)
struct WBP_CommandMenuBookmarkRegister_C_ExecuteUbergraph_WBP_CommandMenuBookmarkRegister final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8E52[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   K2Node_CustomEvent_Key;                            // 0x0008(0x0018)(HasGetValueTypeHash)
	ESBBookMarkerSlot                             CallFunc_ApplyBookMark_Slot;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ApplyBookMark_ReturnValue;                // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E53[0x6];                                     // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0048(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0060(0x0018)()
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_2;     // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0088(0x0018)()
	bool                                          CallFunc_IsKeyRegisted_ReturnValue;                // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E54[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x00A8(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x00D0(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x00F8(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_3;                    // 0x0120(0x0028)()
	bool                                          CallFunc_IsWarningKey_bIsWarning;                  // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E55[0x7];                                     // 0x0149(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_IsWarningKey_WarningText;                 // 0x0150(0x0018)()
	class FString                                 CallFunc_GetKeyTextByKey_ReturnValue;              // 0x0168(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0178(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0190(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x01D0(0x0010)(ReferenceParm)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E56[0x7];                                     // 0x01E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x01E8(0x0018)()
	class FString                                 CallFunc_GetKeyTextByKey_ReturnValue_1;            // 0x0200(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CommandMenuBookmarkRegister_C_ExecuteUbergraph_WBP_CommandMenuBookmarkRegister) == 0x000008, "Wrong alignment on WBP_CommandMenuBookmarkRegister_C_ExecuteUbergraph_WBP_CommandMenuBookmarkRegister");
static_assert(sizeof(WBP_CommandMenuBookmarkRegister_C_ExecuteUbergraph_WBP_CommandMenuBookmarkRegister) == 0x000210, "Wrong size on WBP_CommandMenuBookmarkRegister_C_ExecuteUbergraph_WBP_CommandMenuBookmarkRegister");
static_assert(offsetof(WBP_CommandMenuBookmarkRegister_C_ExecuteUbergraph_WBP_CommandMenuBookmarkRegister, EntryPoint) == 0x000000, "Member 'WBP_CommandMenuBookmarkRegister_C_ExecuteUbergraph_WBP_CommandMenuBookmarkRegister::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_CommandMenuBookmarkRegister_C_ExecuteUbergraph_WBP_CommandMenuBookmarkRegister, K2Node_CustomEvent_Key) == 0x000008, "Member 'WBP_CommandMenuBookmarkRegister_C_ExecuteUbergraph_WBP_CommandMenuBookmarkRegister::K2Node_CustomEvent_Key' has a wrong offset!");
static_assert(offsetof(WBP_CommandMenuBookmarkRegister_C_ExecuteUbergraph_WBP_CommandMenuBookmarkRegister, CallFunc_ApplyBookMark_Slot) == 0x000020, "Member 'WBP_CommandMenuBookmarkRegister_C_ExecuteUbergraph_WBP_CommandMenuBookmarkRegister::CallFunc_ApplyBookMark_Slot' has a wrong offset!");
static_assert(offsetof(WBP_CommandMenuBookmarkRegister_C_ExecuteUbergraph_WBP_CommandMenuBookmarkRegister, CallFunc_ApplyBookMark_ReturnValue) == 0x000021, "Member 'WBP_CommandMenuBookmarkRegister_C_ExecuteUbergraph_WBP_CommandMenuBookmarkRegister::CallFunc_ApplyBookMark_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommandMenuBookmarkRegister_C_ExecuteUbergraph_WBP_CommandMenuBookmarkRegister, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000028, "Member 'WBP_CommandMenuBookmarkRegister_C_ExecuteUbergraph_WBP_CommandMenuBookmarkRegister::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommandMenuBookmarkRegister_C_ExecuteUbergraph_WBP_CommandMenuBookmarkRegister, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x000038, "Member 'WBP_CommandMenuBookmarkRegister_C_ExecuteUbergraph_WBP_CommandMenuBookmarkRegister::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CommandMenuBookmarkRegister_C_ExecuteUbergraph_WBP_CommandMenuBookmarkRegister, CallFunc_Conv_StringToText_ReturnValue) == 0x000048, "Member 'WBP_CommandMenuBookmarkRegister_C_ExecuteUbergraph_WBP_CommandMenuBookmarkRegister::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommandMenuBookmarkRegister_C_ExecuteUbergraph_WBP_CommandMenuBookmarkRegister, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000060, "Member 'WBP_CommandMenuBookmarkRegister_C_ExecuteUbergraph_WBP_CommandMenuBookmarkRegister::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CommandMenuBookmarkRegister_C_ExecuteUbergraph_WBP_CommandMenuBookmarkRegister, CallFunc_GetTextFromAssetByName_ReturnValue_2) == 0x000078, "Member 'WBP_CommandMenuBookmarkRegister_C_ExecuteUbergraph_WBP_CommandMenuBookmarkRegister::CallFunc_GetTextFromAssetByName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_CommandMenuBookmarkRegister_C_ExecuteUbergraph_WBP_CommandMenuBookmarkRegister, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000088, "Member 'WBP_CommandMenuBookmarkRegister_C_ExecuteUbergraph_WBP_CommandMenuBookmarkRegister::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_CommandMenuBookmarkRegister_C_ExecuteUbergraph_WBP_CommandMenuBookmarkRegister, CallFunc_IsKeyRegisted_ReturnValue) == 0x0000A0, "Member 'WBP_CommandMenuBookmarkRegister_C_ExecuteUbergraph_WBP_CommandMenuBookmarkRegister::CallFunc_IsKeyRegisted_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommandMenuBookmarkRegister_C_ExecuteUbergraph_WBP_CommandMenuBookmarkRegister, K2Node_MakeStruct_SlateColor) == 0x0000A8, "Member 'WBP_CommandMenuBookmarkRegister_C_ExecuteUbergraph_WBP_CommandMenuBookmarkRegister::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(WBP_CommandMenuBookmarkRegister_C_ExecuteUbergraph_WBP_CommandMenuBookmarkRegister, K2Node_MakeStruct_SlateColor_1) == 0x0000D0, "Member 'WBP_CommandMenuBookmarkRegister_C_ExecuteUbergraph_WBP_CommandMenuBookmarkRegister::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(WBP_CommandMenuBookmarkRegister_C_ExecuteUbergraph_WBP_CommandMenuBookmarkRegister, K2Node_MakeStruct_SlateColor_2) == 0x0000F8, "Member 'WBP_CommandMenuBookmarkRegister_C_ExecuteUbergraph_WBP_CommandMenuBookmarkRegister::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");
static_assert(offsetof(WBP_CommandMenuBookmarkRegister_C_ExecuteUbergraph_WBP_CommandMenuBookmarkRegister, K2Node_MakeStruct_SlateColor_3) == 0x000120, "Member 'WBP_CommandMenuBookmarkRegister_C_ExecuteUbergraph_WBP_CommandMenuBookmarkRegister::K2Node_MakeStruct_SlateColor_3' has a wrong offset!");
static_assert(offsetof(WBP_CommandMenuBookmarkRegister_C_ExecuteUbergraph_WBP_CommandMenuBookmarkRegister, CallFunc_IsWarningKey_bIsWarning) == 0x000148, "Member 'WBP_CommandMenuBookmarkRegister_C_ExecuteUbergraph_WBP_CommandMenuBookmarkRegister::CallFunc_IsWarningKey_bIsWarning' has a wrong offset!");
static_assert(offsetof(WBP_CommandMenuBookmarkRegister_C_ExecuteUbergraph_WBP_CommandMenuBookmarkRegister, CallFunc_IsWarningKey_WarningText) == 0x000150, "Member 'WBP_CommandMenuBookmarkRegister_C_ExecuteUbergraph_WBP_CommandMenuBookmarkRegister::CallFunc_IsWarningKey_WarningText' has a wrong offset!");
static_assert(offsetof(WBP_CommandMenuBookmarkRegister_C_ExecuteUbergraph_WBP_CommandMenuBookmarkRegister, CallFunc_GetKeyTextByKey_ReturnValue) == 0x000168, "Member 'WBP_CommandMenuBookmarkRegister_C_ExecuteUbergraph_WBP_CommandMenuBookmarkRegister::CallFunc_GetKeyTextByKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommandMenuBookmarkRegister_C_ExecuteUbergraph_WBP_CommandMenuBookmarkRegister, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000178, "Member 'WBP_CommandMenuBookmarkRegister_C_ExecuteUbergraph_WBP_CommandMenuBookmarkRegister::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_CommandMenuBookmarkRegister_C_ExecuteUbergraph_WBP_CommandMenuBookmarkRegister, K2Node_MakeStruct_FormatArgumentData) == 0x000190, "Member 'WBP_CommandMenuBookmarkRegister_C_ExecuteUbergraph_WBP_CommandMenuBookmarkRegister::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_CommandMenuBookmarkRegister_C_ExecuteUbergraph_WBP_CommandMenuBookmarkRegister, K2Node_MakeArray_Array) == 0x0001D0, "Member 'WBP_CommandMenuBookmarkRegister_C_ExecuteUbergraph_WBP_CommandMenuBookmarkRegister::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_CommandMenuBookmarkRegister_C_ExecuteUbergraph_WBP_CommandMenuBookmarkRegister, CallFunc_NotEqual_StrStr_ReturnValue) == 0x0001E0, "Member 'WBP_CommandMenuBookmarkRegister_C_ExecuteUbergraph_WBP_CommandMenuBookmarkRegister::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommandMenuBookmarkRegister_C_ExecuteUbergraph_WBP_CommandMenuBookmarkRegister, CallFunc_Format_ReturnValue) == 0x0001E8, "Member 'WBP_CommandMenuBookmarkRegister_C_ExecuteUbergraph_WBP_CommandMenuBookmarkRegister::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommandMenuBookmarkRegister_C_ExecuteUbergraph_WBP_CommandMenuBookmarkRegister, CallFunc_GetKeyTextByKey_ReturnValue_1) == 0x000200, "Member 'WBP_CommandMenuBookmarkRegister_C_ExecuteUbergraph_WBP_CommandMenuBookmarkRegister::CallFunc_GetKeyTextByKey_ReturnValue_1' has a wrong offset!");

// Function WBP_CommandMenuBookmarkRegister.WBP_CommandMenuBookmarkRegister_C.UpdateKey
// 0x0018 (0x0018 - 0x0000)
struct WBP_CommandMenuBookmarkRegister_C_UpdateKey final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CommandMenuBookmarkRegister_C_UpdateKey) == 0x000008, "Wrong alignment on WBP_CommandMenuBookmarkRegister_C_UpdateKey");
static_assert(sizeof(WBP_CommandMenuBookmarkRegister_C_UpdateKey) == 0x000018, "Wrong size on WBP_CommandMenuBookmarkRegister_C_UpdateKey");
static_assert(offsetof(WBP_CommandMenuBookmarkRegister_C_UpdateKey, Key) == 0x000000, "Member 'WBP_CommandMenuBookmarkRegister_C_UpdateKey::Key' has a wrong offset!");

// Function WBP_CommandMenuBookmarkRegister.WBP_CommandMenuBookmarkRegister_C.OnKeyDown
// 0x02D0 (0x02D0 - 0x0000)
struct WBP_CommandMenuBookmarkRegister_C_OnKeyDown final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                              InKeyEvent;                                        // 0x0038(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                            ReturnValue;                                       // 0x0070(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x0128(0x00B8)()
	struct FKey                                   CallFunc_GetKey_ReturnValue;                       // 0x01E0(0x0018)(HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue_1;          // 0x01F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x01FA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x01FB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue_2;          // 0x01FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue_3;          // 0x01FD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x01FE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_3;                // 0x01FF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue_4;          // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue_5;          // 0x0201(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_4;                // 0x0202(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_5;                // 0x0203(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue_6;          // 0x0204(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue_7;          // 0x0205(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_6;                // 0x0206(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_7;                // 0x0207(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue_8;          // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Key_IsKeyboardKey_ReturnValue;            // 0x0209(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_8;                // 0x020A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x020B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x020C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E57[0x3];                                     // 0x020D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0210(0x00B8)()
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x02C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_3;                 // 0x02C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_4;                 // 0x02CA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_5;                 // 0x02CB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_6;                 // 0x02CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_7;                 // 0x02CD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_CommandMenuBookmarkRegister_C_OnKeyDown) == 0x000008, "Wrong alignment on WBP_CommandMenuBookmarkRegister_C_OnKeyDown");
static_assert(sizeof(WBP_CommandMenuBookmarkRegister_C_OnKeyDown) == 0x0002D0, "Wrong size on WBP_CommandMenuBookmarkRegister_C_OnKeyDown");
static_assert(offsetof(WBP_CommandMenuBookmarkRegister_C_OnKeyDown, MyGeometry) == 0x000000, "Member 'WBP_CommandMenuBookmarkRegister_C_OnKeyDown::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_CommandMenuBookmarkRegister_C_OnKeyDown, InKeyEvent) == 0x000038, "Member 'WBP_CommandMenuBookmarkRegister_C_OnKeyDown::InKeyEvent' has a wrong offset!");
static_assert(offsetof(WBP_CommandMenuBookmarkRegister_C_OnKeyDown, ReturnValue) == 0x000070, "Member 'WBP_CommandMenuBookmarkRegister_C_OnKeyDown::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommandMenuBookmarkRegister_C_OnKeyDown, CallFunc_Unhandled_ReturnValue) == 0x000128, "Member 'WBP_CommandMenuBookmarkRegister_C_OnKeyDown::CallFunc_Unhandled_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommandMenuBookmarkRegister_C_OnKeyDown, CallFunc_GetKey_ReturnValue) == 0x0001E0, "Member 'WBP_CommandMenuBookmarkRegister_C_OnKeyDown::CallFunc_GetKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommandMenuBookmarkRegister_C_OnKeyDown, CallFunc_EqualEqual_KeyKey_ReturnValue) == 0x0001F8, "Member 'WBP_CommandMenuBookmarkRegister_C_OnKeyDown::CallFunc_EqualEqual_KeyKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommandMenuBookmarkRegister_C_OnKeyDown, CallFunc_EqualEqual_KeyKey_ReturnValue_1) == 0x0001F9, "Member 'WBP_CommandMenuBookmarkRegister_C_OnKeyDown::CallFunc_EqualEqual_KeyKey_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CommandMenuBookmarkRegister_C_OnKeyDown, CallFunc_Not_PreBool_ReturnValue) == 0x0001FA, "Member 'WBP_CommandMenuBookmarkRegister_C_OnKeyDown::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommandMenuBookmarkRegister_C_OnKeyDown, CallFunc_Not_PreBool_ReturnValue_1) == 0x0001FB, "Member 'WBP_CommandMenuBookmarkRegister_C_OnKeyDown::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CommandMenuBookmarkRegister_C_OnKeyDown, CallFunc_EqualEqual_KeyKey_ReturnValue_2) == 0x0001FC, "Member 'WBP_CommandMenuBookmarkRegister_C_OnKeyDown::CallFunc_EqualEqual_KeyKey_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_CommandMenuBookmarkRegister_C_OnKeyDown, CallFunc_EqualEqual_KeyKey_ReturnValue_3) == 0x0001FD, "Member 'WBP_CommandMenuBookmarkRegister_C_OnKeyDown::CallFunc_EqualEqual_KeyKey_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_CommandMenuBookmarkRegister_C_OnKeyDown, CallFunc_Not_PreBool_ReturnValue_2) == 0x0001FE, "Member 'WBP_CommandMenuBookmarkRegister_C_OnKeyDown::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_CommandMenuBookmarkRegister_C_OnKeyDown, CallFunc_Not_PreBool_ReturnValue_3) == 0x0001FF, "Member 'WBP_CommandMenuBookmarkRegister_C_OnKeyDown::CallFunc_Not_PreBool_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_CommandMenuBookmarkRegister_C_OnKeyDown, CallFunc_EqualEqual_KeyKey_ReturnValue_4) == 0x000200, "Member 'WBP_CommandMenuBookmarkRegister_C_OnKeyDown::CallFunc_EqualEqual_KeyKey_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_CommandMenuBookmarkRegister_C_OnKeyDown, CallFunc_EqualEqual_KeyKey_ReturnValue_5) == 0x000201, "Member 'WBP_CommandMenuBookmarkRegister_C_OnKeyDown::CallFunc_EqualEqual_KeyKey_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_CommandMenuBookmarkRegister_C_OnKeyDown, CallFunc_Not_PreBool_ReturnValue_4) == 0x000202, "Member 'WBP_CommandMenuBookmarkRegister_C_OnKeyDown::CallFunc_Not_PreBool_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_CommandMenuBookmarkRegister_C_OnKeyDown, CallFunc_Not_PreBool_ReturnValue_5) == 0x000203, "Member 'WBP_CommandMenuBookmarkRegister_C_OnKeyDown::CallFunc_Not_PreBool_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_CommandMenuBookmarkRegister_C_OnKeyDown, CallFunc_EqualEqual_KeyKey_ReturnValue_6) == 0x000204, "Member 'WBP_CommandMenuBookmarkRegister_C_OnKeyDown::CallFunc_EqualEqual_KeyKey_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_CommandMenuBookmarkRegister_C_OnKeyDown, CallFunc_EqualEqual_KeyKey_ReturnValue_7) == 0x000205, "Member 'WBP_CommandMenuBookmarkRegister_C_OnKeyDown::CallFunc_EqualEqual_KeyKey_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(WBP_CommandMenuBookmarkRegister_C_OnKeyDown, CallFunc_Not_PreBool_ReturnValue_6) == 0x000206, "Member 'WBP_CommandMenuBookmarkRegister_C_OnKeyDown::CallFunc_Not_PreBool_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_CommandMenuBookmarkRegister_C_OnKeyDown, CallFunc_Not_PreBool_ReturnValue_7) == 0x000207, "Member 'WBP_CommandMenuBookmarkRegister_C_OnKeyDown::CallFunc_Not_PreBool_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(WBP_CommandMenuBookmarkRegister_C_OnKeyDown, CallFunc_EqualEqual_KeyKey_ReturnValue_8) == 0x000208, "Member 'WBP_CommandMenuBookmarkRegister_C_OnKeyDown::CallFunc_EqualEqual_KeyKey_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(WBP_CommandMenuBookmarkRegister_C_OnKeyDown, CallFunc_Key_IsKeyboardKey_ReturnValue) == 0x000209, "Member 'WBP_CommandMenuBookmarkRegister_C_OnKeyDown::CallFunc_Key_IsKeyboardKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommandMenuBookmarkRegister_C_OnKeyDown, CallFunc_Not_PreBool_ReturnValue_8) == 0x00020A, "Member 'WBP_CommandMenuBookmarkRegister_C_OnKeyDown::CallFunc_Not_PreBool_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(WBP_CommandMenuBookmarkRegister_C_OnKeyDown, CallFunc_BooleanAND_ReturnValue) == 0x00020B, "Member 'WBP_CommandMenuBookmarkRegister_C_OnKeyDown::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommandMenuBookmarkRegister_C_OnKeyDown, CallFunc_BooleanAND_ReturnValue_1) == 0x00020C, "Member 'WBP_CommandMenuBookmarkRegister_C_OnKeyDown::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CommandMenuBookmarkRegister_C_OnKeyDown, CallFunc_Handled_ReturnValue) == 0x000210, "Member 'WBP_CommandMenuBookmarkRegister_C_OnKeyDown::CallFunc_Handled_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommandMenuBookmarkRegister_C_OnKeyDown, CallFunc_BooleanAND_ReturnValue_2) == 0x0002C8, "Member 'WBP_CommandMenuBookmarkRegister_C_OnKeyDown::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_CommandMenuBookmarkRegister_C_OnKeyDown, CallFunc_BooleanAND_ReturnValue_3) == 0x0002C9, "Member 'WBP_CommandMenuBookmarkRegister_C_OnKeyDown::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_CommandMenuBookmarkRegister_C_OnKeyDown, CallFunc_BooleanAND_ReturnValue_4) == 0x0002CA, "Member 'WBP_CommandMenuBookmarkRegister_C_OnKeyDown::CallFunc_BooleanAND_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_CommandMenuBookmarkRegister_C_OnKeyDown, CallFunc_BooleanAND_ReturnValue_5) == 0x0002CB, "Member 'WBP_CommandMenuBookmarkRegister_C_OnKeyDown::CallFunc_BooleanAND_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_CommandMenuBookmarkRegister_C_OnKeyDown, CallFunc_BooleanAND_ReturnValue_6) == 0x0002CC, "Member 'WBP_CommandMenuBookmarkRegister_C_OnKeyDown::CallFunc_BooleanAND_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_CommandMenuBookmarkRegister_C_OnKeyDown, CallFunc_BooleanAND_ReturnValue_7) == 0x0002CD, "Member 'WBP_CommandMenuBookmarkRegister_C_OnKeyDown::CallFunc_BooleanAND_ReturnValue_7' has a wrong offset!");

// Function WBP_CommandMenuBookmarkRegister.WBP_CommandMenuBookmarkRegister_C.IsTestKeyUse
// 0x0078 (0x0078 - 0x0000)
struct WBP_CommandMenuBookmarkRegister_C_IsTestKeyUse final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          Result;                                            // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E58[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   NewLocalVar_0;                                     // 0x0020(0x0018)(Edit, BlueprintVisible, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8E59[0x3];                                     // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x004D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8E5A[0x2];                                     // 0x004E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   CallFunc_GetKeyByAction_ReturnValue;               // 0x0050(0x0018)(HasGetValueTypeHash)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E5B[0x2];                                     // 0x006A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_CommandMenuBookmarkRegister_C_IsTestKeyUse) == 0x000008, "Wrong alignment on WBP_CommandMenuBookmarkRegister_C_IsTestKeyUse");
static_assert(sizeof(WBP_CommandMenuBookmarkRegister_C_IsTestKeyUse) == 0x000078, "Wrong size on WBP_CommandMenuBookmarkRegister_C_IsTestKeyUse");
static_assert(offsetof(WBP_CommandMenuBookmarkRegister_C_IsTestKeyUse, Key) == 0x000000, "Member 'WBP_CommandMenuBookmarkRegister_C_IsTestKeyUse::Key' has a wrong offset!");
static_assert(offsetof(WBP_CommandMenuBookmarkRegister_C_IsTestKeyUse, Result) == 0x000018, "Member 'WBP_CommandMenuBookmarkRegister_C_IsTestKeyUse::Result' has a wrong offset!");
static_assert(offsetof(WBP_CommandMenuBookmarkRegister_C_IsTestKeyUse, NewLocalVar_0) == 0x000020, "Member 'WBP_CommandMenuBookmarkRegister_C_IsTestKeyUse::NewLocalVar_0' has a wrong offset!");
static_assert(offsetof(WBP_CommandMenuBookmarkRegister_C_IsTestKeyUse, CallFunc_MakeLiteralInt_ReturnValue) == 0x000038, "Member 'WBP_CommandMenuBookmarkRegister_C_IsTestKeyUse::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommandMenuBookmarkRegister_C_IsTestKeyUse, Temp_int_Variable) == 0x00003C, "Member 'WBP_CommandMenuBookmarkRegister_C_IsTestKeyUse::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CommandMenuBookmarkRegister_C_IsTestKeyUse, Temp_int_Variable_1) == 0x000040, "Member 'WBP_CommandMenuBookmarkRegister_C_IsTestKeyUse::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_CommandMenuBookmarkRegister_C_IsTestKeyUse, CallFunc_Conv_IntToByte_ReturnValue) == 0x000044, "Member 'WBP_CommandMenuBookmarkRegister_C_IsTestKeyUse::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommandMenuBookmarkRegister_C_IsTestKeyUse, CallFunc_Add_IntInt_ReturnValue) == 0x000048, "Member 'WBP_CommandMenuBookmarkRegister_C_IsTestKeyUse::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommandMenuBookmarkRegister_C_IsTestKeyUse, CallFunc_GetValidValue_ReturnValue) == 0x00004C, "Member 'WBP_CommandMenuBookmarkRegister_C_IsTestKeyUse::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommandMenuBookmarkRegister_C_IsTestKeyUse, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x00004D, "Member 'WBP_CommandMenuBookmarkRegister_C_IsTestKeyUse::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CommandMenuBookmarkRegister_C_IsTestKeyUse, CallFunc_GetKeyByAction_ReturnValue) == 0x000050, "Member 'WBP_CommandMenuBookmarkRegister_C_IsTestKeyUse::CallFunc_GetKeyByAction_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommandMenuBookmarkRegister_C_IsTestKeyUse, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x000068, "Member 'WBP_CommandMenuBookmarkRegister_C_IsTestKeyUse::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommandMenuBookmarkRegister_C_IsTestKeyUse, CallFunc_EqualEqual_KeyKey_ReturnValue) == 0x000069, "Member 'WBP_CommandMenuBookmarkRegister_C_IsTestKeyUse::CallFunc_EqualEqual_KeyKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommandMenuBookmarkRegister_C_IsTestKeyUse, CallFunc_Conv_ByteToInt_ReturnValue) == 0x00006C, "Member 'WBP_CommandMenuBookmarkRegister_C_IsTestKeyUse::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommandMenuBookmarkRegister_C_IsTestKeyUse, CallFunc_Less_IntInt_ReturnValue) == 0x000070, "Member 'WBP_CommandMenuBookmarkRegister_C_IsTestKeyUse::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_CommandMenuBookmarkRegister.WBP_CommandMenuBookmarkRegister_C.NewFunction_0
// 0x0010 (0x0010 - 0x0000)
struct WBP_CommandMenuBookmarkRegister_C_NewFunction_0 final
{
public:
	TArray<EConfig_KeyconfigItems>                NewLocalVar_1;                                     // 0x0000(0x0010)(Edit, BlueprintVisible)
};
static_assert(alignof(WBP_CommandMenuBookmarkRegister_C_NewFunction_0) == 0x000008, "Wrong alignment on WBP_CommandMenuBookmarkRegister_C_NewFunction_0");
static_assert(sizeof(WBP_CommandMenuBookmarkRegister_C_NewFunction_0) == 0x000010, "Wrong size on WBP_CommandMenuBookmarkRegister_C_NewFunction_0");
static_assert(offsetof(WBP_CommandMenuBookmarkRegister_C_NewFunction_0, NewLocalVar_1) == 0x000000, "Member 'WBP_CommandMenuBookmarkRegister_C_NewFunction_0::NewLocalVar_1' has a wrong offset!");

}

