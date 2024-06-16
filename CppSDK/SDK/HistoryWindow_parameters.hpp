#pragma once

 

// Package: HistoryWindow

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function HistoryWindow.HistoryWindow_C.OnRequest__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct HistoryWindow_C_OnRequest__DelegateSignature final
{
public:
	ESBHistoryType                                Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4197[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Year;                                              // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Month;                                             // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Count;                                             // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HistoryWindow_C_OnRequest__DelegateSignature) == 0x000004, "Wrong alignment on HistoryWindow_C_OnRequest__DelegateSignature");
static_assert(sizeof(HistoryWindow_C_OnRequest__DelegateSignature) == 0x000010, "Wrong size on HistoryWindow_C_OnRequest__DelegateSignature");
static_assert(offsetof(HistoryWindow_C_OnRequest__DelegateSignature, Type) == 0x000000, "Member 'HistoryWindow_C_OnRequest__DelegateSignature::Type' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_OnRequest__DelegateSignature, Year) == 0x000004, "Member 'HistoryWindow_C_OnRequest__DelegateSignature::Year' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_OnRequest__DelegateSignature, Month) == 0x000008, "Member 'HistoryWindow_C_OnRequest__DelegateSignature::Month' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_OnRequest__DelegateSignature, Count) == 0x00000C, "Member 'HistoryWindow_C_OnRequest__DelegateSignature::Count' has a wrong offset!");

// Function HistoryWindow.HistoryWindow_C.OnRequestDel__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct HistoryWindow_C_OnRequestDel__DelegateSignature final
{
public:
	ESBHistoryType                                Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HistoryWindow_C_OnRequestDel__DelegateSignature) == 0x000001, "Wrong alignment on HistoryWindow_C_OnRequestDel__DelegateSignature");
static_assert(sizeof(HistoryWindow_C_OnRequestDel__DelegateSignature) == 0x000001, "Wrong size on HistoryWindow_C_OnRequestDel__DelegateSignature");
static_assert(offsetof(HistoryWindow_C_OnRequestDel__DelegateSignature, Type) == 0x000000, "Member 'HistoryWindow_C_OnRequestDel__DelegateSignature::Type' has a wrong offset!");

// Function HistoryWindow.HistoryWindow_C.ExecuteUbergraph_HistoryWindow
// 0x00D8 (0x00D8 - 0x0000)
struct HistoryWindow_C_ExecuteUbergraph_HistoryWindow final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanInput_Ok;                              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4198[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4199[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_ComponentBoundEvent_SelectedItem_2;         // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   K2Node_ComponentBoundEvent_SelectionType_2;        // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_419A[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_ComponentBoundEvent_SelectedItem_1;         // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   K2Node_ComponentBoundEvent_SelectionType_1;        // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_419B[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetSelectedOptionIndex_ReturnValue;       // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetSelectedOptionIndex_ReturnValue_1;     // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0044(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_419C[0x3];                                     // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_ComponentBoundEvent_SelectedItem;           // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   K2Node_ComponentBoundEvent_SelectionType;          // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_419D[0x3];                                     // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetSelectedOptionIndex_ReturnValue_2;     // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHistory_DeleteAnnounce_C*              CallFunc_Create_ReturnValue;                       // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item;                           // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item_1;                         // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_CustomEvent_Text;                           // 0x0088(0x0018)()
	struct FSBHistoryExpired                      K2Node_CustomEvent_Data;                           // 0x00A0(0x0028)(NoDestructor)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item_2;                         // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanInput_Ok_1;                            // 0x00D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(HistoryWindow_C_ExecuteUbergraph_HistoryWindow) == 0x000008, "Wrong alignment on HistoryWindow_C_ExecuteUbergraph_HistoryWindow");
static_assert(sizeof(HistoryWindow_C_ExecuteUbergraph_HistoryWindow) == 0x0000D8, "Wrong size on HistoryWindow_C_ExecuteUbergraph_HistoryWindow");
static_assert(offsetof(HistoryWindow_C_ExecuteUbergraph_HistoryWindow, EntryPoint) == 0x000000, "Member 'HistoryWindow_C_ExecuteUbergraph_HistoryWindow::EntryPoint' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_ExecuteUbergraph_HistoryWindow, CallFunc_CanInput_Ok) == 0x000004, "Member 'HistoryWindow_C_ExecuteUbergraph_HistoryWindow::CallFunc_CanInput_Ok' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_ExecuteUbergraph_HistoryWindow, CallFunc_PlaySE_ReturnValue) == 0x000008, "Member 'HistoryWindow_C_ExecuteUbergraph_HistoryWindow::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_ExecuteUbergraph_HistoryWindow, K2Node_ComponentBoundEvent_SelectedItem_2) == 0x000010, "Member 'HistoryWindow_C_ExecuteUbergraph_HistoryWindow::K2Node_ComponentBoundEvent_SelectedItem_2' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_ExecuteUbergraph_HistoryWindow, K2Node_ComponentBoundEvent_SelectionType_2) == 0x000020, "Member 'HistoryWindow_C_ExecuteUbergraph_HistoryWindow::K2Node_ComponentBoundEvent_SelectionType_2' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_ExecuteUbergraph_HistoryWindow, K2Node_ComponentBoundEvent_SelectedItem_1) == 0x000028, "Member 'HistoryWindow_C_ExecuteUbergraph_HistoryWindow::K2Node_ComponentBoundEvent_SelectedItem_1' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_ExecuteUbergraph_HistoryWindow, K2Node_ComponentBoundEvent_SelectionType_1) == 0x000038, "Member 'HistoryWindow_C_ExecuteUbergraph_HistoryWindow::K2Node_ComponentBoundEvent_SelectionType_1' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_ExecuteUbergraph_HistoryWindow, CallFunc_GetSelectedOptionIndex_ReturnValue) == 0x00003C, "Member 'HistoryWindow_C_ExecuteUbergraph_HistoryWindow::CallFunc_GetSelectedOptionIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_ExecuteUbergraph_HistoryWindow, CallFunc_GetSelectedOptionIndex_ReturnValue_1) == 0x000040, "Member 'HistoryWindow_C_ExecuteUbergraph_HistoryWindow::CallFunc_GetSelectedOptionIndex_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_ExecuteUbergraph_HistoryWindow, K2Node_CreateDelegate_OutputDelegate) == 0x000044, "Member 'HistoryWindow_C_ExecuteUbergraph_HistoryWindow::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_ExecuteUbergraph_HistoryWindow, CallFunc_Not_PreBool_ReturnValue) == 0x000054, "Member 'HistoryWindow_C_ExecuteUbergraph_HistoryWindow::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_ExecuteUbergraph_HistoryWindow, K2Node_ComponentBoundEvent_SelectedItem) == 0x000058, "Member 'HistoryWindow_C_ExecuteUbergraph_HistoryWindow::K2Node_ComponentBoundEvent_SelectedItem' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_ExecuteUbergraph_HistoryWindow, K2Node_ComponentBoundEvent_SelectionType) == 0x000068, "Member 'HistoryWindow_C_ExecuteUbergraph_HistoryWindow::K2Node_ComponentBoundEvent_SelectionType' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_ExecuteUbergraph_HistoryWindow, CallFunc_GetSelectedOptionIndex_ReturnValue_2) == 0x00006C, "Member 'HistoryWindow_C_ExecuteUbergraph_HistoryWindow::CallFunc_GetSelectedOptionIndex_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_ExecuteUbergraph_HistoryWindow, CallFunc_PlayAnimation_ReturnValue) == 0x000070, "Member 'HistoryWindow_C_ExecuteUbergraph_HistoryWindow::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_ExecuteUbergraph_HistoryWindow, CallFunc_Create_ReturnValue) == 0x000078, "Member 'HistoryWindow_C_ExecuteUbergraph_HistoryWindow::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_ExecuteUbergraph_HistoryWindow, CallFunc_Array_Get_Item) == 0x000080, "Member 'HistoryWindow_C_ExecuteUbergraph_HistoryWindow::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_ExecuteUbergraph_HistoryWindow, CallFunc_Array_Get_Item_1) == 0x000084, "Member 'HistoryWindow_C_ExecuteUbergraph_HistoryWindow::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_ExecuteUbergraph_HistoryWindow, K2Node_CustomEvent_Text) == 0x000088, "Member 'HistoryWindow_C_ExecuteUbergraph_HistoryWindow::K2Node_CustomEvent_Text' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_ExecuteUbergraph_HistoryWindow, K2Node_CustomEvent_Data) == 0x0000A0, "Member 'HistoryWindow_C_ExecuteUbergraph_HistoryWindow::K2Node_CustomEvent_Data' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_ExecuteUbergraph_HistoryWindow, CallFunc_PlayAnimation_ReturnValue_1) == 0x0000C8, "Member 'HistoryWindow_C_ExecuteUbergraph_HistoryWindow::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_ExecuteUbergraph_HistoryWindow, CallFunc_Array_Get_Item_2) == 0x0000D0, "Member 'HistoryWindow_C_ExecuteUbergraph_HistoryWindow::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_ExecuteUbergraph_HistoryWindow, CallFunc_CanInput_Ok_1) == 0x0000D4, "Member 'HistoryWindow_C_ExecuteUbergraph_HistoryWindow::CallFunc_CanInput_Ok_1' has a wrong offset!");

