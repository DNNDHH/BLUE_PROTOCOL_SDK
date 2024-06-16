#pragma once

 

// Package: CertificationWindow

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function CertificationWindow.CertificationWindow_C.OnRequest__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct CertificationWindow_C_OnRequest__DelegateSignature final
{
public:
	int32                                         Param_Year;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Month;                                       // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CertificationWindow_C_OnRequest__DelegateSignature) == 0x000004, "Wrong alignment on CertificationWindow_C_OnRequest__DelegateSignature");
static_assert(sizeof(CertificationWindow_C_OnRequest__DelegateSignature) == 0x000008, "Wrong size on CertificationWindow_C_OnRequest__DelegateSignature");
static_assert(offsetof(CertificationWindow_C_OnRequest__DelegateSignature, Param_Year) == 0x000000, "Member 'CertificationWindow_C_OnRequest__DelegateSignature::Param_Year' has a wrong offset!");
static_assert(offsetof(CertificationWindow_C_OnRequest__DelegateSignature, Param_Month) == 0x000004, "Member 'CertificationWindow_C_OnRequest__DelegateSignature::Param_Month' has a wrong offset!");

// Function CertificationWindow.CertificationWindow_C.ExecuteUbergraph_CertificationWindow
// 0x00C8 (0x00C8 - 0x0000)
struct CertificationWindow_C_ExecuteUbergraph_CertificationWindow final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5669[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_ComponentBoundEvent_Text_3;                 // 0x0020(0x0018)(ConstParm)
	ETextCommit                                   K2Node_ComponentBoundEvent_CommitMethod_1;         // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_566A[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_ComponentBoundEvent_Text_2;                 // 0x0040(0x0018)(ConstParm)
	ETextCommit                                   K2Node_ComponentBoundEvent_CommitMethod;           // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_566B[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_ComponentBoundEvent_SelectedItem;           // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   K2Node_ComponentBoundEvent_SelectionType;          // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_566C[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_ComponentBoundEvent_Text_1;                 // 0x0078(0x0018)(ConstParm)
	int32                                         CallFunc_Conv_StringToInt_ReturnValue;             // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_566D[0x4];                                     // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_ComponentBoundEvent_Text;                   // 0x0098(0x0018)(ConstParm)
	class FString                                 K2Node_ComponentBoundEvent_SelectedItem_1;         // 0x00B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   K2Node_ComponentBoundEvent_SelectionType_1;        // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_566E[0x3];                                     // 0x00C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_StringToInt_ReturnValue_1;           // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CertificationWindow_C_ExecuteUbergraph_CertificationWindow) == 0x000008, "Wrong alignment on CertificationWindow_C_ExecuteUbergraph_CertificationWindow");
static_assert(sizeof(CertificationWindow_C_ExecuteUbergraph_CertificationWindow) == 0x0000C8, "Wrong size on CertificationWindow_C_ExecuteUbergraph_CertificationWindow");
static_assert(offsetof(CertificationWindow_C_ExecuteUbergraph_CertificationWindow, EntryPoint) == 0x000000, "Member 'CertificationWindow_C_ExecuteUbergraph_CertificationWindow::EntryPoint' has a wrong offset!");
static_assert(offsetof(CertificationWindow_C_ExecuteUbergraph_CertificationWindow, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'CertificationWindow_C_ExecuteUbergraph_CertificationWindow::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(CertificationWindow_C_ExecuteUbergraph_CertificationWindow, CallFunc_BooleanAND_ReturnValue) == 0x000014, "Member 'CertificationWindow_C_ExecuteUbergraph_CertificationWindow::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(CertificationWindow_C_ExecuteUbergraph_CertificationWindow, CallFunc_PlayAnimation_ReturnValue) == 0x000018, "Member 'CertificationWindow_C_ExecuteUbergraph_CertificationWindow::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(CertificationWindow_C_ExecuteUbergraph_CertificationWindow, K2Node_ComponentBoundEvent_Text_3) == 0x000020, "Member 'CertificationWindow_C_ExecuteUbergraph_CertificationWindow::K2Node_ComponentBoundEvent_Text_3' has a wrong offset!");
static_assert(offsetof(CertificationWindow_C_ExecuteUbergraph_CertificationWindow, K2Node_ComponentBoundEvent_CommitMethod_1) == 0x000038, "Member 'CertificationWindow_C_ExecuteUbergraph_CertificationWindow::K2Node_ComponentBoundEvent_CommitMethod_1' has a wrong offset!");
static_assert(offsetof(CertificationWindow_C_ExecuteUbergraph_CertificationWindow, K2Node_ComponentBoundEvent_Text_2) == 0x000040, "Member 'CertificationWindow_C_ExecuteUbergraph_CertificationWindow::K2Node_ComponentBoundEvent_Text_2' has a wrong offset!");
static_assert(offsetof(CertificationWindow_C_ExecuteUbergraph_CertificationWindow, K2Node_ComponentBoundEvent_CommitMethod) == 0x000058, "Member 'CertificationWindow_C_ExecuteUbergraph_CertificationWindow::K2Node_ComponentBoundEvent_CommitMethod' has a wrong offset!");
static_assert(offsetof(CertificationWindow_C_ExecuteUbergraph_CertificationWindow, K2Node_ComponentBoundEvent_SelectedItem) == 0x000060, "Member 'CertificationWindow_C_ExecuteUbergraph_CertificationWindow::K2Node_ComponentBoundEvent_SelectedItem' has a wrong offset!");
static_assert(offsetof(CertificationWindow_C_ExecuteUbergraph_CertificationWindow, K2Node_ComponentBoundEvent_SelectionType) == 0x000070, "Member 'CertificationWindow_C_ExecuteUbergraph_CertificationWindow::K2Node_ComponentBoundEvent_SelectionType' has a wrong offset!");
static_assert(offsetof(CertificationWindow_C_ExecuteUbergraph_CertificationWindow, K2Node_ComponentBoundEvent_Text_1) == 0x000078, "Member 'CertificationWindow_C_ExecuteUbergraph_CertificationWindow::K2Node_ComponentBoundEvent_Text_1' has a wrong offset!");
static_assert(offsetof(CertificationWindow_C_ExecuteUbergraph_CertificationWindow, CallFunc_Conv_StringToInt_ReturnValue) == 0x000090, "Member 'CertificationWindow_C_ExecuteUbergraph_CertificationWindow::CallFunc_Conv_StringToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CertificationWindow_C_ExecuteUbergraph_CertificationWindow, K2Node_ComponentBoundEvent_Text) == 0x000098, "Member 'CertificationWindow_C_ExecuteUbergraph_CertificationWindow::K2Node_ComponentBoundEvent_Text' has a wrong offset!");
static_assert(offsetof(CertificationWindow_C_ExecuteUbergraph_CertificationWindow, K2Node_ComponentBoundEvent_SelectedItem_1) == 0x0000B0, "Member 'CertificationWindow_C_ExecuteUbergraph_CertificationWindow::K2Node_ComponentBoundEvent_SelectedItem_1' has a wrong offset!");
static_assert(offsetof(CertificationWindow_C_ExecuteUbergraph_CertificationWindow, K2Node_ComponentBoundEvent_SelectionType_1) == 0x0000C0, "Member 'CertificationWindow_C_ExecuteUbergraph_CertificationWindow::K2Node_ComponentBoundEvent_SelectionType_1' has a wrong offset!");
static_assert(offsetof(CertificationWindow_C_ExecuteUbergraph_CertificationWindow, CallFunc_Conv_StringToInt_ReturnValue_1) == 0x0000C4, "Member 'CertificationWindow_C_ExecuteUbergraph_CertificationWindow::CallFunc_Conv_StringToInt_ReturnValue_1' has a wrong offset!");

// Function CertificationWindow.CertificationWindow_C.BndEvt__EditMonth_K2Node_ComponentBoundEvent_9_OnEditableTextBoxChangedEvent__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct CertificationWindow_C_BndEvt__EditMonth_K2Node_ComponentBoundEvent_9_OnEditableTextBoxChangedEvent__DelegateSignature final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(CertificationWindow_C_BndEvt__EditMonth_K2Node_ComponentBoundEvent_9_OnEditableTextBoxChangedEvent__DelegateSignature) == 0x000008, "Wrong alignment on CertificationWindow_C_BndEvt__EditMonth_K2Node_ComponentBoundEvent_9_OnEditableTextBoxChangedEvent__DelegateSignature");
static_assert(sizeof(CertificationWindow_C_BndEvt__EditMonth_K2Node_ComponentBoundEvent_9_OnEditableTextBoxChangedEvent__DelegateSignature) == 0x000018, "Wrong size on CertificationWindow_C_BndEvt__EditMonth_K2Node_ComponentBoundEvent_9_OnEditableTextBoxChangedEvent__DelegateSignature");
static_assert(offsetof(CertificationWindow_C_BndEvt__EditMonth_K2Node_ComponentBoundEvent_9_OnEditableTextBoxChangedEvent__DelegateSignature, Text) == 0x000000, "Member 'CertificationWindow_C_BndEvt__EditMonth_K2Node_ComponentBoundEvent_9_OnEditableTextBoxChangedEvent__DelegateSignature::Text' has a wrong offset!");

// Function CertificationWindow.CertificationWindow_C.BndEvt__EditYear_K2Node_ComponentBoundEvent_8_OnEditableTextBoxChangedEvent__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct CertificationWindow_C_BndEvt__EditYear_K2Node_ComponentBoundEvent_8_OnEditableTextBoxChangedEvent__DelegateSignature final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(CertificationWindow_C_BndEvt__EditYear_K2Node_ComponentBoundEvent_8_OnEditableTextBoxChangedEvent__DelegateSignature) == 0x000008, "Wrong alignment on CertificationWindow_C_BndEvt__EditYear_K2Node_ComponentBoundEvent_8_OnEditableTextBoxChangedEvent__DelegateSignature");
static_assert(sizeof(CertificationWindow_C_BndEvt__EditYear_K2Node_ComponentBoundEvent_8_OnEditableTextBoxChangedEvent__DelegateSignature) == 0x000018, "Wrong size on CertificationWindow_C_BndEvt__EditYear_K2Node_ComponentBoundEvent_8_OnEditableTextBoxChangedEvent__DelegateSignature");
static_assert(offsetof(CertificationWindow_C_BndEvt__EditYear_K2Node_ComponentBoundEvent_8_OnEditableTextBoxChangedEvent__DelegateSignature, Text) == 0x000000, "Member 'CertificationWindow_C_BndEvt__EditYear_K2Node_ComponentBoundEvent_8_OnEditableTextBoxChangedEvent__DelegateSignature::Text' has a wrong offset!");

// Function CertificationWindow.CertificationWindow_C.BndEvt__EditMonth_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct CertificationWindow_C_BndEvt__EditMonth_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ETextCommit                                   CommitMethod;                                      // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CertificationWindow_C_BndEvt__EditMonth_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature) == 0x000008, "Wrong alignment on CertificationWindow_C_BndEvt__EditMonth_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature");
static_assert(sizeof(CertificationWindow_C_BndEvt__EditMonth_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature) == 0x000020, "Wrong size on CertificationWindow_C_BndEvt__EditMonth_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature");
static_assert(offsetof(CertificationWindow_C_BndEvt__EditMonth_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature, Text) == 0x000000, "Member 'CertificationWindow_C_BndEvt__EditMonth_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature::Text' has a wrong offset!");
static_assert(offsetof(CertificationWindow_C_BndEvt__EditMonth_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature, CommitMethod) == 0x000018, "Member 'CertificationWindow_C_BndEvt__EditMonth_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature::CommitMethod' has a wrong offset!");

// Function CertificationWindow.CertificationWindow_C.BndEvt__EditYear_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct CertificationWindow_C_BndEvt__EditYear_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ETextCommit                                   CommitMethod;                                      // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CertificationWindow_C_BndEvt__EditYear_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature) == 0x000008, "Wrong alignment on CertificationWindow_C_BndEvt__EditYear_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature");
static_assert(sizeof(CertificationWindow_C_BndEvt__EditYear_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature) == 0x000020, "Wrong size on CertificationWindow_C_BndEvt__EditYear_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature");
static_assert(offsetof(CertificationWindow_C_BndEvt__EditYear_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature, Text) == 0x000000, "Member 'CertificationWindow_C_BndEvt__EditYear_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature::Text' has a wrong offset!");
static_assert(offsetof(CertificationWindow_C_BndEvt__EditYear_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature, CommitMethod) == 0x000018, "Member 'CertificationWindow_C_BndEvt__EditYear_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature::CommitMethod' has a wrong offset!");

// Function CertificationWindow.CertificationWindow_C.BndEvt__List_Month_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct CertificationWindow_C_BndEvt__List_Month_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature final
{
public:
	class FString                                 SelectedItem;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   SelectionType;                                     // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CertificationWindow_C_BndEvt__List_Month_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature) == 0x000008, "Wrong alignment on CertificationWindow_C_BndEvt__List_Month_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature");
static_assert(sizeof(CertificationWindow_C_BndEvt__List_Month_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature) == 0x000018, "Wrong size on CertificationWindow_C_BndEvt__List_Month_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature");
static_assert(offsetof(CertificationWindow_C_BndEvt__List_Month_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature, SelectedItem) == 0x000000, "Member 'CertificationWindow_C_BndEvt__List_Month_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature::SelectedItem' has a wrong offset!");
static_assert(offsetof(CertificationWindow_C_BndEvt__List_Month_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature, SelectionType) == 0x000010, "Member 'CertificationWindow_C_BndEvt__List_Month_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature::SelectionType' has a wrong offset!");

// Function CertificationWindow.CertificationWindow_C.BndEvt__List_Year_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct CertificationWindow_C_BndEvt__List_Year_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature final
{
public:
	class FString                                 SelectedItem;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   SelectionType;                                     // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CertificationWindow_C_BndEvt__List_Year_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature) == 0x000008, "Wrong alignment on CertificationWindow_C_BndEvt__List_Year_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature");
static_assert(sizeof(CertificationWindow_C_BndEvt__List_Year_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature) == 0x000018, "Wrong size on CertificationWindow_C_BndEvt__List_Year_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature");
static_assert(offsetof(CertificationWindow_C_BndEvt__List_Year_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature, SelectedItem) == 0x000000, "Member 'CertificationWindow_C_BndEvt__List_Year_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature::SelectedItem' has a wrong offset!");
static_assert(offsetof(CertificationWindow_C_BndEvt__List_Year_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature, SelectionType) == 0x000010, "Member 'CertificationWindow_C_BndEvt__List_Year_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature::SelectionType' has a wrong offset!");

// Function CertificationWindow.CertificationWindow_C.Show
// 0x0008 (0x0008 - 0x0000)
struct CertificationWindow_C_Show final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CertificationWindow_C_Show) == 0x000008, "Wrong alignment on CertificationWindow_C_Show");
static_assert(sizeof(CertificationWindow_C_Show) == 0x000008, "Wrong size on CertificationWindow_C_Show");
static_assert(offsetof(CertificationWindow_C_Show, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'CertificationWindow_C_Show::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function CertificationWindow.CertificationWindow_C.CreateLists
// 0x0058 (0x0058 - 0x0000)
struct CertificationWindow_C_CreateLists final
{
public:
	int32                                         L_Year;                                            // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_566F[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_SBUtcNow_ReturnValue;                     // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetYear_ReturnValue;                      // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5670[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5671[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5672[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(CertificationWindow_C_CreateLists) == 0x000008, "Wrong alignment on CertificationWindow_C_CreateLists");
static_assert(sizeof(CertificationWindow_C_CreateLists) == 0x000058, "Wrong size on CertificationWindow_C_CreateLists");
static_assert(offsetof(CertificationWindow_C_CreateLists, L_Year) == 0x000000, "Member 'CertificationWindow_C_CreateLists::L_Year' has a wrong offset!");
static_assert(offsetof(CertificationWindow_C_CreateLists, Temp_int_Variable) == 0x000004, "Member 'CertificationWindow_C_CreateLists::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(CertificationWindow_C_CreateLists, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'CertificationWindow_C_CreateLists::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CertificationWindow_C_CreateLists, CallFunc_SBUtcNow_ReturnValue) == 0x000010, "Member 'CertificationWindow_C_CreateLists::CallFunc_SBUtcNow_ReturnValue' has a wrong offset!");
static_assert(offsetof(CertificationWindow_C_CreateLists, CallFunc_GetYear_ReturnValue) == 0x000018, "Member 'CertificationWindow_C_CreateLists::CallFunc_GetYear_ReturnValue' has a wrong offset!");
static_assert(offsetof(CertificationWindow_C_CreateLists, CallFunc_Subtract_IntInt_ReturnValue) == 0x00001C, "Member 'CertificationWindow_C_CreateLists::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CertificationWindow_C_CreateLists, Temp_int_Variable_1) == 0x000020, "Member 'CertificationWindow_C_CreateLists::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(CertificationWindow_C_CreateLists, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000024, "Member 'CertificationWindow_C_CreateLists::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CertificationWindow_C_CreateLists, CallFunc_Conv_IntToString_ReturnValue) == 0x000028, "Member 'CertificationWindow_C_CreateLists::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(CertificationWindow_C_CreateLists, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000038, "Member 'CertificationWindow_C_CreateLists::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CertificationWindow_C_CreateLists, CallFunc_Add_IntInt_ReturnValue_1) == 0x00003C, "Member 'CertificationWindow_C_CreateLists::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CertificationWindow_C_CreateLists, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000040, "Member 'CertificationWindow_C_CreateLists::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CertificationWindow_C_CreateLists, CallFunc_Conv_IntToString_ReturnValue_1) == 0x000048, "Member 'CertificationWindow_C_CreateLists::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");

// Function CertificationWindow.CertificationWindow_C.Clear
// 0x0038 (0x0038 - 0x0000)
struct CertificationWindow_C_Clear final
{
public:
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5673[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0020(0x0018)()
};
static_assert(alignof(CertificationWindow_C_Clear) == 0x000008, "Wrong alignment on CertificationWindow_C_Clear");
static_assert(sizeof(CertificationWindow_C_Clear) == 0x000038, "Wrong size on CertificationWindow_C_Clear");
static_assert(offsetof(CertificationWindow_C_Clear, CallFunc_Greater_IntInt_ReturnValue) == 0x000000, "Member 'CertificationWindow_C_Clear::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CertificationWindow_C_Clear, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'CertificationWindow_C_Clear::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CertificationWindow_C_Clear, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000020, "Member 'CertificationWindow_C_Clear::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");

// Function CertificationWindow.CertificationWindow_C.CreateAgeLimit
// 0x0068 (0x0068 - 0x0000)
struct CertificationWindow_C_CreateAgeLimit final
{
public:
	TArray<struct FSBPaymentLimitMasterData>      L_AgeLimitMaster;                                  // 0x0000(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Variable;                                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5674[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPaymentLimitMasterData              CallFunc_Array_Get_Item;                           // 0x0024(0x0010)(NoDestructor)
	uint8                                         Pad_5675[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCertificationWindow_Sub_C*             CallFunc_Create_ReturnValue;                       // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5676[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBPaymentLimitMasterData>      CallFunc_BP_GetPaymentLimitMaster_ReturnValue;     // 0x0058(0x0010)(ReferenceParm)
};
static_assert(alignof(CertificationWindow_C_CreateAgeLimit) == 0x000008, "Wrong alignment on CertificationWindow_C_CreateAgeLimit");
static_assert(sizeof(CertificationWindow_C_CreateAgeLimit) == 0x000068, "Wrong size on CertificationWindow_C_CreateAgeLimit");
static_assert(offsetof(CertificationWindow_C_CreateAgeLimit, L_AgeLimitMaster) == 0x000000, "Member 'CertificationWindow_C_CreateAgeLimit::L_AgeLimitMaster' has a wrong offset!");
static_assert(offsetof(CertificationWindow_C_CreateAgeLimit, Temp_int_Variable) == 0x000010, "Member 'CertificationWindow_C_CreateAgeLimit::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(CertificationWindow_C_CreateAgeLimit, CallFunc_Array_Length_ReturnValue) == 0x000014, "Member 'CertificationWindow_C_CreateAgeLimit::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(CertificationWindow_C_CreateAgeLimit, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'CertificationWindow_C_CreateAgeLimit::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CertificationWindow_C_CreateAgeLimit, CallFunc_Subtract_IntInt_ReturnValue) == 0x00001C, "Member 'CertificationWindow_C_CreateAgeLimit::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CertificationWindow_C_CreateAgeLimit, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000020, "Member 'CertificationWindow_C_CreateAgeLimit::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CertificationWindow_C_CreateAgeLimit, CallFunc_Array_Get_Item) == 0x000024, "Member 'CertificationWindow_C_CreateAgeLimit::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CertificationWindow_C_CreateAgeLimit, CallFunc_Create_ReturnValue) == 0x000038, "Member 'CertificationWindow_C_CreateAgeLimit::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(CertificationWindow_C_CreateAgeLimit, CallFunc_GetMasterDataManager_IsValid) == 0x000040, "Member 'CertificationWindow_C_CreateAgeLimit::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(CertificationWindow_C_CreateAgeLimit, CallFunc_GetMasterDataManager_ReturnValue) == 0x000048, "Member 'CertificationWindow_C_CreateAgeLimit::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(CertificationWindow_C_CreateAgeLimit, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000050, "Member 'CertificationWindow_C_CreateAgeLimit::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(CertificationWindow_C_CreateAgeLimit, CallFunc_BP_GetPaymentLimitMaster_ReturnValue) == 0x000058, "Member 'CertificationWindow_C_CreateAgeLimit::CallFunc_BP_GetPaymentLimitMaster_ReturnValue' has a wrong offset!");

// Function CertificationWindow.CertificationWindow_C.CheckInputText
// 0x0078 (0x0078 - 0x0000)
struct CertificationWindow_C_CheckInputText final
{
public:
	class FText                                   Input;                                             // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          IsYear;                                            // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsMonth;                                           // 0x0019(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5677[0x2];                                     // 0x001A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         L_InputNumber;                                     // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_StringToInt_ReturnValue;             // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5678[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0040(0x0018)()
	int32                                         CallFunc_Clamp_ReturnValue_1;                      // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5679[0x3];                                     // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0060(0x0018)()
};
static_assert(alignof(CertificationWindow_C_CheckInputText) == 0x000008, "Wrong alignment on CertificationWindow_C_CheckInputText");
static_assert(sizeof(CertificationWindow_C_CheckInputText) == 0x000078, "Wrong size on CertificationWindow_C_CheckInputText");
static_assert(offsetof(CertificationWindow_C_CheckInputText, Input) == 0x000000, "Member 'CertificationWindow_C_CheckInputText::Input' has a wrong offset!");
static_assert(offsetof(CertificationWindow_C_CheckInputText, IsYear) == 0x000018, "Member 'CertificationWindow_C_CheckInputText::IsYear' has a wrong offset!");
static_assert(offsetof(CertificationWindow_C_CheckInputText, IsMonth) == 0x000019, "Member 'CertificationWindow_C_CheckInputText::IsMonth' has a wrong offset!");
static_assert(offsetof(CertificationWindow_C_CheckInputText, L_InputNumber) == 0x00001C, "Member 'CertificationWindow_C_CheckInputText::L_InputNumber' has a wrong offset!");
static_assert(offsetof(CertificationWindow_C_CheckInputText, CallFunc_Conv_TextToString_ReturnValue) == 0x000020, "Member 'CertificationWindow_C_CheckInputText::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(CertificationWindow_C_CheckInputText, CallFunc_Conv_StringToInt_ReturnValue) == 0x000030, "Member 'CertificationWindow_C_CheckInputText::CallFunc_Conv_StringToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CertificationWindow_C_CheckInputText, CallFunc_Clamp_ReturnValue) == 0x000034, "Member 'CertificationWindow_C_CheckInputText::CallFunc_Clamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(CertificationWindow_C_CheckInputText, CallFunc_Greater_IntInt_ReturnValue) == 0x000038, "Member 'CertificationWindow_C_CheckInputText::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CertificationWindow_C_CheckInputText, CallFunc_Conv_IntToText_ReturnValue) == 0x000040, "Member 'CertificationWindow_C_CheckInputText::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CertificationWindow_C_CheckInputText, CallFunc_Clamp_ReturnValue_1) == 0x000058, "Member 'CertificationWindow_C_CheckInputText::CallFunc_Clamp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CertificationWindow_C_CheckInputText, CallFunc_Greater_IntInt_ReturnValue_1) == 0x00005C, "Member 'CertificationWindow_C_CheckInputText::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CertificationWindow_C_CheckInputText, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000060, "Member 'CertificationWindow_C_CheckInputText::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");

// Function CertificationWindow.CertificationWindow_C.ReserveInputText
// 0x0040 (0x0040 - 0x0000)
struct CertificationWindow_C_ReserveInputText final
{
public:
	class FText                                   Input;                                             // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          IsYear;                                            // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsMonth;                                           // 0x0019(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_567A[0x2];                                     // 0x001A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         L_InputNumber;                                     // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_567B[0x5];                                     // 0x0023(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_StringToInt_ReturnValue;             // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_2;           // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_3;           // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x003E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CertificationWindow_C_ReserveInputText) == 0x000008, "Wrong alignment on CertificationWindow_C_ReserveInputText");
static_assert(sizeof(CertificationWindow_C_ReserveInputText) == 0x000040, "Wrong size on CertificationWindow_C_ReserveInputText");
static_assert(offsetof(CertificationWindow_C_ReserveInputText, Input) == 0x000000, "Member 'CertificationWindow_C_ReserveInputText::Input' has a wrong offset!");
static_assert(offsetof(CertificationWindow_C_ReserveInputText, IsYear) == 0x000018, "Member 'CertificationWindow_C_ReserveInputText::IsYear' has a wrong offset!");
static_assert(offsetof(CertificationWindow_C_ReserveInputText, IsMonth) == 0x000019, "Member 'CertificationWindow_C_ReserveInputText::IsMonth' has a wrong offset!");
static_assert(offsetof(CertificationWindow_C_ReserveInputText, L_InputNumber) == 0x00001C, "Member 'CertificationWindow_C_ReserveInputText::L_InputNumber' has a wrong offset!");
static_assert(offsetof(CertificationWindow_C_ReserveInputText, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000020, "Member 'CertificationWindow_C_ReserveInputText::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CertificationWindow_C_ReserveInputText, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000021, "Member 'CertificationWindow_C_ReserveInputText::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CertificationWindow_C_ReserveInputText, CallFunc_BooleanAND_ReturnValue) == 0x000022, "Member 'CertificationWindow_C_ReserveInputText::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(CertificationWindow_C_ReserveInputText, CallFunc_Conv_TextToString_ReturnValue) == 0x000028, "Member 'CertificationWindow_C_ReserveInputText::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(CertificationWindow_C_ReserveInputText, CallFunc_Conv_StringToInt_ReturnValue) == 0x000038, "Member 'CertificationWindow_C_ReserveInputText::CallFunc_Conv_StringToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CertificationWindow_C_ReserveInputText, CallFunc_LessEqual_IntInt_ReturnValue_2) == 0x00003C, "Member 'CertificationWindow_C_ReserveInputText::CallFunc_LessEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CertificationWindow_C_ReserveInputText, CallFunc_LessEqual_IntInt_ReturnValue_3) == 0x00003D, "Member 'CertificationWindow_C_ReserveInputText::CallFunc_LessEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CertificationWindow_C_ReserveInputText, CallFunc_BooleanAND_ReturnValue_1) == 0x00003E, "Member 'CertificationWindow_C_ReserveInputText::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");

// Function CertificationWindow.CertificationWindow_C.SetBirthdayInfo
// 0x0048 (0x0048 - 0x0000)
struct CertificationWindow_C_SetBirthdayInfo final
{
public:
	int32                                         Param_Year;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Month;                                       // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Age;                                         // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Count;                                       // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0010(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0028(0x0018)()
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CertificationWindow_C_SetBirthdayInfo) == 0x000008, "Wrong alignment on CertificationWindow_C_SetBirthdayInfo");
static_assert(sizeof(CertificationWindow_C_SetBirthdayInfo) == 0x000048, "Wrong size on CertificationWindow_C_SetBirthdayInfo");
static_assert(offsetof(CertificationWindow_C_SetBirthdayInfo, Param_Year) == 0x000000, "Member 'CertificationWindow_C_SetBirthdayInfo::Param_Year' has a wrong offset!");
static_assert(offsetof(CertificationWindow_C_SetBirthdayInfo, Param_Month) == 0x000004, "Member 'CertificationWindow_C_SetBirthdayInfo::Param_Month' has a wrong offset!");
static_assert(offsetof(CertificationWindow_C_SetBirthdayInfo, Param_Age) == 0x000008, "Member 'CertificationWindow_C_SetBirthdayInfo::Param_Age' has a wrong offset!");
static_assert(offsetof(CertificationWindow_C_SetBirthdayInfo, Param_Count) == 0x00000C, "Member 'CertificationWindow_C_SetBirthdayInfo::Param_Count' has a wrong offset!");
static_assert(offsetof(CertificationWindow_C_SetBirthdayInfo, CallFunc_Conv_IntToText_ReturnValue) == 0x000010, "Member 'CertificationWindow_C_SetBirthdayInfo::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CertificationWindow_C_SetBirthdayInfo, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000028, "Member 'CertificationWindow_C_SetBirthdayInfo::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CertificationWindow_C_SetBirthdayInfo, CallFunc_Greater_IntInt_ReturnValue) == 0x000040, "Member 'CertificationWindow_C_SetBirthdayInfo::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

}

