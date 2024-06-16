#pragma once

 

// Package: TickerMessage

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function TickerMessage.TickerMessage_C.ExecuteUbergraph_TickerMessage
// 0x0128 (0x0128 - 0x0000)
struct TickerMessage_C_ExecuteUbergraph_TickerMessage final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45F8[0x2];                                     // 0x000E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0010(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45F9[0x3];                                     // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_CustomEvent_DeltaTime_1;                    // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetDesiredSize_ReturnValue;               // 0x0064(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x006C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_1;                        // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_1;                        // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45FA[0x3];                                     // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_DeltaTime;                      // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45FB[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBTickerMessageManager*                CallFunc_GetTickerMessageManager_ReturnValue;      // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue;         // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBUIType                                     K2Node_CustomEvent_InUIType;                       // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bInVisibility;                  // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bInInstantly;                   // 0x00AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00AB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetUIVisibleSetting_ReturnValue;          // 0x00AD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x00AE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45FC[0x1];                                     // 0x00AF(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x00B0(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x00C0(0x0010)(ZeroConstructor, NoDestructor)
	class USBTickerMessageManager*                CallFunc_GetTickerMessageManager_ReturnValue_1;    // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x00D8(0x0010)(ZeroConstructor, NoDestructor)
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue_1;       // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x00F0(0x0010)(ZeroConstructor, NoDestructor)
	class USBTickerMessageManager*                CallFunc_GetTickerMessageManager_ReturnValue_2;    // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBTickerMessageManager*                CallFunc_GetTickerMessageManager_ReturnValue_3;    // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x0110(0x0010)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0120(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TickerMessage_C_ExecuteUbergraph_TickerMessage) == 0x000008, "Wrong alignment on TickerMessage_C_ExecuteUbergraph_TickerMessage");
