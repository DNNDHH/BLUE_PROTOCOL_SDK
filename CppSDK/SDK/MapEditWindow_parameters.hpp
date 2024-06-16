#pragma once

 

// Package: MapEditWindow

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function MapEditWindow.MapEditWindow_C.OnRangeScaleChanged__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct MapEditWindow_C_OnRangeScaleChanged__DelegateSignature final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapEditWindow_C_OnRangeScaleChanged__DelegateSignature) == 0x000004, "Wrong alignment on MapEditWindow_C_OnRangeScaleChanged__DelegateSignature");
static_assert(sizeof(MapEditWindow_C_OnRangeScaleChanged__DelegateSignature) == 0x000004, "Wrong size on MapEditWindow_C_OnRangeScaleChanged__DelegateSignature");
static_assert(offsetof(MapEditWindow_C_OnRangeScaleChanged__DelegateSignature, Value) == 0x000000, "Member 'MapEditWindow_C_OnRangeScaleChanged__DelegateSignature::Value' has a wrong offset!");

// Function MapEditWindow.MapEditWindow_C.OnBGAlphaChanged__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct MapEditWindow_C_OnBGAlphaChanged__DelegateSignature final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapEditWindow_C_OnBGAlphaChanged__DelegateSignature) == 0x000004, "Wrong alignment on MapEditWindow_C_OnBGAlphaChanged__DelegateSignature");
static_assert(sizeof(MapEditWindow_C_OnBGAlphaChanged__DelegateSignature) == 0x000004, "Wrong size on MapEditWindow_C_OnBGAlphaChanged__DelegateSignature");
static_assert(offsetof(MapEditWindow_C_OnBGAlphaChanged__DelegateSignature, Value) == 0x000000, "Member 'MapEditWindow_C_OnBGAlphaChanged__DelegateSignature::Value' has a wrong offset!");

// Function MapEditWindow.MapEditWindow_C.OnIconSizeChanged__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct MapEditWindow_C_OnIconSizeChanged__DelegateSignature final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapEditWindow_C_OnIconSizeChanged__DelegateSignature) == 0x000004, "Wrong alignment on MapEditWindow_C_OnIconSizeChanged__DelegateSignature");
static_assert(sizeof(MapEditWindow_C_OnIconSizeChanged__DelegateSignature) == 0x000004, "Wrong size on MapEditWindow_C_OnIconSizeChanged__DelegateSignature");
static_assert(offsetof(MapEditWindow_C_OnIconSizeChanged__DelegateSignature, Value) == 0x000000, "Member 'MapEditWindow_C_OnIconSizeChanged__DelegateSignature::Value' has a wrong offset!");

// Function MapEditWindow.MapEditWindow_C.OnWindowSizeChanged__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct MapEditWindow_C_OnWindowSizeChanged__DelegateSignature final
{
public:
	int32                                         Number;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapEditWindow_C_OnWindowSizeChanged__DelegateSignature) == 0x000004, "Wrong alignment on MapEditWindow_C_OnWindowSizeChanged__DelegateSignature");
static_assert(sizeof(MapEditWindow_C_OnWindowSizeChanged__DelegateSignature) == 0x000004, "Wrong size on MapEditWindow_C_OnWindowSizeChanged__DelegateSignature");
static_assert(offsetof(MapEditWindow_C_OnWindowSizeChanged__DelegateSignature, Number) == 0x000000, "Member 'MapEditWindow_C_OnWindowSizeChanged__DelegateSignature::Number' has a wrong offset!");

// Function MapEditWindow.MapEditWindow_C.OnPinVisible__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct MapEditWindow_C_OnPinVisible__DelegateSignature final
{
public:
	bool                                          IsOn;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapEditWindow_C_OnPinVisible__DelegateSignature) == 0x000001, "Wrong alignment on MapEditWindow_C_OnPinVisible__DelegateSignature");
static_assert(sizeof(MapEditWindow_C_OnPinVisible__DelegateSignature) == 0x000001, "Wrong size on MapEditWindow_C_OnPinVisible__DelegateSignature");
static_assert(offsetof(MapEditWindow_C_OnPinVisible__DelegateSignature, IsOn) == 0x000000, "Member 'MapEditWindow_C_OnPinVisible__DelegateSignature::IsOn' has a wrong offset!");

