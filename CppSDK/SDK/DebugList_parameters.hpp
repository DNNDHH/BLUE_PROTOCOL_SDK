#pragma once

 

// Package: DebugList

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function DebugList.DebugList_C.ExecuteUbergraph_DebugList
// 0x00B0 (0x00B0 - 0x0000)
struct DebugList_C_ExecuteUbergraph_DebugList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UDebugButton_C* DebugButton)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0024(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchString_CmpSuccess;                    // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetDebugFunction_IsValid;                 // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51F4[0x6];                                     // 0x0072(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDebugFunction*                       CallFunc_GetDebugFunction_ReturnValue;             // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDebugMenu_C*                           K2Node_DynamicCast_AsDebug_Menu;                   // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51F5[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UDebugButton_C*                         K2Node_CustomEvent_DebugButton_1;                  // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDebugButton_C*                         K2Node_CustomEvent_DebugButton;                    // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetFocusWidget_ReturnValue;               // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DebugList_C_ExecuteUbergraph_DebugList) == 0x000008, "Wrong alignment on DebugList_C_ExecuteUbergraph_DebugList");
static_assert(sizeof(DebugList_C_ExecuteUbergraph_DebugList) == 0x0000B0, "Wrong size on DebugList_C_ExecuteUbergraph_DebugList");
static_assert(offsetof(DebugList_C_ExecuteUbergraph_DebugList, EntryPoint) == 0x000000, "Member 'DebugList_C_ExecuteUbergraph_DebugList::EntryPoint' has a wrong offset!");
static_assert(offsetof(DebugList_C_ExecuteUbergraph_DebugList, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'DebugList_C_ExecuteUbergraph_DebugList::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(DebugList_C_ExecuteUbergraph_DebugList, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'DebugList_C_ExecuteUbergraph_DebugList::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(DebugList_C_ExecuteUbergraph_DebugList, K2Node_Event_MyGeometry) == 0x000024, "Member 'DebugList_C_ExecuteUbergraph_DebugList::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(DebugList_C_ExecuteUbergraph_DebugList, K2Node_Event_InDeltaTime) == 0x00005C, "Member 'DebugList_C_ExecuteUbergraph_DebugList::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(DebugList_C_ExecuteUbergraph_DebugList, CallFunc_Concat_StrStr_ReturnValue) == 0x000060, "Member 'DebugList_C_ExecuteUbergraph_DebugList::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugList_C_ExecuteUbergraph_DebugList, K2Node_SwitchString_CmpSuccess) == 0x000070, "Member 'DebugList_C_ExecuteUbergraph_DebugList::K2Node_SwitchString_CmpSuccess' has a wrong offset!");
static_assert(offsetof(DebugList_C_ExecuteUbergraph_DebugList, CallFunc_GetDebugFunction_IsValid) == 0x000071, "Member 'DebugList_C_ExecuteUbergraph_DebugList::CallFunc_GetDebugFunction_IsValid' has a wrong offset!");
static_assert(offsetof(DebugList_C_ExecuteUbergraph_DebugList, CallFunc_GetDebugFunction_ReturnValue) == 0x000078, "Member 'DebugList_C_ExecuteUbergraph_DebugList::CallFunc_GetDebugFunction_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugList_C_ExecuteUbergraph_DebugList, K2Node_DynamicCast_AsDebug_Menu) == 0x000080, "Member 'DebugList_C_ExecuteUbergraph_DebugList::K2Node_DynamicCast_AsDebug_Menu' has a wrong offset!");
static_assert(offsetof(DebugList_C_ExecuteUbergraph_DebugList, K2Node_DynamicCast_bSuccess) == 0x000088, "Member 'DebugList_C_ExecuteUbergraph_DebugList::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(DebugList_C_ExecuteUbergraph_DebugList, K2Node_CustomEvent_DebugButton_1) == 0x000090, "Member 'DebugList_C_ExecuteUbergraph_DebugList::K2Node_CustomEvent_DebugButton_1' has a wrong offset!");
static_assert(offsetof(DebugList_C_ExecuteUbergraph_DebugList, K2Node_CustomEvent_DebugButton) == 0x000098, "Member 'DebugList_C_ExecuteUbergraph_DebugList::K2Node_CustomEvent_DebugButton' has a wrong offset!");
static_assert(offsetof(DebugList_C_ExecuteUbergraph_DebugList, CallFunc_GetFocusWidget_ReturnValue) == 0x0000A0, "Member 'DebugList_C_ExecuteUbergraph_DebugList::CallFunc_GetFocusWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugList_C_ExecuteUbergraph_DebugList, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x0000A8, "Member 'DebugList_C_ExecuteUbergraph_DebugList::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function DebugList.DebugList_C.EventDispatcher_OnClicked_����_0
// 0x0008 (0x0008 - 0x0000)
struct DebugList_C_EventDispatcher_OnClicked______0 final
{
public:
	class UDebugButton_C*                         DebugButton;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DebugList_C_EventDispatcher_OnClicked______0) == 0x000008, "Wrong alignment on DebugList_C_EventDispatcher_OnClicked______0");
static_assert(sizeof(DebugList_C_EventDispatcher_OnClicked______0) == 0x000008, "Wrong size on DebugList_C_EventDispatcher_OnClicked______0");
static_assert(offsetof(DebugList_C_EventDispatcher_OnClicked______0, DebugButton) == 0x000000, "Member 'DebugList_C_EventDispatcher_OnClicked______0::DebugButton' has a wrong offset!");

// Function DebugList.DebugList_C.BindDebugButtonOnClicked
// 0x0008 (0x0008 - 0x0000)
struct DebugList_C_BindDebugButtonOnClicked final
{
public:
	class UDebugButton_C*                         DebugButton;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DebugList_C_BindDebugButtonOnClicked) == 0x000008, "Wrong alignment on DebugList_C_BindDebugButtonOnClicked");
static_assert(sizeof(DebugList_C_BindDebugButtonOnClicked) == 0x000008, "Wrong size on DebugList_C_BindDebugButtonOnClicked");
static_assert(offsetof(DebugList_C_BindDebugButtonOnClicked, DebugButton) == 0x000000, "Member 'DebugList_C_BindDebugButtonOnClicked::DebugButton' has a wrong offset!");

// Function DebugList.DebugList_C.Tick
// 0x003C (0x003C - 0x0000)
struct DebugList_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DebugList_C_Tick) == 0x000004, "Wrong alignment on DebugList_C_Tick");
static_assert(sizeof(DebugList_C_Tick) == 0x00003C, "Wrong size on DebugList_C_Tick");
static_assert(offsetof(DebugList_C_Tick, MyGeometry) == 0x000000, "Member 'DebugList_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(DebugList_C_Tick, InDeltaTime) == 0x000038, "Member 'DebugList_C_Tick::InDeltaTime' has a wrong offset!");

// Function DebugList.DebugList_C.SetInitialValue
// 0x0068 (0x0068 - 0x0000)
struct DebugList_C_SetInitialValue final
{
public:
	TArray<class FString>                         Param_InitialValue;                                // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	class FString                                 CallFunc_Array_Get_Item;                           // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDebugCommand_C*                        K2Node_DynamicCast_AsDebug_Command;                // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51F6[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(DebugList_C_SetInitialValue) == 0x000008, "Wrong alignment on DebugList_C_SetInitialValue");
static_assert(sizeof(DebugList_C_SetInitialValue) == 0x000068, "Wrong size on DebugList_C_SetInitialValue");
static_assert(offsetof(DebugList_C_SetInitialValue, Param_InitialValue) == 0x000000, "Member 'DebugList_C_SetInitialValue::Param_InitialValue' has a wrong offset!");
static_assert(offsetof(DebugList_C_SetInitialValue, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'DebugList_C_SetInitialValue::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(DebugList_C_SetInitialValue, CallFunc_Array_Get_Item) == 0x000020, "Member 'DebugList_C_SetInitialValue::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(DebugList_C_SetInitialValue, CallFunc_GetChildAt_ReturnValue) == 0x000030, "Member 'DebugList_C_SetInitialValue::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugList_C_SetInitialValue, K2Node_DynamicCast_AsDebug_Command) == 0x000038, "Member 'DebugList_C_SetInitialValue::K2Node_DynamicCast_AsDebug_Command' has a wrong offset!");
static_assert(offsetof(DebugList_C_SetInitialValue, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'DebugList_C_SetInitialValue::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(DebugList_C_SetInitialValue, CallFunc_Concat_StrStr_ReturnValue) == 0x000048, "Member 'DebugList_C_SetInitialValue::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugList_C_SetInitialValue, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000058, "Member 'DebugList_C_SetInitialValue::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");

// Function DebugList.DebugList_C.MakeAcceptedQuestList
// 0x0388 (0x0388 - 0x0000)
struct DebugList_C_MakeAcceptedQuestList final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51F7[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UDebugButton_C*                         CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_AddFocusableWidget_ReturnValue;           // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51F8[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51F9[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51FA[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51FB[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAcceptedQuestInfo                     CallFunc_Array_Get_Item;                           // 0x0040(0x0060)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51FC[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x00A8(0x0040)(HasGetValueTypeHash)
	class FString                                 CallFunc_GetQuestStatusString_Output;              // 0x00E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FQuestMasterData                       CallFunc_FindQuestMasterData_QuestMasterData;      // 0x00F8(0x0118)()
	bool                                          CallFunc_FindQuestMasterData_Exist;                // 0x0210(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51FD[0x7];                                     // 0x0211(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0218(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0230(0x0040)(HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0270(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetQuestNameByTextId_ReturnValue;         // 0x0280(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class FString>                         K2Node_MakeArray_Array;                            // 0x0290(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x02A0(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x02B8(0x0040)(HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x02F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0308(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_3;            // 0x0320(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x0360(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0370(0x0018)()
};
static_assert(alignof(DebugList_C_MakeAcceptedQuestList) == 0x000008, "Wrong alignment on DebugList_C_MakeAcceptedQuestList");
static_assert(sizeof(DebugList_C_MakeAcceptedQuestList) == 0x000388, "Wrong size on DebugList_C_MakeAcceptedQuestList");
static_assert(offsetof(DebugList_C_MakeAcceptedQuestList, Temp_int_Array_Index_Variable) == 0x000000, "Member 'DebugList_C_MakeAcceptedQuestList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(DebugList_C_MakeAcceptedQuestList, CallFunc_Create_ReturnValue) == 0x000008, "Member 'DebugList_C_MakeAcceptedQuestList::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugList_C_MakeAcceptedQuestList, CallFunc_AddFocusableWidget_ReturnValue) == 0x000010, "Member 'DebugList_C_MakeAcceptedQuestList::CallFunc_AddFocusableWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugList_C_MakeAcceptedQuestList, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'DebugList_C_MakeAcceptedQuestList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(DebugList_C_MakeAcceptedQuestList, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'DebugList_C_MakeAcceptedQuestList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugList_C_MakeAcceptedQuestList, CallFunc_AddChild_ReturnValue) == 0x000020, "Member 'DebugList_C_MakeAcceptedQuestList::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugList_C_MakeAcceptedQuestList, CallFunc_GetNetworkDataCache_IsValid) == 0x000028, "Member 'DebugList_C_MakeAcceptedQuestList::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(DebugList_C_MakeAcceptedQuestList, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000030, "Member 'DebugList_C_MakeAcceptedQuestList::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugList_C_MakeAcceptedQuestList, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'DebugList_C_MakeAcceptedQuestList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugList_C_MakeAcceptedQuestList, CallFunc_Array_Get_Item) == 0x000040, "Member 'DebugList_C_MakeAcceptedQuestList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(DebugList_C_MakeAcceptedQuestList, CallFunc_Less_IntInt_ReturnValue) == 0x0000A0, "Member 'DebugList_C_MakeAcceptedQuestList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugList_C_MakeAcceptedQuestList, K2Node_MakeStruct_FormatArgumentData) == 0x0000A8, "Member 'DebugList_C_MakeAcceptedQuestList::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(DebugList_C_MakeAcceptedQuestList, CallFunc_GetQuestStatusString_Output) == 0x0000E8, "Member 'DebugList_C_MakeAcceptedQuestList::CallFunc_GetQuestStatusString_Output' has a wrong offset!");
static_assert(offsetof(DebugList_C_MakeAcceptedQuestList, CallFunc_FindQuestMasterData_QuestMasterData) == 0x0000F8, "Member 'DebugList_C_MakeAcceptedQuestList::CallFunc_FindQuestMasterData_QuestMasterData' has a wrong offset!");
static_assert(offsetof(DebugList_C_MakeAcceptedQuestList, CallFunc_FindQuestMasterData_Exist) == 0x000210, "Member 'DebugList_C_MakeAcceptedQuestList::CallFunc_FindQuestMasterData_Exist' has a wrong offset!");
static_assert(offsetof(DebugList_C_MakeAcceptedQuestList, CallFunc_Conv_StringToText_ReturnValue) == 0x000218, "Member 'DebugList_C_MakeAcceptedQuestList::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugList_C_MakeAcceptedQuestList, K2Node_MakeStruct_FormatArgumentData_1) == 0x000230, "Member 'DebugList_C_MakeAcceptedQuestList::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(DebugList_C_MakeAcceptedQuestList, CallFunc_Conv_IntToString_ReturnValue) == 0x000270, "Member 'DebugList_C_MakeAcceptedQuestList::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugList_C_MakeAcceptedQuestList, CallFunc_GetQuestNameByTextId_ReturnValue) == 0x000280, "Member 'DebugList_C_MakeAcceptedQuestList::CallFunc_GetQuestNameByTextId_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugList_C_MakeAcceptedQuestList, K2Node_MakeArray_Array) == 0x000290, "Member 'DebugList_C_MakeAcceptedQuestList::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(DebugList_C_MakeAcceptedQuestList, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0002A0, "Member 'DebugList_C_MakeAcceptedQuestList::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugList_C_MakeAcceptedQuestList, K2Node_MakeStruct_FormatArgumentData_2) == 0x0002B8, "Member 'DebugList_C_MakeAcceptedQuestList::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(DebugList_C_MakeAcceptedQuestList, CallFunc_Conv_NameToString_ReturnValue) == 0x0002F8, "Member 'DebugList_C_MakeAcceptedQuestList::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugList_C_MakeAcceptedQuestList, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000308, "Member 'DebugList_C_MakeAcceptedQuestList::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DebugList_C_MakeAcceptedQuestList, K2Node_MakeStruct_FormatArgumentData_3) == 0x000320, "Member 'DebugList_C_MakeAcceptedQuestList::K2Node_MakeStruct_FormatArgumentData_3' has a wrong offset!");
static_assert(offsetof(DebugList_C_MakeAcceptedQuestList, K2Node_MakeArray_Array_1) == 0x000360, "Member 'DebugList_C_MakeAcceptedQuestList::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(DebugList_C_MakeAcceptedQuestList, CallFunc_Format_ReturnValue) == 0x000370, "Member 'DebugList_C_MakeAcceptedQuestList::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function DebugList.DebugList_C.MakePlayerLocationtList
// 0x0128 (0x0128 - 0x0000)
struct DebugList_C_MakePlayerLocationtList final
{
public:
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51FE[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UDebugButton_C*                         CallFunc_Create_ReturnValue;                       // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_AddFocusableWidget_ReturnValue;           // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51FF[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5200[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBCheatManager*                        K2Node_DynamicCast_AsSBCheat_Manager;              // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5201[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBDebugRespawnPointData>       CallFunc_GetRespawnPointList_ReturnValue;          // 0x0048(0x0010)(ConstParm, ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5202[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBDebugRespawnPointData               CallFunc_Array_Get_Item;                           // 0x0060(0x0020)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5203[0x3];                                     // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakVector_X;                            // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0090(0x0018)()
	class FString                                 CallFunc_Conv_FloatToString_ReturnValue;           // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_FloatToString_ReturnValue_1;         // 0x00B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_FloatToString_ReturnValue_2;         // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x00D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x00E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x00F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x0108(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class FString>                         K2Node_MakeArray_Array;                            // 0x0118(0x0010)(ReferenceParm)
};
static_assert(alignof(DebugList_C_MakePlayerLocationtList) == 0x000008, "Wrong alignment on DebugList_C_MakePlayerLocationtList");
static_assert(sizeof(DebugList_C_MakePlayerLocationtList) == 0x000128, "Wrong size on DebugList_C_MakePlayerLocationtList");
static_assert(offsetof(DebugList_C_MakePlayerLocationtList, Temp_int_Loop_Counter_Variable) == 0x000000, "Member 'DebugList_C_MakePlayerLocationtList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(DebugList_C_MakePlayerLocationtList, CallFunc_Add_IntInt_ReturnValue) == 0x000004, "Member 'DebugList_C_MakePlayerLocationtList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugList_C_MakePlayerLocationtList, Temp_int_Array_Index_Variable) == 0x000008, "Member 'DebugList_C_MakePlayerLocationtList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(DebugList_C_MakePlayerLocationtList, CallFunc_Create_ReturnValue) == 0x000010, "Member 'DebugList_C_MakePlayerLocationtList::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugList_C_MakePlayerLocationtList, CallFunc_AddChild_ReturnValue) == 0x000018, "Member 'DebugList_C_MakePlayerLocationtList::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugList_C_MakePlayerLocationtList, CallFunc_AddFocusableWidget_ReturnValue) == 0x000020, "Member 'DebugList_C_MakePlayerLocationtList::CallFunc_AddFocusableWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugList_C_MakePlayerLocationtList, CallFunc_GetPlayerController_ReturnValue) == 0x000028, "Member 'DebugList_C_MakePlayerLocationtList::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugList_C_MakePlayerLocationtList, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'DebugList_C_MakePlayerLocationtList::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugList_C_MakePlayerLocationtList, K2Node_DynamicCast_AsSBCheat_Manager) == 0x000038, "Member 'DebugList_C_MakePlayerLocationtList::K2Node_DynamicCast_AsSBCheat_Manager' has a wrong offset!");
static_assert(offsetof(DebugList_C_MakePlayerLocationtList, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'DebugList_C_MakePlayerLocationtList::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(DebugList_C_MakePlayerLocationtList, CallFunc_GetRespawnPointList_ReturnValue) == 0x000048, "Member 'DebugList_C_MakePlayerLocationtList::CallFunc_GetRespawnPointList_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugList_C_MakePlayerLocationtList, CallFunc_Array_Length_ReturnValue) == 0x000058, "Member 'DebugList_C_MakePlayerLocationtList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugList_C_MakePlayerLocationtList, CallFunc_Array_Get_Item) == 0x000060, "Member 'DebugList_C_MakePlayerLocationtList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(DebugList_C_MakePlayerLocationtList, CallFunc_Less_IntInt_ReturnValue) == 0x000080, "Member 'DebugList_C_MakePlayerLocationtList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugList_C_MakePlayerLocationtList, CallFunc_BreakVector_X) == 0x000084, "Member 'DebugList_C_MakePlayerLocationtList::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(DebugList_C_MakePlayerLocationtList, CallFunc_BreakVector_Y) == 0x000088, "Member 'DebugList_C_MakePlayerLocationtList::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(DebugList_C_MakePlayerLocationtList, CallFunc_BreakVector_Z) == 0x00008C, "Member 'DebugList_C_MakePlayerLocationtList::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(DebugList_C_MakePlayerLocationtList, CallFunc_Conv_StringToText_ReturnValue) == 0x000090, "Member 'DebugList_C_MakePlayerLocationtList::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugList_C_MakePlayerLocationtList, CallFunc_Conv_FloatToString_ReturnValue) == 0x0000A8, "Member 'DebugList_C_MakePlayerLocationtList::CallFunc_Conv_FloatToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugList_C_MakePlayerLocationtList, CallFunc_Conv_FloatToString_ReturnValue_1) == 0x0000B8, "Member 'DebugList_C_MakePlayerLocationtList::CallFunc_Conv_FloatToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugList_C_MakePlayerLocationtList, CallFunc_Conv_FloatToString_ReturnValue_2) == 0x0000C8, "Member 'DebugList_C_MakePlayerLocationtList::CallFunc_Conv_FloatToString_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DebugList_C_MakePlayerLocationtList, CallFunc_Concat_StrStr_ReturnValue) == 0x0000D8, "Member 'DebugList_C_MakePlayerLocationtList::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugList_C_MakePlayerLocationtList, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0000E8, "Member 'DebugList_C_MakePlayerLocationtList::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugList_C_MakePlayerLocationtList, CallFunc_Concat_StrStr_ReturnValue_2) == 0x0000F8, "Member 'DebugList_C_MakePlayerLocationtList::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DebugList_C_MakePlayerLocationtList, CallFunc_Concat_StrStr_ReturnValue_3) == 0x000108, "Member 'DebugList_C_MakePlayerLocationtList::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(DebugList_C_MakePlayerLocationtList, K2Node_MakeArray_Array) == 0x000118, "Member 'DebugList_C_MakePlayerLocationtList::K2Node_MakeArray_Array' has a wrong offset!");

// Function DebugList.DebugList_C.GetQuestStatusString
// 0x0090 (0x0090 - 0x0000)
struct DebugList_C_GetQuestStatusString final
{
public:
	EQuestStatus                                  InStatus;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5204[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Output;                                            // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_MakeLiteralString_ReturnValue;            // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5205[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_MakeLiteralString_ReturnValue_1;          // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_MakeLiteralString_ReturnValue_2;          // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_MakeLiteralString_ReturnValue_3;          // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_MakeLiteralString_ReturnValue_4;          // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class FString>                         K2Node_MakeArray_Array;                            // 0x0070(0x0010)(ReferenceParm)
	class FString                                 CallFunc_Array_Get_Item;                           // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(DebugList_C_GetQuestStatusString) == 0x000008, "Wrong alignment on DebugList_C_GetQuestStatusString");
static_assert(sizeof(DebugList_C_GetQuestStatusString) == 0x000090, "Wrong size on DebugList_C_GetQuestStatusString");
static_assert(offsetof(DebugList_C_GetQuestStatusString, InStatus) == 0x000000, "Member 'DebugList_C_GetQuestStatusString::InStatus' has a wrong offset!");
static_assert(offsetof(DebugList_C_GetQuestStatusString, Output) == 0x000008, "Member 'DebugList_C_GetQuestStatusString::Output' has a wrong offset!");
static_assert(offsetof(DebugList_C_GetQuestStatusString, CallFunc_MakeLiteralString_ReturnValue) == 0x000018, "Member 'DebugList_C_GetQuestStatusString::CallFunc_MakeLiteralString_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugList_C_GetQuestStatusString, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000028, "Member 'DebugList_C_GetQuestStatusString::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugList_C_GetQuestStatusString, CallFunc_MakeLiteralString_ReturnValue_1) == 0x000030, "Member 'DebugList_C_GetQuestStatusString::CallFunc_MakeLiteralString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugList_C_GetQuestStatusString, CallFunc_MakeLiteralString_ReturnValue_2) == 0x000040, "Member 'DebugList_C_GetQuestStatusString::CallFunc_MakeLiteralString_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DebugList_C_GetQuestStatusString, CallFunc_MakeLiteralString_ReturnValue_3) == 0x000050, "Member 'DebugList_C_GetQuestStatusString::CallFunc_MakeLiteralString_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(DebugList_C_GetQuestStatusString, CallFunc_MakeLiteralString_ReturnValue_4) == 0x000060, "Member 'DebugList_C_GetQuestStatusString::CallFunc_MakeLiteralString_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(DebugList_C_GetQuestStatusString, K2Node_MakeArray_Array) == 0x000070, "Member 'DebugList_C_GetQuestStatusString::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(DebugList_C_GetQuestStatusString, CallFunc_Array_Get_Item) == 0x000080, "Member 'DebugList_C_GetQuestStatusString::CallFunc_Array_Get_Item' has a wrong offset!");

}