static_assert(sizeof(TickerMessage_C_ExecuteUbergraph_TickerMessage) == 0x000128, "Wrong size on TickerMessage_C_ExecuteUbergraph_TickerMessage");
static_assert(offsetof(TickerMessage_C_ExecuteUbergraph_TickerMessage, EntryPoint) == 0x000000, "Member 'TickerMessage_C_ExecuteUbergraph_TickerMessage::EntryPoint' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_ExecuteUbergraph_TickerMessage, Temp_byte_Variable) == 0x000004, "Member 'TickerMessage_C_ExecuteUbergraph_TickerMessage::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_ExecuteUbergraph_TickerMessage, Temp_bool_Variable) == 0x000005, "Member 'TickerMessage_C_ExecuteUbergraph_TickerMessage::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_ExecuteUbergraph_TickerMessage, Temp_byte_Variable_1) == 0x000006, "Member 'TickerMessage_C_ExecuteUbergraph_TickerMessage::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_ExecuteUbergraph_TickerMessage, Temp_byte_Variable_2) == 0x000007, "Member 'TickerMessage_C_ExecuteUbergraph_TickerMessage::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_ExecuteUbergraph_TickerMessage, Temp_int_Variable) == 0x000008, "Member 'TickerMessage_C_ExecuteUbergraph_TickerMessage::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_ExecuteUbergraph_TickerMessage, Temp_byte_Variable_3) == 0x00000C, "Member 'TickerMessage_C_ExecuteUbergraph_TickerMessage::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_ExecuteUbergraph_TickerMessage, Temp_bool_Variable_1) == 0x00000D, "Member 'TickerMessage_C_ExecuteUbergraph_TickerMessage::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_ExecuteUbergraph_TickerMessage, K2Node_Event_MyGeometry) == 0x000010, "Member 'TickerMessage_C_ExecuteUbergraph_TickerMessage::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_ExecuteUbergraph_TickerMessage, K2Node_Event_InDeltaTime) == 0x000048, "Member 'TickerMessage_C_ExecuteUbergraph_TickerMessage::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_ExecuteUbergraph_TickerMessage, K2Node_SwitchEnum_CmpSuccess) == 0x00004C, "Member 'TickerMessage_C_ExecuteUbergraph_TickerMessage::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_ExecuteUbergraph_TickerMessage, K2Node_CustomEvent_DeltaTime_1) == 0x000050, "Member 'TickerMessage_C_ExecuteUbergraph_TickerMessage::K2Node_CustomEvent_DeltaTime_1' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_ExecuteUbergraph_TickerMessage, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000054, "Member 'TickerMessage_C_ExecuteUbergraph_TickerMessage::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_ExecuteUbergraph_TickerMessage, CallFunc_BreakVector2D_X) == 0x000058, "Member 'TickerMessage_C_ExecuteUbergraph_TickerMessage::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_ExecuteUbergraph_TickerMessage, CallFunc_BreakVector2D_Y) == 0x00005C, "Member 'TickerMessage_C_ExecuteUbergraph_TickerMessage::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_ExecuteUbergraph_TickerMessage, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000060, "Member 'TickerMessage_C_ExecuteUbergraph_TickerMessage::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_ExecuteUbergraph_TickerMessage, CallFunc_GetDesiredSize_ReturnValue) == 0x000064, "Member 'TickerMessage_C_ExecuteUbergraph_TickerMessage::CallFunc_GetDesiredSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_ExecuteUbergraph_TickerMessage, CallFunc_MakeVector2D_ReturnValue) == 0x00006C, "Member 'TickerMessage_C_ExecuteUbergraph_TickerMessage::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_ExecuteUbergraph_TickerMessage, CallFunc_BreakVector2D_X_1) == 0x000074, "Member 'TickerMessage_C_ExecuteUbergraph_TickerMessage::CallFunc_BreakVector2D_X_1' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_ExecuteUbergraph_TickerMessage, CallFunc_BreakVector2D_Y_1) == 0x000078, "Member 'TickerMessage_C_ExecuteUbergraph_TickerMessage::CallFunc_BreakVector2D_Y_1' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_ExecuteUbergraph_TickerMessage, CallFunc_Add_FloatFloat_ReturnValue) == 0x00007C, "Member 'TickerMessage_C_ExecuteUbergraph_TickerMessage::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_ExecuteUbergraph_TickerMessage, CallFunc_Less_FloatFloat_ReturnValue) == 0x000080, "Member 'TickerMessage_C_ExecuteUbergraph_TickerMessage::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_ExecuteUbergraph_TickerMessage, CallFunc_Add_IntInt_ReturnValue) == 0x000084, "Member 'TickerMessage_C_ExecuteUbergraph_TickerMessage::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_ExecuteUbergraph_TickerMessage, K2Node_CustomEvent_DeltaTime) == 0x000088, "Member 'TickerMessage_C_ExecuteUbergraph_TickerMessage::K2Node_CustomEvent_DeltaTime' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_ExecuteUbergraph_TickerMessage, CallFunc_Add_FloatFloat_ReturnValue_1) == 0x00008C, "Member 'TickerMessage_C_ExecuteUbergraph_TickerMessage::CallFunc_Add_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_ExecuteUbergraph_TickerMessage, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x000090, "Member 'TickerMessage_C_ExecuteUbergraph_TickerMessage::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_ExecuteUbergraph_TickerMessage, CallFunc_GetTickerMessageManager_ReturnValue) == 0x000098, "Member 'TickerMessage_C_ExecuteUbergraph_TickerMessage::CallFunc_GetTickerMessageManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_ExecuteUbergraph_TickerMessage, CallFunc_GetUIVisibleSettings_ReturnValue) == 0x0000A0, "Member 'TickerMessage_C_ExecuteUbergraph_TickerMessage::CallFunc_GetUIVisibleSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_ExecuteUbergraph_TickerMessage, K2Node_CustomEvent_InUIType) == 0x0000A8, "Member 'TickerMessage_C_ExecuteUbergraph_TickerMessage::K2Node_CustomEvent_InUIType' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_ExecuteUbergraph_TickerMessage, K2Node_CustomEvent_bInVisibility) == 0x0000A9, "Member 'TickerMessage_C_ExecuteUbergraph_TickerMessage::K2Node_CustomEvent_bInVisibility' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_ExecuteUbergraph_TickerMessage, K2Node_CustomEvent_bInInstantly) == 0x0000AA, "Member 'TickerMessage_C_ExecuteUbergraph_TickerMessage::K2Node_CustomEvent_bInInstantly' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_ExecuteUbergraph_TickerMessage, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000AB, "Member 'TickerMessage_C_ExecuteUbergraph_TickerMessage::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_ExecuteUbergraph_TickerMessage, K2Node_Select_Default) == 0x0000AC, "Member 'TickerMessage_C_ExecuteUbergraph_TickerMessage::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_ExecuteUbergraph_TickerMessage, CallFunc_GetUIVisibleSetting_ReturnValue) == 0x0000AD, "Member 'TickerMessage_C_ExecuteUbergraph_TickerMessage::CallFunc_GetUIVisibleSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_ExecuteUbergraph_TickerMessage, K2Node_Select_Default_1) == 0x0000AE, "Member 'TickerMessage_C_ExecuteUbergraph_TickerMessage::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_ExecuteUbergraph_TickerMessage, K2Node_CreateDelegate_OutputDelegate) == 0x0000B0, "Member 'TickerMessage_C_ExecuteUbergraph_TickerMessage::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_ExecuteUbergraph_TickerMessage, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000C0, "Member 'TickerMessage_C_ExecuteUbergraph_TickerMessage::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_ExecuteUbergraph_TickerMessage, CallFunc_GetTickerMessageManager_ReturnValue_1) == 0x0000D0, "Member 'TickerMessage_C_ExecuteUbergraph_TickerMessage::CallFunc_GetTickerMessageManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_ExecuteUbergraph_TickerMessage, K2Node_CreateDelegate_OutputDelegate_2) == 0x0000D8, "Member 'TickerMessage_C_ExecuteUbergraph_TickerMessage::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_ExecuteUbergraph_TickerMessage, CallFunc_GetUIVisibleSettings_ReturnValue_1) == 0x0000E8, "Member 'TickerMessage_C_ExecuteUbergraph_TickerMessage::CallFunc_GetUIVisibleSettings_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_ExecuteUbergraph_TickerMessage, K2Node_CreateDelegate_OutputDelegate_3) == 0x0000F0, "Member 'TickerMessage_C_ExecuteUbergraph_TickerMessage::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_ExecuteUbergraph_TickerMessage, CallFunc_GetTickerMessageManager_ReturnValue_2) == 0x000100, "Member 'TickerMessage_C_ExecuteUbergraph_TickerMessage::CallFunc_GetTickerMessageManager_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_ExecuteUbergraph_TickerMessage, CallFunc_GetTickerMessageManager_ReturnValue_3) == 0x000108, "Member 'TickerMessage_C_ExecuteUbergraph_TickerMessage::CallFunc_GetTickerMessageManager_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_ExecuteUbergraph_TickerMessage, K2Node_CreateDelegate_OutputDelegate_4) == 0x000110, "Member 'TickerMessage_C_ExecuteUbergraph_TickerMessage::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_ExecuteUbergraph_TickerMessage, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000120, "Member 'TickerMessage_C_ExecuteUbergraph_TickerMessage::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");

