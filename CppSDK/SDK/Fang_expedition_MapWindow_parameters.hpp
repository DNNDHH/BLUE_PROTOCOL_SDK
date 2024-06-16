#pragma once

 

// Package: Fang_expedition_MapWindow

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function Fang_expedition_MapWindow.Fang_expedition_MapWindow_C.OnMapIconClick__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct Fang_expedition_MapWindow_C_OnMapIconClick__DelegateSignature final
{
public:
	class FString                                 ID;                                                // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_MapWindow_C_OnMapIconClick__DelegateSignature) == 0x000008, "Wrong alignment on Fang_expedition_MapWindow_C_OnMapIconClick__DelegateSignature");
static_assert(sizeof(Fang_expedition_MapWindow_C_OnMapIconClick__DelegateSignature) == 0x000010, "Wrong size on Fang_expedition_MapWindow_C_OnMapIconClick__DelegateSignature");
static_assert(offsetof(Fang_expedition_MapWindow_C_OnMapIconClick__DelegateSignature, ID) == 0x000000, "Member 'Fang_expedition_MapWindow_C_OnMapIconClick__DelegateSignature::ID' has a wrong offset!");

// Function Fang_expedition_MapWindow.Fang_expedition_MapWindow_C.OnMapIconGroupClick__DelegateSignature
// 0x0058 (0x0058 - 0x0000)
struct Fang_expedition_MapWindow_C_OnMapIconGroupClick__DelegateSignature final
{
public:
	struct FSBFang_expeditionIconData             IconData;                                          // 0x0000(0x0058)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(Fang_expedition_MapWindow_C_OnMapIconGroupClick__DelegateSignature) == 0x000008, "Wrong alignment on Fang_expedition_MapWindow_C_OnMapIconGroupClick__DelegateSignature");
static_assert(sizeof(Fang_expedition_MapWindow_C_OnMapIconGroupClick__DelegateSignature) == 0x000058, "Wrong size on Fang_expedition_MapWindow_C_OnMapIconGroupClick__DelegateSignature");
static_assert(offsetof(Fang_expedition_MapWindow_C_OnMapIconGroupClick__DelegateSignature, IconData) == 0x000000, "Member 'Fang_expedition_MapWindow_C_OnMapIconGroupClick__DelegateSignature::IconData' has a wrong offset!");

// Function Fang_expedition_MapWindow.Fang_expedition_MapWindow_C.ExecuteUbergraph_Fang_expedition_MapWindow
// 0x0020 (0x0020 - 0x0000)
struct Fang_expedition_MapWindow_C_ExecuteUbergraph_Fang_expedition_MapWindow final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6066[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_id;                             // 0x0008(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDebug_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDebug_ReturnValue_1;                    // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6067[0x1];                                     // 0x001B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_Index;                          // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_MapWindow_C_ExecuteUbergraph_Fang_expedition_MapWindow) == 0x000008, "Wrong alignment on Fang_expedition_MapWindow_C_ExecuteUbergraph_Fang_expedition_MapWindow");
static_assert(sizeof(Fang_expedition_MapWindow_C_ExecuteUbergraph_Fang_expedition_MapWindow) == 0x000020, "Wrong size on Fang_expedition_MapWindow_C_ExecuteUbergraph_Fang_expedition_MapWindow");
static_assert(offsetof(Fang_expedition_MapWindow_C_ExecuteUbergraph_Fang_expedition_MapWindow, EntryPoint) == 0x000000, "Member 'Fang_expedition_MapWindow_C_ExecuteUbergraph_Fang_expedition_MapWindow::EntryPoint' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_ExecuteUbergraph_Fang_expedition_MapWindow, K2Node_CustomEvent_id) == 0x000008, "Member 'Fang_expedition_MapWindow_C_ExecuteUbergraph_Fang_expedition_MapWindow::K2Node_CustomEvent_id' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_ExecuteUbergraph_Fang_expedition_MapWindow, CallFunc_IsDebug_ReturnValue) == 0x000018, "Member 'Fang_expedition_MapWindow_C_ExecuteUbergraph_Fang_expedition_MapWindow::CallFunc_IsDebug_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_ExecuteUbergraph_Fang_expedition_MapWindow, CallFunc_IsDebug_ReturnValue_1) == 0x000019, "Member 'Fang_expedition_MapWindow_C_ExecuteUbergraph_Fang_expedition_MapWindow::CallFunc_IsDebug_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_ExecuteUbergraph_Fang_expedition_MapWindow, CallFunc_Not_PreBool_ReturnValue) == 0x00001A, "Member 'Fang_expedition_MapWindow_C_ExecuteUbergraph_Fang_expedition_MapWindow::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_ExecuteUbergraph_Fang_expedition_MapWindow, K2Node_CustomEvent_Index) == 0x00001C, "Member 'Fang_expedition_MapWindow_C_ExecuteUbergraph_Fang_expedition_MapWindow::K2Node_CustomEvent_Index' has a wrong offset!");

// Function Fang_expedition_MapWindow.Fang_expedition_MapWindow_C.IconGroupClick
// 0x0004 (0x0004 - 0x0000)
struct Fang_expedition_MapWindow_C_IconGroupClick final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_MapWindow_C_IconGroupClick) == 0x000004, "Wrong alignment on Fang_expedition_MapWindow_C_IconGroupClick");
static_assert(sizeof(Fang_expedition_MapWindow_C_IconGroupClick) == 0x000004, "Wrong size on Fang_expedition_MapWindow_C_IconGroupClick");
static_assert(offsetof(Fang_expedition_MapWindow_C_IconGroupClick, Param_Index) == 0x000000, "Member 'Fang_expedition_MapWindow_C_IconGroupClick::Param_Index' has a wrong offset!");