// Function MapEditWindow.MapEditWindow_C.ExecuteUbergraph_MapEditWindow
// 0x00F0 (0x00F0 - 0x0000)
struct MapEditWindow_C_ExecuteUbergraph_MapEditWindow final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6FE9[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6FEA[0x2];                                     // 0x001A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate_1;            // 0x001C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x002C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_6FEB[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Sender;                         // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param;                          // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetDemoManager_IsValid;                   // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6FEC[0x6];                                     // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDemoManager*                         CallFunc_GetDemoManager_ReturnValue;               // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDemoManager_IsValid_1;                 // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6FED[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDemoManager*                         CallFunc_GetDemoManager_ReturnValue_1;             // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue;         // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue_1;       // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBUIType                                     K2Node_CustomEvent_InUIType;                       // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bInVisibility;                  // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bInInstantly;                   // 0x0082(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6FEE[0x1];                                     // 0x0083(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x0084(0x0010)(ZeroConstructor, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0095(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6FEF[0x2];                                     // 0x0096(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0098(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6FF0[0x2];                                     // 0x00A2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_ComponentBoundEvent_Value_2;                // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_ComponentBoundEvent_Value_1;                // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_ComponentBoundEvent_Value;                  // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_Number;                 // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_IsOn;                   // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6FF1[0x3];                                     // 0x00B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x00B8(0x0010)(ZeroConstructor, NoDestructor)
	EDialogResult                                 K2Node_CustomEvent_Result;                         // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6FF2[0x6];                                     // 0x00CA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetDialogMessage_Message;                 // 0x00D0(0x0018)()
	class UBP_Dialog_C*                           CallFunc_CreateDialogYesNo_ReturnValue;            // 0x00E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapEditWindow_C_ExecuteUbergraph_MapEditWindow) == 0x000008, "Wrong alignment on MapEditWindow_C_ExecuteUbergraph_MapEditWindow");
static_assert(sizeof(MapEditWindow_C_ExecuteUbergraph_MapEditWindow) == 0x0000F0, "Wrong size on MapEditWindow_C_ExecuteUbergraph_MapEditWindow");
static_assert(offsetof(MapEditWindow_C_ExecuteUbergraph_MapEditWindow, EntryPoint) == 0x000000, "Member 'MapEditWindow_C_ExecuteUbergraph_MapEditWindow::EntryPoint' has a wrong offset!");
static_assert(offsetof(MapEditWindow_C_ExecuteUbergraph_MapEditWindow, Temp_bool_Variable) == 0x000004, "Member 'MapEditWindow_C_ExecuteUbergraph_MapEditWindow::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MapEditWindow_C_ExecuteUbergraph_MapEditWindow, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'MapEditWindow_C_ExecuteUbergraph_MapEditWindow::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(MapEditWindow_C_ExecuteUbergraph_MapEditWindow, Temp_byte_Variable) == 0x000018, "Member 'MapEditWindow_C_ExecuteUbergraph_MapEditWindow::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MapEditWindow_C_ExecuteUbergraph_MapEditWindow, Temp_byte_Variable_1) == 0x000019, "Member 'MapEditWindow_C_ExecuteUbergraph_MapEditWindow::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(MapEditWindow_C_ExecuteUbergraph_MapEditWindow, K2Node_CreateDelegate_OutputDelegate_1) == 0x00001C, "Member 'MapEditWindow_C_ExecuteUbergraph_MapEditWindow::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(MapEditWindow_C_ExecuteUbergraph_MapEditWindow, K2Node_CreateDelegate_OutputDelegate_2) == 0x00002C, "Member 'MapEditWindow_C_ExecuteUbergraph_MapEditWindow::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(MapEditWindow_C_ExecuteUbergraph_MapEditWindow, K2Node_CustomEvent_Sender) == 0x000040, "Member 'MapEditWindow_C_ExecuteUbergraph_MapEditWindow::K2Node_CustomEvent_Sender' has a wrong offset!");
static_assert(offsetof(MapEditWindow_C_ExecuteUbergraph_MapEditWindow, K2Node_CustomEvent_Param) == 0x000048, "Member 'MapEditWindow_C_ExecuteUbergraph_MapEditWindow::K2Node_CustomEvent_Param' has a wrong offset!");
static_assert(offsetof(MapEditWindow_C_ExecuteUbergraph_MapEditWindow, CallFunc_IsValid_ReturnValue) == 0x000050, "Member 'MapEditWindow_C_ExecuteUbergraph_MapEditWindow::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapEditWindow_C_ExecuteUbergraph_MapEditWindow, CallFunc_GetDemoManager_IsValid) == 0x000051, "Member 'MapEditWindow_C_ExecuteUbergraph_MapEditWindow::CallFunc_GetDemoManager_IsValid' has a wrong offset!");
static_assert(offsetof(MapEditWindow_C_ExecuteUbergraph_MapEditWindow, CallFunc_GetDemoManager_ReturnValue) == 0x000058, "Member 'MapEditWindow_C_ExecuteUbergraph_MapEditWindow::CallFunc_GetDemoManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapEditWindow_C_ExecuteUbergraph_MapEditWindow, CallFunc_GetDemoManager_IsValid_1) == 0x000060, "Member 'MapEditWindow_C_ExecuteUbergraph_MapEditWindow::CallFunc_GetDemoManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(MapEditWindow_C_ExecuteUbergraph_MapEditWindow, CallFunc_GetDemoManager_ReturnValue_1) == 0x000068, "Member 'MapEditWindow_C_ExecuteUbergraph_MapEditWindow::CallFunc_GetDemoManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapEditWindow_C_ExecuteUbergraph_MapEditWindow, CallFunc_GetUIVisibleSettings_ReturnValue) == 0x000070, "Member 'MapEditWindow_C_ExecuteUbergraph_MapEditWindow::CallFunc_GetUIVisibleSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapEditWindow_C_ExecuteUbergraph_MapEditWindow, CallFunc_GetUIVisibleSettings_ReturnValue_1) == 0x000078, "Member 'MapEditWindow_C_ExecuteUbergraph_MapEditWindow::CallFunc_GetUIVisibleSettings_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapEditWindow_C_ExecuteUbergraph_MapEditWindow, K2Node_CustomEvent_InUIType) == 0x000080, "Member 'MapEditWindow_C_ExecuteUbergraph_MapEditWindow::K2Node_CustomEvent_InUIType' has a wrong offset!");
static_assert(offsetof(MapEditWindow_C_ExecuteUbergraph_MapEditWindow, K2Node_CustomEvent_bInVisibility) == 0x000081, "Member 'MapEditWindow_C_ExecuteUbergraph_MapEditWindow::K2Node_CustomEvent_bInVisibility' has a wrong offset!");
static_assert(offsetof(MapEditWindow_C_ExecuteUbergraph_MapEditWindow, K2Node_CustomEvent_bInInstantly) == 0x000082, "Member 'MapEditWindow_C_ExecuteUbergraph_MapEditWindow::K2Node_CustomEvent_bInInstantly' has a wrong offset!");
static_assert(offsetof(MapEditWindow_C_ExecuteUbergraph_MapEditWindow, K2Node_CreateDelegate_OutputDelegate_3) == 0x000084, "Member 'MapEditWindow_C_ExecuteUbergraph_MapEditWindow::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(MapEditWindow_C_ExecuteUbergraph_MapEditWindow, K2Node_Select_Default) == 0x000094, "Member 'MapEditWindow_C_ExecuteUbergraph_MapEditWindow::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MapEditWindow_C_ExecuteUbergraph_MapEditWindow, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000095, "Member 'MapEditWindow_C_ExecuteUbergraph_MapEditWindow::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapEditWindow_C_ExecuteUbergraph_MapEditWindow, K2Node_Event_Animation) == 0x000098, "Member 'MapEditWindow_C_ExecuteUbergraph_MapEditWindow::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(MapEditWindow_C_ExecuteUbergraph_MapEditWindow, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x0000A0, "Member 'MapEditWindow_C_ExecuteUbergraph_MapEditWindow::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapEditWindow_C_ExecuteUbergraph_MapEditWindow, CallFunc_EqualEqual_ObjectObject_ReturnValue_1) == 0x0000A1, "Member 'MapEditWindow_C_ExecuteUbergraph_MapEditWindow::CallFunc_EqualEqual_ObjectObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapEditWindow_C_ExecuteUbergraph_MapEditWindow, K2Node_ComponentBoundEvent_Value_2) == 0x0000A4, "Member 'MapEditWindow_C_ExecuteUbergraph_MapEditWindow::K2Node_ComponentBoundEvent_Value_2' has a wrong offset!");
static_assert(offsetof(MapEditWindow_C_ExecuteUbergraph_MapEditWindow, K2Node_ComponentBoundEvent_Value_1) == 0x0000A8, "Member 'MapEditWindow_C_ExecuteUbergraph_MapEditWindow::K2Node_ComponentBoundEvent_Value_1' has a wrong offset!");
static_assert(offsetof(MapEditWindow_C_ExecuteUbergraph_MapEditWindow, K2Node_ComponentBoundEvent_Value) == 0x0000AC, "Member 'MapEditWindow_C_ExecuteUbergraph_MapEditWindow::K2Node_ComponentBoundEvent_Value' has a wrong offset!");
static_assert(offsetof(MapEditWindow_C_ExecuteUbergraph_MapEditWindow, K2Node_ComponentBoundEvent_Number) == 0x0000B0, "Member 'MapEditWindow_C_ExecuteUbergraph_MapEditWindow::K2Node_ComponentBoundEvent_Number' has a wrong offset!");
static_assert(offsetof(MapEditWindow_C_ExecuteUbergraph_MapEditWindow, K2Node_ComponentBoundEvent_IsOn) == 0x0000B4, "Member 'MapEditWindow_C_ExecuteUbergraph_MapEditWindow::K2Node_ComponentBoundEvent_IsOn' has a wrong offset!");
static_assert(offsetof(MapEditWindow_C_ExecuteUbergraph_MapEditWindow, K2Node_CreateDelegate_OutputDelegate_4) == 0x0000B8, "Member 'MapEditWindow_C_ExecuteUbergraph_MapEditWindow::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(MapEditWindow_C_ExecuteUbergraph_MapEditWindow, K2Node_CustomEvent_Result) == 0x0000C8, "Member 'MapEditWindow_C_ExecuteUbergraph_MapEditWindow::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(MapEditWindow_C_ExecuteUbergraph_MapEditWindow, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0000C9, "Member 'MapEditWindow_C_ExecuteUbergraph_MapEditWindow::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapEditWindow_C_ExecuteUbergraph_MapEditWindow, CallFunc_GetDialogMessage_Message) == 0x0000D0, "Member 'MapEditWindow_C_ExecuteUbergraph_MapEditWindow::CallFunc_GetDialogMessage_Message' has a wrong offset!");
static_assert(offsetof(MapEditWindow_C_ExecuteUbergraph_MapEditWindow, CallFunc_CreateDialogYesNo_ReturnValue) == 0x0000E8, "Member 'MapEditWindow_C_ExecuteUbergraph_MapEditWindow::CallFunc_CreateDialogYesNo_ReturnValue' has a wrong offset!");