// Function HistoryWindow.HistoryWindow_C.SetExpiredData
// 0x0028 (0x0028 - 0x0000)
struct HistoryWindow_C_SetExpiredData final
{
public:
	struct FSBHistoryExpired                      Data;                                              // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(HistoryWindow_C_SetExpiredData) == 0x000008, "Wrong alignment on HistoryWindow_C_SetExpiredData");
static_assert(sizeof(HistoryWindow_C_SetExpiredData) == 0x000028, "Wrong size on HistoryWindow_C_SetExpiredData");
static_assert(offsetof(HistoryWindow_C_SetExpiredData, Data) == 0x000000, "Member 'HistoryWindow_C_SetExpiredData::Data' has a wrong offset!");

// Function HistoryWindow.HistoryWindow_C.ShowMessageDialog_Event
// 0x0018 (0x0018 - 0x0000)
struct HistoryWindow_C_ShowMessageDialog_Event final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(HistoryWindow_C_ShowMessageDialog_Event) == 0x000008, "Wrong alignment on HistoryWindow_C_ShowMessageDialog_Event");
static_assert(sizeof(HistoryWindow_C_ShowMessageDialog_Event) == 0x000018, "Wrong size on HistoryWindow_C_ShowMessageDialog_Event");
static_assert(offsetof(HistoryWindow_C_ShowMessageDialog_Event, Text) == 0x000000, "Member 'HistoryWindow_C_ShowMessageDialog_Event::Text' has a wrong offset!");