// Function Fang_expedition_MapWindow.Fang_expedition_MapWindow_C.IconClickWork
// 0x0010 (0x0010 - 0x0000)
struct Fang_expedition_MapWindow_C_IconClickWork final
{
public:
	class FString                                 ID;                                                // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_MapWindow_C_IconClickWork) == 0x000008, "Wrong alignment on Fang_expedition_MapWindow_C_IconClickWork");
static_assert(sizeof(Fang_expedition_MapWindow_C_IconClickWork) == 0x000010, "Wrong size on Fang_expedition_MapWindow_C_IconClickWork");
static_assert(offsetof(Fang_expedition_MapWindow_C_IconClickWork, ID) == 0x000000, "Member 'Fang_expedition_MapWindow_C_IconClickWork::ID' has a wrong offset!");

// Function Fang_expedition_MapWindow.Fang_expedition_MapWindow_C.SetMapId
// 0x0040 (0x0040 - 0x0000)
struct Fang_expedition_MapWindow_C_SetMapId final
{
public:
	class FString                                 MapId;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetZoneShortNameByZoneId_ReturnValue;     // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0028(0x0018)()
};
static_assert(alignof(Fang_expedition_MapWindow_C_SetMapId) == 0x000008, "Wrong alignment on Fang_expedition_MapWindow_C_SetMapId");
static_assert(sizeof(Fang_expedition_MapWindow_C_SetMapId) == 0x000040, "Wrong size on Fang_expedition_MapWindow_C_SetMapId");
static_assert(offsetof(Fang_expedition_MapWindow_C_SetMapId, MapId) == 0x000000, "Member 'Fang_expedition_MapWindow_C_SetMapId::MapId' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_SetMapId, CallFunc_Conv_StringToName_ReturnValue) == 0x000010, "Member 'Fang_expedition_MapWindow_C_SetMapId::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_SetMapId, CallFunc_GetZoneShortNameByZoneId_ReturnValue) == 0x000018, "Member 'Fang_expedition_MapWindow_C_SetMapId::CallFunc_GetZoneShortNameByZoneId_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_SetMapId, CallFunc_Conv_StringToText_ReturnValue) == 0x000028, "Member 'Fang_expedition_MapWindow_C_SetMapId::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function Fang_expedition_MapWindow.Fang_expedition_MapWindow_C.SetExpeditionData
// 0x0378 (0x0378 - 0x0000)
struct Fang_expedition_MapWindow_C_SetExpeditionData final
{
public:
	class FString                                 Field;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FSBFang_expeditionData                 ExpeditionData;                                    // 0x0010(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ESBFang_expeditionStatus                      ExpeditionStatus;                                  // 0x0048(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6068[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 WorkPlayId;                                        // 0x0050(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class UFang_expeditionAreaIconTooltip_C*      ToolTip;                                           // 0x0060(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBFang_expeditionIconData             WorkIconData;                                      // 0x0068(0x0058)(Edit, BlueprintVisible)
	TArray<class FString>                         PlayAreaIds;                                       // 0x00C0(0x0010)(Edit, BlueprintVisible)
	class UFang_expedition_MapIcon_C*             Icon;                                              // 0x00D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LoopEnd;                                           // 0x00D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBFang_expeditionIconData>     CallFunc_GetExpeditionFieldIconData_OutData;       // 0x00E0(0x0010)(ReferenceParm)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x00F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6069[0x3];                                     // 0x00F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_606A[0x3];                                     // 0x00FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_606B[0x4];                                     // 0x0104(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFang_expeditionAreaIconTooltip_C*      CallFunc_Create_ReturnValue;                       // 0x0108(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable_1;        // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_606C[0x3];                                     // 0x0111(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x011C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_606D[0x3];                                     // 0x011D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0124(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_606E[0x3];                                     // 0x0125(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_606F[0x7];                                     // 0x0141(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBFang_expeditionPlayData             CallFunc_Array_Get_Item;                           // 0x0148(0x0120)()
	struct FSBFang_expeditionAreaData             CallFunc_Array_Get_Item_1;                         // 0x0268(0x00A8)()
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0310(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0311(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6070[0x2];                                     // 0x0312(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0314(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0318(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x031C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x031D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x031E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x031F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FString                                 CallFunc_Array_Get_Item_2;                         // 0x0320(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x0330(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6071[0x3];                                     // 0x0331(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0334(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x0338(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6072[0x3];                                     // 0x0339(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x033C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFang_expedition_MapIcon_C*             CallFunc_Create_ReturnValue_1;                     // 0x0340(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 Index)>                  K2Node_CreateDelegate_OutputDelegate;              // 0x0348(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(const class FString& ID)>      K2Node_CreateDelegate_OutputDelegate_1;            // 0x0358(0x0010)(ZeroConstructor, NoDestructor)
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x0368(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue_2;          // 0x0370(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fang_expedition_MapWindow_C_SetExpeditionData) == 0x000008, "Wrong alignment on Fang_expedition_MapWindow_C_SetExpeditionData");
static_assert(sizeof(Fang_expedition_MapWindow_C_SetExpeditionData) == 0x000378, "Wrong size on Fang_expedition_MapWindow_C_SetExpeditionData");
static_assert(offsetof(Fang_expedition_MapWindow_C_SetExpeditionData, Field) == 0x000000, "Member 'Fang_expedition_MapWindow_C_SetExpeditionData::Field' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_SetExpeditionData, ExpeditionData) == 0x000010, "Member 'Fang_expedition_MapWindow_C_SetExpeditionData::ExpeditionData' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_SetExpeditionData, ExpeditionStatus) == 0x000048, "Member 'Fang_expedition_MapWindow_C_SetExpeditionData::ExpeditionStatus' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_SetExpeditionData, WorkPlayId) == 0x000050, "Member 'Fang_expedition_MapWindow_C_SetExpeditionData::WorkPlayId' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_SetExpeditionData, ToolTip) == 0x000060, "Member 'Fang_expedition_MapWindow_C_SetExpeditionData::ToolTip' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_SetExpeditionData, WorkIconData) == 0x000068, "Member 'Fang_expedition_MapWindow_C_SetExpeditionData::WorkIconData' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_SetExpeditionData, PlayAreaIds) == 0x0000C0, "Member 'Fang_expedition_MapWindow_C_SetExpeditionData::PlayAreaIds' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_SetExpeditionData, Icon) == 0x0000D0, "Member 'Fang_expedition_MapWindow_C_SetExpeditionData::Icon' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_SetExpeditionData, LoopEnd) == 0x0000D8, "Member 'Fang_expedition_MapWindow_C_SetExpeditionData::LoopEnd' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_SetExpeditionData, Temp_int_Loop_Counter_Variable) == 0x0000DC, "Member 'Fang_expedition_MapWindow_C_SetExpeditionData::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_SetExpeditionData, CallFunc_GetExpeditionFieldIconData_OutData) == 0x0000E0, "Member 'Fang_expedition_MapWindow_C_SetExpeditionData::CallFunc_GetExpeditionFieldIconData_OutData' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_SetExpeditionData, CallFunc_Add_IntInt_ReturnValue) == 0x0000F0, "Member 'Fang_expedition_MapWindow_C_SetExpeditionData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_SetExpeditionData, Temp_bool_True_if_break_was_hit_Variable) == 0x0000F4, "Member 'Fang_expedition_MapWindow_C_SetExpeditionData::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_SetExpeditionData, Temp_int_Array_Index_Variable) == 0x0000F8, "Member 'Fang_expedition_MapWindow_C_SetExpeditionData::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_SetExpeditionData, CallFunc_Not_PreBool_ReturnValue) == 0x0000FC, "Member 'Fang_expedition_MapWindow_C_SetExpeditionData::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_SetExpeditionData, Temp_int_Array_Index_Variable_1) == 0x000100, "Member 'Fang_expedition_MapWindow_C_SetExpeditionData::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_SetExpeditionData, CallFunc_Create_ReturnValue) == 0x000108, "Member 'Fang_expedition_MapWindow_C_SetExpeditionData::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_SetExpeditionData, Temp_bool_True_if_break_was_hit_Variable_1) == 0x000110, "Member 'Fang_expedition_MapWindow_C_SetExpeditionData::Temp_bool_True_if_break_was_hit_Variable_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_SetExpeditionData, Temp_int_Loop_Counter_Variable_1) == 0x000114, "Member 'Fang_expedition_MapWindow_C_SetExpeditionData::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_SetExpeditionData, CallFunc_Add_IntInt_ReturnValue_1) == 0x000118, "Member 'Fang_expedition_MapWindow_C_SetExpeditionData::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_SetExpeditionData, CallFunc_Not_PreBool_ReturnValue_1) == 0x00011C, "Member 'Fang_expedition_MapWindow_C_SetExpeditionData::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_SetExpeditionData, Temp_int_Array_Index_Variable_2) == 0x000120, "Member 'Fang_expedition_MapWindow_C_SetExpeditionData::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_SetExpeditionData, CallFunc_IsEmpty_ReturnValue) == 0x000124, "Member 'Fang_expedition_MapWindow_C_SetExpeditionData::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_SetExpeditionData, Temp_int_Variable) == 0x000128, "Member 'Fang_expedition_MapWindow_C_SetExpeditionData::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_SetExpeditionData, CallFunc_Add_IntInt_ReturnValue_2) == 0x00012C, "Member 'Fang_expedition_MapWindow_C_SetExpeditionData::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_SetExpeditionData, CallFunc_Array_Add_ReturnValue) == 0x000130, "Member 'Fang_expedition_MapWindow_C_SetExpeditionData::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_SetExpeditionData, Temp_int_Loop_Counter_Variable_2) == 0x000134, "Member 'Fang_expedition_MapWindow_C_SetExpeditionData::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_SetExpeditionData, CallFunc_Array_LastIndex_ReturnValue) == 0x000138, "Member 'Fang_expedition_MapWindow_C_SetExpeditionData::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_SetExpeditionData, CallFunc_Add_IntInt_ReturnValue_3) == 0x00013C, "Member 'Fang_expedition_MapWindow_C_SetExpeditionData::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_SetExpeditionData, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000140, "Member 'Fang_expedition_MapWindow_C_SetExpeditionData::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_SetExpeditionData, CallFunc_Array_Get_Item) == 0x000148, "Member 'Fang_expedition_MapWindow_C_SetExpeditionData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_SetExpeditionData, CallFunc_Array_Get_Item_1) == 0x000268, "Member 'Fang_expedition_MapWindow_C_SetExpeditionData::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_SetExpeditionData, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000310, "Member 'Fang_expedition_MapWindow_C_SetExpeditionData::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_SetExpeditionData, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000311, "Member 'Fang_expedition_MapWindow_C_SetExpeditionData::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_SetExpeditionData, CallFunc_Array_Length_ReturnValue) == 0x000314, "Member 'Fang_expedition_MapWindow_C_SetExpeditionData::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_SetExpeditionData, CallFunc_Array_Length_ReturnValue_1) == 0x000318, "Member 'Fang_expedition_MapWindow_C_SetExpeditionData::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_SetExpeditionData, CallFunc_Less_IntInt_ReturnValue) == 0x00031C, "Member 'Fang_expedition_MapWindow_C_SetExpeditionData::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_SetExpeditionData, CallFunc_Less_IntInt_ReturnValue_1) == 0x00031D, "Member 'Fang_expedition_MapWindow_C_SetExpeditionData::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_SetExpeditionData, CallFunc_BooleanAND_ReturnValue) == 0x00031E, "Member 'Fang_expedition_MapWindow_C_SetExpeditionData::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_SetExpeditionData, CallFunc_BooleanAND_ReturnValue_1) == 0x00031F, "Member 'Fang_expedition_MapWindow_C_SetExpeditionData::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_SetExpeditionData, CallFunc_Array_Get_Item_2) == 0x000320, "Member 'Fang_expedition_MapWindow_C_SetExpeditionData::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_SetExpeditionData, CallFunc_EqualEqual_StrStr_ReturnValue_1) == 0x000330, "Member 'Fang_expedition_MapWindow_C_SetExpeditionData::CallFunc_EqualEqual_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_SetExpeditionData, CallFunc_Array_Length_ReturnValue_2) == 0x000334, "Member 'Fang_expedition_MapWindow_C_SetExpeditionData::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_SetExpeditionData, CallFunc_Less_IntInt_ReturnValue_2) == 0x000338, "Member 'Fang_expedition_MapWindow_C_SetExpeditionData::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_SetExpeditionData, CallFunc_Array_Add_ReturnValue_1) == 0x00033C, "Member 'Fang_expedition_MapWindow_C_SetExpeditionData::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_SetExpeditionData, CallFunc_Create_ReturnValue_1) == 0x000340, "Member 'Fang_expedition_MapWindow_C_SetExpeditionData::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_SetExpeditionData, K2Node_CreateDelegate_OutputDelegate) == 0x000348, "Member 'Fang_expedition_MapWindow_C_SetExpeditionData::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_SetExpeditionData, K2Node_CreateDelegate_OutputDelegate_1) == 0x000358, "Member 'Fang_expedition_MapWindow_C_SetExpeditionData::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_SetExpeditionData, CallFunc_AddChildToCanvas_ReturnValue) == 0x000368, "Member 'Fang_expedition_MapWindow_C_SetExpeditionData::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_SetExpeditionData, CallFunc_EqualEqual_StrStr_ReturnValue_2) == 0x000370, "Member 'Fang_expedition_MapWindow_C_SetExpeditionData::CallFunc_EqualEqual_StrStr_ReturnValue_2' has a wrong offset!");