// Function MapEditWindow.MapEditWindow_C.DialogDelegate
// 0x0001 (0x0001 - 0x0000)
struct MapEditWindow_C_DialogDelegate final
{
public:
	EDialogResult                                 Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapEditWindow_C_DialogDelegate) == 0x000001, "Wrong alignment on MapEditWindow_C_DialogDelegate");
static_assert(sizeof(MapEditWindow_C_DialogDelegate) == 0x000001, "Wrong size on MapEditWindow_C_DialogDelegate");
static_assert(offsetof(MapEditWindow_C_DialogDelegate, Result) == 0x000000, "Member 'MapEditWindow_C_DialogDelegate::Result' has a wrong offset!");

// Function MapEditWindow.MapEditWindow_C.BndEvt__MapEditWindow_WindowPin_K2Node_ComponentBoundEvent_3_OnPinVisible__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct MapEditWindow_C_BndEvt__MapEditWindow_WindowPin_K2Node_ComponentBoundEvent_3_OnPinVisible__DelegateSignature final
{
public:
	bool                                          IsOn;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapEditWindow_C_BndEvt__MapEditWindow_WindowPin_K2Node_ComponentBoundEvent_3_OnPinVisible__DelegateSignature) == 0x000001, "Wrong alignment on MapEditWindow_C_BndEvt__MapEditWindow_WindowPin_K2Node_ComponentBoundEvent_3_OnPinVisible__DelegateSignature");
