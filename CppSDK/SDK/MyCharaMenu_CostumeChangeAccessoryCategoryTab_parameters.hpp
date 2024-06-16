#pragma once

 

// Package: MyCharaMenu_CostumeChangeAccessoryCategoryTab

#include "Basic.hpp"

#include "E_MyCharaMenu_AccessoryCategory_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function MyCharaMenu_CostumeChangeAccessoryCategoryTab.MyCharaMenu_CostumeChangeAccessoryCategoryTab_C.OnAccessoryCategoryIconBtnClicked__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_OnAccessoryCategoryIconBtnClicked__DelegateSignature final
{
public:
	E_MyCharaMenu_AccessoryCategory               InAccessoryCategory;                               // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_OnAccessoryCategoryIconBtnClicked__DelegateSignature) == 0x000001, "Wrong alignment on MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_OnAccessoryCategoryIconBtnClicked__DelegateSignature");
static_assert(sizeof(MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_OnAccessoryCategoryIconBtnClicked__DelegateSignature) == 0x000001, "Wrong size on MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_OnAccessoryCategoryIconBtnClicked__DelegateSignature");
static_assert(offsetof(MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_OnAccessoryCategoryIconBtnClicked__DelegateSignature, InAccessoryCategory) == 0x000000, "Member 'MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_OnAccessoryCategoryIconBtnClicked__DelegateSignature::InAccessoryCategory' has a wrong offset!");

// Function MyCharaMenu_CostumeChangeAccessoryCategoryTab.MyCharaMenu_CostumeChangeAccessoryCategoryTab_C.ExecuteUbergraph_MyCharaMenu_CostumeChangeAccessoryCategoryTab
// 0x0098 (0x0098 - 0x0000)
struct MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeAccessoryCategoryTab final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7B4D[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMyCharaMenu_CostumeAccessoryCategoryIconBtn_C* CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B4E[0x2];                                     // 0x001E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7B4F[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMyCharaMenu_CostumeAccessoryCategoryIconBtn_C* K2Node_DynamicCast_AsMy_Chara_Menu_Costume_Accessory_Category_Icon_Btn; // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B50[0x2];                                     // 0x0042(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(E_MyCharaMenu_AccessoryCategory InAccessoryCategory)> K2Node_CreateDelegate_OutputDelegate;              // 0x0048(0x0010)(ZeroConstructor, NoDestructor)
	E_MyCharaMenu_AccessoryCategory               CallFunc_Array_Get_Item;                           // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7B51[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B52[0x3];                                     // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(E_MyCharaMenu_AccessoryCategory InAccessoryCategory)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0064(0x0010)(ZeroConstructor, NoDestructor)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0074(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B53[0x4];                                     // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UHorizontalBoxSlot*                     CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_MyCharaMenu_AccessoryCategory               K2Node_CustomEvent_InAccessoryCategory;            // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeAccessoryCategoryTab) == 0x000008, "Wrong alignment on MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeAccessoryCategoryTab");
static_assert(sizeof(MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeAccessoryCategoryTab) == 0x000098, "Wrong size on MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeAccessoryCategoryTab");
static_assert(offsetof(MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeAccessoryCategoryTab, EntryPoint) == 0x000000, "Member 'MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeAccessoryCategoryTab::EntryPoint' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeAccessoryCategoryTab, CallFunc_Create_ReturnValue) == 0x000008, "Member 'MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeAccessoryCategoryTab::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeAccessoryCategoryTab, Temp_int_Loop_Counter_Variable) == 0x000010, "Member 'MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeAccessoryCategoryTab::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeAccessoryCategoryTab, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeAccessoryCategoryTab::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeAccessoryCategoryTab, Temp_int_Array_Index_Variable) == 0x000018, "Member 'MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeAccessoryCategoryTab::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeAccessoryCategoryTab, CallFunc_Greater_IntInt_ReturnValue) == 0x00001C, "Member 'MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeAccessoryCategoryTab::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeAccessoryCategoryTab, K2Node_Event_IsDesignTime) == 0x00001D, "Member 'MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeAccessoryCategoryTab::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeAccessoryCategoryTab, Temp_int_Variable) == 0x000020, "Member 'MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeAccessoryCategoryTab::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeAccessoryCategoryTab, CallFunc_GetChildrenCount_ReturnValue) == 0x000024, "Member 'MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeAccessoryCategoryTab::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeAccessoryCategoryTab, CallFunc_GetChildAt_ReturnValue) == 0x000028, "Member 'MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeAccessoryCategoryTab::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeAccessoryCategoryTab, CallFunc_Subtract_IntInt_ReturnValue) == 0x000030, "Member 'MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeAccessoryCategoryTab::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeAccessoryCategoryTab, K2Node_DynamicCast_AsMy_Chara_Menu_Costume_Accessory_Category_Icon_Btn) == 0x000038, "Member 'MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeAccessoryCategoryTab::K2Node_DynamicCast_AsMy_Chara_Menu_Costume_Accessory_Category_Icon_Btn' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeAccessoryCategoryTab, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeAccessoryCategoryTab::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeAccessoryCategoryTab, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000041, "Member 'MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeAccessoryCategoryTab::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeAccessoryCategoryTab, CallFunc_Add_IntInt_ReturnValue_1) == 0x000044, "Member 'MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeAccessoryCategoryTab::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeAccessoryCategoryTab, K2Node_CreateDelegate_OutputDelegate) == 0x000048, "Member 'MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeAccessoryCategoryTab::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeAccessoryCategoryTab, CallFunc_Array_Get_Item) == 0x000058, "Member 'MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeAccessoryCategoryTab::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeAccessoryCategoryTab, CallFunc_Array_Length_ReturnValue) == 0x00005C, "Member 'MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeAccessoryCategoryTab::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeAccessoryCategoryTab, CallFunc_Less_IntInt_ReturnValue) == 0x000060, "Member 'MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeAccessoryCategoryTab::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeAccessoryCategoryTab, K2Node_CreateDelegate_OutputDelegate_1) == 0x000064, "Member 'MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeAccessoryCategoryTab::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeAccessoryCategoryTab, K2Node_MakeStruct_Margin) == 0x000074, "Member 'MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeAccessoryCategoryTab::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeAccessoryCategoryTab, CallFunc_AddChildToHorizontalBox_ReturnValue) == 0x000088, "Member 'MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeAccessoryCategoryTab::CallFunc_AddChildToHorizontalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeAccessoryCategoryTab, K2Node_CustomEvent_InAccessoryCategory) == 0x000090, "Member 'MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeAccessoryCategoryTab::K2Node_CustomEvent_InAccessoryCategory' has a wrong offset!");

