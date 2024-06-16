#pragma once

 

// Package: MyCharaMenu_CostumeChangeCategoryTab

#include "Basic.hpp"

#include "E_MyCharaMenu_CostumeCategory_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function MyCharaMenu_CostumeChangeCategoryTab.MyCharaMenu_CostumeChangeCategoryTab_C.OnCostumeCategoryIconBtnClicked__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_CostumeChangeCategoryTab_C_OnCostumeCategoryIconBtnClicked__DelegateSignature final
{
public:
	E_MyCharaMenu_CostumeCategory                 InCostumeCategory;                                 // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_CostumeChangeCategoryTab_C_OnCostumeCategoryIconBtnClicked__DelegateSignature) == 0x000001, "Wrong alignment on MyCharaMenu_CostumeChangeCategoryTab_C_OnCostumeCategoryIconBtnClicked__DelegateSignature");
static_assert(sizeof(MyCharaMenu_CostumeChangeCategoryTab_C_OnCostumeCategoryIconBtnClicked__DelegateSignature) == 0x000001, "Wrong size on MyCharaMenu_CostumeChangeCategoryTab_C_OnCostumeCategoryIconBtnClicked__DelegateSignature");
static_assert(offsetof(MyCharaMenu_CostumeChangeCategoryTab_C_OnCostumeCategoryIconBtnClicked__DelegateSignature, InCostumeCategory) == 0x000000, "Member 'MyCharaMenu_CostumeChangeCategoryTab_C_OnCostumeCategoryIconBtnClicked__DelegateSignature::InCostumeCategory' has a wrong offset!");

// Function MyCharaMenu_CostumeChangeCategoryTab.MyCharaMenu_CostumeChangeCategoryTab_C.ExecuteUbergraph_MyCharaMenu_CostumeChangeCategoryTab
// 0x00A8 (0x00A8 - 0x0000)
struct MyCharaMenu_CostumeChangeCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeCategoryTab final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_714F[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7150[0x2];                                     // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7151[0x2];                                     // 0x001E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_1;             // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7152[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7153[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMyCharaMenu_CostumeCategoryIconBtn_C*  CallFunc_Create_ReturnValue;                       // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_MyCharaMenu_CostumeCategory                 K2Node_CustomEvent_InCostumeCategory;              // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7154[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UHorizontalBoxSlot*                     CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(E_MyCharaMenu_CostumeCategory InCostumeCategory)> K2Node_CreateDelegate_OutputDelegate;              // 0x0060(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(E_MyCharaMenu_CostumeCategory InCostumeCategory)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0070(0x0010)(ZeroConstructor, NoDestructor)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7155[0x4];                                     // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMyCharaMenu_CostumeCategoryIconBtn_C*  K2Node_DynamicCast_AsMy_Chara_Menu_Costume_Category_Icon_Btn; // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7156[0x3];                                     // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_CostumeChangeCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeCategoryTab) == 0x000008, "Wrong alignment on MyCharaMenu_CostumeChangeCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeCategoryTab");
static_assert(sizeof(MyCharaMenu_CostumeChangeCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeCategoryTab) == 0x0000A8, "Wrong size on MyCharaMenu_CostumeChangeCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeCategoryTab");
static_assert(offsetof(MyCharaMenu_CostumeChangeCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeCategoryTab, EntryPoint) == 0x000000, "Member 'MyCharaMenu_CostumeChangeCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeCategoryTab::EntryPoint' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeCategoryTab, Temp_int_Variable) == 0x000004, "Member 'MyCharaMenu_CostumeChangeCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeCategoryTab::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeCategoryTab, Temp_int_Variable_1) == 0x000008, "Member 'MyCharaMenu_CostumeChangeCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeCategoryTab::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeCategoryTab, CallFunc_Conv_IntToByte_ReturnValue) == 0x00000C, "Member 'MyCharaMenu_CostumeChangeCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeCategoryTab::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeCategoryTab, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'MyCharaMenu_CostumeChangeCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeCategoryTab::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeCategoryTab, CallFunc_GetValidValue_ReturnValue) == 0x000014, "Member 'MyCharaMenu_CostumeChangeCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeCategoryTab::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeCategoryTab, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x000015, "Member 'MyCharaMenu_CostumeChangeCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeCategoryTab::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeCategoryTab, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000018, "Member 'MyCharaMenu_CostumeChangeCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeCategoryTab::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeCategoryTab, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x00001C, "Member 'MyCharaMenu_CostumeChangeCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeCategoryTab::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeCategoryTab, CallFunc_Greater_IntInt_ReturnValue) == 0x00001D, "Member 'MyCharaMenu_CostumeChangeCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeCategoryTab::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeCategoryTab, CallFunc_Conv_ByteToInt_ReturnValue_1) == 0x000020, "Member 'MyCharaMenu_CostumeChangeCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeCategoryTab::CallFunc_Conv_ByteToInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeCategoryTab, Temp_int_Variable_2) == 0x000024, "Member 'MyCharaMenu_CostumeChangeCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeCategoryTab::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeCategoryTab, CallFunc_Add_IntInt_ReturnValue_1) == 0x000028, "Member 'MyCharaMenu_CostumeChangeCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeCategoryTab::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeCategoryTab, K2Node_Event_IsDesignTime) == 0x00002C, "Member 'MyCharaMenu_CostumeChangeCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeCategoryTab::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeCategoryTab, CallFunc_MakeLiteralInt_ReturnValue) == 0x000030, "Member 'MyCharaMenu_CostumeChangeCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeCategoryTab::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeCategoryTab, CallFunc_Less_IntInt_ReturnValue) == 0x000034, "Member 'MyCharaMenu_CostumeChangeCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeCategoryTab::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeCategoryTab, K2Node_MakeStruct_Margin) == 0x000038, "Member 'MyCharaMenu_CostumeChangeCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeCategoryTab::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeCategoryTab, CallFunc_Create_ReturnValue) == 0x000048, "Member 'MyCharaMenu_CostumeChangeCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeCategoryTab::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeCategoryTab, K2Node_CustomEvent_InCostumeCategory) == 0x000050, "Member 'MyCharaMenu_CostumeChangeCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeCategoryTab::K2Node_CustomEvent_InCostumeCategory' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeCategoryTab, CallFunc_AddChildToHorizontalBox_ReturnValue) == 0x000058, "Member 'MyCharaMenu_CostumeChangeCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeCategoryTab::CallFunc_AddChildToHorizontalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeCategoryTab, K2Node_CreateDelegate_OutputDelegate) == 0x000060, "Member 'MyCharaMenu_CostumeChangeCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeCategoryTab::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeCategoryTab, K2Node_CreateDelegate_OutputDelegate_1) == 0x000070, "Member 'MyCharaMenu_CostumeChangeCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeCategoryTab::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeCategoryTab, CallFunc_GetChildAt_ReturnValue) == 0x000080, "Member 'MyCharaMenu_CostumeChangeCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeCategoryTab::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeCategoryTab, CallFunc_GetChildrenCount_ReturnValue) == 0x000088, "Member 'MyCharaMenu_CostumeChangeCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeCategoryTab::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeCategoryTab, K2Node_DynamicCast_AsMy_Chara_Menu_Costume_Category_Icon_Btn) == 0x000090, "Member 'MyCharaMenu_CostumeChangeCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeCategoryTab::K2Node_DynamicCast_AsMy_Chara_Menu_Costume_Category_Icon_Btn' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeCategoryTab, K2Node_DynamicCast_bSuccess) == 0x000098, "Member 'MyCharaMenu_CostumeChangeCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeCategoryTab::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeCategoryTab, CallFunc_Subtract_IntInt_ReturnValue) == 0x00009C, "Member 'MyCharaMenu_CostumeChangeCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeCategoryTab::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeCategoryTab, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0000A0, "Member 'MyCharaMenu_CostumeChangeCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeCategoryTab::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_CostumeChangeCategoryTab.MyCharaMenu_CostumeChangeCategoryTab_C.OnCostumeCategoryIconBtnClickedEvent
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_CostumeChangeCategoryTab_C_OnCostumeCategoryIconBtnClickedEvent final
{
public:
	E_MyCharaMenu_CostumeCategory                 InCostumeCategory;                                 // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_CostumeChangeCategoryTab_C_OnCostumeCategoryIconBtnClickedEvent) == 0x000001, "Wrong alignment on MyCharaMenu_CostumeChangeCategoryTab_C_OnCostumeCategoryIconBtnClickedEvent");
static_assert(sizeof(MyCharaMenu_CostumeChangeCategoryTab_C_OnCostumeCategoryIconBtnClickedEvent) == 0x000001, "Wrong size on MyCharaMenu_CostumeChangeCategoryTab_C_OnCostumeCategoryIconBtnClickedEvent");
static_assert(offsetof(MyCharaMenu_CostumeChangeCategoryTab_C_OnCostumeCategoryIconBtnClickedEvent, InCostumeCategory) == 0x000000, "Member 'MyCharaMenu_CostumeChangeCategoryTab_C_OnCostumeCategoryIconBtnClickedEvent::InCostumeCategory' has a wrong offset!");

// Function MyCharaMenu_CostumeChangeCategoryTab.MyCharaMenu_CostumeChangeCategoryTab_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_CostumeChangeCategoryTab_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_CostumeChangeCategoryTab_C_PreConstruct) == 0x000001, "Wrong alignment on MyCharaMenu_CostumeChangeCategoryTab_C_PreConstruct");
static_assert(sizeof(MyCharaMenu_CostumeChangeCategoryTab_C_PreConstruct) == 0x000001, "Wrong size on MyCharaMenu_CostumeChangeCategoryTab_C_PreConstruct");
static_assert(offsetof(MyCharaMenu_CostumeChangeCategoryTab_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'MyCharaMenu_CostumeChangeCategoryTab_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function MyCharaMenu_CostumeChangeCategoryTab.MyCharaMenu_CostumeChangeCategoryTab_C.UpdateSelectedCostumeCategoryIconBtn
// 0x0038 (0x0038 - 0x0000)
struct MyCharaMenu_CostumeChangeCategoryTab_C_UpdateSelectedCostumeCategoryIconBtn final
{
public:
	E_MyCharaMenu_CostumeCategory                 InSelectedCostumeCategory;                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7157[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7158[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7159[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMyCharaMenu_CostumeCategoryIconBtn_C*  K2Node_DynamicCast_AsMy_Chara_Menu_Costume_Category_Icon_Btn; // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_715A[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_MyCharaMenu_CostumeCategory                 CallFunc_GetCostumeCategory_OutCostumeCategory;    // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_CostumeChangeCategoryTab_C_UpdateSelectedCostumeCategoryIconBtn) == 0x000008, "Wrong alignment on MyCharaMenu_CostumeChangeCategoryTab_C_UpdateSelectedCostumeCategoryIconBtn");
static_assert(sizeof(MyCharaMenu_CostumeChangeCategoryTab_C_UpdateSelectedCostumeCategoryIconBtn) == 0x000038, "Wrong size on MyCharaMenu_CostumeChangeCategoryTab_C_UpdateSelectedCostumeCategoryIconBtn");
static_assert(offsetof(MyCharaMenu_CostumeChangeCategoryTab_C_UpdateSelectedCostumeCategoryIconBtn, InSelectedCostumeCategory) == 0x000000, "Member 'MyCharaMenu_CostumeChangeCategoryTab_C_UpdateSelectedCostumeCategoryIconBtn::InSelectedCostumeCategory' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeCategoryTab_C_UpdateSelectedCostumeCategoryIconBtn, Temp_int_Variable) == 0x000004, "Member 'MyCharaMenu_CostumeChangeCategoryTab_C_UpdateSelectedCostumeCategoryIconBtn::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeCategoryTab_C_UpdateSelectedCostumeCategoryIconBtn, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'MyCharaMenu_CostumeChangeCategoryTab_C_UpdateSelectedCostumeCategoryIconBtn::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeCategoryTab_C_UpdateSelectedCostumeCategoryIconBtn, CallFunc_GetChildAt_ReturnValue) == 0x000010, "Member 'MyCharaMenu_CostumeChangeCategoryTab_C_UpdateSelectedCostumeCategoryIconBtn::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeCategoryTab_C_UpdateSelectedCostumeCategoryIconBtn, CallFunc_GetChildrenCount_ReturnValue) == 0x000018, "Member 'MyCharaMenu_CostumeChangeCategoryTab_C_UpdateSelectedCostumeCategoryIconBtn::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeCategoryTab_C_UpdateSelectedCostumeCategoryIconBtn, K2Node_DynamicCast_AsMy_Chara_Menu_Costume_Category_Icon_Btn) == 0x000020, "Member 'MyCharaMenu_CostumeChangeCategoryTab_C_UpdateSelectedCostumeCategoryIconBtn::K2Node_DynamicCast_AsMy_Chara_Menu_Costume_Category_Icon_Btn' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeCategoryTab_C_UpdateSelectedCostumeCategoryIconBtn, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'MyCharaMenu_CostumeChangeCategoryTab_C_UpdateSelectedCostumeCategoryIconBtn::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeCategoryTab_C_UpdateSelectedCostumeCategoryIconBtn, CallFunc_Subtract_IntInt_ReturnValue) == 0x00002C, "Member 'MyCharaMenu_CostumeChangeCategoryTab_C_UpdateSelectedCostumeCategoryIconBtn::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeCategoryTab_C_UpdateSelectedCostumeCategoryIconBtn, CallFunc_GetCostumeCategory_OutCostumeCategory) == 0x000030, "Member 'MyCharaMenu_CostumeChangeCategoryTab_C_UpdateSelectedCostumeCategoryIconBtn::CallFunc_GetCostumeCategory_OutCostumeCategory' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeCategoryTab_C_UpdateSelectedCostumeCategoryIconBtn, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000031, "Member 'MyCharaMenu_CostumeChangeCategoryTab_C_UpdateSelectedCostumeCategoryIconBtn::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeCategoryTab_C_UpdateSelectedCostumeCategoryIconBtn, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000032, "Member 'MyCharaMenu_CostumeChangeCategoryTab_C_UpdateSelectedCostumeCategoryIconBtn::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_CostumeChangeCategoryTab.MyCharaMenu_CostumeChangeCategoryTab_C.SetSelectedCostumeCategoryIconBtn
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_CostumeChangeCategoryTab_C_SetSelectedCostumeCategoryIconBtn final
{
public:
	E_MyCharaMenu_CostumeCategory                 InSelectedCostumeCategory;                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_CostumeChangeCategoryTab_C_SetSelectedCostumeCategoryIconBtn) == 0x000001, "Wrong alignment on MyCharaMenu_CostumeChangeCategoryTab_C_SetSelectedCostumeCategoryIconBtn");
static_assert(sizeof(MyCharaMenu_CostumeChangeCategoryTab_C_SetSelectedCostumeCategoryIconBtn) == 0x000001, "Wrong size on MyCharaMenu_CostumeChangeCategoryTab_C_SetSelectedCostumeCategoryIconBtn");
static_assert(offsetof(MyCharaMenu_CostumeChangeCategoryTab_C_SetSelectedCostumeCategoryIconBtn, InSelectedCostumeCategory) == 0x000000, "Member 'MyCharaMenu_CostumeChangeCategoryTab_C_SetSelectedCostumeCategoryIconBtn::InSelectedCostumeCategory' has a wrong offset!");

}