// Function TickerMessage.TickerMessage_C.OnUIVisibleSettingChange
// 0x0003 (0x0003 - 0x0000)
struct TickerMessage_C_OnUIVisibleSettingChange final
{
public:
	ESBUIType                                     InUIType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInVisibility;                                     // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bInInstantly;                                      // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TickerMessage_C_OnUIVisibleSettingChange) == 0x000001, "Wrong alignment on TickerMessage_C_OnUIVisibleSettingChange");
static_assert(sizeof(TickerMessage_C_OnUIVisibleSettingChange) == 0x000003, "Wrong size on TickerMessage_C_OnUIVisibleSettingChange");
static_assert(offsetof(TickerMessage_C_OnUIVisibleSettingChange, InUIType) == 0x000000, "Member 'TickerMessage_C_OnUIVisibleSettingChange::InUIType' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_OnUIVisibleSettingChange, bInVisibility) == 0x000001, "Member 'TickerMessage_C_OnUIVisibleSettingChange::bInVisibility' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_OnUIVisibleSettingChange, bInInstantly) == 0x000002, "Member 'TickerMessage_C_OnUIVisibleSettingChange::bInInstantly' has a wrong offset!");

// Function TickerMessage.TickerMessage_C.Proc_Interval
// 0x0004 (0x0004 - 0x0000)
struct TickerMessage_C_Proc_Interval final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TickerMessage_C_Proc_Interval) == 0x000004, "Wrong alignment on TickerMessage_C_Proc_Interval");
static_assert(sizeof(TickerMessage_C_Proc_Interval) == 0x000004, "Wrong size on TickerMessage_C_Proc_Interval");
static_assert(offsetof(TickerMessage_C_Proc_Interval, DeltaTime) == 0x000000, "Member 'TickerMessage_C_Proc_Interval::DeltaTime' has a wrong offset!");