static_assert(sizeof(MapEditWindow_C_BndEvt__MapEditWindow_WindowPin_K2Node_ComponentBoundEvent_3_OnPinVisible__DelegateSignature) == 0x000001, "Wrong size on MapEditWindow_C_BndEvt__MapEditWindow_WindowPin_K2Node_ComponentBoundEvent_3_OnPinVisible__DelegateSignature");
static_assert(offsetof(MapEditWindow_C_BndEvt__MapEditWindow_WindowPin_K2Node_ComponentBoundEvent_3_OnPinVisible__DelegateSignature, IsOn) == 0x000000, "Member 'MapEditWindow_C_BndEvt__MapEditWindow_WindowPin_K2Node_ComponentBoundEvent_3_OnPinVisible__DelegateSignature::IsOn' has a wrong offset!");

// Function MapEditWindow.MapEditWindow_C.BndEvt__MapEditWindow_MapEditWindowSize_K2Node_ComponentBoundEvent_19_OnWindowSizeChanged__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct MapEditWindow_C_BndEvt__MapEditWindow_MapEditWindowSize_K2Node_ComponentBoundEvent_19_OnWindowSizeChanged__DelegateSignature final
{
public:
	int32                                         Number;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapEditWindow_C_BndEvt__MapEditWindow_MapEditWindowSize_K2Node_ComponentBoundEvent_19_OnWindowSizeChanged__DelegateSignature) == 0x000004, "Wrong alignment on MapEditWindow_C_BndEvt__MapEditWindow_MapEditWindowSize_K2Node_ComponentBoundEvent_19_OnWindowSizeChanged__DelegateSignature");
