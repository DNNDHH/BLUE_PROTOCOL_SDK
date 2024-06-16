#pragma once

 

// Package: UMG_AdminGotoBookmarkRegistrationWindow

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function UMG_AdminGotoBookmarkRegistrationWindow.UMG_AdminGotoBookmarkRegistrationWindow_C.ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindow
// 0x0160 (0x0160 - 0x0000)
struct UMG_AdminGotoBookmarkRegistrationWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindow final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5188[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBAdminBookmarkMisc*                   CallFunc_GetSBAdminBookmarkMisc_ReturnValue;       // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetText_Text;                             // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetText_Text_1;                           // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_StringToFloat_ReturnValue;           // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5189[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetText_Text_2;                           // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetText_Text_3;                           // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_StringToFloat_ReturnValue_1;         // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_518A[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetText_Text_4;                           // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_StringToFloat_ReturnValue_2;         // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0074(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_518B[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_MapId;                          // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FVector                                K2Node_CustomEvent_Positon;                        // 0x0098(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class USBAdminGotoBookmarkItem* Sender)> K2Node_CreateDelegate_OutputDelegate;              // 0x00A4(0x0010)(ZeroConstructor, NoDestructor)
	float                                         CallFunc_BreakVector_X;                            // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FFloor_ReturnValue;                       // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FFloor_ReturnValue_1;                     // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x00D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_FFloor_ReturnValue_2;                     // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_518C[0x4];                                     // 0x00EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBAdminGotoBookmarkItem*               K2Node_CustomEvent_EditingData;                    // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_2;           // 0x00F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0109(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_518D[0x6];                                     // 0x010A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0110(0x0018)()
	class USBAdminGotoBookmarkItem*               K2Node_CustomEvent_Sender;                         // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0131(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_518E[0x6];                                     // 0x0132(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBAdminBookmarkMisc*                   CallFunc_GetSBAdminBookmarkMisc_ReturnValue_1;     // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetCurrentPosition_OutMapId;              // 0x0140(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetCurrentPosition_OutPos;                // 0x0150(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_AdminGotoBookmarkRegistrationWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindow) == 0x000008, "Wrong alignment on UMG_AdminGotoBookmarkRegistrationWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindow");
static_assert(sizeof(UMG_AdminGotoBookmarkRegistrationWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindow) == 0x000160, "Wrong size on UMG_AdminGotoBookmarkRegistrationWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindow");
static_assert(offsetof(UMG_AdminGotoBookmarkRegistrationWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindow, EntryPoint) == 0x000000, "Member 'UMG_AdminGotoBookmarkRegistrationWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindow::EntryPoint' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkRegistrationWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindow, CallFunc_GetSBAdminBookmarkMisc_ReturnValue) == 0x000008, "Member 'UMG_AdminGotoBookmarkRegistrationWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindow::CallFunc_GetSBAdminBookmarkMisc_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkRegistrationWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindow, CallFunc_GetText_Text) == 0x000010, "Member 'UMG_AdminGotoBookmarkRegistrationWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindow::CallFunc_GetText_Text' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkRegistrationWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindow, CallFunc_GetText_Text_1) == 0x000020, "Member 'UMG_AdminGotoBookmarkRegistrationWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindow::CallFunc_GetText_Text_1' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkRegistrationWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindow, CallFunc_Conv_StringToFloat_ReturnValue) == 0x000030, "Member 'UMG_AdminGotoBookmarkRegistrationWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindow::CallFunc_Conv_StringToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkRegistrationWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindow, CallFunc_GetText_Text_2) == 0x000038, "Member 'UMG_AdminGotoBookmarkRegistrationWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindow::CallFunc_GetText_Text_2' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkRegistrationWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindow, CallFunc_GetText_Text_3) == 0x000048, "Member 'UMG_AdminGotoBookmarkRegistrationWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindow::CallFunc_GetText_Text_3' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkRegistrationWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindow, CallFunc_Conv_StringToFloat_ReturnValue_1) == 0x000058, "Member 'UMG_AdminGotoBookmarkRegistrationWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindow::CallFunc_Conv_StringToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkRegistrationWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindow, CallFunc_GetText_Text_4) == 0x000060, "Member 'UMG_AdminGotoBookmarkRegistrationWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindow::CallFunc_GetText_Text_4' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkRegistrationWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindow, CallFunc_Conv_StringToFloat_ReturnValue_2) == 0x000070, "Member 'UMG_AdminGotoBookmarkRegistrationWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindow::CallFunc_Conv_StringToFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkRegistrationWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindow, CallFunc_MakeVector_ReturnValue) == 0x000074, "Member 'UMG_AdminGotoBookmarkRegistrationWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindow::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkRegistrationWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindow, CallFunc_IsValid_ReturnValue) == 0x000080, "Member 'UMG_AdminGotoBookmarkRegistrationWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindow::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkRegistrationWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindow, K2Node_CustomEvent_MapId) == 0x000088, "Member 'UMG_AdminGotoBookmarkRegistrationWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindow::K2Node_CustomEvent_MapId' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkRegistrationWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindow, K2Node_CustomEvent_Positon) == 0x000098, "Member 'UMG_AdminGotoBookmarkRegistrationWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindow::K2Node_CustomEvent_Positon' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkRegistrationWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindow, K2Node_CreateDelegate_OutputDelegate) == 0x0000A4, "Member 'UMG_AdminGotoBookmarkRegistrationWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindow::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkRegistrationWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindow, CallFunc_BreakVector_X) == 0x0000B4, "Member 'UMG_AdminGotoBookmarkRegistrationWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindow::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkRegistrationWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindow, CallFunc_BreakVector_Y) == 0x0000B8, "Member 'UMG_AdminGotoBookmarkRegistrationWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindow::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkRegistrationWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindow, CallFunc_BreakVector_Z) == 0x0000BC, "Member 'UMG_AdminGotoBookmarkRegistrationWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindow::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkRegistrationWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindow, CallFunc_FFloor_ReturnValue) == 0x0000C0, "Member 'UMG_AdminGotoBookmarkRegistrationWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindow::CallFunc_FFloor_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkRegistrationWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindow, CallFunc_FFloor_ReturnValue_1) == 0x0000C4, "Member 'UMG_AdminGotoBookmarkRegistrationWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindow::CallFunc_FFloor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkRegistrationWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindow, CallFunc_Conv_IntToString_ReturnValue) == 0x0000C8, "Member 'UMG_AdminGotoBookmarkRegistrationWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindow::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkRegistrationWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindow, CallFunc_Conv_IntToString_ReturnValue_1) == 0x0000D8, "Member 'UMG_AdminGotoBookmarkRegistrationWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindow::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkRegistrationWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindow, CallFunc_FFloor_ReturnValue_2) == 0x0000E8, "Member 'UMG_AdminGotoBookmarkRegistrationWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindow::CallFunc_FFloor_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkRegistrationWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindow, K2Node_CustomEvent_EditingData) == 0x0000F0, "Member 'UMG_AdminGotoBookmarkRegistrationWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindow::K2Node_CustomEvent_EditingData' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkRegistrationWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindow, CallFunc_Conv_IntToString_ReturnValue_2) == 0x0000F8, "Member 'UMG_AdminGotoBookmarkRegistrationWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindow::CallFunc_Conv_IntToString_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkRegistrationWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindow, CallFunc_IsValid_ReturnValue_1) == 0x000108, "Member 'UMG_AdminGotoBookmarkRegistrationWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindow::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkRegistrationWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindow, CallFunc_IsValid_ReturnValue_2) == 0x000109, "Member 'UMG_AdminGotoBookmarkRegistrationWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindow::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkRegistrationWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindow, CallFunc_Conv_IntToText_ReturnValue) == 0x000110, "Member 'UMG_AdminGotoBookmarkRegistrationWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindow::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkRegistrationWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindow, K2Node_CustomEvent_Sender) == 0x000128, "Member 'UMG_AdminGotoBookmarkRegistrationWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindow::K2Node_CustomEvent_Sender' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkRegistrationWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindow, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000130, "Member 'UMG_AdminGotoBookmarkRegistrationWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindow::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkRegistrationWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindow, CallFunc_IsValid_ReturnValue_3) == 0x000131, "Member 'UMG_AdminGotoBookmarkRegistrationWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindow::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkRegistrationWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindow, CallFunc_GetSBAdminBookmarkMisc_ReturnValue_1) == 0x000138, "Member 'UMG_AdminGotoBookmarkRegistrationWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindow::CallFunc_GetSBAdminBookmarkMisc_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkRegistrationWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindow, CallFunc_GetCurrentPosition_OutMapId) == 0x000140, "Member 'UMG_AdminGotoBookmarkRegistrationWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindow::CallFunc_GetCurrentPosition_OutMapId' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkRegistrationWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindow, CallFunc_GetCurrentPosition_OutPos) == 0x000150, "Member 'UMG_AdminGotoBookmarkRegistrationWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindow::CallFunc_GetCurrentPosition_OutPos' has a wrong offset!");