// Function TickerMessage.TickerMessage_C.Proc_Scroll
// 0x0004 (0x0004 - 0x0000)
struct TickerMessage_C_Proc_Scroll final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TickerMessage_C_Proc_Scroll) == 0x000004, "Wrong alignment on TickerMessage_C_Proc_Scroll");
static_assert(sizeof(TickerMessage_C_Proc_Scroll) == 0x000004, "Wrong size on TickerMessage_C_Proc_Scroll");
static_assert(offsetof(TickerMessage_C_Proc_Scroll, DeltaTime) == 0x000000, "Member 'TickerMessage_C_Proc_Scroll::DeltaTime' has a wrong offset!");

// Function TickerMessage.TickerMessage_C.Tick
// 0x003C (0x003C - 0x0000)
struct TickerMessage_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TickerMessage_C_Tick) == 0x000004, "Wrong alignment on TickerMessage_C_Tick");
static_assert(sizeof(TickerMessage_C_Tick) == 0x00003C, "Wrong size on TickerMessage_C_Tick");
static_assert(offsetof(TickerMessage_C_Tick, MyGeometry) == 0x000000, "Member 'TickerMessage_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_Tick, InDeltaTime) == 0x000038, "Member 'TickerMessage_C_Tick::InDeltaTime' has a wrong offset!");

// Function TickerMessage.TickerMessage_C.OnMessageChange
// 0x0008 (0x0008 - 0x0000)
struct TickerMessage_C_OnMessageChange final
{
public:
	class USBTickerMessageManager*                TickerMessageManager;                              // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TickerMessage_C_OnMessageChange) == 0x000008, "Wrong alignment on TickerMessage_C_OnMessageChange");
static_assert(sizeof(TickerMessage_C_OnMessageChange) == 0x000008, "Wrong size on TickerMessage_C_OnMessageChange");
static_assert(offsetof(TickerMessage_C_OnMessageChange, TickerMessageManager) == 0x000000, "Member 'TickerMessage_C_OnMessageChange::TickerMessageManager' has a wrong offset!");

// Function TickerMessage.TickerMessage_C.CheckNextMessage
// 0x00D0 (0x00D0 - 0x0000)
struct TickerMessage_C_CheckNextMessage final
{
public:
	struct FSBTickerMessageInfo                   NextMessage;                                       // 0x0000(0x0030)(Edit, BlueprintVisible)
	class USBTickerMessageManager*                TickerMessageManager;                              // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NextMessageIndex;                                  // 0x0038(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45FD[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable;                               // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45FE[0x3];                                     // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_GetViewportSize_ReturnValue;              // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetViewportScale_ReturnValue;             // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45FF[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBTickerMessageInfo                   CallFunc_BP_GetMessageNum_ReturnValue;             // 0x0070(0x0030)()
	float                                         K2Node_Select_Default;                             // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4600[0x4];                                     // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00A8(0x0018)()
	int32                                         CallFunc_GetNextValidMesssageIndex_ReturnValue;    // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4601[0x4];                                     // 0x00C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBTickerMessageManager*                CallFunc_GetTickerMessageManager_ReturnValue;      // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TickerMessage_C_CheckNextMessage) == 0x000008, "Wrong alignment on TickerMessage_C_CheckNextMessage");
static_assert(sizeof(TickerMessage_C_CheckNextMessage) == 0x0000D0, "Wrong size on TickerMessage_C_CheckNextMessage");
static_assert(offsetof(TickerMessage_C_CheckNextMessage, NextMessage) == 0x000000, "Member 'TickerMessage_C_CheckNextMessage::NextMessage' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_CheckNextMessage, TickerMessageManager) == 0x000030, "Member 'TickerMessage_C_CheckNextMessage::TickerMessageManager' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_CheckNextMessage, NextMessageIndex) == 0x000038, "Member 'TickerMessage_C_CheckNextMessage::NextMessageIndex' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_CheckNextMessage, Temp_bool_Variable) == 0x00003C, "Member 'TickerMessage_C_CheckNextMessage::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_CheckNextMessage, Temp_float_Variable) == 0x000040, "Member 'TickerMessage_C_CheckNextMessage::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_CheckNextMessage, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000044, "Member 'TickerMessage_C_CheckNextMessage::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_CheckNextMessage, CallFunc_GetViewportSize_ReturnValue) == 0x000048, "Member 'TickerMessage_C_CheckNextMessage::CallFunc_GetViewportSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_CheckNextMessage, CallFunc_BreakVector2D_X) == 0x000050, "Member 'TickerMessage_C_CheckNextMessage::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_CheckNextMessage, CallFunc_BreakVector2D_Y) == 0x000054, "Member 'TickerMessage_C_CheckNextMessage::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_CheckNextMessage, CallFunc_GetViewportScale_ReturnValue) == 0x000058, "Member 'TickerMessage_C_CheckNextMessage::CallFunc_GetViewportScale_ReturnValue' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_CheckNextMessage, CallFunc_Divide_FloatFloat_ReturnValue) == 0x00005C, "Member 'TickerMessage_C_CheckNextMessage::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_CheckNextMessage, CallFunc_MakeVector2D_ReturnValue) == 0x000060, "Member 'TickerMessage_C_CheckNextMessage::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_CheckNextMessage, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000068, "Member 'TickerMessage_C_CheckNextMessage::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_CheckNextMessage, CallFunc_BP_GetMessageNum_ReturnValue) == 0x000070, "Member 'TickerMessage_C_CheckNextMessage::CallFunc_BP_GetMessageNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_CheckNextMessage, K2Node_Select_Default) == 0x0000A0, "Member 'TickerMessage_C_CheckNextMessage::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_CheckNextMessage, CallFunc_Conv_StringToText_ReturnValue) == 0x0000A8, "Member 'TickerMessage_C_CheckNextMessage::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_CheckNextMessage, CallFunc_GetNextValidMesssageIndex_ReturnValue) == 0x0000C0, "Member 'TickerMessage_C_CheckNextMessage::CallFunc_GetNextValidMesssageIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_CheckNextMessage, CallFunc_GetTickerMessageManager_ReturnValue) == 0x0000C8, "Member 'TickerMessage_C_CheckNextMessage::CallFunc_GetTickerMessageManager_ReturnValue' has a wrong offset!");