static_assert(sizeof(MapEditWindow_C_BndEvt__MapEditWindow_MapEditWindowSize_K2Node_ComponentBoundEvent_19_OnWindowSizeChanged__DelegateSignature) == 0x000004, "Wrong size on MapEditWindow_C_BndEvt__MapEditWindow_MapEditWindowSize_K2Node_ComponentBoundEvent_19_OnWindowSizeChanged__DelegateSignature");
static_assert(offsetof(MapEditWindow_C_BndEvt__MapEditWindow_MapEditWindowSize_K2Node_ComponentBoundEvent_19_OnWindowSizeChanged__DelegateSignature, Number) == 0x000000, "Member 'MapEditWindow_C_BndEvt__MapEditWindow_MapEditWindowSize_K2Node_ComponentBoundEvent_19_OnWindowSizeChanged__DelegateSignature::Number' has a wrong offset!");

// Function MapEditWindow.MapEditWindow_C.BndEvt__MapEditWindow_SliderZ_K2Node_ComponentBoundEvent_15_OnValueChanged__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct MapEditWindow_C_BndEvt__MapEditWindow_SliderZ_K2Node_ComponentBoundEvent_15_OnValueChanged__DelegateSignature final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapEditWindow_C_BndEvt__MapEditWindow_SliderZ_K2Node_ComponentBoundEvent_15_OnValueChanged__DelegateSignature) == 0x000004, "Wrong alignment on MapEditWindow_C_BndEvt__MapEditWindow_SliderZ_K2Node_ComponentBoundEvent_15_OnValueChanged__DelegateSignature");
static_assert(sizeof(MapEditWindow_C_BndEvt__MapEditWindow_SliderZ_K2Node_ComponentBoundEvent_15_OnValueChanged__DelegateSignature) == 0x000004, "Wrong size on MapEditWindow_C_BndEvt__MapEditWindow_SliderZ_K2Node_ComponentBoundEvent_15_OnValueChanged__DelegateSignature");
static_assert(offsetof(MapEditWindow_C_BndEvt__MapEditWindow_SliderZ_K2Node_ComponentBoundEvent_15_OnValueChanged__DelegateSignature, Value) == 0x000000, "Member 'MapEditWindow_C_BndEvt__MapEditWindow_SliderZ_K2Node_ComponentBoundEvent_15_OnValueChanged__DelegateSignature::Value' has a wrong offset!");

// Function MapEditWindow.MapEditWindow_C.BndEvt__MapEditWindow_MapEditSlider_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct MapEditWindow_C_BndEvt__MapEditWindow_MapEditSlider_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapEditWindow_C_BndEvt__MapEditWindow_MapEditSlider_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature) == 0x000004, "Wrong alignment on MapEditWindow_C_BndEvt__MapEditWindow_MapEditSlider_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature");
static_assert(sizeof(MapEditWindow_C_BndEvt__MapEditWindow_MapEditSlider_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature) == 0x000004, "Wrong size on MapEditWindow_C_BndEvt__MapEditWindow_MapEditSlider_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature");
static_assert(offsetof(MapEditWindow_C_BndEvt__MapEditWindow_MapEditSlider_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature, Value) == 0x000000, "Member 'MapEditWindow_C_BndEvt__MapEditWindow_MapEditSlider_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature::Value' has a wrong offset!");

// Function MapEditWindow.MapEditWindow_C.BndEvt__MapEditWindow_SliderBG_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct MapEditWindow_C_BndEvt__MapEditWindow_SliderBG_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapEditWindow_C_BndEvt__MapEditWindow_SliderBG_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature) == 0x000004, "Wrong alignment on MapEditWindow_C_BndEvt__MapEditWindow_SliderBG_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature");
static_assert(sizeof(MapEditWindow_C_BndEvt__MapEditWindow_SliderBG_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature) == 0x000004, "Wrong size on MapEditWindow_C_BndEvt__MapEditWindow_SliderBG_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature");
static_assert(offsetof(MapEditWindow_C_BndEvt__MapEditWindow_SliderBG_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature, Value) == 0x000000, "Member 'MapEditWindow_C_BndEvt__MapEditWindow_SliderBG_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature::Value' has a wrong offset!");