// Function HistoryWindow.HistoryWindow_C.BndEvt__ComboBox_Count_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct HistoryWindow_C_BndEvt__ComboBox_Count_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature final
{
public:
	class FString                                 SelectedItem;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   SelectionType;                                     // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HistoryWindow_C_BndEvt__ComboBox_Count_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature) == 0x000008, "Wrong alignment on HistoryWindow_C_BndEvt__ComboBox_Count_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature");
static_assert(sizeof(HistoryWindow_C_BndEvt__ComboBox_Count_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature) == 0x000018, "Wrong size on HistoryWindow_C_BndEvt__ComboBox_Count_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature");
static_assert(offsetof(HistoryWindow_C_BndEvt__ComboBox_Count_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature, SelectedItem) == 0x000000, "Member 'HistoryWindow_C_BndEvt__ComboBox_Count_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature::SelectedItem' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_BndEvt__ComboBox_Count_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature, SelectionType) == 0x000010, "Member 'HistoryWindow_C_BndEvt__ComboBox_Count_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature::SelectionType' has a wrong offset!");

// Function HistoryWindow.HistoryWindow_C.BndEvt__ComboBox_Month_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct HistoryWindow_C_BndEvt__ComboBox_Month_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature final
{
public:
	class FString                                 SelectedItem;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   SelectionType;                                     // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HistoryWindow_C_BndEvt__ComboBox_Month_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature) == 0x000008, "Wrong alignment on HistoryWindow_C_BndEvt__ComboBox_Month_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature");
static_assert(sizeof(HistoryWindow_C_BndEvt__ComboBox_Month_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature) == 0x000018, "Wrong size on HistoryWindow_C_BndEvt__ComboBox_Month_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature");
static_assert(offsetof(HistoryWindow_C_BndEvt__ComboBox_Month_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature, SelectedItem) == 0x000000, "Member 'HistoryWindow_C_BndEvt__ComboBox_Month_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature::SelectedItem' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_BndEvt__ComboBox_Month_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature, SelectionType) == 0x000010, "Member 'HistoryWindow_C_BndEvt__ComboBox_Month_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature::SelectionType' has a wrong offset!");

// Function HistoryWindow.HistoryWindow_C.BndEvt__ComboBox_Year_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct HistoryWindow_C_BndEvt__ComboBox_Year_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature final
{
public:
	class FString                                 SelectedItem;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   SelectionType;                                     // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HistoryWindow_C_BndEvt__ComboBox_Year_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature) == 0x000008, "Wrong alignment on HistoryWindow_C_BndEvt__ComboBox_Year_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature");
static_assert(sizeof(HistoryWindow_C_BndEvt__ComboBox_Year_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature) == 0x000018, "Wrong size on HistoryWindow_C_BndEvt__ComboBox_Year_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature");
static_assert(offsetof(HistoryWindow_C_BndEvt__ComboBox_Year_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature, SelectedItem) == 0x000000, "Member 'HistoryWindow_C_BndEvt__ComboBox_Year_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature::SelectedItem' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_BndEvt__ComboBox_Year_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature, SelectionType) == 0x000010, "Member 'HistoryWindow_C_BndEvt__ComboBox_Year_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature::SelectionType' has a wrong offset!");

// Function HistoryWindow.HistoryWindow_C.Show
// 0x0048 (0x0048 - 0x0000)
struct HistoryWindow_C_Show final
{
public:
	ESBHistoryType                                Param_HistoryType;                                 // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_419E[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Temp_name_Variable;                                // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_1;                              // 0x000C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBHistoryType                                Temp_byte_Variable;                                // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_419F[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_Select_Default;                             // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBHistoryType                                Temp_byte_Variable_1;                              // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41A0[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Select_Default_1;                           // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HistoryWindow_C_Show) == 0x000008, "Wrong alignment on HistoryWindow_C_Show");
static_assert(sizeof(HistoryWindow_C_Show) == 0x000048, "Wrong size on HistoryWindow_C_Show");
static_assert(offsetof(HistoryWindow_C_Show, Param_HistoryType) == 0x000000, "Member 'HistoryWindow_C_Show::Param_HistoryType' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_Show, Temp_name_Variable) == 0x000004, "Member 'HistoryWindow_C_Show::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_Show, Temp_name_Variable_1) == 0x00000C, "Member 'HistoryWindow_C_Show::Temp_name_Variable_1' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_Show, Temp_byte_Variable) == 0x000014, "Member 'HistoryWindow_C_Show::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_Show, Temp_int_Variable) == 0x000018, "Member 'HistoryWindow_C_Show::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_Show, Temp_int_Variable_1) == 0x00001C, "Member 'HistoryWindow_C_Show::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_Show, K2Node_CreateDelegate_OutputDelegate) == 0x000020, "Member 'HistoryWindow_C_Show::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_Show, K2Node_Select_Default) == 0x000030, "Member 'HistoryWindow_C_Show::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_Show, Temp_byte_Variable_1) == 0x000034, "Member 'HistoryWindow_C_Show::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_Show, K2Node_Select_Default_1) == 0x000038, "Member 'HistoryWindow_C_Show::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_Show, CallFunc_PlayAnimation_ReturnValue) == 0x000040, "Member 'HistoryWindow_C_Show::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function HistoryWindow.HistoryWindow_C.Init
// 0x0010 (0x0010 - 0x0000)
struct HistoryWindow_C_Init final
{
public:
	struct FDateTime                              CallFunc_SBUtcNow_ReturnValue;                     // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMonth_ReturnValue;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetYear_ReturnValue;                      // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HistoryWindow_C_Init) == 0x000008, "Wrong alignment on HistoryWindow_C_Init");
static_assert(sizeof(HistoryWindow_C_Init) == 0x000010, "Wrong size on HistoryWindow_C_Init");
static_assert(offsetof(HistoryWindow_C_Init, CallFunc_SBUtcNow_ReturnValue) == 0x000000, "Member 'HistoryWindow_C_Init::CallFunc_SBUtcNow_ReturnValue' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_Init, CallFunc_GetMonth_ReturnValue) == 0x000008, "Member 'HistoryWindow_C_Init::CallFunc_GetMonth_ReturnValue' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_Init, CallFunc_GetYear_ReturnValue) == 0x00000C, "Member 'HistoryWindow_C_Init::CallFunc_GetYear_ReturnValue' has a wrong offset!");

// Function HistoryWindow.HistoryWindow_C.Init_MonthComboBox
// 0x0003 (0x0003 - 0x0000)
struct HistoryWindow_C_Init_MonthComboBox final
{
public:
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(HistoryWindow_C_Init_MonthComboBox) == 0x000001, "Wrong alignment on HistoryWindow_C_Init_MonthComboBox");
static_assert(sizeof(HistoryWindow_C_Init_MonthComboBox) == 0x000003, "Wrong size on HistoryWindow_C_Init_MonthComboBox");
static_assert(offsetof(HistoryWindow_C_Init_MonthComboBox, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000000, "Member 'HistoryWindow_C_Init_MonthComboBox::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_Init_MonthComboBox, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000001, "Member 'HistoryWindow_C_Init_MonthComboBox::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_Init_MonthComboBox, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x000002, "Member 'HistoryWindow_C_Init_MonthComboBox::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");

// Function HistoryWindow.HistoryWindow_C.Init_YearComboBox
// 0x0050 (0x0050 - 0x0000)
struct HistoryWindow_C_Init_YearComboBox final
{
public:
	int32                                         L_Counter;                                         // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41A1[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41A2[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HistoryWindow_C_Init_YearComboBox) == 0x000008, "Wrong alignment on HistoryWindow_C_Init_YearComboBox");
static_assert(sizeof(HistoryWindow_C_Init_YearComboBox) == 0x000050, "Wrong size on HistoryWindow_C_Init_YearComboBox");
static_assert(offsetof(HistoryWindow_C_Init_YearComboBox, L_Counter) == 0x000000, "Member 'HistoryWindow_C_Init_YearComboBox::L_Counter' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_Init_YearComboBox, Temp_int_Variable) == 0x000004, "Member 'HistoryWindow_C_Init_YearComboBox::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_Init_YearComboBox, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'HistoryWindow_C_Init_YearComboBox::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_Init_YearComboBox, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00000C, "Member 'HistoryWindow_C_Init_YearComboBox::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_Init_YearComboBox, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000010, "Member 'HistoryWindow_C_Init_YearComboBox::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_Init_YearComboBox, CallFunc_Add_IntInt_ReturnValue_1) == 0x000020, "Member 'HistoryWindow_C_Init_YearComboBox::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_Init_YearComboBox, CallFunc_Conv_IntToString_ReturnValue) == 0x000028, "Member 'HistoryWindow_C_Init_YearComboBox::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_Init_YearComboBox, CallFunc_Concat_StrStr_ReturnValue) == 0x000038, "Member 'HistoryWindow_C_Init_YearComboBox::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_Init_YearComboBox, CallFunc_Array_AddUnique_ReturnValue) == 0x000048, "Member 'HistoryWindow_C_Init_YearComboBox::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_Init_YearComboBox, CallFunc_Subtract_IntInt_ReturnValue) == 0x00004C, "Member 'HistoryWindow_C_Init_YearComboBox::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");

// Function HistoryWindow.HistoryWindow_C.Init_CountComboBox
// 0x0060 (0x0060 - 0x0000)
struct HistoryWindow_C_Init_CountComboBox final
{
public:
	int32                                         L_Counter;                                         // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item;                           // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41A3[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41A4[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 K2Node_MakeArray_Array;                            // 0x0028(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41A5[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(HistoryWindow_C_Init_CountComboBox) == 0x000008, "Wrong alignment on HistoryWindow_C_Init_CountComboBox");
static_assert(sizeof(HistoryWindow_C_Init_CountComboBox) == 0x000060, "Wrong size on HistoryWindow_C_Init_CountComboBox");
static_assert(offsetof(HistoryWindow_C_Init_CountComboBox, L_Counter) == 0x000000, "Member 'HistoryWindow_C_Init_CountComboBox::L_Counter' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_Init_CountComboBox, Temp_int_Variable) == 0x000004, "Member 'HistoryWindow_C_Init_CountComboBox::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_Init_CountComboBox, CallFunc_Array_Get_Item) == 0x000008, "Member 'HistoryWindow_C_Init_CountComboBox::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_Init_CountComboBox, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00000C, "Member 'HistoryWindow_C_Init_CountComboBox::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_Init_CountComboBox, CallFunc_Conv_IntToString_ReturnValue) == 0x000010, "Member 'HistoryWindow_C_Init_CountComboBox::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_Init_CountComboBox, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'HistoryWindow_C_Init_CountComboBox::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_Init_CountComboBox, K2Node_MakeArray_Array) == 0x000028, "Member 'HistoryWindow_C_Init_CountComboBox::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_Init_CountComboBox, CallFunc_Array_AddUnique_ReturnValue) == 0x000038, "Member 'HistoryWindow_C_Init_CountComboBox::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_Init_CountComboBox, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000040, "Member 'HistoryWindow_C_Init_CountComboBox::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_Init_CountComboBox, CallFunc_Concat_StrStr_ReturnValue) == 0x000050, "Member 'HistoryWindow_C_Init_CountComboBox::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");

// Function HistoryWindow.HistoryWindow_C.Create_MonthComboBox
// 0x0090 (0x0090 - 0x0000)
struct HistoryWindow_C_Create_MonthComboBox final
{
public:
	int32                                         First;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Last;                                              // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item;                           // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_2;            // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item_1;                         // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Abs_Int_ReturnValue;                      // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_3;            // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Abs_Int_ReturnValue_1;                    // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41A6[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Find_ReturnValue_1;                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41A7[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41A8[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41A9[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Find_ReturnValue_2;                 // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41AA[0x4];                                     // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HistoryWindow_C_Create_MonthComboBox) == 0x000008, "Wrong alignment on HistoryWindow_C_Create_MonthComboBox");
static_assert(sizeof(HistoryWindow_C_Create_MonthComboBox) == 0x000090, "Wrong size on HistoryWindow_C_Create_MonthComboBox");
static_assert(offsetof(HistoryWindow_C_Create_MonthComboBox, First) == 0x000000, "Member 'HistoryWindow_C_Create_MonthComboBox::First' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_Create_MonthComboBox, Last) == 0x000004, "Member 'HistoryWindow_C_Create_MonthComboBox::Last' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_Create_MonthComboBox, CallFunc_Subtract_IntInt_ReturnValue) == 0x000008, "Member 'HistoryWindow_C_Create_MonthComboBox::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_Create_MonthComboBox, CallFunc_Array_Find_ReturnValue) == 0x00000C, "Member 'HistoryWindow_C_Create_MonthComboBox::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_Create_MonthComboBox, CallFunc_Array_Get_Item) == 0x000010, "Member 'HistoryWindow_C_Create_MonthComboBox::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_Create_MonthComboBox, CallFunc_Array_Length_ReturnValue) == 0x000014, "Member 'HistoryWindow_C_Create_MonthComboBox::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_Create_MonthComboBox, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000018, "Member 'HistoryWindow_C_Create_MonthComboBox::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_Create_MonthComboBox, CallFunc_Subtract_IntInt_ReturnValue_2) == 0x00001C, "Member 'HistoryWindow_C_Create_MonthComboBox::CallFunc_Subtract_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_Create_MonthComboBox, CallFunc_Array_Get_Item_1) == 0x000020, "Member 'HistoryWindow_C_Create_MonthComboBox::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_Create_MonthComboBox, CallFunc_Abs_Int_ReturnValue) == 0x000024, "Member 'HistoryWindow_C_Create_MonthComboBox::CallFunc_Abs_Int_ReturnValue' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_Create_MonthComboBox, CallFunc_Subtract_IntInt_ReturnValue_3) == 0x000028, "Member 'HistoryWindow_C_Create_MonthComboBox::CallFunc_Subtract_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_Create_MonthComboBox, CallFunc_Abs_Int_ReturnValue_1) == 0x00002C, "Member 'HistoryWindow_C_Create_MonthComboBox::CallFunc_Abs_Int_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_Create_MonthComboBox, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'HistoryWindow_C_Create_MonthComboBox::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_Create_MonthComboBox, CallFunc_Array_Find_ReturnValue_1) == 0x000034, "Member 'HistoryWindow_C_Create_MonthComboBox::CallFunc_Array_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_Create_MonthComboBox, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000038, "Member 'HistoryWindow_C_Create_MonthComboBox::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_Create_MonthComboBox, Temp_int_Variable) == 0x00003C, "Member 'HistoryWindow_C_Create_MonthComboBox::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_Create_MonthComboBox, CallFunc_Add_IntInt_ReturnValue) == 0x000040, "Member 'HistoryWindow_C_Create_MonthComboBox::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_Create_MonthComboBox, CallFunc_Conv_IntToString_ReturnValue) == 0x000048, "Member 'HistoryWindow_C_Create_MonthComboBox::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_Create_MonthComboBox, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000058, "Member 'HistoryWindow_C_Create_MonthComboBox::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_Create_MonthComboBox, CallFunc_Add_IntInt_ReturnValue_1) == 0x00005C, "Member 'HistoryWindow_C_Create_MonthComboBox::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_Create_MonthComboBox, CallFunc_Array_Find_ReturnValue_2) == 0x000060, "Member 'HistoryWindow_C_Create_MonthComboBox::CallFunc_Array_Find_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_Create_MonthComboBox, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000068, "Member 'HistoryWindow_C_Create_MonthComboBox::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_Create_MonthComboBox, CallFunc_Concat_StrStr_ReturnValue) == 0x000078, "Member 'HistoryWindow_C_Create_MonthComboBox::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_Create_MonthComboBox, CallFunc_Array_AddUnique_ReturnValue) == 0x000088, "Member 'HistoryWindow_C_Create_MonthComboBox::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");