// Function TickerMessage.TickerMessage_C.OnCheckTime
// 0x0001 (0x0001 - 0x0000)
struct TickerMessage_C_OnCheckTime final
{
public:
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TickerMessage_C_OnCheckTime) == 0x000001, "Wrong alignment on TickerMessage_C_OnCheckTime");
static_assert(sizeof(TickerMessage_C_OnCheckTime) == 0x000001, "Wrong size on TickerMessage_C_OnCheckTime");
static_assert(offsetof(TickerMessage_C_OnCheckTime, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000000, "Member 'TickerMessage_C_OnCheckTime::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function TickerMessage.TickerMessage_C.DumpDebugInfo_Internal
// 0x02B0 (0x02B0 - 0x0000)
struct TickerMessage_C_DumpDebugInfo_Internal final
{
public:
	class FString                                 InTrigger;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0010(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0050(0x0018)()
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0068(0x0010)(ReferenceParm)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0078(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00B8(0x0018)()
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x00D0(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x00E0(0x0018)()
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;                // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue_1;              // 0x00F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4602[0x6];                                     // 0x00FA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x0100(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1; // 0x0110(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0120(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0138(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x0150(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_3;            // 0x0190(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_2;                          // 0x01D0(0x0010)(ReferenceParm)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_3;                          // 0x01E0(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_2;                     // 0x01F0(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue_3;                     // 0x0208(0x0018)()
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2; // 0x0220(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0230(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_4;            // 0x0248(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_4;                          // 0x0288(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_4;                     // 0x0298(0x0018)()
};
static_assert(alignof(TickerMessage_C_DumpDebugInfo_Internal) == 0x000008, "Wrong alignment on TickerMessage_C_DumpDebugInfo_Internal");
static_assert(sizeof(TickerMessage_C_DumpDebugInfo_Internal) == 0x0002B0, "Wrong size on TickerMessage_C_DumpDebugInfo_Internal");
static_assert(offsetof(TickerMessage_C_DumpDebugInfo_Internal, InTrigger) == 0x000000, "Member 'TickerMessage_C_DumpDebugInfo_Internal::InTrigger' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_DumpDebugInfo_Internal, K2Node_MakeStruct_FormatArgumentData) == 0x000010, "Member 'TickerMessage_C_DumpDebugInfo_Internal::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_DumpDebugInfo_Internal, CallFunc_Conv_StringToText_ReturnValue) == 0x000050, "Member 'TickerMessage_C_DumpDebugInfo_Internal::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_DumpDebugInfo_Internal, K2Node_MakeArray_Array) == 0x000068, "Member 'TickerMessage_C_DumpDebugInfo_Internal::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_DumpDebugInfo_Internal, K2Node_MakeStruct_FormatArgumentData_1) == 0x000078, "Member 'TickerMessage_C_DumpDebugInfo_Internal::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_DumpDebugInfo_Internal, CallFunc_Format_ReturnValue) == 0x0000B8, "Member 'TickerMessage_C_DumpDebugInfo_Internal::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_DumpDebugInfo_Internal, K2Node_MakeArray_Array_1) == 0x0000D0, "Member 'TickerMessage_C_DumpDebugInfo_Internal::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_DumpDebugInfo_Internal, CallFunc_Format_ReturnValue_1) == 0x0000E0, "Member 'TickerMessage_C_DumpDebugInfo_Internal::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_DumpDebugInfo_Internal, CallFunc_GetVisibility_ReturnValue) == 0x0000F8, "Member 'TickerMessage_C_DumpDebugInfo_Internal::CallFunc_GetVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_DumpDebugInfo_Internal, CallFunc_GetVisibility_ReturnValue_1) == 0x0000F9, "Member 'TickerMessage_C_DumpDebugInfo_Internal::CallFunc_GetVisibility_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_DumpDebugInfo_Internal, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x000100, "Member 'TickerMessage_C_DumpDebugInfo_Internal::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_DumpDebugInfo_Internal, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1) == 0x000110, "Member 'TickerMessage_C_DumpDebugInfo_Internal::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_DumpDebugInfo_Internal, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000120, "Member 'TickerMessage_C_DumpDebugInfo_Internal::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_DumpDebugInfo_Internal, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000138, "Member 'TickerMessage_C_DumpDebugInfo_Internal::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_DumpDebugInfo_Internal, K2Node_MakeStruct_FormatArgumentData_2) == 0x000150, "Member 'TickerMessage_C_DumpDebugInfo_Internal::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_DumpDebugInfo_Internal, K2Node_MakeStruct_FormatArgumentData_3) == 0x000190, "Member 'TickerMessage_C_DumpDebugInfo_Internal::K2Node_MakeStruct_FormatArgumentData_3' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_DumpDebugInfo_Internal, K2Node_MakeArray_Array_2) == 0x0001D0, "Member 'TickerMessage_C_DumpDebugInfo_Internal::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_DumpDebugInfo_Internal, K2Node_MakeArray_Array_3) == 0x0001E0, "Member 'TickerMessage_C_DumpDebugInfo_Internal::K2Node_MakeArray_Array_3' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_DumpDebugInfo_Internal, CallFunc_Format_ReturnValue_2) == 0x0001F0, "Member 'TickerMessage_C_DumpDebugInfo_Internal::CallFunc_Format_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_DumpDebugInfo_Internal, CallFunc_Format_ReturnValue_3) == 0x000208, "Member 'TickerMessage_C_DumpDebugInfo_Internal::CallFunc_Format_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_DumpDebugInfo_Internal, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2) == 0x000220, "Member 'TickerMessage_C_DumpDebugInfo_Internal::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_DumpDebugInfo_Internal, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000230, "Member 'TickerMessage_C_DumpDebugInfo_Internal::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_DumpDebugInfo_Internal, K2Node_MakeStruct_FormatArgumentData_4) == 0x000248, "Member 'TickerMessage_C_DumpDebugInfo_Internal::K2Node_MakeStruct_FormatArgumentData_4' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_DumpDebugInfo_Internal, K2Node_MakeArray_Array_4) == 0x000288, "Member 'TickerMessage_C_DumpDebugInfo_Internal::K2Node_MakeArray_Array_4' has a wrong offset!");
static_assert(offsetof(TickerMessage_C_DumpDebugInfo_Internal, CallFunc_Format_ReturnValue_4) == 0x000298, "Member 'TickerMessage_C_DumpDebugInfo_Internal::CallFunc_Format_ReturnValue_4' has a wrong offset!");

}

