#pragma once

 

// Package: MyCharaMenu_CostumeCategoryIconBtn

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "E_MyCharaMenu_CostumeCategory_structs.hpp"


namespace SDK::Params
{

// Function MyCharaMenu_CostumeCategoryIconBtn.MyCharaMenu_CostumeCategoryIconBtn_C.OnButtonClicked__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_CostumeCategoryIconBtn_C_OnButtonClicked__DelegateSignature final
{
public:
	E_MyCharaMenu_CostumeCategory                 InCostumeCategory;                                 // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_CostumeCategoryIconBtn_C_OnButtonClicked__DelegateSignature) == 0x000001, "Wrong alignment on MyCharaMenu_CostumeCategoryIconBtn_C_OnButtonClicked__DelegateSignature");
static_assert(sizeof(MyCharaMenu_CostumeCategoryIconBtn_C_OnButtonClicked__DelegateSignature) == 0x000001, "Wrong size on MyCharaMenu_CostumeCategoryIconBtn_C_OnButtonClicked__DelegateSignature");
static_assert(offsetof(MyCharaMenu_CostumeCategoryIconBtn_C_OnButtonClicked__DelegateSignature, InCostumeCategory) == 0x000000, "Member 'MyCharaMenu_CostumeCategoryIconBtn_C_OnButtonClicked__DelegateSignature::InCostumeCategory' has a wrong offset!");

// Function MyCharaMenu_CostumeCategoryIconBtn.MyCharaMenu_CostumeCategoryIconBtn_C.ExecuteUbergraph_MyCharaMenu_CostumeCategoryIconBtn
// 0x0008 (0x0008 - 0x0000)
struct MyCharaMenu_CostumeCategoryIconBtn_C_ExecuteUbergraph_MyCharaMenu_CostumeCategoryIconBtn final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_CostumeCategoryIconBtn_C_ExecuteUbergraph_MyCharaMenu_CostumeCategoryIconBtn) == 0x000004, "Wrong alignment on MyCharaMenu_CostumeCategoryIconBtn_C_ExecuteUbergraph_MyCharaMenu_CostumeCategoryIconBtn");
static_assert(sizeof(MyCharaMenu_CostumeCategoryIconBtn_C_ExecuteUbergraph_MyCharaMenu_CostumeCategoryIconBtn) == 0x000008, "Wrong size on MyCharaMenu_CostumeCategoryIconBtn_C_ExecuteUbergraph_MyCharaMenu_CostumeCategoryIconBtn");
static_assert(offsetof(MyCharaMenu_CostumeCategoryIconBtn_C_ExecuteUbergraph_MyCharaMenu_CostumeCategoryIconBtn, EntryPoint) == 0x000000, "Member 'MyCharaMenu_CostumeCategoryIconBtn_C_ExecuteUbergraph_MyCharaMenu_CostumeCategoryIconBtn::EntryPoint' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeCategoryIconBtn_C_ExecuteUbergraph_MyCharaMenu_CostumeCategoryIconBtn, K2Node_Event_IsDesignTime) == 0x000004, "Member 'MyCharaMenu_CostumeCategoryIconBtn_C_ExecuteUbergraph_MyCharaMenu_CostumeCategoryIconBtn::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function MyCharaMenu_CostumeCategoryIconBtn.MyCharaMenu_CostumeCategoryIconBtn_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_CostumeCategoryIconBtn_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_CostumeCategoryIconBtn_C_PreConstruct) == 0x000001, "Wrong alignment on MyCharaMenu_CostumeCategoryIconBtn_C_PreConstruct");
static_assert(sizeof(MyCharaMenu_CostumeCategoryIconBtn_C_PreConstruct) == 0x000001, "Wrong size on MyCharaMenu_CostumeCategoryIconBtn_C_PreConstruct");
static_assert(offsetof(MyCharaMenu_CostumeCategoryIconBtn_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'MyCharaMenu_CostumeCategoryIconBtn_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function MyCharaMenu_CostumeCategoryIconBtn.MyCharaMenu_CostumeCategoryIconBtn_C.SetCostumeCategory
// 0x01A0 (0x01A0 - 0x0000)
struct MyCharaMenu_CostumeCategoryIconBtn_C_SetCostumeCategory final
{
public:
	E_MyCharaMenu_CostumeCategory                 InCostumeCategory;                                 // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_MyCharaMenu_CostumeCategory                 Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_894A[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable;                          // 0x0008(0x0028)(HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_1;                        // 0x0030(0x0028)(HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_2;                        // 0x0058(0x0028)(HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_3;                        // 0x0080(0x0028)(HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_4;                        // 0x00A8(0x0028)(HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_5;                        // 0x00D0(0x0028)(HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_6;                        // 0x00F8(0x0028)(HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_7;                        // 0x0120(0x0028)(HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_8;                        // 0x0148(0x0028)(HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              K2Node_Select_Default;                             // 0x0170(0x0028)(HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_CostumeCategoryIconBtn_C_SetCostumeCategory) == 0x000008, "Wrong alignment on MyCharaMenu_CostumeCategoryIconBtn_C_SetCostumeCategory");
static_assert(sizeof(MyCharaMenu_CostumeCategoryIconBtn_C_SetCostumeCategory) == 0x0001A0, "Wrong size on MyCharaMenu_CostumeCategoryIconBtn_C_SetCostumeCategory");
static_assert(offsetof(MyCharaMenu_CostumeCategoryIconBtn_C_SetCostumeCategory, InCostumeCategory) == 0x000000, "Member 'MyCharaMenu_CostumeCategoryIconBtn_C_SetCostumeCategory::InCostumeCategory' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeCategoryIconBtn_C_SetCostumeCategory, Temp_byte_Variable) == 0x000001, "Member 'MyCharaMenu_CostumeCategoryIconBtn_C_SetCostumeCategory::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeCategoryIconBtn_C_SetCostumeCategory, Temp_softobject_Variable) == 0x000008, "Member 'MyCharaMenu_CostumeCategoryIconBtn_C_SetCostumeCategory::Temp_softobject_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeCategoryIconBtn_C_SetCostumeCategory, Temp_softobject_Variable_1) == 0x000030, "Member 'MyCharaMenu_CostumeCategoryIconBtn_C_SetCostumeCategory::Temp_softobject_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeCategoryIconBtn_C_SetCostumeCategory, Temp_softobject_Variable_2) == 0x000058, "Member 'MyCharaMenu_CostumeCategoryIconBtn_C_SetCostumeCategory::Temp_softobject_Variable_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeCategoryIconBtn_C_SetCostumeCategory, Temp_softobject_Variable_3) == 0x000080, "Member 'MyCharaMenu_CostumeCategoryIconBtn_C_SetCostumeCategory::Temp_softobject_Variable_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeCategoryIconBtn_C_SetCostumeCategory, Temp_softobject_Variable_4) == 0x0000A8, "Member 'MyCharaMenu_CostumeCategoryIconBtn_C_SetCostumeCategory::Temp_softobject_Variable_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeCategoryIconBtn_C_SetCostumeCategory, Temp_softobject_Variable_5) == 0x0000D0, "Member 'MyCharaMenu_CostumeCategoryIconBtn_C_SetCostumeCategory::Temp_softobject_Variable_5' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeCategoryIconBtn_C_SetCostumeCategory, Temp_softobject_Variable_6) == 0x0000F8, "Member 'MyCharaMenu_CostumeCategoryIconBtn_C_SetCostumeCategory::Temp_softobject_Variable_6' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeCategoryIconBtn_C_SetCostumeCategory, Temp_softobject_Variable_7) == 0x000120, "Member 'MyCharaMenu_CostumeCategoryIconBtn_C_SetCostumeCategory::Temp_softobject_Variable_7' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeCategoryIconBtn_C_SetCostumeCategory, Temp_softobject_Variable_8) == 0x000148, "Member 'MyCharaMenu_CostumeCategoryIconBtn_C_SetCostumeCategory::Temp_softobject_Variable_8' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeCategoryIconBtn_C_SetCostumeCategory, K2Node_Select_Default) == 0x000170, "Member 'MyCharaMenu_CostumeCategoryIconBtn_C_SetCostumeCategory::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeCategoryIconBtn_C_SetCostumeCategory, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000198, "Member 'MyCharaMenu_CostumeCategoryIconBtn_C_SetCostumeCategory::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_CostumeCategoryIconBtn.MyCharaMenu_CostumeCategoryIconBtn_C.GetCostumeCategory
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_CostumeCategoryIconBtn_C_GetCostumeCategory final
{
public:
	E_MyCharaMenu_CostumeCategory                 OutCostumeCategory;                                // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_CostumeCategoryIconBtn_C_GetCostumeCategory) == 0x000001, "Wrong alignment on MyCharaMenu_CostumeCategoryIconBtn_C_GetCostumeCategory");
static_assert(sizeof(MyCharaMenu_CostumeCategoryIconBtn_C_GetCostumeCategory) == 0x000001, "Wrong size on MyCharaMenu_CostumeCategoryIconBtn_C_GetCostumeCategory");
static_assert(offsetof(MyCharaMenu_CostumeCategoryIconBtn_C_GetCostumeCategory, OutCostumeCategory) == 0x000000, "Member 'MyCharaMenu_CostumeCategoryIconBtn_C_GetCostumeCategory::OutCostumeCategory' has a wrong offset!");

// Function MyCharaMenu_CostumeCategoryIconBtn.MyCharaMenu_CostumeCategoryIconBtn_C.SetSelected
// 0x0050 (0x0050 - 0x0000)
struct MyCharaMenu_CostumeCategoryIconBtn_C_SetSelected final
{
public:
	bool                                          InIsSelected;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_894B[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         NewLocalVar_1;                                     // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            NewLocalVar_0;                                     // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_894C[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable;                              // 0x0014(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_1;                            // 0x0024(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_894D[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Select_Default;                             // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_CostumeCategoryIconBtn_C_SetSelected) == 0x000008, "Wrong alignment on MyCharaMenu_CostumeCategoryIconBtn_C_SetSelected");
static_assert(sizeof(MyCharaMenu_CostumeCategoryIconBtn_C_SetSelected) == 0x000050, "Wrong size on MyCharaMenu_CostumeCategoryIconBtn_C_SetSelected");
static_assert(offsetof(MyCharaMenu_CostumeCategoryIconBtn_C_SetSelected, InIsSelected) == 0x000000, "Member 'MyCharaMenu_CostumeCategoryIconBtn_C_SetSelected::InIsSelected' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeCategoryIconBtn_C_SetSelected, NewLocalVar_1) == 0x000004, "Member 'MyCharaMenu_CostumeCategoryIconBtn_C_SetSelected::NewLocalVar_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeCategoryIconBtn_C_SetSelected, NewLocalVar_0) == 0x000008, "Member 'MyCharaMenu_CostumeCategoryIconBtn_C_SetSelected::NewLocalVar_0' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeCategoryIconBtn_C_SetSelected, Temp_bool_Variable) == 0x000010, "Member 'MyCharaMenu_CostumeCategoryIconBtn_C_SetSelected::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeCategoryIconBtn_C_SetSelected, Temp_struct_Variable) == 0x000014, "Member 'MyCharaMenu_CostumeCategoryIconBtn_C_SetSelected::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeCategoryIconBtn_C_SetSelected, Temp_struct_Variable_1) == 0x000024, "Member 'MyCharaMenu_CostumeCategoryIconBtn_C_SetSelected::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeCategoryIconBtn_C_SetSelected, Temp_bool_Variable_1) == 0x000034, "Member 'MyCharaMenu_CostumeCategoryIconBtn_C_SetSelected::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeCategoryIconBtn_C_SetSelected, K2Node_Select_Default) == 0x000038, "Member 'MyCharaMenu_CostumeCategoryIconBtn_C_SetSelected::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeCategoryIconBtn_C_SetSelected, Temp_byte_Variable) == 0x000048, "Member 'MyCharaMenu_CostumeCategoryIconBtn_C_SetSelected::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeCategoryIconBtn_C_SetSelected, Temp_byte_Variable_1) == 0x000049, "Member 'MyCharaMenu_CostumeCategoryIconBtn_C_SetSelected::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeCategoryIconBtn_C_SetSelected, K2Node_Select_Default_1) == 0x00004A, "Member 'MyCharaMenu_CostumeCategoryIconBtn_C_SetSelected::K2Node_Select_Default_1' has a wrong offset!");

}