// Function UMG_AdminGotoBookmarkRegistrationWindow.UMG_AdminGotoBookmarkRegistrationWindow_C.OnUpdate
// 0x0008 (0x0008 - 0x0000)
struct UMG_AdminGotoBookmarkRegistrationWindow_C_OnUpdate final
{
public:
	class USBAdminGotoBookmarkItem*               Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_AdminGotoBookmarkRegistrationWindow_C_OnUpdate) == 0x000008, "Wrong alignment on UMG_AdminGotoBookmarkRegistrationWindow_C_OnUpdate");
static_assert(sizeof(UMG_AdminGotoBookmarkRegistrationWindow_C_OnUpdate) == 0x000008, "Wrong size on UMG_AdminGotoBookmarkRegistrationWindow_C_OnUpdate");
static_assert(offsetof(UMG_AdminGotoBookmarkRegistrationWindow_C_OnUpdate, Sender) == 0x000000, "Member 'UMG_AdminGotoBookmarkRegistrationWindow_C_OnUpdate::Sender' has a wrong offset!");

// Function UMG_AdminGotoBookmarkRegistrationWindow.UMG_AdminGotoBookmarkRegistrationWindow_C.ChangeEditingData
// 0x0008 (0x0008 - 0x0000)
struct UMG_AdminGotoBookmarkRegistrationWindow_C_ChangeEditingData final
{
public:
	class USBAdminGotoBookmarkItem*               Param_EditingData;                                 // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_AdminGotoBookmarkRegistrationWindow_C_ChangeEditingData) == 0x000008, "Wrong alignment on UMG_AdminGotoBookmarkRegistrationWindow_C_ChangeEditingData");
static_assert(sizeof(UMG_AdminGotoBookmarkRegistrationWindow_C_ChangeEditingData) == 0x000008, "Wrong size on UMG_AdminGotoBookmarkRegistrationWindow_C_ChangeEditingData");
static_assert(offsetof(UMG_AdminGotoBookmarkRegistrationWindow_C_ChangeEditingData, Param_EditingData) == 0x000000, "Member 'UMG_AdminGotoBookmarkRegistrationWindow_C_ChangeEditingData::Param_EditingData' has a wrong offset!");

// Function UMG_AdminGotoBookmarkRegistrationWindow.UMG_AdminGotoBookmarkRegistrationWindow_C.SetDataText
// 0x0020 (0x0020 - 0x0000)
struct UMG_AdminGotoBookmarkRegistrationWindow_C_SetDataText final
{
public:
	class FString                                 MapId;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FVector                                Positon;                                           // 0x0010(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_AdminGotoBookmarkRegistrationWindow_C_SetDataText) == 0x000008, "Wrong alignment on UMG_AdminGotoBookmarkRegistrationWindow_C_SetDataText");
static_assert(sizeof(UMG_AdminGotoBookmarkRegistrationWindow_C_SetDataText) == 0x000020, "Wrong size on UMG_AdminGotoBookmarkRegistrationWindow_C_SetDataText");
static_assert(offsetof(UMG_AdminGotoBookmarkRegistrationWindow_C_SetDataText, MapId) == 0x000000, "Member 'UMG_AdminGotoBookmarkRegistrationWindow_C_SetDataText::MapId' has a wrong offset!");
static_assert(offsetof(UMG_AdminGotoBookmarkRegistrationWindow_C_SetDataText, Positon) == 0x000010, "Member 'UMG_AdminGotoBookmarkRegistrationWindow_C_SetDataText::Positon' has a wrong offset!");

}