// Function HistoryWindow.HistoryWindow_C.CreateHistoryList
// 0x00D0 (0x00D0 - 0x0000)
struct HistoryWindow_C_CreateHistoryList final
{
public:
	TArray<struct FSBCashHistory>                 List;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FSBCashHistory>                 L_List;                                            // 0x0010(0x0010)(Edit, BlueprintVisible)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41AB[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHistory_Item_C*                        CallFunc_Create_ReturnValue;                       // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBCashHistory                         CallFunc_Array_Get_Item;                           // 0x0038(0x0048)()
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0088(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00A8(0x0018)()
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41AC[0x3];                                     // 0x00C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HistoryWindow_C_CreateHistoryList) == 0x000008, "Wrong alignment on HistoryWindow_C_CreateHistoryList");
static_assert(sizeof(HistoryWindow_C_CreateHistoryList) == 0x0000D0, "Wrong size on HistoryWindow_C_CreateHistoryList");
static_assert(offsetof(HistoryWindow_C_CreateHistoryList, List) == 0x000000, "Member 'HistoryWindow_C_CreateHistoryList::List' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_CreateHistoryList, L_List) == 0x000010, "Member 'HistoryWindow_C_CreateHistoryList::L_List' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_CreateHistoryList, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'HistoryWindow_C_CreateHistoryList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_CreateHistoryList, CallFunc_Array_Length_ReturnValue_1) == 0x000024, "Member 'HistoryWindow_C_CreateHistoryList::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_CreateHistoryList, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000028, "Member 'HistoryWindow_C_CreateHistoryList::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_CreateHistoryList, Temp_int_Array_Index_Variable) == 0x00002C, "Member 'HistoryWindow_C_CreateHistoryList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_CreateHistoryList, CallFunc_Create_ReturnValue) == 0x000030, "Member 'HistoryWindow_C_CreateHistoryList::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_CreateHistoryList, CallFunc_Array_Get_Item) == 0x000038, "Member 'HistoryWindow_C_CreateHistoryList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_CreateHistoryList, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000080, "Member 'HistoryWindow_C_CreateHistoryList::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_CreateHistoryList, K2Node_MakeStruct_Margin) == 0x000088, "Member 'HistoryWindow_C_CreateHistoryList::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_CreateHistoryList, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000098, "Member 'HistoryWindow_C_CreateHistoryList::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_CreateHistoryList, CallFunc_Conv_StringToText_ReturnValue) == 0x0000A8, "Member 'HistoryWindow_C_CreateHistoryList::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_CreateHistoryList, Temp_int_Loop_Counter_Variable) == 0x0000C0, "Member 'HistoryWindow_C_CreateHistoryList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_CreateHistoryList, CallFunc_Less_IntInt_ReturnValue) == 0x0000C4, "Member 'HistoryWindow_C_CreateHistoryList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_CreateHistoryList, CallFunc_Add_IntInt_ReturnValue) == 0x0000C8, "Member 'HistoryWindow_C_CreateHistoryList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function HistoryWindow.HistoryWindow_C.On_ComboBox_Year_GenerateWidget_0
// 0x0038 (0x0038 - 0x0000)
struct HistoryWindow_C_On_ComboBox_Year_GenerateWidget_0 final
{
public:
	class FString                                 Item;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UWidget*                                ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCmnComboBoxItem1_C*                    CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
};
static_assert(alignof(HistoryWindow_C_On_ComboBox_Year_GenerateWidget_0) == 0x000008, "Wrong alignment on HistoryWindow_C_On_ComboBox_Year_GenerateWidget_0");
static_assert(sizeof(HistoryWindow_C_On_ComboBox_Year_GenerateWidget_0) == 0x000038, "Wrong size on HistoryWindow_C_On_ComboBox_Year_GenerateWidget_0");
static_assert(offsetof(HistoryWindow_C_On_ComboBox_Year_GenerateWidget_0, Item) == 0x000000, "Member 'HistoryWindow_C_On_ComboBox_Year_GenerateWidget_0::Item' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_On_ComboBox_Year_GenerateWidget_0, ReturnValue) == 0x000010, "Member 'HistoryWindow_C_On_ComboBox_Year_GenerateWidget_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_On_ComboBox_Year_GenerateWidget_0, CallFunc_Create_ReturnValue) == 0x000018, "Member 'HistoryWindow_C_On_ComboBox_Year_GenerateWidget_0::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_On_ComboBox_Year_GenerateWidget_0, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'HistoryWindow_C_On_ComboBox_Year_GenerateWidget_0::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function HistoryWindow.HistoryWindow_C.On_ComboBox_Month_GenerateWidget_0
// 0x0038 (0x0038 - 0x0000)
struct HistoryWindow_C_On_ComboBox_Month_GenerateWidget_0 final
{
public:
	class FString                                 Item;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UWidget*                                ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCmnComboBoxItem1_C*                    CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
};
static_assert(alignof(HistoryWindow_C_On_ComboBox_Month_GenerateWidget_0) == 0x000008, "Wrong alignment on HistoryWindow_C_On_ComboBox_Month_GenerateWidget_0");
static_assert(sizeof(HistoryWindow_C_On_ComboBox_Month_GenerateWidget_0) == 0x000038, "Wrong size on HistoryWindow_C_On_ComboBox_Month_GenerateWidget_0");
static_assert(offsetof(HistoryWindow_C_On_ComboBox_Month_GenerateWidget_0, Item) == 0x000000, "Member 'HistoryWindow_C_On_ComboBox_Month_GenerateWidget_0::Item' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_On_ComboBox_Month_GenerateWidget_0, ReturnValue) == 0x000010, "Member 'HistoryWindow_C_On_ComboBox_Month_GenerateWidget_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_On_ComboBox_Month_GenerateWidget_0, CallFunc_Create_ReturnValue) == 0x000018, "Member 'HistoryWindow_C_On_ComboBox_Month_GenerateWidget_0::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_On_ComboBox_Month_GenerateWidget_0, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'HistoryWindow_C_On_ComboBox_Month_GenerateWidget_0::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function HistoryWindow.HistoryWindow_C.On_ComboBox_Count_GenerateWidget_0
// 0x0038 (0x0038 - 0x0000)
struct HistoryWindow_C_On_ComboBox_Count_GenerateWidget_0 final
{
public:
	class FString                                 Item;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UWidget*                                ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCmnComboBoxItem1_C*                    CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
};
static_assert(alignof(HistoryWindow_C_On_ComboBox_Count_GenerateWidget_0) == 0x000008, "Wrong alignment on HistoryWindow_C_On_ComboBox_Count_GenerateWidget_0");
static_assert(sizeof(HistoryWindow_C_On_ComboBox_Count_GenerateWidget_0) == 0x000038, "Wrong size on HistoryWindow_C_On_ComboBox_Count_GenerateWidget_0");
static_assert(offsetof(HistoryWindow_C_On_ComboBox_Count_GenerateWidget_0, Item) == 0x000000, "Member 'HistoryWindow_C_On_ComboBox_Count_GenerateWidget_0::Item' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_On_ComboBox_Count_GenerateWidget_0, ReturnValue) == 0x000010, "Member 'HistoryWindow_C_On_ComboBox_Count_GenerateWidget_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_On_ComboBox_Count_GenerateWidget_0, CallFunc_Create_ReturnValue) == 0x000018, "Member 'HistoryWindow_C_On_ComboBox_Count_GenerateWidget_0::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_On_ComboBox_Count_GenerateWidget_0, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'HistoryWindow_C_On_ComboBox_Count_GenerateWidget_0::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function HistoryWindow.HistoryWindow_C.SetUIBlocker
// 0x0005 (0x0005 - 0x0000)
struct HistoryWindow_C_SetUIBlocker final
{
public:
	bool                                          bLock;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HistoryWindow_C_SetUIBlocker) == 0x000001, "Wrong alignment on HistoryWindow_C_SetUIBlocker");
static_assert(sizeof(HistoryWindow_C_SetUIBlocker) == 0x000005, "Wrong size on HistoryWindow_C_SetUIBlocker");
static_assert(offsetof(HistoryWindow_C_SetUIBlocker, bLock) == 0x000000, "Member 'HistoryWindow_C_SetUIBlocker::bLock' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_SetUIBlocker, CallFunc_MakeLiteralByte_ReturnValue) == 0x000001, "Member 'HistoryWindow_C_SetUIBlocker::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_SetUIBlocker, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000002, "Member 'HistoryWindow_C_SetUIBlocker::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_SetUIBlocker, Temp_bool_Variable) == 0x000003, "Member 'HistoryWindow_C_SetUIBlocker::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_SetUIBlocker, K2Node_Select_Default) == 0x000004, "Member 'HistoryWindow_C_SetUIBlocker::K2Node_Select_Default' has a wrong offset!");

// Function HistoryWindow.HistoryWindow_C.GetRequestDate_DeleteAnnounce
// 0x0090 (0x0090 - 0x0000)
struct HistoryWindow_C_GetRequestDate_DeleteAnnounce final
{
public:
	int32                                         L_Month;                                           // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         L_Year;                                            // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0028(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0040(0x0018)()
	struct FDateTime                              CallFunc_DateTimeMinValue_ReturnValue;             // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_DateTimeMinValue_ReturnValue_1;           // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_GetExpiredTimeBPPoint_ReturnValue;        // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanInput_Ok;                              // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_DateTimeDateTime_ReturnValue;  // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41AD[0x6];                                     // 0x0072(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_GetExpiredTimeRoseOrbFree_ReturnValue;    // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_GetExpiredTimeRoseOrbPaid_ReturnValue;    // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_DateTimeDateTime_ReturnValue_1; // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_DateTimeDateTime_ReturnValue_2; // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x008A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x008B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(HistoryWindow_C_GetRequestDate_DeleteAnnounce) == 0x000008, "Wrong alignment on HistoryWindow_C_GetRequestDate_DeleteAnnounce");
static_assert(sizeof(HistoryWindow_C_GetRequestDate_DeleteAnnounce) == 0x000090, "Wrong size on HistoryWindow_C_GetRequestDate_DeleteAnnounce");
static_assert(offsetof(HistoryWindow_C_GetRequestDate_DeleteAnnounce, L_Month) == 0x000000, "Member 'HistoryWindow_C_GetRequestDate_DeleteAnnounce::L_Month' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_GetRequestDate_DeleteAnnounce, L_Year) == 0x000004, "Member 'HistoryWindow_C_GetRequestDate_DeleteAnnounce::L_Year' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_GetRequestDate_DeleteAnnounce, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000008, "Member 'HistoryWindow_C_GetRequestDate_DeleteAnnounce::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_GetRequestDate_DeleteAnnounce, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x000018, "Member 'HistoryWindow_C_GetRequestDate_DeleteAnnounce::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_GetRequestDate_DeleteAnnounce, CallFunc_Conv_StringToText_ReturnValue) == 0x000028, "Member 'HistoryWindow_C_GetRequestDate_DeleteAnnounce::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_GetRequestDate_DeleteAnnounce, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000040, "Member 'HistoryWindow_C_GetRequestDate_DeleteAnnounce::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_GetRequestDate_DeleteAnnounce, CallFunc_DateTimeMinValue_ReturnValue) == 0x000058, "Member 'HistoryWindow_C_GetRequestDate_DeleteAnnounce::CallFunc_DateTimeMinValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_GetRequestDate_DeleteAnnounce, CallFunc_DateTimeMinValue_ReturnValue_1) == 0x000060, "Member 'HistoryWindow_C_GetRequestDate_DeleteAnnounce::CallFunc_DateTimeMinValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_GetRequestDate_DeleteAnnounce, CallFunc_GetExpiredTimeBPPoint_ReturnValue) == 0x000068, "Member 'HistoryWindow_C_GetRequestDate_DeleteAnnounce::CallFunc_GetExpiredTimeBPPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_GetRequestDate_DeleteAnnounce, CallFunc_CanInput_Ok) == 0x000070, "Member 'HistoryWindow_C_GetRequestDate_DeleteAnnounce::CallFunc_CanInput_Ok' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_GetRequestDate_DeleteAnnounce, CallFunc_EqualEqual_DateTimeDateTime_ReturnValue) == 0x000071, "Member 'HistoryWindow_C_GetRequestDate_DeleteAnnounce::CallFunc_EqualEqual_DateTimeDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_GetRequestDate_DeleteAnnounce, CallFunc_GetExpiredTimeRoseOrbFree_ReturnValue) == 0x000078, "Member 'HistoryWindow_C_GetRequestDate_DeleteAnnounce::CallFunc_GetExpiredTimeRoseOrbFree_ReturnValue' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_GetRequestDate_DeleteAnnounce, CallFunc_GetExpiredTimeRoseOrbPaid_ReturnValue) == 0x000080, "Member 'HistoryWindow_C_GetRequestDate_DeleteAnnounce::CallFunc_GetExpiredTimeRoseOrbPaid_ReturnValue' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_GetRequestDate_DeleteAnnounce, CallFunc_EqualEqual_DateTimeDateTime_ReturnValue_1) == 0x000088, "Member 'HistoryWindow_C_GetRequestDate_DeleteAnnounce::CallFunc_EqualEqual_DateTimeDateTime_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_GetRequestDate_DeleteAnnounce, CallFunc_EqualEqual_DateTimeDateTime_ReturnValue_2) == 0x000089, "Member 'HistoryWindow_C_GetRequestDate_DeleteAnnounce::CallFunc_EqualEqual_DateTimeDateTime_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_GetRequestDate_DeleteAnnounce, CallFunc_BooleanAND_ReturnValue) == 0x00008A, "Member 'HistoryWindow_C_GetRequestDate_DeleteAnnounce::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_GetRequestDate_DeleteAnnounce, K2Node_SwitchEnum_CmpSuccess) == 0x00008B, "Member 'HistoryWindow_C_GetRequestDate_DeleteAnnounce::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function HistoryWindow.HistoryWindow_C.FixExpired
// 0x0048 (0x0048 - 0x0000)
struct HistoryWindow_C_FixExpired final
{
public:
	struct FSBHistoryExpired                      Data;                                              // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	bool                                          CallFunc_Less_DateTimeDateTime_ReturnValue;        // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_DateTimeDateTime_ReturnValue;     // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_DateTimeDateTime_ReturnValue;  // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41AE[0x5];                                     // 0x002B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_DateTimeMinValue_ReturnValue;             // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_DateTimeDateTime_ReturnValue;    // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_DateTimeDateTime_ReturnValue_1;  // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_DateTimeDateTime_ReturnValue_1; // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_DateTimeDateTime_ReturnValue_2; // 0x003B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_DateTimeDateTime_ReturnValue_3; // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x003E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_DateTimeDateTime_ReturnValue_4; // 0x003F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(HistoryWindow_C_FixExpired) == 0x000008, "Wrong alignment on HistoryWindow_C_FixExpired");
static_assert(sizeof(HistoryWindow_C_FixExpired) == 0x000048, "Wrong size on HistoryWindow_C_FixExpired");
static_assert(offsetof(HistoryWindow_C_FixExpired, Data) == 0x000000, "Member 'HistoryWindow_C_FixExpired::Data' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_FixExpired, CallFunc_Less_DateTimeDateTime_ReturnValue) == 0x000028, "Member 'HistoryWindow_C_FixExpired::CallFunc_Less_DateTimeDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_FixExpired, CallFunc_Greater_DateTimeDateTime_ReturnValue) == 0x000029, "Member 'HistoryWindow_C_FixExpired::CallFunc_Greater_DateTimeDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_FixExpired, CallFunc_EqualEqual_DateTimeDateTime_ReturnValue) == 0x00002A, "Member 'HistoryWindow_C_FixExpired::CallFunc_EqualEqual_DateTimeDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_FixExpired, CallFunc_DateTimeMinValue_ReturnValue) == 0x000030, "Member 'HistoryWindow_C_FixExpired::CallFunc_DateTimeMinValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_FixExpired, CallFunc_NotEqual_DateTimeDateTime_ReturnValue) == 0x000038, "Member 'HistoryWindow_C_FixExpired::CallFunc_NotEqual_DateTimeDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_FixExpired, CallFunc_NotEqual_DateTimeDateTime_ReturnValue_1) == 0x000039, "Member 'HistoryWindow_C_FixExpired::CallFunc_NotEqual_DateTimeDateTime_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_FixExpired, CallFunc_EqualEqual_DateTimeDateTime_ReturnValue_1) == 0x00003A, "Member 'HistoryWindow_C_FixExpired::CallFunc_EqualEqual_DateTimeDateTime_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_FixExpired, CallFunc_EqualEqual_DateTimeDateTime_ReturnValue_2) == 0x00003B, "Member 'HistoryWindow_C_FixExpired::CallFunc_EqualEqual_DateTimeDateTime_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_FixExpired, CallFunc_BooleanAND_ReturnValue) == 0x00003C, "Member 'HistoryWindow_C_FixExpired::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_FixExpired, CallFunc_EqualEqual_DateTimeDateTime_ReturnValue_3) == 0x00003D, "Member 'HistoryWindow_C_FixExpired::CallFunc_EqualEqual_DateTimeDateTime_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_FixExpired, CallFunc_BooleanAND_ReturnValue_1) == 0x00003E, "Member 'HistoryWindow_C_FixExpired::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_FixExpired, CallFunc_EqualEqual_DateTimeDateTime_ReturnValue_4) == 0x00003F, "Member 'HistoryWindow_C_FixExpired::CallFunc_EqualEqual_DateTimeDateTime_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_FixExpired, CallFunc_BooleanAND_ReturnValue_2) == 0x000040, "Member 'HistoryWindow_C_FixExpired::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_FixExpired, K2Node_SwitchEnum_CmpSuccess) == 0x000041, "Member 'HistoryWindow_C_FixExpired::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function HistoryWindow.HistoryWindow_C.CanInput
// 0x0003 (0x0003 - 0x0000)
struct HistoryWindow_C_CanInput final
{
public:
	bool                                          Ok;                                                // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(HistoryWindow_C_CanInput) == 0x000001, "Wrong alignment on HistoryWindow_C_CanInput");
static_assert(sizeof(HistoryWindow_C_CanInput) == 0x000003, "Wrong size on HistoryWindow_C_CanInput");
static_assert(offsetof(HistoryWindow_C_CanInput, Ok) == 0x000000, "Member 'HistoryWindow_C_CanInput::Ok' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_CanInput, CallFunc_GetVisibility_ReturnValue) == 0x000001, "Member 'HistoryWindow_C_CanInput::CallFunc_GetVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(HistoryWindow_C_CanInput, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000002, "Member 'HistoryWindow_C_CanInput::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

}

