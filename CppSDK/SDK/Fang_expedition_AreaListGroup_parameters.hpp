#pragma once

 

// Package: Fang_expedition_AreaListGroup

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.OnAreaClick__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct Fang_expedition_AreaListGroup_C_OnAreaClick__DelegateSignature final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_AreaListGroup_C_OnAreaClick__DelegateSignature) == 0x000004, "Wrong alignment on Fang_expedition_AreaListGroup_C_OnAreaClick__DelegateSignature");
static_assert(sizeof(Fang_expedition_AreaListGroup_C_OnAreaClick__DelegateSignature) == 0x000004, "Wrong size on Fang_expedition_AreaListGroup_C_OnAreaClick__DelegateSignature");
static_assert(offsetof(Fang_expedition_AreaListGroup_C_OnAreaClick__DelegateSignature, Param_Index) == 0x000000, "Member 'Fang_expedition_AreaListGroup_C_OnAreaClick__DelegateSignature::Param_Index' has a wrong offset!");

// Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.OnFieldClick__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct Fang_expedition_AreaListGroup_C_OnFieldClick__DelegateSignature final
{
public:
	class FString                                 Field;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         Param_Index;                                       // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_AreaListGroup_C_OnFieldClick__DelegateSignature) == 0x000008, "Wrong alignment on Fang_expedition_AreaListGroup_C_OnFieldClick__DelegateSignature");
static_assert(sizeof(Fang_expedition_AreaListGroup_C_OnFieldClick__DelegateSignature) == 0x000018, "Wrong size on Fang_expedition_AreaListGroup_C_OnFieldClick__DelegateSignature");
static_assert(offsetof(Fang_expedition_AreaListGroup_C_OnFieldClick__DelegateSignature, Field) == 0x000000, "Member 'Fang_expedition_AreaListGroup_C_OnFieldClick__DelegateSignature::Field' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListGroup_C_OnFieldClick__DelegateSignature, Param_Index) == 0x000010, "Member 'Fang_expedition_AreaListGroup_C_OnFieldClick__DelegateSignature::Param_Index' has a wrong offset!");

// Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.ExecuteUbergraph_Fang_expedition_AreaListGroup
// 0x0004 (0x0004 - 0x0000)
struct Fang_expedition_AreaListGroup_C_ExecuteUbergraph_Fang_expedition_AreaListGroup final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_AreaListGroup_C_ExecuteUbergraph_Fang_expedition_AreaListGroup) == 0x000004, "Wrong alignment on Fang_expedition_AreaListGroup_C_ExecuteUbergraph_Fang_expedition_AreaListGroup");
static_assert(sizeof(Fang_expedition_AreaListGroup_C_ExecuteUbergraph_Fang_expedition_AreaListGroup) == 0x000004, "Wrong size on Fang_expedition_AreaListGroup_C_ExecuteUbergraph_Fang_expedition_AreaListGroup");
static_assert(offsetof(Fang_expedition_AreaListGroup_C_ExecuteUbergraph_Fang_expedition_AreaListGroup, EntryPoint) == 0x000000, "Member 'Fang_expedition_AreaListGroup_C_ExecuteUbergraph_Fang_expedition_AreaListGroup::EntryPoint' has a wrong offset!");

// Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.SetData
// 0x0100 (0x0100 - 0x0000)
struct Fang_expedition_AreaListGroup_C_SetData final
{
public:
	struct FSBFang_expeditionAreaData             AreaData;                                          // 0x0000(0x00A8)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          IsField;                                           // 0x00A8(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5DD6[0x3];                                     // 0x00A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         WorkIndex;                                         // 0x00AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFang_expedition_AreaListItem_C*        Widget;                                            // 0x00B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFang_expedition_AreaListItem_C*        CallFunc_Create_ReturnValue;                       // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 Index)>                  K2Node_CreateDelegate_OutputDelegate;              // 0x00C0(0x0010)(ZeroConstructor, NoDestructor)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x00D0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5DD7[0x4];                                     // 0x00E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x00E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                       K2Node_DynamicCast_AsVertical_Box_Slot;            // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5DD8[0x3];                                     // 0x00F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_AreaListGroup_C_SetData) == 0x000008, "Wrong alignment on Fang_expedition_AreaListGroup_C_SetData");
static_assert(sizeof(Fang_expedition_AreaListGroup_C_SetData) == 0x000100, "Wrong size on Fang_expedition_AreaListGroup_C_SetData");
static_assert(offsetof(Fang_expedition_AreaListGroup_C_SetData, AreaData) == 0x000000, "Member 'Fang_expedition_AreaListGroup_C_SetData::AreaData' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListGroup_C_SetData, IsField) == 0x0000A8, "Member 'Fang_expedition_AreaListGroup_C_SetData::IsField' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListGroup_C_SetData, WorkIndex) == 0x0000AC, "Member 'Fang_expedition_AreaListGroup_C_SetData::WorkIndex' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListGroup_C_SetData, Widget) == 0x0000B0, "Member 'Fang_expedition_AreaListGroup_C_SetData::Widget' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListGroup_C_SetData, CallFunc_Create_ReturnValue) == 0x0000B8, "Member 'Fang_expedition_AreaListGroup_C_SetData::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListGroup_C_SetData, K2Node_CreateDelegate_OutputDelegate) == 0x0000C0, "Member 'Fang_expedition_AreaListGroup_C_SetData::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListGroup_C_SetData, K2Node_MakeStruct_Margin) == 0x0000D0, "Member 'Fang_expedition_AreaListGroup_C_SetData::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListGroup_C_SetData, CallFunc_Array_Length_ReturnValue) == 0x0000E0, "Member 'Fang_expedition_AreaListGroup_C_SetData::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListGroup_C_SetData, CallFunc_AddChild_ReturnValue) == 0x0000E8, "Member 'Fang_expedition_AreaListGroup_C_SetData::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListGroup_C_SetData, K2Node_DynamicCast_AsVertical_Box_Slot) == 0x0000F0, "Member 'Fang_expedition_AreaListGroup_C_SetData::K2Node_DynamicCast_AsVertical_Box_Slot' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListGroup_C_SetData, K2Node_DynamicCast_bSuccess) == 0x0000F8, "Member 'Fang_expedition_AreaListGroup_C_SetData::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListGroup_C_SetData, CallFunc_Array_Add_ReturnValue) == 0x0000FC, "Member 'Fang_expedition_AreaListGroup_C_SetData::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.UpdateData
// 0x0004 (0x0004 - 0x0000)
struct Fang_expedition_AreaListGroup_C_UpdateData final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_AreaListGroup_C_UpdateData) == 0x000004, "Wrong alignment on Fang_expedition_AreaListGroup_C_UpdateData");
static_assert(sizeof(Fang_expedition_AreaListGroup_C_UpdateData) == 0x000004, "Wrong size on Fang_expedition_AreaListGroup_C_UpdateData");
static_assert(offsetof(Fang_expedition_AreaListGroup_C_UpdateData, Param_Index) == 0x000000, "Member 'Fang_expedition_AreaListGroup_C_UpdateData::Param_Index' has a wrong offset!");

// Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.CB_AreaItemClick
// 0x0004 (0x0004 - 0x0000)
struct Fang_expedition_AreaListGroup_C_CB_AreaItemClick final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_AreaListGroup_C_CB_AreaItemClick) == 0x000004, "Wrong alignment on Fang_expedition_AreaListGroup_C_CB_AreaItemClick");
static_assert(sizeof(Fang_expedition_AreaListGroup_C_CB_AreaItemClick) == 0x000004, "Wrong size on Fang_expedition_AreaListGroup_C_CB_AreaItemClick");
static_assert(offsetof(Fang_expedition_AreaListGroup_C_CB_AreaItemClick, Param_Index) == 0x000000, "Member 'Fang_expedition_AreaListGroup_C_CB_AreaItemClick::Param_Index' has a wrong offset!");

// Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.Initialize
// 0x0058 (0x0058 - 0x0000)
struct Fang_expedition_AreaListGroup_C_Initialize final
{
public:
	int32                                         Type;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5DD9[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5DDA[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_Select_Default;                             // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0040(0x0018)()
};
static_assert(alignof(Fang_expedition_AreaListGroup_C_Initialize) == 0x000008, "Wrong alignment on Fang_expedition_AreaListGroup_C_Initialize");
static_assert(sizeof(Fang_expedition_AreaListGroup_C_Initialize) == 0x000058, "Wrong size on Fang_expedition_AreaListGroup_C_Initialize");
static_assert(offsetof(Fang_expedition_AreaListGroup_C_Initialize, Type) == 0x000000, "Member 'Fang_expedition_AreaListGroup_C_Initialize::Type' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListGroup_C_Initialize, Temp_bool_Variable) == 0x000004, "Member 'Fang_expedition_AreaListGroup_C_Initialize::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListGroup_C_Initialize, CallFunc_GetTextFromAsset_ReturnValue) == 0x000008, "Member 'Fang_expedition_AreaListGroup_C_Initialize::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListGroup_C_Initialize, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000018, "Member 'Fang_expedition_AreaListGroup_C_Initialize::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListGroup_C_Initialize, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000028, "Member 'Fang_expedition_AreaListGroup_C_Initialize::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListGroup_C_Initialize, K2Node_Select_Default) == 0x000030, "Member 'Fang_expedition_AreaListGroup_C_Initialize::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListGroup_C_Initialize, CallFunc_Conv_StringToText_ReturnValue) == 0x000040, "Member 'Fang_expedition_AreaListGroup_C_Initialize::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.Finish
// 0x0010 (0x0010 - 0x0000)
struct Fang_expedition_AreaListGroup_C_Finish final
{
public:
	TDelegate<void(int32 Index)>                  K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(Fang_expedition_AreaListGroup_C_Finish) == 0x000004, "Wrong alignment on Fang_expedition_AreaListGroup_C_Finish");
static_assert(sizeof(Fang_expedition_AreaListGroup_C_Finish) == 0x000010, "Wrong size on Fang_expedition_AreaListGroup_C_Finish");
static_assert(offsetof(Fang_expedition_AreaListGroup_C_Finish, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'Fang_expedition_AreaListGroup_C_Finish::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.CheckPlayIcon
// 0x0048 (0x0048 - 0x0000)
struct Fang_expedition_AreaListGroup_C_CheckPlayIcon final
{
public:
	TArray<struct FSBFang_expeditionPlayData>     PlayData;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          IsField;                                           // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5DDB[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LoopEnd;                                           // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5DDC[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFang_expedition_AreaListItem_C*        K2Node_DynamicCast_AsFang_Expedition_Area_List_Item; // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5DDD[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_AreaListGroup_C_CheckPlayIcon) == 0x000008, "Wrong alignment on Fang_expedition_AreaListGroup_C_CheckPlayIcon");
static_assert(sizeof(Fang_expedition_AreaListGroup_C_CheckPlayIcon) == 0x000048, "Wrong size on Fang_expedition_AreaListGroup_C_CheckPlayIcon");
static_assert(offsetof(Fang_expedition_AreaListGroup_C_CheckPlayIcon, PlayData) == 0x000000, "Member 'Fang_expedition_AreaListGroup_C_CheckPlayIcon::PlayData' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListGroup_C_CheckPlayIcon, IsField) == 0x000010, "Member 'Fang_expedition_AreaListGroup_C_CheckPlayIcon::IsField' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListGroup_C_CheckPlayIcon, LoopEnd) == 0x000014, "Member 'Fang_expedition_AreaListGroup_C_CheckPlayIcon::LoopEnd' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListGroup_C_CheckPlayIcon, Temp_int_Variable) == 0x000018, "Member 'Fang_expedition_AreaListGroup_C_CheckPlayIcon::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListGroup_C_CheckPlayIcon, CallFunc_Add_IntInt_ReturnValue) == 0x00001C, "Member 'Fang_expedition_AreaListGroup_C_CheckPlayIcon::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListGroup_C_CheckPlayIcon, CallFunc_GetChildAt_ReturnValue) == 0x000020, "Member 'Fang_expedition_AreaListGroup_C_CheckPlayIcon::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListGroup_C_CheckPlayIcon, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000028, "Member 'Fang_expedition_AreaListGroup_C_CheckPlayIcon::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListGroup_C_CheckPlayIcon, K2Node_DynamicCast_AsFang_Expedition_Area_List_Item) == 0x000030, "Member 'Fang_expedition_AreaListGroup_C_CheckPlayIcon::K2Node_DynamicCast_AsFang_Expedition_Area_List_Item' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListGroup_C_CheckPlayIcon, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'Fang_expedition_AreaListGroup_C_CheckPlayIcon::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListGroup_C_CheckPlayIcon, CallFunc_GetChildrenCount_ReturnValue) == 0x00003C, "Member 'Fang_expedition_AreaListGroup_C_CheckPlayIcon::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListGroup_C_CheckPlayIcon, CallFunc_Subtract_IntInt_ReturnValue) == 0x000040, "Member 'Fang_expedition_AreaListGroup_C_CheckPlayIcon::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");

// Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.GetData
// 0x0168 (0x0168 - 0x0000)
struct Fang_expedition_AreaListGroup_C_GetData final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Valid;                                             // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5DDE[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBFang_expeditionAreaData             AreaData;                                          // 0x0008(0x00A8)(Parm, OutParm)
	class UFang_expedition_AreaListItem_C*        CallFunc_Array_Get_Item;                           // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBFang_expeditionAreaData             CallFunc_GetData_AreaData;                         // 0x00B8(0x00A8)()
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fang_expedition_AreaListGroup_C_GetData) == 0x000008, "Wrong alignment on Fang_expedition_AreaListGroup_C_GetData");
static_assert(sizeof(Fang_expedition_AreaListGroup_C_GetData) == 0x000168, "Wrong size on Fang_expedition_AreaListGroup_C_GetData");
static_assert(offsetof(Fang_expedition_AreaListGroup_C_GetData, Param_Index) == 0x000000, "Member 'Fang_expedition_AreaListGroup_C_GetData::Param_Index' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListGroup_C_GetData, Valid) == 0x000004, "Member 'Fang_expedition_AreaListGroup_C_GetData::Valid' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListGroup_C_GetData, AreaData) == 0x000008, "Member 'Fang_expedition_AreaListGroup_C_GetData::AreaData' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListGroup_C_GetData, CallFunc_Array_Get_Item) == 0x0000B0, "Member 'Fang_expedition_AreaListGroup_C_GetData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListGroup_C_GetData, CallFunc_GetData_AreaData) == 0x0000B8, "Member 'Fang_expedition_AreaListGroup_C_GetData::CallFunc_GetData_AreaData' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListGroup_C_GetData, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000160, "Member 'Fang_expedition_AreaListGroup_C_GetData::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");

// Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.SetFieldData
// 0x0050 (0x0050 - 0x0000)
struct Fang_expedition_AreaListGroup_C_SetFieldData final
{
public:
	class FString                                 Field;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         WorkIndex;                                         // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5DDF[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFang_expedition_AreaListItem_C*        Widget;                                            // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFang_expedition_AreaListItem_C*        CallFunc_Create_ReturnValue;                       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 Index)>                  K2Node_CreateDelegate_OutputDelegate;              // 0x0028(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5DE0[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_AreaListGroup_C_SetFieldData) == 0x000008, "Wrong alignment on Fang_expedition_AreaListGroup_C_SetFieldData");
static_assert(sizeof(Fang_expedition_AreaListGroup_C_SetFieldData) == 0x000050, "Wrong size on Fang_expedition_AreaListGroup_C_SetFieldData");
static_assert(offsetof(Fang_expedition_AreaListGroup_C_SetFieldData, Field) == 0x000000, "Member 'Fang_expedition_AreaListGroup_C_SetFieldData::Field' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListGroup_C_SetFieldData, WorkIndex) == 0x000010, "Member 'Fang_expedition_AreaListGroup_C_SetFieldData::WorkIndex' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListGroup_C_SetFieldData, Widget) == 0x000018, "Member 'Fang_expedition_AreaListGroup_C_SetFieldData::Widget' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListGroup_C_SetFieldData, CallFunc_Create_ReturnValue) == 0x000020, "Member 'Fang_expedition_AreaListGroup_C_SetFieldData::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListGroup_C_SetFieldData, K2Node_CreateDelegate_OutputDelegate) == 0x000028, "Member 'Fang_expedition_AreaListGroup_C_SetFieldData::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListGroup_C_SetFieldData, CallFunc_Array_Add_ReturnValue) == 0x000038, "Member 'Fang_expedition_AreaListGroup_C_SetFieldData::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListGroup_C_SetFieldData, CallFunc_AddChild_ReturnValue) == 0x000040, "Member 'Fang_expedition_AreaListGroup_C_SetFieldData::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListGroup_C_SetFieldData, CallFunc_Array_Add_ReturnValue_1) == 0x000048, "Member 'Fang_expedition_AreaListGroup_C_SetFieldData::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListGroup_C_SetFieldData, CallFunc_Array_Length_ReturnValue) == 0x00004C, "Member 'Fang_expedition_AreaListGroup_C_SetFieldData::CallFunc_Array_Length_ReturnValue' has a wrong offset!");

// Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.CB_FieldItemClick
// 0x0004 (0x0004 - 0x0000)
struct Fang_expedition_AreaListGroup_C_CB_FieldItemClick final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_AreaListGroup_C_CB_FieldItemClick) == 0x000004, "Wrong alignment on Fang_expedition_AreaListGroup_C_CB_FieldItemClick");
static_assert(sizeof(Fang_expedition_AreaListGroup_C_CB_FieldItemClick) == 0x000004, "Wrong size on Fang_expedition_AreaListGroup_C_CB_FieldItemClick");
static_assert(offsetof(Fang_expedition_AreaListGroup_C_CB_FieldItemClick, Param_Index) == 0x000000, "Member 'Fang_expedition_AreaListGroup_C_CB_FieldItemClick::Param_Index' has a wrong offset!");

// Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.SetBtn
// 0x0030 (0x0030 - 0x0000)
struct Fang_expedition_AreaListGroup_C_SetBtn final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5DE1[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFang_expedition_AreaListItem_C*        K2Node_DynamicCast_AsFang_Expedition_Area_List_Item; // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5DE2[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5DE3[0x2];                                     // 0x002A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_AreaListGroup_C_SetBtn) == 0x000008, "Wrong alignment on Fang_expedition_AreaListGroup_C_SetBtn");
static_assert(sizeof(Fang_expedition_AreaListGroup_C_SetBtn) == 0x000030, "Wrong size on Fang_expedition_AreaListGroup_C_SetBtn");
static_assert(offsetof(Fang_expedition_AreaListGroup_C_SetBtn, Param_Index) == 0x000000, "Member 'Fang_expedition_AreaListGroup_C_SetBtn::Param_Index' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListGroup_C_SetBtn, Temp_int_Variable) == 0x000004, "Member 'Fang_expedition_AreaListGroup_C_SetBtn::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListGroup_C_SetBtn, CallFunc_GetChildAt_ReturnValue) == 0x000008, "Member 'Fang_expedition_AreaListGroup_C_SetBtn::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListGroup_C_SetBtn, CallFunc_GetChildrenCount_ReturnValue) == 0x000010, "Member 'Fang_expedition_AreaListGroup_C_SetBtn::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListGroup_C_SetBtn, K2Node_DynamicCast_AsFang_Expedition_Area_List_Item) == 0x000018, "Member 'Fang_expedition_AreaListGroup_C_SetBtn::K2Node_DynamicCast_AsFang_Expedition_Area_List_Item' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListGroup_C_SetBtn, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'Fang_expedition_AreaListGroup_C_SetBtn::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListGroup_C_SetBtn, CallFunc_Subtract_IntInt_ReturnValue) == 0x000024, "Member 'Fang_expedition_AreaListGroup_C_SetBtn::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListGroup_C_SetBtn, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000028, "Member 'Fang_expedition_AreaListGroup_C_SetBtn::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListGroup_C_SetBtn, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000029, "Member 'Fang_expedition_AreaListGroup_C_SetBtn::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListGroup_C_SetBtn, CallFunc_Add_IntInt_ReturnValue) == 0x00002C, "Member 'Fang_expedition_AreaListGroup_C_SetBtn::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.SetNewMarkListEx
// 0x0038 (0x0038 - 0x0000)
struct Fang_expedition_AreaListGroup_C_SetNewMarkListEx final
{
public:
	bool                                          InParam;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5DE4[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 InFieldId;                                         // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5DE5[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFang_expedition_AreaListItem_C*        K2Node_DynamicCast_AsFang_Expedition_Area_List_Item; // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fang_expedition_AreaListGroup_C_SetNewMarkListEx) == 0x000008, "Wrong alignment on Fang_expedition_AreaListGroup_C_SetNewMarkListEx");
static_assert(sizeof(Fang_expedition_AreaListGroup_C_SetNewMarkListEx) == 0x000038, "Wrong size on Fang_expedition_AreaListGroup_C_SetNewMarkListEx");
static_assert(offsetof(Fang_expedition_AreaListGroup_C_SetNewMarkListEx, InParam) == 0x000000, "Member 'Fang_expedition_AreaListGroup_C_SetNewMarkListEx::InParam' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListGroup_C_SetNewMarkListEx, InFieldId) == 0x000008, "Member 'Fang_expedition_AreaListGroup_C_SetNewMarkListEx::InFieldId' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListGroup_C_SetNewMarkListEx, CallFunc_Array_Find_ReturnValue) == 0x000018, "Member 'Fang_expedition_AreaListGroup_C_SetNewMarkListEx::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListGroup_C_SetNewMarkListEx, CallFunc_NotEqual_IntInt_ReturnValue) == 0x00001C, "Member 'Fang_expedition_AreaListGroup_C_SetNewMarkListEx::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListGroup_C_SetNewMarkListEx, CallFunc_GetChildAt_ReturnValue) == 0x000020, "Member 'Fang_expedition_AreaListGroup_C_SetNewMarkListEx::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListGroup_C_SetNewMarkListEx, K2Node_DynamicCast_AsFang_Expedition_Area_List_Item) == 0x000028, "Member 'Fang_expedition_AreaListGroup_C_SetNewMarkListEx::K2Node_DynamicCast_AsFang_Expedition_Area_List_Item' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListGroup_C_SetNewMarkListEx, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'Fang_expedition_AreaListGroup_C_SetNewMarkListEx::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