// Function Fang_expedition_MapWindow.Fang_expedition_MapWindow_C.ClearIcon
// 0x0020 (0x0020 - 0x0000)
struct Fang_expedition_MapWindow_C_ClearIcon final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFang_expedition_MapIcon_C*             CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fang_expedition_MapWindow_C_ClearIcon) == 0x000008, "Wrong alignment on Fang_expedition_MapWindow_C_ClearIcon");
static_assert(sizeof(Fang_expedition_MapWindow_C_ClearIcon) == 0x000020, "Wrong size on Fang_expedition_MapWindow_C_ClearIcon");
static_assert(offsetof(Fang_expedition_MapWindow_C_ClearIcon, Temp_int_Array_Index_Variable) == 0x000000, "Member 'Fang_expedition_MapWindow_C_ClearIcon::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_ClearIcon, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'Fang_expedition_MapWindow_C_ClearIcon::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_ClearIcon, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'Fang_expedition_MapWindow_C_ClearIcon::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_ClearIcon, CallFunc_Array_Length_ReturnValue) == 0x00000C, "Member 'Fang_expedition_MapWindow_C_ClearIcon::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_ClearIcon, CallFunc_Array_Get_Item) == 0x000010, "Member 'Fang_expedition_MapWindow_C_ClearIcon::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_ClearIcon, CallFunc_Less_IntInt_ReturnValue) == 0x000018, "Member 'Fang_expedition_MapWindow_C_ClearIcon::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function Fang_expedition_MapWindow.Fang_expedition_MapWindow_C.SetIconPositionData
// 0x0010 (0x0010 - 0x0000)
struct Fang_expedition_MapWindow_C_SetIconPositionData final
{
public:
	class UCanvasPanelSlot*                       CanvasSlot;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Position;                                          // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_MapWindow_C_SetIconPositionData) == 0x000008, "Wrong alignment on Fang_expedition_MapWindow_C_SetIconPositionData");
static_assert(sizeof(Fang_expedition_MapWindow_C_SetIconPositionData) == 0x000010, "Wrong size on Fang_expedition_MapWindow_C_SetIconPositionData");
static_assert(offsetof(Fang_expedition_MapWindow_C_SetIconPositionData, CanvasSlot) == 0x000000, "Member 'Fang_expedition_MapWindow_C_SetIconPositionData::CanvasSlot' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_SetIconPositionData, Position) == 0x000008, "Member 'Fang_expedition_MapWindow_C_SetIconPositionData::Position' has a wrong offset!");

// Function Fang_expedition_MapWindow.Fang_expedition_MapWindow_C.SetCloudPosition
// 0x00B8 (0x00B8 - 0x0000)
struct Fang_expedition_MapWindow_C_SetCloudPosition final
{
public:
	class FString                                 TraverseName;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CanvasSlot;                                        // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              WidgetSize;                                        // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetDesiredSize_ReturnValue;               // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBTraversePointDataTable              CallFunc_GetDataTableRowFromName_OutRow;           // 0x0030(0x0048)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6073[0x3];                                     // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_Multiply_Vector2DFloat_ReturnValue;       // 0x007C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Add_Vector2DVector2D_ReturnValue;         // 0x0084(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_1;                        // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_1;                        // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_1;          // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x00AC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_MapWindow_C_SetCloudPosition) == 0x000008, "Wrong alignment on Fang_expedition_MapWindow_C_SetCloudPosition");
static_assert(sizeof(Fang_expedition_MapWindow_C_SetCloudPosition) == 0x0000B8, "Wrong size on Fang_expedition_MapWindow_C_SetCloudPosition");
static_assert(offsetof(Fang_expedition_MapWindow_C_SetCloudPosition, TraverseName) == 0x000000, "Member 'Fang_expedition_MapWindow_C_SetCloudPosition::TraverseName' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_SetCloudPosition, CanvasSlot) == 0x000010, "Member 'Fang_expedition_MapWindow_C_SetCloudPosition::CanvasSlot' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_SetCloudPosition, WidgetSize) == 0x000018, "Member 'Fang_expedition_MapWindow_C_SetCloudPosition::WidgetSize' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_SetCloudPosition, CallFunc_Conv_StringToName_ReturnValue) == 0x000020, "Member 'Fang_expedition_MapWindow_C_SetCloudPosition::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_SetCloudPosition, CallFunc_GetDesiredSize_ReturnValue) == 0x000028, "Member 'Fang_expedition_MapWindow_C_SetCloudPosition::CallFunc_GetDesiredSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_SetCloudPosition, CallFunc_GetDataTableRowFromName_OutRow) == 0x000030, "Member 'Fang_expedition_MapWindow_C_SetCloudPosition::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_SetCloudPosition, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000078, "Member 'Fang_expedition_MapWindow_C_SetCloudPosition::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_SetCloudPosition, CallFunc_Multiply_Vector2DFloat_ReturnValue) == 0x00007C, "Member 'Fang_expedition_MapWindow_C_SetCloudPosition::CallFunc_Multiply_Vector2DFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_SetCloudPosition, CallFunc_Add_Vector2DVector2D_ReturnValue) == 0x000084, "Member 'Fang_expedition_MapWindow_C_SetCloudPosition::CallFunc_Add_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_SetCloudPosition, CallFunc_BreakVector2D_X) == 0x00008C, "Member 'Fang_expedition_MapWindow_C_SetCloudPosition::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_SetCloudPosition, CallFunc_BreakVector2D_Y) == 0x000090, "Member 'Fang_expedition_MapWindow_C_SetCloudPosition::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_SetCloudPosition, CallFunc_BreakVector2D_X_1) == 0x000094, "Member 'Fang_expedition_MapWindow_C_SetCloudPosition::CallFunc_BreakVector2D_X_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_SetCloudPosition, CallFunc_BreakVector2D_Y_1) == 0x000098, "Member 'Fang_expedition_MapWindow_C_SetCloudPosition::CallFunc_BreakVector2D_Y_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_SetCloudPosition, CallFunc_Divide_FloatFloat_ReturnValue) == 0x00009C, "Member 'Fang_expedition_MapWindow_C_SetCloudPosition::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_SetCloudPosition, CallFunc_Divide_FloatFloat_ReturnValue_1) == 0x0000A0, "Member 'Fang_expedition_MapWindow_C_SetCloudPosition::CallFunc_Divide_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_SetCloudPosition, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x0000A4, "Member 'Fang_expedition_MapWindow_C_SetCloudPosition::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_SetCloudPosition, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x0000A8, "Member 'Fang_expedition_MapWindow_C_SetCloudPosition::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_SetCloudPosition, CallFunc_MakeVector2D_ReturnValue) == 0x0000AC, "Member 'Fang_expedition_MapWindow_C_SetCloudPosition::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");