// Function MapEditWindow.MapEditWindow_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct MapEditWindow_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapEditWindow_C_OnAnimationFinished) == 0x000008, "Wrong alignment on MapEditWindow_C_OnAnimationFinished");
static_assert(sizeof(MapEditWindow_C_OnAnimationFinished) == 0x000008, "Wrong size on MapEditWindow_C_OnAnimationFinished");
static_assert(offsetof(MapEditWindow_C_OnAnimationFinished, Animation) == 0x000000, "Member 'MapEditWindow_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function MapEditWindow.MapEditWindow_C.UIVisibleSettingChangeDelegate_Event_0
// 0x0003 (0x0003 - 0x0000)
struct MapEditWindow_C_UIVisibleSettingChangeDelegate_Event_0 final
{
public:
	ESBUIType                                     InUIType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInVisibility;                                     // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bInInstantly;                                      // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapEditWindow_C_UIVisibleSettingChangeDelegate_Event_0) == 0x000001, "Wrong alignment on MapEditWindow_C_UIVisibleSettingChangeDelegate_Event_0");
static_assert(sizeof(MapEditWindow_C_UIVisibleSettingChangeDelegate_Event_0) == 0x000003, "Wrong size on MapEditWindow_C_UIVisibleSettingChangeDelegate_Event_0");
static_assert(offsetof(MapEditWindow_C_UIVisibleSettingChangeDelegate_Event_0, InUIType) == 0x000000, "Member 'MapEditWindow_C_UIVisibleSettingChangeDelegate_Event_0::InUIType' has a wrong offset!");
static_assert(offsetof(MapEditWindow_C_UIVisibleSettingChangeDelegate_Event_0, bInVisibility) == 0x000001, "Member 'MapEditWindow_C_UIVisibleSettingChangeDelegate_Event_0::bInVisibility' has a wrong offset!");
static_assert(offsetof(MapEditWindow_C_UIVisibleSettingChangeDelegate_Event_0, bInInstantly) == 0x000002, "Member 'MapEditWindow_C_UIVisibleSettingChangeDelegate_Event_0::bInInstantly' has a wrong offset!");

// Function MapEditWindow.MapEditWindow_C.CustomEvent_0
// 0x0010 (0x0010 - 0x0000)
struct MapEditWindow_C_CustomEvent_0 final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapEditWindow_C_CustomEvent_0) == 0x000008, "Wrong alignment on MapEditWindow_C_CustomEvent_0");
static_assert(sizeof(MapEditWindow_C_CustomEvent_0) == 0x000010, "Wrong size on MapEditWindow_C_CustomEvent_0");
static_assert(offsetof(MapEditWindow_C_CustomEvent_0, Sender) == 0x000000, "Member 'MapEditWindow_C_CustomEvent_0::Sender' has a wrong offset!");
static_assert(offsetof(MapEditWindow_C_CustomEvent_0, Param) == 0x000008, "Member 'MapEditWindow_C_CustomEvent_0::Param' has a wrong offset!");

