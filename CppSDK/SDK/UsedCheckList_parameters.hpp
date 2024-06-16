#pragma once

 

// Package: UsedCheckList

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UsedFlagView_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function UsedCheckList.UsedCheckList_C.UsedCheckList_AutoGenFunc
// 0x0010 (0x0010 - 0x0000)
struct UsedCheckList_C_UsedCheckList_AutoGenFunc final
{
public:
	ESBUseCheckDialogType                         Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Enable;                                            // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6750[0x5];                                     // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UsedCheckList_C_UsedCheckList_AutoGenFunc) == 0x000008, "Wrong alignment on UsedCheckList_C_UsedCheckList_AutoGenFunc");
static_assert(sizeof(UsedCheckList_C_UsedCheckList_AutoGenFunc) == 0x000010, "Wrong size on UsedCheckList_C_UsedCheckList_AutoGenFunc");
static_assert(offsetof(UsedCheckList_C_UsedCheckList_AutoGenFunc, Type) == 0x000000, "Member 'UsedCheckList_C_UsedCheckList_AutoGenFunc::Type' has a wrong offset!");
static_assert(offsetof(UsedCheckList_C_UsedCheckList_AutoGenFunc, Enable) == 0x000001, "Member 'UsedCheckList_C_UsedCheckList_AutoGenFunc::Enable' has a wrong offset!");
static_assert(offsetof(UsedCheckList_C_UsedCheckList_AutoGenFunc, CallFunc_GetConfigSaveManager_IsValid) == 0x000002, "Member 'UsedCheckList_C_UsedCheckList_AutoGenFunc::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(UsedCheckList_C_UsedCheckList_AutoGenFunc, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000008, "Member 'UsedCheckList_C_UsedCheckList_AutoGenFunc::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");

// Function UsedCheckList.UsedCheckList_C.Generate
// 0x00A8 (0x00A8 - 0x0000)
struct UsedCheckList_C_Generate final
{
public:
	class UDataTable*                             ViewList;                                          // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(ESBUseCheckDialogType Type, bool Enable)> K2Node_CreateDelegate_OutputDelegate;              // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_6751[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUsedCheck_CheckBox_C*                  CallFunc_Create_ReturnValue;                       // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0048(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUsedFlagView                          CallFunc_GetDataTableRowFromName_OutRow;           // 0x0064(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x006D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6752[0x2];                                     // 0x006E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6753[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0088(0x0018)()
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UsedCheckList_C_Generate) == 0x000008, "Wrong alignment on UsedCheckList_C_Generate");
static_assert(sizeof(UsedCheckList_C_Generate) == 0x0000A8, "Wrong size on UsedCheckList_C_Generate");
static_assert(offsetof(UsedCheckList_C_Generate, ViewList) == 0x000000, "Member 'UsedCheckList_C_Generate::ViewList' has a wrong offset!");
static_assert(offsetof(UsedCheckList_C_Generate, Temp_int_Array_Index_Variable) == 0x000008, "Member 'UsedCheckList_C_Generate::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UsedCheckList_C_Generate, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'UsedCheckList_C_Generate::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UsedCheckList_C_Generate, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'UsedCheckList_C_Generate::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UsedCheckList_C_Generate, K2Node_CreateDelegate_OutputDelegate) == 0x000014, "Member 'UsedCheckList_C_Generate::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UsedCheckList_C_Generate, CallFunc_Create_ReturnValue) == 0x000028, "Member 'UsedCheckList_C_Generate::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(UsedCheckList_C_Generate, CallFunc_AddChild_ReturnValue) == 0x000030, "Member 'UsedCheckList_C_Generate::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(UsedCheckList_C_Generate, K2Node_MakeStruct_Margin) == 0x000038, "Member 'UsedCheckList_C_Generate::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(UsedCheckList_C_Generate, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000048, "Member 'UsedCheckList_C_Generate::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(UsedCheckList_C_Generate, CallFunc_Array_Get_Item) == 0x000058, "Member 'UsedCheckList_C_Generate::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UsedCheckList_C_Generate, CallFunc_Array_Length_ReturnValue) == 0x000060, "Member 'UsedCheckList_C_Generate::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UsedCheckList_C_Generate, CallFunc_GetDataTableRowFromName_OutRow) == 0x000064, "Member 'UsedCheckList_C_Generate::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(UsedCheckList_C_Generate, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x00006C, "Member 'UsedCheckList_C_Generate::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UsedCheckList_C_Generate, CallFunc_Less_IntInt_ReturnValue) == 0x00006D, "Member 'UsedCheckList_C_Generate::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UsedCheckList_C_Generate, CallFunc_Array_AddUnique_ReturnValue) == 0x000070, "Member 'UsedCheckList_C_Generate::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");
static_assert(offsetof(UsedCheckList_C_Generate, CallFunc_GetTextFromAsset_ReturnValue) == 0x000078, "Member 'UsedCheckList_C_Generate::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(UsedCheckList_C_Generate, CallFunc_Conv_StringToText_ReturnValue) == 0x000088, "Member 'UsedCheckList_C_Generate::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UsedCheckList_C_Generate, CallFunc_Array_Contains_ReturnValue) == 0x0000A0, "Member 'UsedCheckList_C_Generate::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(UsedCheckList_C_Generate, CallFunc_Not_PreBool_ReturnValue) == 0x0000A1, "Member 'UsedCheckList_C_Generate::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function UsedCheckList.UsedCheckList_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UsedCheckList_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UsedCheckList_C_PreConstruct) == 0x000001, "Wrong alignment on UsedCheckList_C_PreConstruct");
static_assert(sizeof(UsedCheckList_C_PreConstruct) == 0x000001, "Wrong size on UsedCheckList_C_PreConstruct");
static_assert(offsetof(UsedCheckList_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'UsedCheckList_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function UsedCheckList.UsedCheckList_C.ExecuteUbergraph_UsedCheckList
// 0x00A8 (0x00A8 - 0x0000)
struct UsedCheckList_C_ExecuteUbergraph_UsedCheckList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0004(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         Temp_int_Variable;                                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0018(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0058(0x0010)(ReferenceParm)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6754[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0070(0x0018)()
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6755[0x3];                                     // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue;         // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6756[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUsedCheck_CheckBox_C*                  CallFunc_Create_ReturnValue;                       // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UsedCheckList_C_ExecuteUbergraph_UsedCheckList) == 0x000008, "Wrong alignment on UsedCheckList_C_ExecuteUbergraph_UsedCheckList");
static_assert(sizeof(UsedCheckList_C_ExecuteUbergraph_UsedCheckList) == 0x0000A8, "Wrong size on UsedCheckList_C_ExecuteUbergraph_UsedCheckList");
static_assert(offsetof(UsedCheckList_C_ExecuteUbergraph_UsedCheckList, EntryPoint) == 0x000000, "Member 'UsedCheckList_C_ExecuteUbergraph_UsedCheckList::EntryPoint' has a wrong offset!");
static_assert(offsetof(UsedCheckList_C_ExecuteUbergraph_UsedCheckList, K2Node_MakeStruct_Margin) == 0x000004, "Member 'UsedCheckList_C_ExecuteUbergraph_UsedCheckList::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(UsedCheckList_C_ExecuteUbergraph_UsedCheckList, Temp_int_Variable) == 0x000014, "Member 'UsedCheckList_C_ExecuteUbergraph_UsedCheckList::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(UsedCheckList_C_ExecuteUbergraph_UsedCheckList, K2Node_MakeStruct_FormatArgumentData) == 0x000018, "Member 'UsedCheckList_C_ExecuteUbergraph_UsedCheckList::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(UsedCheckList_C_ExecuteUbergraph_UsedCheckList, K2Node_MakeArray_Array) == 0x000058, "Member 'UsedCheckList_C_ExecuteUbergraph_UsedCheckList::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(UsedCheckList_C_ExecuteUbergraph_UsedCheckList, CallFunc_Add_IntInt_ReturnValue) == 0x000068, "Member 'UsedCheckList_C_ExecuteUbergraph_UsedCheckList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UsedCheckList_C_ExecuteUbergraph_UsedCheckList, CallFunc_Format_ReturnValue) == 0x000070, "Member 'UsedCheckList_C_ExecuteUbergraph_UsedCheckList::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(UsedCheckList_C_ExecuteUbergraph_UsedCheckList, K2Node_Event_IsDesignTime) == 0x000088, "Member 'UsedCheckList_C_ExecuteUbergraph_UsedCheckList::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(UsedCheckList_C_ExecuteUbergraph_UsedCheckList, CallFunc_RandomIntegerInRange_ReturnValue) == 0x00008C, "Member 'UsedCheckList_C_ExecuteUbergraph_UsedCheckList::CallFunc_RandomIntegerInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(UsedCheckList_C_ExecuteUbergraph_UsedCheckList, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000090, "Member 'UsedCheckList_C_ExecuteUbergraph_UsedCheckList::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UsedCheckList_C_ExecuteUbergraph_UsedCheckList, CallFunc_Create_ReturnValue) == 0x000098, "Member 'UsedCheckList_C_ExecuteUbergraph_UsedCheckList::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(UsedCheckList_C_ExecuteUbergraph_UsedCheckList, CallFunc_AddChild_ReturnValue) == 0x0000A0, "Member 'UsedCheckList_C_ExecuteUbergraph_UsedCheckList::CallFunc_AddChild_ReturnValue' has a wrong offset!");

}