// Function MyCharaMenu_CostumeChangeAccessoryCategoryTab.MyCharaMenu_CostumeChangeAccessoryCategoryTab_C.OnAccessoryCategoryBtnClickedEvent
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_OnAccessoryCategoryBtnClickedEvent final
{
public:
	E_MyCharaMenu_AccessoryCategory               InAccessoryCategory;                               // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_OnAccessoryCategoryBtnClickedEvent) == 0x000001, "Wrong alignment on MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_OnAccessoryCategoryBtnClickedEvent");
static_assert(sizeof(MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_OnAccessoryCategoryBtnClickedEvent) == 0x000001, "Wrong size on MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_OnAccessoryCategoryBtnClickedEvent");
static_assert(offsetof(MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_OnAccessoryCategoryBtnClickedEvent, InAccessoryCategory) == 0x000000, "Member 'MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_OnAccessoryCategoryBtnClickedEvent::InAccessoryCategory' has a wrong offset!");

// Function MyCharaMenu_CostumeChangeAccessoryCategoryTab.MyCharaMenu_CostumeChangeAccessoryCategoryTab_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_PreConstruct) == 0x000001, "Wrong alignment on MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_PreConstruct");
static_assert(sizeof(MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_PreConstruct) == 0x000001, "Wrong size on MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_PreConstruct");
static_assert(offsetof(MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function MyCharaMenu_CostumeChangeAccessoryCategoryTab.MyCharaMenu_CostumeChangeAccessoryCategoryTab_C.UpdateSelectedAccessoryCategoryIconBtn
// 0x0038 (0x0038 - 0x0000)
struct MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_UpdateSelectedAccessoryCategoryIconBtn final
{
public:
	E_MyCharaMenu_AccessoryCategory               InAccessoryCategory;                               // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EProtectorCategory                            TmpAccessoryCategory;                              // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7B54[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7B55[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7B56[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMyCharaMenu_CostumeAccessoryCategoryIconBtn_C* K2Node_DynamicCast_AsMy_Chara_Menu_Costume_Accessory_Category_Icon_Btn; // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B57[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_MyCharaMenu_AccessoryCategory               CallFunc_GetAccessoryCategory_OutAccessoryCategory; // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_UpdateSelectedAccessoryCategoryIconBtn) == 0x000008, "Wrong alignment on MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_UpdateSelectedAccessoryCategoryIconBtn");
static_assert(sizeof(MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_UpdateSelectedAccessoryCategoryIconBtn) == 0x000038, "Wrong size on MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_UpdateSelectedAccessoryCategoryIconBtn");
static_assert(offsetof(MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_UpdateSelectedAccessoryCategoryIconBtn, InAccessoryCategory) == 0x000000, "Member 'MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_UpdateSelectedAccessoryCategoryIconBtn::InAccessoryCategory' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_UpdateSelectedAccessoryCategoryIconBtn, TmpAccessoryCategory) == 0x000001, "Member 'MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_UpdateSelectedAccessoryCategoryIconBtn::TmpAccessoryCategory' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_UpdateSelectedAccessoryCategoryIconBtn, Temp_int_Variable) == 0x000004, "Member 'MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_UpdateSelectedAccessoryCategoryIconBtn::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_UpdateSelectedAccessoryCategoryIconBtn, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_UpdateSelectedAccessoryCategoryIconBtn::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_UpdateSelectedAccessoryCategoryIconBtn, CallFunc_GetChildAt_ReturnValue) == 0x000010, "Member 'MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_UpdateSelectedAccessoryCategoryIconBtn::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_UpdateSelectedAccessoryCategoryIconBtn, CallFunc_GetChildrenCount_ReturnValue) == 0x000018, "Member 'MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_UpdateSelectedAccessoryCategoryIconBtn::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_UpdateSelectedAccessoryCategoryIconBtn, K2Node_DynamicCast_AsMy_Chara_Menu_Costume_Accessory_Category_Icon_Btn) == 0x000020, "Member 'MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_UpdateSelectedAccessoryCategoryIconBtn::K2Node_DynamicCast_AsMy_Chara_Menu_Costume_Accessory_Category_Icon_Btn' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_UpdateSelectedAccessoryCategoryIconBtn, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_UpdateSelectedAccessoryCategoryIconBtn::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_UpdateSelectedAccessoryCategoryIconBtn, CallFunc_Subtract_IntInt_ReturnValue) == 0x00002C, "Member 'MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_UpdateSelectedAccessoryCategoryIconBtn::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_UpdateSelectedAccessoryCategoryIconBtn, CallFunc_GetAccessoryCategory_OutAccessoryCategory) == 0x000030, "Member 'MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_UpdateSelectedAccessoryCategoryIconBtn::CallFunc_GetAccessoryCategory_OutAccessoryCategory' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_UpdateSelectedAccessoryCategoryIconBtn, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000031, "Member 'MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_UpdateSelectedAccessoryCategoryIconBtn::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_UpdateSelectedAccessoryCategoryIconBtn, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000032, "Member 'MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_UpdateSelectedAccessoryCategoryIconBtn::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_CostumeChangeAccessoryCategoryTab.MyCharaMenu_CostumeChangeAccessoryCategoryTab_C.SetSelectedAccessoryCategoryIconBtn
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_SetSelectedAccessoryCategoryIconBtn final
{
public:
	E_MyCharaMenu_AccessoryCategory               InAccessoryCategory;                               // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_SetSelectedAccessoryCategoryIconBtn) == 0x000001, "Wrong alignment on MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_SetSelectedAccessoryCategoryIconBtn");
static_assert(sizeof(MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_SetSelectedAccessoryCategoryIconBtn) == 0x000001, "Wrong size on MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_SetSelectedAccessoryCategoryIconBtn");
static_assert(offsetof(MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_SetSelectedAccessoryCategoryIconBtn, InAccessoryCategory) == 0x000000, "Member 'MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_SetSelectedAccessoryCategoryIconBtn::InAccessoryCategory' has a wrong offset!");

}