// Function Fang_expedition_MapWindow.Fang_expedition_MapWindow_C.UpdateMapIconNewMark
// 0x0188 (0x0188 - 0x0000)
struct Fang_expedition_MapWindow_C_UpdateMapIconNewMark final
{
public:
	class FString                                 InId;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UFang_expedition_MapIcon_C*             MapIcon;                                           // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsFind;                                            // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6074[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         FindIndex;                                         // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_3;                  // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_3;                   // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFang_expedition_MapIcon_C*             CallFunc_Array_Get_Item;                           // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetIconId_OutParam;                       // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6075[0x6];                                     // 0x0062(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBFang_expeditionIconData             CallFunc_Array_Get_Item_1;                         // 0x0088(0x0058)()
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6076[0x7];                                     // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Array_Get_Item_2;                         // 0x00E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x00FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00FD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsReadedID_IsValid;                       // 0x00FE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsReadedID_ReturnValue;                   // 0x00FF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6077[0x3];                                     // 0x0101(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBFang_expeditionIconData             CallFunc_Array_Get_Item_3;                         // 0x0108(0x0058)()
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6078[0x7];                                     // 0x0161(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Array_Get_Item_4;                         // 0x0168(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x017C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_3;                // 0x017D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6079[0x2];                                     // 0x017E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_4;               // 0x0180(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0184(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fang_expedition_MapWindow_C_UpdateMapIconNewMark) == 0x000008, "Wrong alignment on Fang_expedition_MapWindow_C_UpdateMapIconNewMark");
static_assert(sizeof(Fang_expedition_MapWindow_C_UpdateMapIconNewMark) == 0x000188, "Wrong size on Fang_expedition_MapWindow_C_UpdateMapIconNewMark");
static_assert(offsetof(Fang_expedition_MapWindow_C_UpdateMapIconNewMark, InId) == 0x000000, "Member 'Fang_expedition_MapWindow_C_UpdateMapIconNewMark::InId' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_UpdateMapIconNewMark, MapIcon) == 0x000010, "Member 'Fang_expedition_MapWindow_C_UpdateMapIconNewMark::MapIcon' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_UpdateMapIconNewMark, IsFind) == 0x000018, "Member 'Fang_expedition_MapWindow_C_UpdateMapIconNewMark::IsFind' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_UpdateMapIconNewMark, FindIndex) == 0x00001C, "Member 'Fang_expedition_MapWindow_C_UpdateMapIconNewMark::FindIndex' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_UpdateMapIconNewMark, Temp_int_Array_Index_Variable) == 0x000020, "Member 'Fang_expedition_MapWindow_C_UpdateMapIconNewMark::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_UpdateMapIconNewMark, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'Fang_expedition_MapWindow_C_UpdateMapIconNewMark::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_UpdateMapIconNewMark, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'Fang_expedition_MapWindow_C_UpdateMapIconNewMark::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_UpdateMapIconNewMark, Temp_int_Loop_Counter_Variable_1) == 0x00002C, "Member 'Fang_expedition_MapWindow_C_UpdateMapIconNewMark::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_UpdateMapIconNewMark, Temp_int_Loop_Counter_Variable_2) == 0x000030, "Member 'Fang_expedition_MapWindow_C_UpdateMapIconNewMark::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_UpdateMapIconNewMark, CallFunc_Add_IntInt_ReturnValue_1) == 0x000034, "Member 'Fang_expedition_MapWindow_C_UpdateMapIconNewMark::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_UpdateMapIconNewMark, CallFunc_Add_IntInt_ReturnValue_2) == 0x000038, "Member 'Fang_expedition_MapWindow_C_UpdateMapIconNewMark::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_UpdateMapIconNewMark, Temp_int_Array_Index_Variable_1) == 0x00003C, "Member 'Fang_expedition_MapWindow_C_UpdateMapIconNewMark::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_UpdateMapIconNewMark, Temp_int_Array_Index_Variable_2) == 0x000040, "Member 'Fang_expedition_MapWindow_C_UpdateMapIconNewMark::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_UpdateMapIconNewMark, Temp_int_Loop_Counter_Variable_3) == 0x000044, "Member 'Fang_expedition_MapWindow_C_UpdateMapIconNewMark::Temp_int_Loop_Counter_Variable_3' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_UpdateMapIconNewMark, CallFunc_Add_IntInt_ReturnValue_3) == 0x000048, "Member 'Fang_expedition_MapWindow_C_UpdateMapIconNewMark::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_UpdateMapIconNewMark, Temp_int_Array_Index_Variable_3) == 0x00004C, "Member 'Fang_expedition_MapWindow_C_UpdateMapIconNewMark::Temp_int_Array_Index_Variable_3' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_UpdateMapIconNewMark, CallFunc_Array_Get_Item) == 0x000050, "Member 'Fang_expedition_MapWindow_C_UpdateMapIconNewMark::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_UpdateMapIconNewMark, CallFunc_GetIconId_OutParam) == 0x000058, "Member 'Fang_expedition_MapWindow_C_UpdateMapIconNewMark::CallFunc_GetIconId_OutParam' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_UpdateMapIconNewMark, CallFunc_Array_Length_ReturnValue) == 0x00005C, "Member 'Fang_expedition_MapWindow_C_UpdateMapIconNewMark::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_UpdateMapIconNewMark, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000060, "Member 'Fang_expedition_MapWindow_C_UpdateMapIconNewMark::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_UpdateMapIconNewMark, CallFunc_Less_IntInt_ReturnValue) == 0x000061, "Member 'Fang_expedition_MapWindow_C_UpdateMapIconNewMark::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_UpdateMapIconNewMark, CallFunc_GetCharacterId_ReturnValue) == 0x000068, "Member 'Fang_expedition_MapWindow_C_UpdateMapIconNewMark::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_UpdateMapIconNewMark, CallFunc_GetPlayerId_ReturnValue) == 0x000078, "Member 'Fang_expedition_MapWindow_C_UpdateMapIconNewMark::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_UpdateMapIconNewMark, CallFunc_Array_Get_Item_1) == 0x000088, "Member 'Fang_expedition_MapWindow_C_UpdateMapIconNewMark::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_UpdateMapIconNewMark, CallFunc_NotEqual_IntInt_ReturnValue) == 0x0000E0, "Member 'Fang_expedition_MapWindow_C_UpdateMapIconNewMark::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_UpdateMapIconNewMark, CallFunc_Array_Get_Item_2) == 0x0000E8, "Member 'Fang_expedition_MapWindow_C_UpdateMapIconNewMark::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_UpdateMapIconNewMark, CallFunc_Array_Length_ReturnValue_1) == 0x0000F8, "Member 'Fang_expedition_MapWindow_C_UpdateMapIconNewMark::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_UpdateMapIconNewMark, CallFunc_NotEqual_StrStr_ReturnValue) == 0x0000FC, "Member 'Fang_expedition_MapWindow_C_UpdateMapIconNewMark::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_UpdateMapIconNewMark, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000FD, "Member 'Fang_expedition_MapWindow_C_UpdateMapIconNewMark::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_UpdateMapIconNewMark, CallFunc_IsReadedID_IsValid) == 0x0000FE, "Member 'Fang_expedition_MapWindow_C_UpdateMapIconNewMark::CallFunc_IsReadedID_IsValid' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_UpdateMapIconNewMark, CallFunc_IsReadedID_ReturnValue) == 0x0000FF, "Member 'Fang_expedition_MapWindow_C_UpdateMapIconNewMark::CallFunc_IsReadedID_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_UpdateMapIconNewMark, CallFunc_Not_PreBool_ReturnValue) == 0x000100, "Member 'Fang_expedition_MapWindow_C_UpdateMapIconNewMark::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_UpdateMapIconNewMark, CallFunc_Array_Length_ReturnValue_2) == 0x000104, "Member 'Fang_expedition_MapWindow_C_UpdateMapIconNewMark::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_UpdateMapIconNewMark, CallFunc_Array_Get_Item_3) == 0x000108, "Member 'Fang_expedition_MapWindow_C_UpdateMapIconNewMark::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_UpdateMapIconNewMark, CallFunc_Less_IntInt_ReturnValue_2) == 0x000160, "Member 'Fang_expedition_MapWindow_C_UpdateMapIconNewMark::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_UpdateMapIconNewMark, CallFunc_Array_Get_Item_4) == 0x000168, "Member 'Fang_expedition_MapWindow_C_UpdateMapIconNewMark::CallFunc_Array_Get_Item_4' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_UpdateMapIconNewMark, CallFunc_Array_Length_ReturnValue_3) == 0x000178, "Member 'Fang_expedition_MapWindow_C_UpdateMapIconNewMark::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_UpdateMapIconNewMark, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x00017C, "Member 'Fang_expedition_MapWindow_C_UpdateMapIconNewMark::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_UpdateMapIconNewMark, CallFunc_Less_IntInt_ReturnValue_3) == 0x00017D, "Member 'Fang_expedition_MapWindow_C_UpdateMapIconNewMark::CallFunc_Less_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_UpdateMapIconNewMark, CallFunc_Array_Length_ReturnValue_4) == 0x000180, "Member 'Fang_expedition_MapWindow_C_UpdateMapIconNewMark::CallFunc_Array_Length_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_UpdateMapIconNewMark, CallFunc_Greater_IntInt_ReturnValue) == 0x000184, "Member 'Fang_expedition_MapWindow_C_UpdateMapIconNewMark::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function Fang_expedition_MapWindow.Fang_expedition_MapWindow_C.OnPaint
// 0x0128 (0x0128 - 0x0000)
struct Fang_expedition_MapWindow_C_OnPaint final
{
public:
	struct FPaintContext                          Context;                                           // 0x0000(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	int32                                         LoopY;                                             // 0x0030(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LoopX;                                             // 0x0034(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              OffsetPos;                                         // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              BaseSize;                                          // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_1;                        // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_1;                        // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue_1;            // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_607A[0x3];                                     // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_1;               // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_2;                        // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_2;                        // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_3;                        // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_3;                        // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_607B[0x3];                                     // 0x00A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Add_FloatFloat_ReturnValue_2;             // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_3;             // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_2;               // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_4;                        // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_4;                        // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_3;               // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_1;          // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue_1;                     // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetDesiredSize_ReturnValue;               // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_5;                        // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_5;                        // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x00E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDebug_ReturnValue;                      // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_607C[0x3];                                     // 0x00F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMargin                                CallFunc_GetOffsets_ReturnValue;                   // 0x00F4(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0104(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_607D[0x3];                                     // 0x0105(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Add_FloatFloat_ReturnValue_4;             // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_5;             // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_1;        // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_4;               // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_5;               // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_MapWindow_C_OnPaint) == 0x000008, "Wrong alignment on Fang_expedition_MapWindow_C_OnPaint");
static_assert(sizeof(Fang_expedition_MapWindow_C_OnPaint) == 0x000128, "Wrong size on Fang_expedition_MapWindow_C_OnPaint");
static_assert(offsetof(Fang_expedition_MapWindow_C_OnPaint, Context) == 0x000000, "Member 'Fang_expedition_MapWindow_C_OnPaint::Context' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_OnPaint, LoopY) == 0x000030, "Member 'Fang_expedition_MapWindow_C_OnPaint::LoopY' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_OnPaint, LoopX) == 0x000034, "Member 'Fang_expedition_MapWindow_C_OnPaint::LoopX' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_OnPaint, OffsetPos) == 0x000038, "Member 'Fang_expedition_MapWindow_C_OnPaint::OffsetPos' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_OnPaint, BaseSize) == 0x000040, "Member 'Fang_expedition_MapWindow_C_OnPaint::BaseSize' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_OnPaint, Temp_int_Variable) == 0x000048, "Member 'Fang_expedition_MapWindow_C_OnPaint::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_OnPaint, CallFunc_Multiply_IntInt_ReturnValue) == 0x00004C, "Member 'Fang_expedition_MapWindow_C_OnPaint::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_OnPaint, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000050, "Member 'Fang_expedition_MapWindow_C_OnPaint::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_OnPaint, CallFunc_Add_IntInt_ReturnValue) == 0x000054, "Member 'Fang_expedition_MapWindow_C_OnPaint::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_OnPaint, CallFunc_BreakVector2D_X) == 0x000058, "Member 'Fang_expedition_MapWindow_C_OnPaint::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_OnPaint, CallFunc_BreakVector2D_Y) == 0x00005C, "Member 'Fang_expedition_MapWindow_C_OnPaint::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_OnPaint, CallFunc_BreakVector2D_X_1) == 0x000060, "Member 'Fang_expedition_MapWindow_C_OnPaint::CallFunc_BreakVector2D_X_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_OnPaint, CallFunc_BreakVector2D_Y_1) == 0x000064, "Member 'Fang_expedition_MapWindow_C_OnPaint::CallFunc_BreakVector2D_Y_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_OnPaint, Temp_int_Variable_1) == 0x000068, "Member 'Fang_expedition_MapWindow_C_OnPaint::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_OnPaint, CallFunc_Add_FloatFloat_ReturnValue) == 0x00006C, "Member 'Fang_expedition_MapWindow_C_OnPaint::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_OnPaint, CallFunc_Multiply_IntInt_ReturnValue_1) == 0x000070, "Member 'Fang_expedition_MapWindow_C_OnPaint::CallFunc_Multiply_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_OnPaint, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x000074, "Member 'Fang_expedition_MapWindow_C_OnPaint::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_OnPaint, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000078, "Member 'Fang_expedition_MapWindow_C_OnPaint::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_OnPaint, CallFunc_Add_FloatFloat_ReturnValue_1) == 0x00007C, "Member 'Fang_expedition_MapWindow_C_OnPaint::CallFunc_Add_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_OnPaint, CallFunc_MakeVector2D_ReturnValue) == 0x000080, "Member 'Fang_expedition_MapWindow_C_OnPaint::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_OnPaint, CallFunc_MakeVector2D_ReturnValue_1) == 0x000088, "Member 'Fang_expedition_MapWindow_C_OnPaint::CallFunc_MakeVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_OnPaint, CallFunc_Add_IntInt_ReturnValue_1) == 0x000090, "Member 'Fang_expedition_MapWindow_C_OnPaint::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_OnPaint, CallFunc_BreakVector2D_X_2) == 0x000094, "Member 'Fang_expedition_MapWindow_C_OnPaint::CallFunc_BreakVector2D_X_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_OnPaint, CallFunc_BreakVector2D_Y_2) == 0x000098, "Member 'Fang_expedition_MapWindow_C_OnPaint::CallFunc_BreakVector2D_Y_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_OnPaint, CallFunc_BreakVector2D_X_3) == 0x00009C, "Member 'Fang_expedition_MapWindow_C_OnPaint::CallFunc_BreakVector2D_X_3' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_OnPaint, CallFunc_BreakVector2D_Y_3) == 0x0000A0, "Member 'Fang_expedition_MapWindow_C_OnPaint::CallFunc_BreakVector2D_Y_3' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_OnPaint, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x0000A4, "Member 'Fang_expedition_MapWindow_C_OnPaint::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_OnPaint, CallFunc_Add_FloatFloat_ReturnValue_2) == 0x0000A8, "Member 'Fang_expedition_MapWindow_C_OnPaint::CallFunc_Add_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_OnPaint, CallFunc_Add_FloatFloat_ReturnValue_3) == 0x0000AC, "Member 'Fang_expedition_MapWindow_C_OnPaint::CallFunc_Add_FloatFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_OnPaint, CallFunc_MakeVector2D_ReturnValue_2) == 0x0000B0, "Member 'Fang_expedition_MapWindow_C_OnPaint::CallFunc_MakeVector2D_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_OnPaint, CallFunc_BreakVector2D_X_4) == 0x0000B8, "Member 'Fang_expedition_MapWindow_C_OnPaint::CallFunc_BreakVector2D_X_4' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_OnPaint, CallFunc_BreakVector2D_Y_4) == 0x0000BC, "Member 'Fang_expedition_MapWindow_C_OnPaint::CallFunc_BreakVector2D_Y_4' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_OnPaint, CallFunc_MakeVector2D_ReturnValue_3) == 0x0000C0, "Member 'Fang_expedition_MapWindow_C_OnPaint::CallFunc_MakeVector2D_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_OnPaint, CallFunc_Divide_FloatFloat_ReturnValue) == 0x0000C8, "Member 'Fang_expedition_MapWindow_C_OnPaint::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_OnPaint, CallFunc_FTrunc_ReturnValue) == 0x0000CC, "Member 'Fang_expedition_MapWindow_C_OnPaint::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_OnPaint, CallFunc_Divide_FloatFloat_ReturnValue_1) == 0x0000D0, "Member 'Fang_expedition_MapWindow_C_OnPaint::CallFunc_Divide_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_OnPaint, CallFunc_FTrunc_ReturnValue_1) == 0x0000D4, "Member 'Fang_expedition_MapWindow_C_OnPaint::CallFunc_FTrunc_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_OnPaint, CallFunc_GetDesiredSize_ReturnValue) == 0x0000D8, "Member 'Fang_expedition_MapWindow_C_OnPaint::CallFunc_GetDesiredSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_OnPaint, CallFunc_BreakVector2D_X_5) == 0x0000E0, "Member 'Fang_expedition_MapWindow_C_OnPaint::CallFunc_BreakVector2D_X_5' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_OnPaint, CallFunc_BreakVector2D_Y_5) == 0x0000E4, "Member 'Fang_expedition_MapWindow_C_OnPaint::CallFunc_BreakVector2D_Y_5' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_OnPaint, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x0000E8, "Member 'Fang_expedition_MapWindow_C_OnPaint::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_OnPaint, CallFunc_IsDebug_ReturnValue) == 0x0000F0, "Member 'Fang_expedition_MapWindow_C_OnPaint::CallFunc_IsDebug_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_OnPaint, CallFunc_GetOffsets_ReturnValue) == 0x0000F4, "Member 'Fang_expedition_MapWindow_C_OnPaint::CallFunc_GetOffsets_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_OnPaint, CallFunc_BooleanAND_ReturnValue) == 0x000104, "Member 'Fang_expedition_MapWindow_C_OnPaint::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_OnPaint, CallFunc_Add_FloatFloat_ReturnValue_4) == 0x000108, "Member 'Fang_expedition_MapWindow_C_OnPaint::CallFunc_Add_FloatFloat_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_OnPaint, CallFunc_Add_FloatFloat_ReturnValue_5) == 0x00010C, "Member 'Fang_expedition_MapWindow_C_OnPaint::CallFunc_Add_FloatFloat_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_OnPaint, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000110, "Member 'Fang_expedition_MapWindow_C_OnPaint::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_OnPaint, CallFunc_Subtract_FloatFloat_ReturnValue_1) == 0x000114, "Member 'Fang_expedition_MapWindow_C_OnPaint::CallFunc_Subtract_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_OnPaint, CallFunc_MakeVector2D_ReturnValue_4) == 0x000118, "Member 'Fang_expedition_MapWindow_C_OnPaint::CallFunc_MakeVector2D_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapWindow_C_OnPaint, CallFunc_MakeVector2D_ReturnValue_5) == 0x000120, "Member 'Fang_expedition_MapWindow_C_OnPaint::CallFunc_MakeVector2D_ReturnValue_5' has a wrong offset!");

}

