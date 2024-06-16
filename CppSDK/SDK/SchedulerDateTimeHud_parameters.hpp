#pragma once

 

// Package: SchedulerDateTimeHud

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function SchedulerDateTimeHud.SchedulerDateTimeHud_C.ExecuteUbergraph_SchedulerDateTimeHud
// 0x0050 (0x0050 - 0x0000)
struct SchedulerDateTimeHud_C_ExecuteUbergraph_SchedulerDateTimeHud final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_6693[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0018(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDebugFunction_IsValid;                 // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6694[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDebugFunction*                       CallFunc_GetDebugFunction_ReturnValue;             // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBDebugMenuType                              K2Node_CustomEvent_MenuType;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6695[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_CustomEvent_RowName;                        // 0x0034(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsShow_IsShow;                            // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6696[0x2];                                     // 0x003E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(ESBDebugMenuType MenuType, class FName RowName)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0040(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(SchedulerDateTimeHud_C_ExecuteUbergraph_SchedulerDateTimeHud) == 0x000008, "Wrong alignment on SchedulerDateTimeHud_C_ExecuteUbergraph_SchedulerDateTimeHud");
static_assert(sizeof(SchedulerDateTimeHud_C_ExecuteUbergraph_SchedulerDateTimeHud) == 0x000050, "Wrong size on SchedulerDateTimeHud_C_ExecuteUbergraph_SchedulerDateTimeHud");
static_assert(offsetof(SchedulerDateTimeHud_C_ExecuteUbergraph_SchedulerDateTimeHud, EntryPoint) == 0x000000, "Member 'SchedulerDateTimeHud_C_ExecuteUbergraph_SchedulerDateTimeHud::EntryPoint' has a wrong offset!");
static_assert(offsetof(SchedulerDateTimeHud_C_ExecuteUbergraph_SchedulerDateTimeHud, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'SchedulerDateTimeHud_C_ExecuteUbergraph_SchedulerDateTimeHud::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(SchedulerDateTimeHud_C_ExecuteUbergraph_SchedulerDateTimeHud, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000018, "Member 'SchedulerDateTimeHud_C_ExecuteUbergraph_SchedulerDateTimeHud::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(SchedulerDateTimeHud_C_ExecuteUbergraph_SchedulerDateTimeHud, CallFunc_GetDebugFunction_IsValid) == 0x000020, "Member 'SchedulerDateTimeHud_C_ExecuteUbergraph_SchedulerDateTimeHud::CallFunc_GetDebugFunction_IsValid' has a wrong offset!");
static_assert(offsetof(SchedulerDateTimeHud_C_ExecuteUbergraph_SchedulerDateTimeHud, CallFunc_GetDebugFunction_ReturnValue) == 0x000028, "Member 'SchedulerDateTimeHud_C_ExecuteUbergraph_SchedulerDateTimeHud::CallFunc_GetDebugFunction_ReturnValue' has a wrong offset!");
static_assert(offsetof(SchedulerDateTimeHud_C_ExecuteUbergraph_SchedulerDateTimeHud, K2Node_CustomEvent_MenuType) == 0x000030, "Member 'SchedulerDateTimeHud_C_ExecuteUbergraph_SchedulerDateTimeHud::K2Node_CustomEvent_MenuType' has a wrong offset!");
static_assert(offsetof(SchedulerDateTimeHud_C_ExecuteUbergraph_SchedulerDateTimeHud, K2Node_CustomEvent_RowName) == 0x000034, "Member 'SchedulerDateTimeHud_C_ExecuteUbergraph_SchedulerDateTimeHud::K2Node_CustomEvent_RowName' has a wrong offset!");
static_assert(offsetof(SchedulerDateTimeHud_C_ExecuteUbergraph_SchedulerDateTimeHud, CallFunc_EqualEqual_NameName_ReturnValue) == 0x00003C, "Member 'SchedulerDateTimeHud_C_ExecuteUbergraph_SchedulerDateTimeHud::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(SchedulerDateTimeHud_C_ExecuteUbergraph_SchedulerDateTimeHud, CallFunc_IsShow_IsShow) == 0x00003D, "Member 'SchedulerDateTimeHud_C_ExecuteUbergraph_SchedulerDateTimeHud::CallFunc_IsShow_IsShow' has a wrong offset!");
static_assert(offsetof(SchedulerDateTimeHud_C_ExecuteUbergraph_SchedulerDateTimeHud, K2Node_CreateDelegate_OutputDelegate_1) == 0x000040, "Member 'SchedulerDateTimeHud_C_ExecuteUbergraph_SchedulerDateTimeHud::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");

// Function SchedulerDateTimeHud.SchedulerDateTimeHud_C.OnDebugValueChanged
// 0x000C (0x000C - 0x0000)
struct SchedulerDateTimeHud_C_OnDebugValueChanged final
{
public:
	ESBDebugMenuType                              MenuType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6697[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   RowName;                                           // 0x0004(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SchedulerDateTimeHud_C_OnDebugValueChanged) == 0x000004, "Wrong alignment on SchedulerDateTimeHud_C_OnDebugValueChanged");
static_assert(sizeof(SchedulerDateTimeHud_C_OnDebugValueChanged) == 0x00000C, "Wrong size on SchedulerDateTimeHud_C_OnDebugValueChanged");
static_assert(offsetof(SchedulerDateTimeHud_C_OnDebugValueChanged, MenuType) == 0x000000, "Member 'SchedulerDateTimeHud_C_OnDebugValueChanged::MenuType' has a wrong offset!");
static_assert(offsetof(SchedulerDateTimeHud_C_OnDebugValueChanged, RowName) == 0x000004, "Member 'SchedulerDateTimeHud_C_OnDebugValueChanged::RowName' has a wrong offset!");

// Function SchedulerDateTimeHud.SchedulerDateTimeHud_C.update_NowDate
// 0x00B0 (0x00B0 - 0x0000)
struct SchedulerDateTimeHud_C_Update_NowDate final
{
public:
	class USBPlayerVirtualDateTimeComponent*      InDateTimeComp;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetParam_ReturnValue;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetParam_ReturnValue_1;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0010(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0028(0x0018)()
	int32                                         CallFunc_GetParam_ReturnValue_2;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetParam_ReturnValue_3;                   // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_2;             // 0x0048(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_3;             // 0x0060(0x0018)()
	int32                                         CallFunc_GetParam_ReturnValue_4;                   // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetParam_ReturnValue_5;                   // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_4;             // 0x0080(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_5;             // 0x0098(0x0018)()
};
static_assert(alignof(SchedulerDateTimeHud_C_Update_NowDate) == 0x000008, "Wrong alignment on SchedulerDateTimeHud_C_Update_NowDate");
static_assert(sizeof(SchedulerDateTimeHud_C_Update_NowDate) == 0x0000B0, "Wrong size on SchedulerDateTimeHud_C_Update_NowDate");
static_assert(offsetof(SchedulerDateTimeHud_C_Update_NowDate, InDateTimeComp) == 0x000000, "Member 'SchedulerDateTimeHud_C_Update_NowDate::InDateTimeComp' has a wrong offset!");
static_assert(offsetof(SchedulerDateTimeHud_C_Update_NowDate, CallFunc_GetParam_ReturnValue) == 0x000008, "Member 'SchedulerDateTimeHud_C_Update_NowDate::CallFunc_GetParam_ReturnValue' has a wrong offset!");
static_assert(offsetof(SchedulerDateTimeHud_C_Update_NowDate, CallFunc_GetParam_ReturnValue_1) == 0x00000C, "Member 'SchedulerDateTimeHud_C_Update_NowDate::CallFunc_GetParam_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SchedulerDateTimeHud_C_Update_NowDate, CallFunc_Conv_IntToText_ReturnValue) == 0x000010, "Member 'SchedulerDateTimeHud_C_Update_NowDate::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(SchedulerDateTimeHud_C_Update_NowDate, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000028, "Member 'SchedulerDateTimeHud_C_Update_NowDate::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SchedulerDateTimeHud_C_Update_NowDate, CallFunc_GetParam_ReturnValue_2) == 0x000040, "Member 'SchedulerDateTimeHud_C_Update_NowDate::CallFunc_GetParam_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SchedulerDateTimeHud_C_Update_NowDate, CallFunc_GetParam_ReturnValue_3) == 0x000044, "Member 'SchedulerDateTimeHud_C_Update_NowDate::CallFunc_GetParam_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(SchedulerDateTimeHud_C_Update_NowDate, CallFunc_Conv_IntToText_ReturnValue_2) == 0x000048, "Member 'SchedulerDateTimeHud_C_Update_NowDate::CallFunc_Conv_IntToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SchedulerDateTimeHud_C_Update_NowDate, CallFunc_Conv_IntToText_ReturnValue_3) == 0x000060, "Member 'SchedulerDateTimeHud_C_Update_NowDate::CallFunc_Conv_IntToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(SchedulerDateTimeHud_C_Update_NowDate, CallFunc_GetParam_ReturnValue_4) == 0x000078, "Member 'SchedulerDateTimeHud_C_Update_NowDate::CallFunc_GetParam_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(SchedulerDateTimeHud_C_Update_NowDate, CallFunc_GetParam_ReturnValue_5) == 0x00007C, "Member 'SchedulerDateTimeHud_C_Update_NowDate::CallFunc_GetParam_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(SchedulerDateTimeHud_C_Update_NowDate, CallFunc_Conv_IntToText_ReturnValue_4) == 0x000080, "Member 'SchedulerDateTimeHud_C_Update_NowDate::CallFunc_Conv_IntToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(SchedulerDateTimeHud_C_Update_NowDate, CallFunc_Conv_IntToText_ReturnValue_5) == 0x000098, "Member 'SchedulerDateTimeHud_C_Update_NowDate::CallFunc_Conv_IntToText_ReturnValue_5' has a wrong offset!");

// Function SchedulerDateTimeHud.SchedulerDateTimeHud_C.update_VirtualDate
// 0x00B0 (0x00B0 - 0x0000)
struct SchedulerDateTimeHud_C_Update_VirtualDate final
{
public:
	class USBPlayerVirtualDateTimeComponent*      InDateTimeComp;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetParam_ReturnValue;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetParam_ReturnValue_1;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0010(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0028(0x0018)()
	int32                                         CallFunc_GetParam_ReturnValue_2;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetParam_ReturnValue_3;                   // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_2;             // 0x0048(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_3;             // 0x0060(0x0018)()
	int32                                         CallFunc_GetParam_ReturnValue_4;                   // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetParam_ReturnValue_5;                   // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_4;             // 0x0080(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_5;             // 0x0098(0x0018)()
};
static_assert(alignof(SchedulerDateTimeHud_C_Update_VirtualDate) == 0x000008, "Wrong alignment on SchedulerDateTimeHud_C_Update_VirtualDate");
static_assert(sizeof(SchedulerDateTimeHud_C_Update_VirtualDate) == 0x0000B0, "Wrong size on SchedulerDateTimeHud_C_Update_VirtualDate");
static_assert(offsetof(SchedulerDateTimeHud_C_Update_VirtualDate, InDateTimeComp) == 0x000000, "Member 'SchedulerDateTimeHud_C_Update_VirtualDate::InDateTimeComp' has a wrong offset!");
static_assert(offsetof(SchedulerDateTimeHud_C_Update_VirtualDate, CallFunc_GetParam_ReturnValue) == 0x000008, "Member 'SchedulerDateTimeHud_C_Update_VirtualDate::CallFunc_GetParam_ReturnValue' has a wrong offset!");
static_assert(offsetof(SchedulerDateTimeHud_C_Update_VirtualDate, CallFunc_GetParam_ReturnValue_1) == 0x00000C, "Member 'SchedulerDateTimeHud_C_Update_VirtualDate::CallFunc_GetParam_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SchedulerDateTimeHud_C_Update_VirtualDate, CallFunc_Conv_IntToText_ReturnValue) == 0x000010, "Member 'SchedulerDateTimeHud_C_Update_VirtualDate::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(SchedulerDateTimeHud_C_Update_VirtualDate, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000028, "Member 'SchedulerDateTimeHud_C_Update_VirtualDate::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SchedulerDateTimeHud_C_Update_VirtualDate, CallFunc_GetParam_ReturnValue_2) == 0x000040, "Member 'SchedulerDateTimeHud_C_Update_VirtualDate::CallFunc_GetParam_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SchedulerDateTimeHud_C_Update_VirtualDate, CallFunc_GetParam_ReturnValue_3) == 0x000044, "Member 'SchedulerDateTimeHud_C_Update_VirtualDate::CallFunc_GetParam_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(SchedulerDateTimeHud_C_Update_VirtualDate, CallFunc_Conv_IntToText_ReturnValue_2) == 0x000048, "Member 'SchedulerDateTimeHud_C_Update_VirtualDate::CallFunc_Conv_IntToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SchedulerDateTimeHud_C_Update_VirtualDate, CallFunc_Conv_IntToText_ReturnValue_3) == 0x000060, "Member 'SchedulerDateTimeHud_C_Update_VirtualDate::CallFunc_Conv_IntToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(SchedulerDateTimeHud_C_Update_VirtualDate, CallFunc_GetParam_ReturnValue_4) == 0x000078, "Member 'SchedulerDateTimeHud_C_Update_VirtualDate::CallFunc_GetParam_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(SchedulerDateTimeHud_C_Update_VirtualDate, CallFunc_GetParam_ReturnValue_5) == 0x00007C, "Member 'SchedulerDateTimeHud_C_Update_VirtualDate::CallFunc_GetParam_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(SchedulerDateTimeHud_C_Update_VirtualDate, CallFunc_Conv_IntToText_ReturnValue_4) == 0x000080, "Member 'SchedulerDateTimeHud_C_Update_VirtualDate::CallFunc_Conv_IntToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(SchedulerDateTimeHud_C_Update_VirtualDate, CallFunc_Conv_IntToText_ReturnValue_5) == 0x000098, "Member 'SchedulerDateTimeHud_C_Update_VirtualDate::CallFunc_Conv_IntToText_ReturnValue_5' has a wrong offset!");

// Function SchedulerDateTimeHud.SchedulerDateTimeHud_C.update_VirtualDateStart
// 0x00B8 (0x00B8 - 0x0000)
struct SchedulerDateTimeHud_C_Update_VirtualDateStart final
{
public:
	class USBPlayerVirtualDateTimeComponent*      InDateTimeComp;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetParam_ReturnValue;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetParam_ReturnValue_1;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0010(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0028(0x0018)()
	int32                                         CallFunc_GetParam_ReturnValue_2;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetParam_ReturnValue_3;                   // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_2;             // 0x0048(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_3;             // 0x0060(0x0018)()
	int32                                         CallFunc_GetParam_ReturnValue_4;                   // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6698[0x4];                                     // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_4;             // 0x0080(0x0018)()
	int32                                         CallFunc_GetParam_ReturnValue_5;                   // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6699[0x4];                                     // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_5;             // 0x00A0(0x0018)()
};
static_assert(alignof(SchedulerDateTimeHud_C_Update_VirtualDateStart) == 0x000008, "Wrong alignment on SchedulerDateTimeHud_C_Update_VirtualDateStart");
static_assert(sizeof(SchedulerDateTimeHud_C_Update_VirtualDateStart) == 0x0000B8, "Wrong size on SchedulerDateTimeHud_C_Update_VirtualDateStart");
static_assert(offsetof(SchedulerDateTimeHud_C_Update_VirtualDateStart, InDateTimeComp) == 0x000000, "Member 'SchedulerDateTimeHud_C_Update_VirtualDateStart::InDateTimeComp' has a wrong offset!");
static_assert(offsetof(SchedulerDateTimeHud_C_Update_VirtualDateStart, CallFunc_GetParam_ReturnValue) == 0x000008, "Member 'SchedulerDateTimeHud_C_Update_VirtualDateStart::CallFunc_GetParam_ReturnValue' has a wrong offset!");
static_assert(offsetof(SchedulerDateTimeHud_C_Update_VirtualDateStart, CallFunc_GetParam_ReturnValue_1) == 0x00000C, "Member 'SchedulerDateTimeHud_C_Update_VirtualDateStart::CallFunc_GetParam_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SchedulerDateTimeHud_C_Update_VirtualDateStart, CallFunc_Conv_IntToText_ReturnValue) == 0x000010, "Member 'SchedulerDateTimeHud_C_Update_VirtualDateStart::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(SchedulerDateTimeHud_C_Update_VirtualDateStart, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000028, "Member 'SchedulerDateTimeHud_C_Update_VirtualDateStart::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SchedulerDateTimeHud_C_Update_VirtualDateStart, CallFunc_GetParam_ReturnValue_2) == 0x000040, "Member 'SchedulerDateTimeHud_C_Update_VirtualDateStart::CallFunc_GetParam_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SchedulerDateTimeHud_C_Update_VirtualDateStart, CallFunc_GetParam_ReturnValue_3) == 0x000044, "Member 'SchedulerDateTimeHud_C_Update_VirtualDateStart::CallFunc_GetParam_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(SchedulerDateTimeHud_C_Update_VirtualDateStart, CallFunc_Conv_IntToText_ReturnValue_2) == 0x000048, "Member 'SchedulerDateTimeHud_C_Update_VirtualDateStart::CallFunc_Conv_IntToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SchedulerDateTimeHud_C_Update_VirtualDateStart, CallFunc_Conv_IntToText_ReturnValue_3) == 0x000060, "Member 'SchedulerDateTimeHud_C_Update_VirtualDateStart::CallFunc_Conv_IntToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(SchedulerDateTimeHud_C_Update_VirtualDateStart, CallFunc_GetParam_ReturnValue_4) == 0x000078, "Member 'SchedulerDateTimeHud_C_Update_VirtualDateStart::CallFunc_GetParam_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(SchedulerDateTimeHud_C_Update_VirtualDateStart, CallFunc_Conv_IntToText_ReturnValue_4) == 0x000080, "Member 'SchedulerDateTimeHud_C_Update_VirtualDateStart::CallFunc_Conv_IntToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(SchedulerDateTimeHud_C_Update_VirtualDateStart, CallFunc_GetParam_ReturnValue_5) == 0x000098, "Member 'SchedulerDateTimeHud_C_Update_VirtualDateStart::CallFunc_GetParam_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(SchedulerDateTimeHud_C_Update_VirtualDateStart, CallFunc_Conv_IntToText_ReturnValue_5) == 0x0000A0, "Member 'SchedulerDateTimeHud_C_Update_VirtualDateStart::CallFunc_Conv_IntToText_ReturnValue_5' has a wrong offset!");

// Function SchedulerDateTimeHud.SchedulerDateTimeHud_C.update_DateTime
// 0x0028 (0x0028 - 0x0000)
struct SchedulerDateTimeHud_C_Update_DateTime final
{
public:
	class USBPlayerVirtualDateTimeComponent*      LocalDateTimeComp;                                 // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBEventTermVirtualDateType                   CallFunc_GetType_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_669A[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State;               // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBEventTermVirtualDateType                   CallFunc_GetType_ReturnValue_1;                    // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;                // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SchedulerDateTimeHud_C_Update_DateTime) == 0x000008, "Wrong alignment on SchedulerDateTimeHud_C_Update_DateTime");
static_assert(sizeof(SchedulerDateTimeHud_C_Update_DateTime) == 0x000028, "Wrong size on SchedulerDateTimeHud_C_Update_DateTime");
static_assert(offsetof(SchedulerDateTimeHud_C_Update_DateTime, LocalDateTimeComp) == 0x000000, "Member 'SchedulerDateTimeHud_C_Update_DateTime::LocalDateTimeComp' has a wrong offset!");
static_assert(offsetof(SchedulerDateTimeHud_C_Update_DateTime, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'SchedulerDateTimeHud_C_Update_DateTime::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(SchedulerDateTimeHud_C_Update_DateTime, CallFunc_GetType_ReturnValue) == 0x000010, "Member 'SchedulerDateTimeHud_C_Update_DateTime::CallFunc_GetType_ReturnValue' has a wrong offset!");
static_assert(offsetof(SchedulerDateTimeHud_C_Update_DateTime, K2Node_DynamicCast_AsSBPlayer_State) == 0x000018, "Member 'SchedulerDateTimeHud_C_Update_DateTime::K2Node_DynamicCast_AsSBPlayer_State' has a wrong offset!");
static_assert(offsetof(SchedulerDateTimeHud_C_Update_DateTime, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'SchedulerDateTimeHud_C_Update_DateTime::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SchedulerDateTimeHud_C_Update_DateTime, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000021, "Member 'SchedulerDateTimeHud_C_Update_DateTime::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(SchedulerDateTimeHud_C_Update_DateTime, CallFunc_GetType_ReturnValue_1) == 0x000022, "Member 'SchedulerDateTimeHud_C_Update_DateTime::CallFunc_GetType_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SchedulerDateTimeHud_C_Update_DateTime, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000023, "Member 'SchedulerDateTimeHud_C_Update_DateTime::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(SchedulerDateTimeHud_C_Update_DateTime, CallFunc_GetVisibility_ReturnValue) == 0x000024, "Member 'SchedulerDateTimeHud_C_Update_DateTime::CallFunc_GetVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(SchedulerDateTimeHud_C_Update_DateTime, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000025, "Member 'SchedulerDateTimeHud_C_Update_DateTime::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");

// Function SchedulerDateTimeHud.SchedulerDateTimeHud_C.IsShow
// 0x0003 (0x0003 - 0x0000)
struct SchedulerDateTimeHud_C_IsShow final
{
public:
	bool                                          Param_IsShow;                                      // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SchedulerDateTimeHud_C_IsShow) == 0x000001, "Wrong alignment on SchedulerDateTimeHud_C_IsShow");
static_assert(sizeof(SchedulerDateTimeHud_C_IsShow) == 0x000003, "Wrong size on SchedulerDateTimeHud_C_IsShow");
static_assert(offsetof(SchedulerDateTimeHud_C_IsShow, Param_IsShow) == 0x000000, "Member 'SchedulerDateTimeHud_C_IsShow::Param_IsShow' has a wrong offset!");
static_assert(offsetof(SchedulerDateTimeHud_C_IsShow, CallFunc_GetVisibility_ReturnValue) == 0x000001, "Member 'SchedulerDateTimeHud_C_IsShow::CallFunc_GetVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(SchedulerDateTimeHud_C_IsShow, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000002, "Member 'SchedulerDateTimeHud_C_IsShow::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function SchedulerDateTimeHud.SchedulerDateTimeHud_C.update_OpenClose
// 0x0030 (0x0030 - 0x0000)
struct SchedulerDateTimeHud_C_Update_OpenClose final
{
public:
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsShow_IsShow;                            // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_669B[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBGameInstance*                        K2Node_DynamicCast_AsSBGame_Instance;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_669C[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBEventScheduler*                      CallFunc_GetEventScheduler_ReturnValue;            // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDebugSchedulerDateTimeDraw_ReturnValue; // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SchedulerDateTimeHud_C_Update_OpenClose) == 0x000008, "Wrong alignment on SchedulerDateTimeHud_C_Update_OpenClose");
static_assert(sizeof(SchedulerDateTimeHud_C_Update_OpenClose) == 0x000030, "Wrong size on SchedulerDateTimeHud_C_Update_OpenClose");
static_assert(offsetof(SchedulerDateTimeHud_C_Update_OpenClose, CallFunc_GetGameInstance_ReturnValue) == 0x000000, "Member 'SchedulerDateTimeHud_C_Update_OpenClose::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(SchedulerDateTimeHud_C_Update_OpenClose, CallFunc_IsShow_IsShow) == 0x000008, "Member 'SchedulerDateTimeHud_C_Update_OpenClose::CallFunc_IsShow_IsShow' has a wrong offset!");
static_assert(offsetof(SchedulerDateTimeHud_C_Update_OpenClose, K2Node_DynamicCast_AsSBGame_Instance) == 0x000010, "Member 'SchedulerDateTimeHud_C_Update_OpenClose::K2Node_DynamicCast_AsSBGame_Instance' has a wrong offset!");
static_assert(offsetof(SchedulerDateTimeHud_C_Update_OpenClose, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'SchedulerDateTimeHud_C_Update_OpenClose::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SchedulerDateTimeHud_C_Update_OpenClose, CallFunc_GetEventScheduler_ReturnValue) == 0x000020, "Member 'SchedulerDateTimeHud_C_Update_OpenClose::CallFunc_GetEventScheduler_ReturnValue' has a wrong offset!");
static_assert(offsetof(SchedulerDateTimeHud_C_Update_OpenClose, CallFunc_IsDebugSchedulerDateTimeDraw_ReturnValue) == 0x000028, "Member 'SchedulerDateTimeHud_C_Update_OpenClose::CallFunc_IsDebugSchedulerDateTimeDraw_ReturnValue' has a wrong offset!");

}

