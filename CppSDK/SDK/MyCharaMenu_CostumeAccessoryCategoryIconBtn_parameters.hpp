#pragma once

 

// Package: MyCharaMenu_CostumeAccessoryCategoryIconBtn

#include "Basic.hpp"

#include "E_MyCharaMenu_AccessoryCategory_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function MyCharaMenu_CostumeAccessoryCategoryIconBtn.MyCharaMenu_CostumeAccessoryCategoryIconBtn_C.OnButtonClicked__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_OnButtonClicked__DelegateSignature final
{
public:
	E_MyCharaMenu_AccessoryCategory               InAccessoryCategory;                               // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_OnButtonClicked__DelegateSignature) == 0x000001, "Wrong alignment on MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_OnButtonClicked__DelegateSignature");
static_assert(sizeof(MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_OnButtonClicked__DelegateSignature) == 0x000001, "Wrong size on MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_OnButtonClicked__DelegateSignature");
static_assert(offsetof(MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_OnButtonClicked__DelegateSignature, InAccessoryCategory) == 0x000000, "Member 'MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_OnButtonClicked__DelegateSignature::InAccessoryCategory' has a wrong offset!");

// Function MyCharaMenu_CostumeAccessoryCategoryIconBtn.MyCharaMenu_CostumeAccessoryCategoryIconBtn_C.ExecuteUbergraph_MyCharaMenu_CostumeAccessoryCategoryIconBtn
// 0x0008 (0x0008 - 0x0000)
struct MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_ExecuteUbergraph_MyCharaMenu_CostumeAccessoryCategoryIconBtn final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_ExecuteUbergraph_MyCharaMenu_CostumeAccessoryCategoryIconBtn) == 0x000004, "Wrong alignment on MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_ExecuteUbergraph_MyCharaMenu_CostumeAccessoryCategoryIconBtn");
static_assert(sizeof(MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_ExecuteUbergraph_MyCharaMenu_CostumeAccessoryCategoryIconBtn) == 0x000008, "Wrong size on MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_ExecuteUbergraph_MyCharaMenu_CostumeAccessoryCategoryIconBtn");
static_assert(offsetof(MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_ExecuteUbergraph_MyCharaMenu_CostumeAccessoryCategoryIconBtn, EntryPoint) == 0x000000, "Member 'MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_ExecuteUbergraph_MyCharaMenu_CostumeAccessoryCategoryIconBtn::EntryPoint' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_ExecuteUbergraph_MyCharaMenu_CostumeAccessoryCategoryIconBtn, K2Node_Event_IsDesignTime) == 0x000004, "Member 'MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_ExecuteUbergraph_MyCharaMenu_CostumeAccessoryCategoryIconBtn::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function MyCharaMenu_CostumeAccessoryCategoryIconBtn.MyCharaMenu_CostumeAccessoryCategoryIconBtn_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_PreConstruct) == 0x000001, "Wrong alignment on MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_PreConstruct");
static_assert(sizeof(MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_PreConstruct) == 0x000001, "Wrong size on MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_PreConstruct");
static_assert(offsetof(MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function MyCharaMenu_CostumeAccessoryCategoryIconBtn.MyCharaMenu_CostumeAccessoryCategoryIconBtn_C.SetAccessoryCategory
// 0x01D0 (0x01D0 - 0x0000)
struct MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_SetAccessoryCategory final
{
public:
	E_MyCharaMenu_AccessoryCategory               InAccessoryCategory;                               // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8945[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable;                          // 0x0008(0x0028)(HasGetValueTypeHash)
	E_MyCharaMenu_AccessoryCategory               Temp_byte_Variable;                                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8946[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_1;                        // 0x0038(0x0028)(HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_2;                        // 0x0060(0x0028)(HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_3;                        // 0x0088(0x0028)(HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_4;                        // 0x00B0(0x0028)(HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_5;                        // 0x00D8(0x0028)(HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_6;                        // 0x0100(0x0028)(HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_7;                        // 0x0128(0x0028)(HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_8;                        // 0x0150(0x0028)(HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              K2Node_Select_Default;                             // 0x0178(0x0028)(HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8947[0x7];                                     // 0x01A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              K2Node_Select_Default_1;                           // 0x01A8(0x0028)(HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_SetAccessoryCategory) == 0x000008, "Wrong alignment on MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_SetAccessoryCategory");
static_assert(sizeof(MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_SetAccessoryCategory) == 0x0001D0, "Wrong size on MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_SetAccessoryCategory");
static_assert(offsetof(MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_SetAccessoryCategory, InAccessoryCategory) == 0x000000, "Member 'MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_SetAccessoryCategory::InAccessoryCategory' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_SetAccessoryCategory, Temp_bool_Variable) == 0x000001, "Member 'MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_SetAccessoryCategory::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_SetAccessoryCategory, Temp_softobject_Variable) == 0x000008, "Member 'MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_SetAccessoryCategory::Temp_softobject_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_SetAccessoryCategory, Temp_byte_Variable) == 0x000030, "Member 'MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_SetAccessoryCategory::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_SetAccessoryCategory, Temp_softobject_Variable_1) == 0x000038, "Member 'MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_SetAccessoryCategory::Temp_softobject_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_SetAccessoryCategory, Temp_softobject_Variable_2) == 0x000060, "Member 'MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_SetAccessoryCategory::Temp_softobject_Variable_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_SetAccessoryCategory, Temp_softobject_Variable_3) == 0x000088, "Member 'MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_SetAccessoryCategory::Temp_softobject_Variable_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_SetAccessoryCategory, Temp_softobject_Variable_4) == 0x0000B0, "Member 'MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_SetAccessoryCategory::Temp_softobject_Variable_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_SetAccessoryCategory, Temp_softobject_Variable_5) == 0x0000D8, "Member 'MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_SetAccessoryCategory::Temp_softobject_Variable_5' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_SetAccessoryCategory, Temp_softobject_Variable_6) == 0x000100, "Member 'MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_SetAccessoryCategory::Temp_softobject_Variable_6' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_SetAccessoryCategory, Temp_softobject_Variable_7) == 0x000128, "Member 'MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_SetAccessoryCategory::Temp_softobject_Variable_7' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_SetAccessoryCategory, Temp_softobject_Variable_8) == 0x000150, "Member 'MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_SetAccessoryCategory::Temp_softobject_Variable_8' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_SetAccessoryCategory, K2Node_Select_Default) == 0x000178, "Member 'MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_SetAccessoryCategory::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_SetAccessoryCategory, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x0001A0, "Member 'MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_SetAccessoryCategory::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_SetAccessoryCategory, K2Node_Select_Default_1) == 0x0001A8, "Member 'MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_SetAccessoryCategory::K2Node_Select_Default_1' has a wrong offset!");

// Function MyCharaMenu_CostumeAccessoryCategoryIconBtn.MyCharaMenu_CostumeAccessoryCategoryIconBtn_C.GetAccessoryCategory
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_GetAccessoryCategory final
{
public:
	E_MyCharaMenu_AccessoryCategory               OutAccessoryCategory;                              // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_GetAccessoryCategory) == 0x000001, "Wrong alignment on MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_GetAccessoryCategory");
static_assert(sizeof(MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_GetAccessoryCategory) == 0x000001, "Wrong size on MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_GetAccessoryCategory");
static_assert(offsetof(MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_GetAccessoryCategory, OutAccessoryCategory) == 0x000000, "Member 'MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_GetAccessoryCategory::OutAccessoryCategory' has a wrong offset!");

// Function MyCharaMenu_CostumeAccessoryCategoryIconBtn.MyCharaMenu_CostumeAccessoryCategoryIconBtn_C.SetSelected
// 0x003C (0x003C - 0x0000)
struct MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_SetSelected final
{
public:
	bool                                          InIsSelected;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8948[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable;                              // 0x0004(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_1;                            // 0x0014(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8949[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Select_Default;                             // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_SetSelected) == 0x000004, "Wrong alignment on MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_SetSelected");
static_assert(sizeof(MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_SetSelected) == 0x00003C, "Wrong size on MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_SetSelected");
static_assert(offsetof(MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_SetSelected, InIsSelected) == 0x000000, "Member 'MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_SetSelected::InIsSelected' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_SetSelected, Temp_bool_Variable) == 0x000001, "Member 'MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_SetSelected::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_SetSelected, Temp_struct_Variable) == 0x000004, "Member 'MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_SetSelected::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_SetSelected, Temp_struct_Variable_1) == 0x000014, "Member 'MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_SetSelected::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_SetSelected, Temp_bool_Variable_1) == 0x000024, "Member 'MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_SetSelected::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_SetSelected, K2Node_Select_Default) == 0x000028, "Member 'MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_SetSelected::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_SetSelected, Temp_byte_Variable) == 0x000038, "Member 'MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_SetSelected::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_SetSelected, Temp_byte_Variable_1) == 0x000039, "Member 'MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_SetSelected::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_SetSelected, K2Node_Select_Default_1) == 0x00003A, "Member 'MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_SetSelected::K2Node_Select_Default_1' has a wrong offset!");

}

