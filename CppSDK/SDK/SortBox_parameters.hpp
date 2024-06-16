#pragma once

 

// Package: SortBox

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"
#include "SortTypeCategory_structs.hpp"
#include "SortTypeText_structs.hpp"
#include "SortTypeData_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function SortBox.SortBox_C.OnSelectSortType__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct SortBox_C_OnSelectSortType__DelegateSignature final
{
public:
	ESBItemSortType                               Param_SortType;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SortBox_C_OnSelectSortType__DelegateSignature) == 0x000001, "Wrong alignment on SortBox_C_OnSelectSortType__DelegateSignature");
static_assert(sizeof(SortBox_C_OnSelectSortType__DelegateSignature) == 0x000001, "Wrong size on SortBox_C_OnSelectSortType__DelegateSignature");
static_assert(offsetof(SortBox_C_OnSelectSortType__DelegateSignature, Param_SortType) == 0x000000, "Member 'SortBox_C_OnSelectSortType__DelegateSignature::Param_SortType' has a wrong offset!");

// Function SortBox.SortBox_C.ExecuteUbergraph_SortBox
// 0x0030 (0x0030 - 0x0000)
struct SortBox_C_ExecuteUbergraph_SortBox final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_42F4[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_ComponentBoundEvent_SelectedItem;           // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   K2Node_ComponentBoundEvent_SelectionType;          // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               CallFunc_Map_Find_Value;                           // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_42F5[0x5];                                     // 0x001B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SortBox_C_ExecuteUbergraph_SortBox) == 0x000008, "Wrong alignment on SortBox_C_ExecuteUbergraph_SortBox");
static_assert(sizeof(SortBox_C_ExecuteUbergraph_SortBox) == 0x000030, "Wrong size on SortBox_C_ExecuteUbergraph_SortBox");
static_assert(offsetof(SortBox_C_ExecuteUbergraph_SortBox, EntryPoint) == 0x000000, "Member 'SortBox_C_ExecuteUbergraph_SortBox::EntryPoint' has a wrong offset!");
static_assert(offsetof(SortBox_C_ExecuteUbergraph_SortBox, K2Node_Event_IsDesignTime) == 0x000004, "Member 'SortBox_C_ExecuteUbergraph_SortBox::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(SortBox_C_ExecuteUbergraph_SortBox, K2Node_ComponentBoundEvent_SelectedItem) == 0x000008, "Member 'SortBox_C_ExecuteUbergraph_SortBox::K2Node_ComponentBoundEvent_SelectedItem' has a wrong offset!");
static_assert(offsetof(SortBox_C_ExecuteUbergraph_SortBox, K2Node_ComponentBoundEvent_SelectionType) == 0x000018, "Member 'SortBox_C_ExecuteUbergraph_SortBox::K2Node_ComponentBoundEvent_SelectionType' has a wrong offset!");
static_assert(offsetof(SortBox_C_ExecuteUbergraph_SortBox, CallFunc_Map_Find_Value) == 0x000019, "Member 'SortBox_C_ExecuteUbergraph_SortBox::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(SortBox_C_ExecuteUbergraph_SortBox, CallFunc_Map_Find_ReturnValue) == 0x00001A, "Member 'SortBox_C_ExecuteUbergraph_SortBox::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(SortBox_C_ExecuteUbergraph_SortBox, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000020, "Member 'SortBox_C_ExecuteUbergraph_SortBox::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(SortBox_C_ExecuteUbergraph_SortBox, CallFunc_MakeVector2D_ReturnValue) == 0x000028, "Member 'SortBox_C_ExecuteUbergraph_SortBox::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");

// Function SortBox.SortBox_C.BndEvt__Cmb_Drop_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct SortBox_C_BndEvt__Cmb_Drop_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature final
{
public:
	class FString                                 SelectedItem;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   SelectionType;                                     // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SortBox_C_BndEvt__Cmb_Drop_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature) == 0x000008, "Wrong alignment on SortBox_C_BndEvt__Cmb_Drop_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature");
static_assert(sizeof(SortBox_C_BndEvt__Cmb_Drop_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature) == 0x000018, "Wrong size on SortBox_C_BndEvt__Cmb_Drop_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature");
static_assert(offsetof(SortBox_C_BndEvt__Cmb_Drop_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature, SelectedItem) == 0x000000, "Member 'SortBox_C_BndEvt__Cmb_Drop_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature::SelectedItem' has a wrong offset!");
static_assert(offsetof(SortBox_C_BndEvt__Cmb_Drop_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature, SelectionType) == 0x000010, "Member 'SortBox_C_BndEvt__Cmb_Drop_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature::SelectionType' has a wrong offset!");

// Function SortBox.SortBox_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct SortBox_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SortBox_C_PreConstruct) == 0x000001, "Wrong alignment on SortBox_C_PreConstruct");
static_assert(sizeof(SortBox_C_PreConstruct) == 0x000001, "Wrong size on SortBox_C_PreConstruct");
static_assert(offsetof(SortBox_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'SortBox_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function SortBox.SortBox_C.On_Cmb_Drop_GenerateWidget_0
// 0x0038 (0x0038 - 0x0000)
struct SortBox_C_On_Cmb_Drop_GenerateWidget_0 final
{
public:
	class FString                                 Item;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UWidget*                                ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCmnComboBoxItem1_C*                    CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
};
static_assert(alignof(SortBox_C_On_Cmb_Drop_GenerateWidget_0) == 0x000008, "Wrong alignment on SortBox_C_On_Cmb_Drop_GenerateWidget_0");
static_assert(sizeof(SortBox_C_On_Cmb_Drop_GenerateWidget_0) == 0x000038, "Wrong size on SortBox_C_On_Cmb_Drop_GenerateWidget_0");
static_assert(offsetof(SortBox_C_On_Cmb_Drop_GenerateWidget_0, Item) == 0x000000, "Member 'SortBox_C_On_Cmb_Drop_GenerateWidget_0::Item' has a wrong offset!");
static_assert(offsetof(SortBox_C_On_Cmb_Drop_GenerateWidget_0, ReturnValue) == 0x000010, "Member 'SortBox_C_On_Cmb_Drop_GenerateWidget_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(SortBox_C_On_Cmb_Drop_GenerateWidget_0, CallFunc_Create_ReturnValue) == 0x000018, "Member 'SortBox_C_On_Cmb_Drop_GenerateWidget_0::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(SortBox_C_On_Cmb_Drop_GenerateWidget_0, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'SortBox_C_On_Cmb_Drop_GenerateWidget_0::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function SortBox.SortBox_C.GetSortType
// 0x0048 (0x0048 - 0x0000)
struct SortBox_C_GetSortType final
{
public:
	ESBItemSortType                               OutSortType;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42F6[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TmpSelectedOptionId;                               // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TmpSortTypeLength;                                 // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_42F7[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<ESBItemSortType>                       CallFunc_Map_Values_Values;                        // 0x0010(0x0010)(ReferenceParm)
	class FString                                 CallFunc_GetSelectedOption_ReturnValue;            // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class FString>                         CallFunc_Map_Keys_Keys;                            // 0x0030(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SortBox_C_GetSortType) == 0x000008, "Wrong alignment on SortBox_C_GetSortType");
static_assert(sizeof(SortBox_C_GetSortType) == 0x000048, "Wrong size on SortBox_C_GetSortType");
static_assert(offsetof(SortBox_C_GetSortType, OutSortType) == 0x000000, "Member 'SortBox_C_GetSortType::OutSortType' has a wrong offset!");
static_assert(offsetof(SortBox_C_GetSortType, TmpSelectedOptionId) == 0x000004, "Member 'SortBox_C_GetSortType::TmpSelectedOptionId' has a wrong offset!");
static_assert(offsetof(SortBox_C_GetSortType, TmpSortTypeLength) == 0x000008, "Member 'SortBox_C_GetSortType::TmpSortTypeLength' has a wrong offset!");
static_assert(offsetof(SortBox_C_GetSortType, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x00000C, "Member 'SortBox_C_GetSortType::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SortBox_C_GetSortType, CallFunc_Map_Values_Values) == 0x000010, "Member 'SortBox_C_GetSortType::CallFunc_Map_Values_Values' has a wrong offset!");
static_assert(offsetof(SortBox_C_GetSortType, CallFunc_GetSelectedOption_ReturnValue) == 0x000020, "Member 'SortBox_C_GetSortType::CallFunc_GetSelectedOption_ReturnValue' has a wrong offset!");
static_assert(offsetof(SortBox_C_GetSortType, CallFunc_Map_Keys_Keys) == 0x000030, "Member 'SortBox_C_GetSortType::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(SortBox_C_GetSortType, CallFunc_Array_Find_ReturnValue) == 0x000040, "Member 'SortBox_C_GetSortType::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(SortBox_C_GetSortType, CallFunc_IsValid_ReturnValue) == 0x000044, "Member 'SortBox_C_GetSortType::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function SortBox.SortBox_C.RemoveOption
// 0x0068 (0x0068 - 0x0000)
struct SortBox_C_RemoveOption final
{
public:
	ESBItemSortType                               InOptionType;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42F8[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 TmpOptionName;                                     // 0x0008(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_42F9[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         CallFunc_Map_Keys_Keys;                            // 0x0020(0x0010)(ReferenceParm)
	bool                                          CallFunc_RemoveOption_ReturnValue;                 // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_42FA[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<ESBItemSortType>                       CallFunc_Map_Values_Values;                        // 0x0038(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_42FB[0x3];                                     // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Array_Get_Item;                           // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SortBox_C_RemoveOption) == 0x000008, "Wrong alignment on SortBox_C_RemoveOption");
static_assert(sizeof(SortBox_C_RemoveOption) == 0x000068, "Wrong size on SortBox_C_RemoveOption");
static_assert(offsetof(SortBox_C_RemoveOption, InOptionType) == 0x000000, "Member 'SortBox_C_RemoveOption::InOptionType' has a wrong offset!");
static_assert(offsetof(SortBox_C_RemoveOption, TmpOptionName) == 0x000008, "Member 'SortBox_C_RemoveOption::TmpOptionName' has a wrong offset!");
static_assert(offsetof(SortBox_C_RemoveOption, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'SortBox_C_RemoveOption::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SortBox_C_RemoveOption, CallFunc_Map_Keys_Keys) == 0x000020, "Member 'SortBox_C_RemoveOption::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(SortBox_C_RemoveOption, CallFunc_RemoveOption_ReturnValue) == 0x000030, "Member 'SortBox_C_RemoveOption::CallFunc_RemoveOption_ReturnValue' has a wrong offset!");
static_assert(offsetof(SortBox_C_RemoveOption, CallFunc_Map_Values_Values) == 0x000038, "Member 'SortBox_C_RemoveOption::CallFunc_Map_Values_Values' has a wrong offset!");
static_assert(offsetof(SortBox_C_RemoveOption, CallFunc_Array_Find_ReturnValue) == 0x000048, "Member 'SortBox_C_RemoveOption::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(SortBox_C_RemoveOption, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x00004C, "Member 'SortBox_C_RemoveOption::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SortBox_C_RemoveOption, CallFunc_Array_Get_Item) == 0x000050, "Member 'SortBox_C_RemoveOption::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(SortBox_C_RemoveOption, CallFunc_NotEqual_StrStr_ReturnValue) == 0x000060, "Member 'SortBox_C_RemoveOption::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");

// Function SortBox.SortBox_C.GenerateOptions
// 0x0038 (0x0038 - 0x0000)
struct SortBox_C_GenerateOptions final
{
public:
	ESBItemSortType                               CurrentSavedSortType;                              // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42FC[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               CallFunc_GetRecentSortType_ReturnValue;            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42FD[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               CallFunc_Array_Get_Item;                           // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_42FE[0x2];                                     // 0x001A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetSortTextId_textId;                     // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SortBox_C_GenerateOptions) == 0x000008, "Wrong alignment on SortBox_C_GenerateOptions");
static_assert(sizeof(SortBox_C_GenerateOptions) == 0x000038, "Wrong size on SortBox_C_GenerateOptions");
static_assert(offsetof(SortBox_C_GenerateOptions, CurrentSavedSortType) == 0x000000, "Member 'SortBox_C_GenerateOptions::CurrentSavedSortType' has a wrong offset!");
static_assert(offsetof(SortBox_C_GenerateOptions, Temp_int_Array_Index_Variable) == 0x000004, "Member 'SortBox_C_GenerateOptions::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(SortBox_C_GenerateOptions, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'SortBox_C_GenerateOptions::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(SortBox_C_GenerateOptions, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'SortBox_C_GenerateOptions::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SortBox_C_GenerateOptions, CallFunc_GetRecentSortType_ReturnValue) == 0x000010, "Member 'SortBox_C_GenerateOptions::CallFunc_GetRecentSortType_ReturnValue' has a wrong offset!");
static_assert(offsetof(SortBox_C_GenerateOptions, CallFunc_Array_Length_ReturnValue) == 0x000014, "Member 'SortBox_C_GenerateOptions::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(SortBox_C_GenerateOptions, CallFunc_Array_Get_Item) == 0x000018, "Member 'SortBox_C_GenerateOptions::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(SortBox_C_GenerateOptions, CallFunc_Less_IntInt_ReturnValue) == 0x000019, "Member 'SortBox_C_GenerateOptions::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SortBox_C_GenerateOptions, CallFunc_GetSortTextId_textId) == 0x00001C, "Member 'SortBox_C_GenerateOptions::CallFunc_GetSortTextId_textId' has a wrong offset!");
static_assert(offsetof(SortBox_C_GenerateOptions, CallFunc_GetTextFromAsset_ReturnValue) == 0x000020, "Member 'SortBox_C_GenerateOptions::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(SortBox_C_GenerateOptions, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000030, "Member 'SortBox_C_GenerateOptions::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function SortBox.SortBox_C.LoadOptions
// 0x0060 (0x0060 - 0x0000)
struct SortBox_C_LoadOptions final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42FF[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<ESBItemSortType>                       K2Node_MakeArray_Array;                            // 0x0010(0x0010)(ReferenceParm)
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0020(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSortTypeData                          CallFunc_GetDataTableRowFromName_OutRow;           // 0x0038(0x0018)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4300[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SortBox_C_LoadOptions) == 0x000008, "Wrong alignment on SortBox_C_LoadOptions");
static_assert(sizeof(SortBox_C_LoadOptions) == 0x000060, "Wrong size on SortBox_C_LoadOptions");
static_assert(offsetof(SortBox_C_LoadOptions, Temp_int_Array_Index_Variable) == 0x000000, "Member 'SortBox_C_LoadOptions::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(SortBox_C_LoadOptions, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'SortBox_C_LoadOptions::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(SortBox_C_LoadOptions, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'SortBox_C_LoadOptions::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SortBox_C_LoadOptions, K2Node_MakeArray_Array) == 0x000010, "Member 'SortBox_C_LoadOptions::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(SortBox_C_LoadOptions, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000020, "Member 'SortBox_C_LoadOptions::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(SortBox_C_LoadOptions, CallFunc_Array_Get_Item) == 0x000030, "Member 'SortBox_C_LoadOptions::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(SortBox_C_LoadOptions, CallFunc_GetDataTableRowFromName_OutRow) == 0x000038, "Member 'SortBox_C_LoadOptions::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(SortBox_C_LoadOptions, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000050, "Member 'SortBox_C_LoadOptions::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(SortBox_C_LoadOptions, CallFunc_Array_Length_ReturnValue) == 0x000054, "Member 'SortBox_C_LoadOptions::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(SortBox_C_LoadOptions, CallFunc_Less_IntInt_ReturnValue) == 0x000058, "Member 'SortBox_C_LoadOptions::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SortBox_C_LoadOptions, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000059, "Member 'SortBox_C_LoadOptions::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function SortBox.SortBox_C.SetSortType
// 0x0002 (0x0002 - 0x0000)
struct SortBox_C_SetSortType final
{
public:
	ESBSortFilterSaveType                         Param_SaveType;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESortTypeCategory                             Param_SortTypeCategory;                            // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SortBox_C_SetSortType) == 0x000001, "Wrong alignment on SortBox_C_SetSortType");
static_assert(sizeof(SortBox_C_SetSortType) == 0x000002, "Wrong size on SortBox_C_SetSortType");
static_assert(offsetof(SortBox_C_SetSortType, Param_SaveType) == 0x000000, "Member 'SortBox_C_SetSortType::Param_SaveType' has a wrong offset!");
static_assert(offsetof(SortBox_C_SetSortType, Param_SortTypeCategory) == 0x000001, "Member 'SortBox_C_SetSortType::Param_SortTypeCategory' has a wrong offset!");

// Function SortBox.SortBox_C.SetSelectedSortType
// 0x0040 (0x0040 - 0x0000)
struct SortBox_C_SetSelectedSortType final
{
public:
	ESBItemSortType                               InSortType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               LocalSortType;                                     // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4301[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         CallFunc_Map_Keys_Keys;                            // 0x0008(0x0010)(ReferenceParm)
	TArray<ESBItemSortType>                       CallFunc_Map_Values_Values;                        // 0x0018(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4302[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Array_Get_Item;                           // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(SortBox_C_SetSelectedSortType) == 0x000008, "Wrong alignment on SortBox_C_SetSelectedSortType");
static_assert(sizeof(SortBox_C_SetSelectedSortType) == 0x000040, "Wrong size on SortBox_C_SetSelectedSortType");
static_assert(offsetof(SortBox_C_SetSelectedSortType, InSortType) == 0x000000, "Member 'SortBox_C_SetSelectedSortType::InSortType' has a wrong offset!");
static_assert(offsetof(SortBox_C_SetSelectedSortType, LocalSortType) == 0x000001, "Member 'SortBox_C_SetSelectedSortType::LocalSortType' has a wrong offset!");
static_assert(offsetof(SortBox_C_SetSelectedSortType, CallFunc_Map_Keys_Keys) == 0x000008, "Member 'SortBox_C_SetSelectedSortType::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(SortBox_C_SetSelectedSortType, CallFunc_Map_Values_Values) == 0x000018, "Member 'SortBox_C_SetSelectedSortType::CallFunc_Map_Values_Values' has a wrong offset!");
static_assert(offsetof(SortBox_C_SetSelectedSortType, CallFunc_Array_Find_ReturnValue) == 0x000028, "Member 'SortBox_C_SetSelectedSortType::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(SortBox_C_SetSelectedSortType, CallFunc_NotEqual_IntInt_ReturnValue) == 0x00002C, "Member 'SortBox_C_SetSelectedSortType::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SortBox_C_SetSelectedSortType, CallFunc_Array_Get_Item) == 0x000030, "Member 'SortBox_C_SetSelectedSortType::CallFunc_Array_Get_Item' has a wrong offset!");

// Function SortBox.SortBox_C.GetSortTextId
// 0x0048 (0x0048 - 0x0000)
struct SortBox_C_GetSortTextId final
{
public:
	ESBItemSortType                               Param_SortType;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4303[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TextId;                                            // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               TmpSortType;                                       // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4304[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0018(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x002C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4305[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSortTypeText                          CallFunc_GetDataTableRowFromName_OutRow;           // 0x0038(0x0008)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SortBox_C_GetSortTextId) == 0x000008, "Wrong alignment on SortBox_C_GetSortTextId");
static_assert(sizeof(SortBox_C_GetSortTextId) == 0x000048, "Wrong size on SortBox_C_GetSortTextId");
static_assert(offsetof(SortBox_C_GetSortTextId, Param_SortType) == 0x000000, "Member 'SortBox_C_GetSortTextId::Param_SortType' has a wrong offset!");
static_assert(offsetof(SortBox_C_GetSortTextId, TextId) == 0x000004, "Member 'SortBox_C_GetSortTextId::TextId' has a wrong offset!");
static_assert(offsetof(SortBox_C_GetSortTextId, TmpSortType) == 0x000008, "Member 'SortBox_C_GetSortTextId::TmpSortType' has a wrong offset!");
static_assert(offsetof(SortBox_C_GetSortTextId, Temp_int_Array_Index_Variable) == 0x00000C, "Member 'SortBox_C_GetSortTextId::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(SortBox_C_GetSortTextId, Temp_int_Loop_Counter_Variable) == 0x000010, "Member 'SortBox_C_GetSortTextId::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(SortBox_C_GetSortTextId, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'SortBox_C_GetSortTextId::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SortBox_C_GetSortTextId, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000018, "Member 'SortBox_C_GetSortTextId::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(SortBox_C_GetSortTextId, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'SortBox_C_GetSortTextId::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(SortBox_C_GetSortTextId, CallFunc_Array_Get_Item) == 0x00002C, "Member 'SortBox_C_GetSortTextId::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(SortBox_C_GetSortTextId, CallFunc_Less_IntInt_ReturnValue) == 0x000034, "Member 'SortBox_C_GetSortTextId::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SortBox_C_GetSortTextId, CallFunc_GetDataTableRowFromName_OutRow) == 0x000038, "Member 'SortBox_C_GetSortTextId::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(SortBox_C_GetSortTextId, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000040, "Member 'SortBox_C_GetSortTextId::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(SortBox_C_GetSortTextId, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000041, "Member 'SortBox_C_GetSortTextId::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

}