// Function MapEditWindow.MapEditWindow_C.Initialize
// 0x0014 (0x0014 - 0x0000)
struct MapEditWindow_C_Initialize final
{
public:
	int32                                         WindowSizeIndex;                                   // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BGAlphaValue;                                      // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         IconSizeScale;                                     // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Zoom;                                              // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PinChecked;                                        // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapEditWindow_C_Initialize) == 0x000004, "Wrong alignment on MapEditWindow_C_Initialize");
static_assert(sizeof(MapEditWindow_C_Initialize) == 0x000014, "Wrong size on MapEditWindow_C_Initialize");
static_assert(offsetof(MapEditWindow_C_Initialize, WindowSizeIndex) == 0x000000, "Member 'MapEditWindow_C_Initialize::WindowSizeIndex' has a wrong offset!");
static_assert(offsetof(MapEditWindow_C_Initialize, BGAlphaValue) == 0x000004, "Member 'MapEditWindow_C_Initialize::BGAlphaValue' has a wrong offset!");
static_assert(offsetof(MapEditWindow_C_Initialize, IconSizeScale) == 0x000008, "Member 'MapEditWindow_C_Initialize::IconSizeScale' has a wrong offset!");
static_assert(offsetof(MapEditWindow_C_Initialize, Zoom) == 0x00000C, "Member 'MapEditWindow_C_Initialize::Zoom' has a wrong offset!");
static_assert(offsetof(MapEditWindow_C_Initialize, PinChecked) == 0x000010, "Member 'MapEditWindow_C_Initialize::PinChecked' has a wrong offset!");

// Function MapEditWindow.MapEditWindow_C.Open
// 0x0018 (0x0018 - 0x0000)
struct MapEditWindow_C_Open final
{
public:
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6FF3[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapEditWindow_C_Open) == 0x000008, "Wrong alignment on MapEditWindow_C_Open");
static_assert(sizeof(MapEditWindow_C_Open) == 0x000018, "Wrong size on MapEditWindow_C_Open");
static_assert(offsetof(MapEditWindow_C_Open, CallFunc_PlaySE_ReturnValue) == 0x000000, "Member 'MapEditWindow_C_Open::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapEditWindow_C_Open, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000004, "Member 'MapEditWindow_C_Open::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapEditWindow_C_Open, CallFunc_PlayAnimationForward_ReturnValue) == 0x000008, "Member 'MapEditWindow_C_Open::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapEditWindow_C_Open, CallFunc_Not_PreBool_ReturnValue) == 0x000010, "Member 'MapEditWindow_C_Open::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function MapEditWindow.MapEditWindow_C.Close
// 0x0018 (0x0018 - 0x0000)
struct MapEditWindow_C_Close final
{
public:
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6FF4[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapEditWindow_C_Close) == 0x000008, "Wrong alignment on MapEditWindow_C_Close");
static_assert(sizeof(MapEditWindow_C_Close) == 0x000018, "Wrong size on MapEditWindow_C_Close");
static_assert(offsetof(MapEditWindow_C_Close, CallFunc_PlaySE_ReturnValue) == 0x000000, "Member 'MapEditWindow_C_Close::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapEditWindow_C_Close, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000004, "Member 'MapEditWindow_C_Close::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapEditWindow_C_Close, CallFunc_PlayAnimationForward_ReturnValue) == 0x000008, "Member 'MapEditWindow_C_Close::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapEditWindow_C_Close, CallFunc_Not_PreBool_ReturnValue) == 0x000010, "Member 'MapEditWindow_C_Close::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function MapEditWindow.MapEditWindow_C.SetMapSizeTitle
// 0x0014 (0x0014 - 0x0000)
struct MapEditWindow_C_SetMapSizeTitle final
{
public:
	class FName                                   CallFunc_GetCurrentGameContentId_ReturnValue;      // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetCurrentGameContentId_ReturnValue_1;    // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsGameModeCity_ReturnValue;               // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsGameModeField_ReturnValue;              // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapEditWindow_C_SetMapSizeTitle) == 0x000004, "Wrong alignment on MapEditWindow_C_SetMapSizeTitle");
static_assert(sizeof(MapEditWindow_C_SetMapSizeTitle) == 0x000014, "Wrong size on MapEditWindow_C_SetMapSizeTitle");
static_assert(offsetof(MapEditWindow_C_SetMapSizeTitle, CallFunc_GetCurrentGameContentId_ReturnValue) == 0x000000, "Member 'MapEditWindow_C_SetMapSizeTitle::CallFunc_GetCurrentGameContentId_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapEditWindow_C_SetMapSizeTitle, CallFunc_GetCurrentGameContentId_ReturnValue_1) == 0x000008, "Member 'MapEditWindow_C_SetMapSizeTitle::CallFunc_GetCurrentGameContentId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapEditWindow_C_SetMapSizeTitle, CallFunc_IsGameModeCity_ReturnValue) == 0x000010, "Member 'MapEditWindow_C_SetMapSizeTitle::CallFunc_IsGameModeCity_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapEditWindow_C_SetMapSizeTitle, CallFunc_IsGameModeField_ReturnValue) == 0x000011, "Member 'MapEditWindow_C_SetMapSizeTitle::CallFunc_IsGameModeField_ReturnValue' has a wrong offset!");

// Function MapEditWindow.MapEditWindow_C.SetGameModeAndUI
// 0x0010 (0x0010 - 0x0000)
struct MapEditWindow_C_SetGameModeAndUI final
{
public:
	struct FSBCursorStateHandle                   CallFunc_ShowCursor_ReturnValue;                   // 0x0000(0x0004)(NoDestructor)
	uint8                                         Pad_6FF5[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapEditWindow_C_SetGameModeAndUI) == 0x000008, "Wrong alignment on MapEditWindow_C_SetGameModeAndUI");
static_assert(sizeof(MapEditWindow_C_SetGameModeAndUI) == 0x000010, "Wrong size on MapEditWindow_C_SetGameModeAndUI");
static_assert(offsetof(MapEditWindow_C_SetGameModeAndUI, CallFunc_ShowCursor_ReturnValue) == 0x000000, "Member 'MapEditWindow_C_SetGameModeAndUI::CallFunc_ShowCursor_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapEditWindow_C_SetGameModeAndUI, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000008, "Member 'MapEditWindow_C_SetGameModeAndUI::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");

// Function MapEditWindow.MapEditWindow_C.SetGameMode
// 0x0008 (0x0008 - 0x0000)
struct MapEditWindow_C_SetGameMode final
{
public:
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapEditWindow_C_SetGameMode) == 0x000008, "Wrong alignment on MapEditWindow_C_SetGameMode");
static_assert(sizeof(MapEditWindow_C_SetGameMode) == 0x000008, "Wrong size on MapEditWindow_C_SetGameMode");
static_assert(offsetof(MapEditWindow_C_SetGameMode, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000000, "Member 'MapEditWindow_C_SetGameMode::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");

// Function MapEditWindow.MapEditWindow_C.CreateDialogYesNo
// 0x0030 (0x0030 - 0x0000)
struct MapEditWindow_C_CreateDialogYesNo final
{
public:
	class FText                                   Message;                                           // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	class UBP_Dialog_C*                           ReturnValue;                                       // 0x0018(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostAkEvent_ReturnValue;                  // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6FF6[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_Dialog_C*                           CallFunc_Create_ReturnValue;                       // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapEditWindow_C_CreateDialogYesNo) == 0x000008, "Wrong alignment on MapEditWindow_C_CreateDialogYesNo");
static_assert(sizeof(MapEditWindow_C_CreateDialogYesNo) == 0x000030, "Wrong size on MapEditWindow_C_CreateDialogYesNo");
static_assert(offsetof(MapEditWindow_C_CreateDialogYesNo, Message) == 0x000000, "Member 'MapEditWindow_C_CreateDialogYesNo::Message' has a wrong offset!");
static_assert(offsetof(MapEditWindow_C_CreateDialogYesNo, ReturnValue) == 0x000018, "Member 'MapEditWindow_C_CreateDialogYesNo::ReturnValue' has a wrong offset!");
static_assert(offsetof(MapEditWindow_C_CreateDialogYesNo, CallFunc_PostAkEvent_ReturnValue) == 0x000020, "Member 'MapEditWindow_C_CreateDialogYesNo::CallFunc_PostAkEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapEditWindow_C_CreateDialogYesNo, CallFunc_Create_ReturnValue) == 0x000028, "Member 'MapEditWindow_C_CreateDialogYesNo::CallFunc_Create_ReturnValue' has a wrong offset!");

// Function MapEditWindow.MapEditWindow_C.DeleteDialogYesNo
// 0x0001 (0x0001 - 0x0000)
struct MapEditWindow_C_DeleteDialogYesNo final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapEditWindow_C_DeleteDialogYesNo) == 0x000001, "Wrong alignment on MapEditWindow_C_DeleteDialogYesNo");
static_assert(sizeof(MapEditWindow_C_DeleteDialogYesNo) == 0x000001, "Wrong size on MapEditWindow_C_DeleteDialogYesNo");
static_assert(offsetof(MapEditWindow_C_DeleteDialogYesNo, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'MapEditWindow_C_DeleteDialogYesNo::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function MapEditWindow.MapEditWindow_C.GetDialogMessage
// 0x0040 (0x0040 - 0x0000)
struct MapEditWindow_C_GetDialogMessage final
{
public:
	class FText                                   Message;                                           // 0x0000(0x0018)(Parm, OutParm)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0028(0x0018)()
};
static_assert(alignof(MapEditWindow_C_GetDialogMessage) == 0x000008, "Wrong alignment on MapEditWindow_C_GetDialogMessage");
static_assert(sizeof(MapEditWindow_C_GetDialogMessage) == 0x000040, "Wrong size on MapEditWindow_C_GetDialogMessage");
static_assert(offsetof(MapEditWindow_C_GetDialogMessage, Message) == 0x000000, "Member 'MapEditWindow_C_GetDialogMessage::Message' has a wrong offset!");
static_assert(offsetof(MapEditWindow_C_GetDialogMessage, CallFunc_GetTextFromAsset_ReturnValue) == 0x000018, "Member 'MapEditWindow_C_GetDialogMessage::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapEditWindow_C_GetDialogMessage, CallFunc_Conv_StringToText_ReturnValue) == 0x000028, "Member 'MapEditWindow_C_GetDialogMessage::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

}

