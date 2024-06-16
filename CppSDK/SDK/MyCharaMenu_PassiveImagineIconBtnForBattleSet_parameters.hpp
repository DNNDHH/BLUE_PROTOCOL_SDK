#pragma once

 

// Package: MyCharaMenu_PassiveImagineIconBtnForBattleSet

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "InventoryData_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.OnClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_OnClicked__DelegateSignature final
{
public:
	ESBPlayerPassiveImagineSlotType               InPassiveImagineSlotType;                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81A7[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InPassiveImagineItemId;                            // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_OnClicked__DelegateSignature) == 0x000004, "Wrong alignment on MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_OnClicked__DelegateSignature");
static_assert(sizeof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_OnClicked__DelegateSignature) == 0x000008, "Wrong size on MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_OnClicked__DelegateSignature");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_OnClicked__DelegateSignature, InPassiveImagineSlotType) == 0x000000, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_OnClicked__DelegateSignature::InPassiveImagineSlotType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_OnClicked__DelegateSignature, InPassiveImagineItemId) == 0x000004, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_OnClicked__DelegateSignature::InPassiveImagineItemId' has a wrong offset!");

// Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.ExecuteUbergraph_MyCharaMenu_PassiveImagineIconBtnForBattleSet
// 0x0010 (0x0010 - 0x0000)
struct MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_ExecuteUbergraph_MyCharaMenu_PassiveImagineIconBtnForBattleSet final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81A8[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UItemIconBtn_C*                         K2Node_ComponentBoundEvent_SelectItem;             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_ExecuteUbergraph_MyCharaMenu_PassiveImagineIconBtnForBattleSet) == 0x000008, "Wrong alignment on MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_ExecuteUbergraph_MyCharaMenu_PassiveImagineIconBtnForBattleSet");
static_assert(sizeof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_ExecuteUbergraph_MyCharaMenu_PassiveImagineIconBtnForBattleSet) == 0x000010, "Wrong size on MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_ExecuteUbergraph_MyCharaMenu_PassiveImagineIconBtnForBattleSet");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_ExecuteUbergraph_MyCharaMenu_PassiveImagineIconBtnForBattleSet, EntryPoint) == 0x000000, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_ExecuteUbergraph_MyCharaMenu_PassiveImagineIconBtnForBattleSet::EntryPoint' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_ExecuteUbergraph_MyCharaMenu_PassiveImagineIconBtnForBattleSet, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_ExecuteUbergraph_MyCharaMenu_PassiveImagineIconBtnForBattleSet::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_ExecuteUbergraph_MyCharaMenu_PassiveImagineIconBtnForBattleSet, K2Node_Event_IsDesignTime) == 0x000005, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_ExecuteUbergraph_MyCharaMenu_PassiveImagineIconBtnForBattleSet::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_ExecuteUbergraph_MyCharaMenu_PassiveImagineIconBtnForBattleSet, K2Node_ComponentBoundEvent_SelectItem) == 0x000008, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_ExecuteUbergraph_MyCharaMenu_PassiveImagineIconBtnForBattleSet::K2Node_ComponentBoundEvent_SelectItem' has a wrong offset!");

// Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.BndEvt__MyCharaMenu_PassiveImagineIconBtnForBattleSet_ItemIconBtn_K2Node_ComponentBoundEvent_2_OnSelect__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_BndEvt__MyCharaMenu_PassiveImagineIconBtnForBattleSet_ItemIconBtn_K2Node_ComponentBoundEvent_2_OnSelect__DelegateSignature final
{
public:
	class UItemIconBtn_C*                         SelectItem;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_BndEvt__MyCharaMenu_PassiveImagineIconBtnForBattleSet_ItemIconBtn_K2Node_ComponentBoundEvent_2_OnSelect__DelegateSignature) == 0x000008, "Wrong alignment on MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_BndEvt__MyCharaMenu_PassiveImagineIconBtnForBattleSet_ItemIconBtn_K2Node_ComponentBoundEvent_2_OnSelect__DelegateSignature");
static_assert(sizeof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_BndEvt__MyCharaMenu_PassiveImagineIconBtnForBattleSet_ItemIconBtn_K2Node_ComponentBoundEvent_2_OnSelect__DelegateSignature) == 0x000008, "Wrong size on MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_BndEvt__MyCharaMenu_PassiveImagineIconBtnForBattleSet_ItemIconBtn_K2Node_ComponentBoundEvent_2_OnSelect__DelegateSignature");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_BndEvt__MyCharaMenu_PassiveImagineIconBtnForBattleSet_ItemIconBtn_K2Node_ComponentBoundEvent_2_OnSelect__DelegateSignature, SelectItem) == 0x000000, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_BndEvt__MyCharaMenu_PassiveImagineIconBtnForBattleSet_ItemIconBtn_K2Node_ComponentBoundEvent_2_OnSelect__DelegateSignature::SelectItem' has a wrong offset!");

// Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_PreConstruct) == 0x000001, "Wrong alignment on MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_PreConstruct");
static_assert(sizeof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_PreConstruct) == 0x000001, "Wrong size on MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_PreConstruct");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.SetPassiveImagineSlotType
// 0x0038 (0x0038 - 0x0000)
struct MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineSlotType final
{
public:
	ESBPlayerPassiveImagineSlotType               InSlotType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81A9[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetPassiveImagineEmptyIconTexture_OutIconTexture; // 0x0008(0x0028)(HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineSlotType) == 0x000008, "Wrong alignment on MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineSlotType");
static_assert(sizeof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineSlotType) == 0x000038, "Wrong size on MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineSlotType");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineSlotType, InSlotType) == 0x000000, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineSlotType::InSlotType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineSlotType, CallFunc_GetPassiveImagineEmptyIconTexture_OutIconTexture) == 0x000008, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineSlotType::CallFunc_GetPassiveImagineEmptyIconTexture_OutIconTexture' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineSlotType, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000030, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineSlotType::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineSlotType, CallFunc_IsValid_ReturnValue) == 0x000031, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineSlotType::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.GetPassiveImagineSlotType
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_GetPassiveImagineSlotType final
{
public:
	ESBPlayerPassiveImagineSlotType               OutSlotType;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_GetPassiveImagineSlotType) == 0x000001, "Wrong alignment on MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_GetPassiveImagineSlotType");
static_assert(sizeof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_GetPassiveImagineSlotType) == 0x000001, "Wrong size on MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_GetPassiveImagineSlotType");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_GetPassiveImagineSlotType, OutSlotType) == 0x000000, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_GetPassiveImagineSlotType::OutSlotType' has a wrong offset!");

// Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.SetPassiveImagineByOwnItemInfo
// 0x01D0 (0x01D0 - 0x0000)
struct MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineByOwnItemInfo final
{
public:
	struct FOwnItemInfo                           InOwnItemInfo;                                     // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	ESBClassType                                  InClassType;                                       // 0x0118(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81AA[0x3];                                     // 0x0119(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LocalItemId;                                       // 0x011C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 LocalUniqueId;                                     // 0x0120(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FInventoryData                         CallFunc_CreateInventoryData_InventoryData;        // 0x0130(0x0098)(HasGetValueTypeHash)
	bool                                          CallFunc_CreateInventoryData_IsSuccess;            // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x01C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x01CA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x01CB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineByOwnItemInfo) == 0x000008, "Wrong alignment on MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineByOwnItemInfo");
static_assert(sizeof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineByOwnItemInfo) == 0x0001D0, "Wrong size on MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineByOwnItemInfo");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineByOwnItemInfo, InOwnItemInfo) == 0x000000, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineByOwnItemInfo::InOwnItemInfo' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineByOwnItemInfo, InClassType) == 0x000118, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineByOwnItemInfo::InClassType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineByOwnItemInfo, LocalItemId) == 0x00011C, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineByOwnItemInfo::LocalItemId' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineByOwnItemInfo, LocalUniqueId) == 0x000120, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineByOwnItemInfo::LocalUniqueId' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineByOwnItemInfo, CallFunc_CreateInventoryData_InventoryData) == 0x000130, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineByOwnItemInfo::CallFunc_CreateInventoryData_InventoryData' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineByOwnItemInfo, CallFunc_CreateInventoryData_IsSuccess) == 0x0001C8, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineByOwnItemInfo::CallFunc_CreateInventoryData_IsSuccess' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineByOwnItemInfo, CallFunc_IsValid_ReturnValue) == 0x0001C9, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineByOwnItemInfo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineByOwnItemInfo, CallFunc_IsValid_ReturnValue_1) == 0x0001CA, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineByOwnItemInfo::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineByOwnItemInfo, CallFunc_IsValid_ReturnValue_2) == 0x0001CB, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineByOwnItemInfo::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");

// Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.SetIconEmpty
// 0x0020 (0x0020 - 0x0000)
struct MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetIconEmpty final
{
public:
	bool                                          InIsEmpty;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalIsSlotEmpty;                                  // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81AB[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0017(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         K2Node_Select_Default_1;                           // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetIconEmpty) == 0x000004, "Wrong alignment on MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetIconEmpty");
static_assert(sizeof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetIconEmpty) == 0x000020, "Wrong size on MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetIconEmpty");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetIconEmpty, InIsEmpty) == 0x000000, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetIconEmpty::InIsEmpty' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetIconEmpty, LocalIsSlotEmpty) == 0x000001, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetIconEmpty::LocalIsSlotEmpty' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetIconEmpty, Temp_byte_Variable) == 0x000002, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetIconEmpty::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetIconEmpty, Temp_byte_Variable_1) == 0x000003, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetIconEmpty::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetIconEmpty, Temp_bool_Variable) == 0x000004, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetIconEmpty::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetIconEmpty, Temp_int_Variable) == 0x000008, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetIconEmpty::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetIconEmpty, Temp_int_Variable_1) == 0x00000C, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetIconEmpty::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetIconEmpty, Temp_bool_Variable_1) == 0x000010, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetIconEmpty::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetIconEmpty, Temp_byte_Variable_2) == 0x000011, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetIconEmpty::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetIconEmpty, Temp_byte_Variable_3) == 0x000012, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetIconEmpty::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetIconEmpty, Temp_bool_Variable_2) == 0x000013, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetIconEmpty::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetIconEmpty, CallFunc_Not_PreBool_ReturnValue) == 0x000014, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetIconEmpty::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetIconEmpty, K2Node_Select_Default) == 0x000015, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetIconEmpty::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetIconEmpty, CallFunc_IsValid_ReturnValue) == 0x000016, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetIconEmpty::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetIconEmpty, CallFunc_IsValid_ReturnValue_1) == 0x000017, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetIconEmpty::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetIconEmpty, K2Node_Select_Default_1) == 0x000018, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetIconEmpty::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetIconEmpty, K2Node_Select_Default_2) == 0x00001C, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetIconEmpty::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetIconEmpty, CallFunc_IsValid_ReturnValue_2) == 0x00001D, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetIconEmpty::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");

// Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.SetButtonOff
// 0x0002 (0x0002 - 0x0000)
struct MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetButtonOff final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetButtonOff) == 0x000001, "Wrong alignment on MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetButtonOff");
static_assert(sizeof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetButtonOff) == 0x000002, "Wrong size on MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetButtonOff");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetButtonOff, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetButtonOff::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetButtonOff, CallFunc_IsValid_ReturnValue_1) == 0x000001, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetButtonOff::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.SetAlertIconVisibility
// 0x0006 (0x0006 - 0x0000)
struct MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetAlertIconVisibility final
{
public:
	bool                                          InIsVisible;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetAlertIconVisibility) == 0x000001, "Wrong alignment on MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetAlertIconVisibility");
static_assert(sizeof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetAlertIconVisibility) == 0x000006, "Wrong size on MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetAlertIconVisibility");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetAlertIconVisibility, InIsVisible) == 0x000000, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetAlertIconVisibility::InIsVisible' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetAlertIconVisibility, Temp_byte_Variable) == 0x000001, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetAlertIconVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetAlertIconVisibility, Temp_byte_Variable_1) == 0x000002, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetAlertIconVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetAlertIconVisibility, Temp_bool_Variable) == 0x000003, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetAlertIconVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetAlertIconVisibility, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetAlertIconVisibility::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetAlertIconVisibility, K2Node_Select_Default) == 0x000005, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetAlertIconVisibility::K2Node_Select_Default' has a wrong offset!");

// Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.SetPassiveImagineBlankIconStyle
// 0x0280 (0x0280 - 0x0000)
struct MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineBlankIconStyle final
{
public:
	ESBPlayerPassiveImagineSlotType               InPassiveImagineSlotType;                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBPlayerPassiveImagineSlotType               Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81AC[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FButtonStyle                           K2Node_Select_Default;                             // 0x0008(0x0278)(ConstParm)
};
static_assert(alignof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineBlankIconStyle) == 0x000008, "Wrong alignment on MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineBlankIconStyle");
static_assert(sizeof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineBlankIconStyle) == 0x000280, "Wrong size on MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineBlankIconStyle");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineBlankIconStyle, InPassiveImagineSlotType) == 0x000000, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineBlankIconStyle::InPassiveImagineSlotType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineBlankIconStyle, Temp_byte_Variable) == 0x000001, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineBlankIconStyle::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineBlankIconStyle, K2Node_Select_Default) == 0x000008, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineBlankIconStyle::K2Node_Select_Default' has a wrong offset!");

// Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.SetForceLevelSyncOff
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetForceLevelSyncOff final
{
public:
	bool                                          bInForceLevelSyncOff;                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetForceLevelSyncOff) == 0x000001, "Wrong alignment on MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetForceLevelSyncOff");
static_assert(sizeof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetForceLevelSyncOff) == 0x000001, "Wrong size on MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetForceLevelSyncOff");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetForceLevelSyncOff, bInForceLevelSyncOff) == 0x000000, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetForceLevelSyncOff::bInForceLevelSyncOff' has a wrong offset!");

// Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.SetDhcBattleTopMenuMode
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetDhcBattleTopMenuMode final
{
public:
	bool                                          InIsDhcBattleTopMenuMode;                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetDhcBattleTopMenuMode) == 0x000001, "Wrong alignment on MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetDhcBattleTopMenuMode");
static_assert(sizeof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetDhcBattleTopMenuMode) == 0x000001, "Wrong size on MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetDhcBattleTopMenuMode");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetDhcBattleTopMenuMode, InIsDhcBattleTopMenuMode) == 0x000000, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetDhcBattleTopMenuMode::InIsDhcBattleTopMenuMode' has a wrong offset!");

// Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.SetBtnForPadCursorMoveVisible
// 0x0005 (0x0005 - 0x0000)
struct MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetBtnForPadCursorMoveVisible final
{
public:
	bool                                          InIsVisible;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetBtnForPadCursorMoveVisible) == 0x000001, "Wrong alignment on MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetBtnForPadCursorMoveVisible");
static_assert(sizeof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetBtnForPadCursorMoveVisible) == 0x000005, "Wrong size on MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetBtnForPadCursorMoveVisible");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetBtnForPadCursorMoveVisible, InIsVisible) == 0x000000, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetBtnForPadCursorMoveVisible::InIsVisible' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetBtnForPadCursorMoveVisible, Temp_bool_Variable) == 0x000001, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetBtnForPadCursorMoveVisible::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetBtnForPadCursorMoveVisible, Temp_byte_Variable) == 0x000002, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetBtnForPadCursorMoveVisible::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetBtnForPadCursorMoveVisible, Temp_byte_Variable_1) == 0x000003, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetBtnForPadCursorMoveVisible::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetBtnForPadCursorMoveVisible, K2Node_Select_Default) == 0x000004, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetBtnForPadCursorMoveVisible::K2Node_Select_Default' has a wrong offset!");

// Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.CreateTooltipForBtnPadCursorMove
// 0x01F8 (0x01F8 - 0x0000)
struct MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_CreateTooltipForBtnPadCursorMove final
{
public:
	bool                                          InNoTooltip;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81AD[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           InOwnItemInfo;                                     // 0x0008(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindImagineMaster_bIsValid;               // 0x0121(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81AE[0x6];                                     // 0x0122(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       CallFunc_FindImagineMaster_ImagineMaster;          // 0x0128(0x00B0)()
	class UCommonIconToolTipContent_PassiveImagine_C* K2Node_DynamicCast_AsCommon_Icon_Tool_Tip_Content_Passive_Imagine; // 0x01D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x01E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81AF[0x6];                                     // 0x01E2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonIconToolTipContent_PassiveImagine_C* CallFunc_Create_ReturnValue;                       // 0x01E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_CreateTooltipForBtnPadCursorMove) == 0x000008, "Wrong alignment on MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_CreateTooltipForBtnPadCursorMove");
static_assert(sizeof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_CreateTooltipForBtnPadCursorMove) == 0x0001F8, "Wrong size on MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_CreateTooltipForBtnPadCursorMove");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_CreateTooltipForBtnPadCursorMove, InNoTooltip) == 0x000000, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_CreateTooltipForBtnPadCursorMove::InNoTooltip' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_CreateTooltipForBtnPadCursorMove, InOwnItemInfo) == 0x000008, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_CreateTooltipForBtnPadCursorMove::InOwnItemInfo' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_CreateTooltipForBtnPadCursorMove, CallFunc_Not_PreBool_ReturnValue) == 0x000120, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_CreateTooltipForBtnPadCursorMove::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_CreateTooltipForBtnPadCursorMove, CallFunc_FindImagineMaster_bIsValid) == 0x000121, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_CreateTooltipForBtnPadCursorMove::CallFunc_FindImagineMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_CreateTooltipForBtnPadCursorMove, CallFunc_FindImagineMaster_ImagineMaster) == 0x000128, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_CreateTooltipForBtnPadCursorMove::CallFunc_FindImagineMaster_ImagineMaster' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_CreateTooltipForBtnPadCursorMove, K2Node_DynamicCast_AsCommon_Icon_Tool_Tip_Content_Passive_Imagine) == 0x0001D8, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_CreateTooltipForBtnPadCursorMove::K2Node_DynamicCast_AsCommon_Icon_Tool_Tip_Content_Passive_Imagine' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_CreateTooltipForBtnPadCursorMove, K2Node_DynamicCast_bSuccess) == 0x0001E0, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_CreateTooltipForBtnPadCursorMove::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_CreateTooltipForBtnPadCursorMove, CallFunc_IsValid_ReturnValue) == 0x0001E1, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_CreateTooltipForBtnPadCursorMove::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_CreateTooltipForBtnPadCursorMove, CallFunc_Create_ReturnValue) == 0x0001E8, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_CreateTooltipForBtnPadCursorMove::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_CreateTooltipForBtnPadCursorMove, CallFunc_IsValid_ReturnValue_1) == 0x0001F0, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_CreateTooltipForBtnPadCursorMove::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.CreateTooltipForBtnPadCursorMoveDhcBattle
// 0x0118 (0x0118 - 0x0000)
struct MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_CreateTooltipForBtnPadCursorMoveDhcBattle final
{
public:
	bool                                          InNoTooltip;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81B0[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InClassLevel;                                      // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBDhcBattlePlayerEquipImagineInfo     InPassiveImagineInfo;                              // 0x0008(0x001C)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	int32                                         LocalClassLevel;                                   // 0x0024(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindImagineMaster_bIsValid;               // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81B1[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       CallFunc_FindImagineMaster_ImagineMaster;          // 0x0040(0x00B0)()
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81B2[0x7];                                     // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonIconToolTipContent_PassiveImagine_C* K2Node_DynamicCast_AsCommon_Icon_Tool_Tip_Content_Passive_Imagine; // 0x00F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0101(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81B3[0x6];                                     // 0x0102(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonIconToolTipContent_PassiveImagine_C* CallFunc_Create_ReturnValue;                       // 0x0108(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_CreateTooltipForBtnPadCursorMoveDhcBattle) == 0x000008, "Wrong alignment on MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_CreateTooltipForBtnPadCursorMoveDhcBattle");
static_assert(sizeof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_CreateTooltipForBtnPadCursorMoveDhcBattle) == 0x000118, "Wrong size on MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_CreateTooltipForBtnPadCursorMoveDhcBattle");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_CreateTooltipForBtnPadCursorMoveDhcBattle, InNoTooltip) == 0x000000, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_CreateTooltipForBtnPadCursorMoveDhcBattle::InNoTooltip' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_CreateTooltipForBtnPadCursorMoveDhcBattle, InClassLevel) == 0x000004, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_CreateTooltipForBtnPadCursorMoveDhcBattle::InClassLevel' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_CreateTooltipForBtnPadCursorMoveDhcBattle, InPassiveImagineInfo) == 0x000008, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_CreateTooltipForBtnPadCursorMoveDhcBattle::InPassiveImagineInfo' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_CreateTooltipForBtnPadCursorMoveDhcBattle, LocalClassLevel) == 0x000024, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_CreateTooltipForBtnPadCursorMoveDhcBattle::LocalClassLevel' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_CreateTooltipForBtnPadCursorMoveDhcBattle, CallFunc_Conv_NameToString_ReturnValue) == 0x000028, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_CreateTooltipForBtnPadCursorMoveDhcBattle::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_CreateTooltipForBtnPadCursorMoveDhcBattle, CallFunc_FindImagineMaster_bIsValid) == 0x000038, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_CreateTooltipForBtnPadCursorMoveDhcBattle::CallFunc_FindImagineMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_CreateTooltipForBtnPadCursorMoveDhcBattle, CallFunc_FindImagineMaster_ImagineMaster) == 0x000040, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_CreateTooltipForBtnPadCursorMoveDhcBattle::CallFunc_FindImagineMaster_ImagineMaster' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_CreateTooltipForBtnPadCursorMoveDhcBattle, CallFunc_Not_PreBool_ReturnValue) == 0x0000F0, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_CreateTooltipForBtnPadCursorMoveDhcBattle::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_CreateTooltipForBtnPadCursorMoveDhcBattle, K2Node_DynamicCast_AsCommon_Icon_Tool_Tip_Content_Passive_Imagine) == 0x0000F8, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_CreateTooltipForBtnPadCursorMoveDhcBattle::K2Node_DynamicCast_AsCommon_Icon_Tool_Tip_Content_Passive_Imagine' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_CreateTooltipForBtnPadCursorMoveDhcBattle, K2Node_DynamicCast_bSuccess) == 0x000100, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_CreateTooltipForBtnPadCursorMoveDhcBattle::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_CreateTooltipForBtnPadCursorMoveDhcBattle, CallFunc_IsValid_ReturnValue) == 0x000101, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_CreateTooltipForBtnPadCursorMoveDhcBattle::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_CreateTooltipForBtnPadCursorMoveDhcBattle, CallFunc_Create_ReturnValue) == 0x000108, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_CreateTooltipForBtnPadCursorMoveDhcBattle::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_CreateTooltipForBtnPadCursorMoveDhcBattle, CallFunc_IsValid_ReturnValue_1) == 0x000110, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_CreateTooltipForBtnPadCursorMoveDhcBattle::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.SetIconTooltipEnable
// 0x0004 (0x0004 - 0x0000)
struct MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetIconTooltipEnable final
{
public:
	bool                                          InIsEnable;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalIsEnable;                                     // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetIconTooltipEnable) == 0x000001, "Wrong alignment on MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetIconTooltipEnable");
static_assert(sizeof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetIconTooltipEnable) == 0x000004, "Wrong size on MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetIconTooltipEnable");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetIconTooltipEnable, InIsEnable) == 0x000000, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetIconTooltipEnable::InIsEnable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetIconTooltipEnable, LocalIsEnable) == 0x000001, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetIconTooltipEnable::LocalIsEnable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetIconTooltipEnable, CallFunc_IsValid_ReturnValue) == 0x000002, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetIconTooltipEnable::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetIconTooltipEnable, CallFunc_IsValid_ReturnValue_1) == 0x000003, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetIconTooltipEnable::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.SetPassiveImagineForDhcBattle
// 0x0218 (0x0218 - 0x0000)
struct MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineForDhcBattle final
{
public:
	struct FSBDhcBattlePlayerEquipImagineInfo     InImagineInfo;                                     // 0x0000(0x001C)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	uint8                                         Pad_81B4[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           InOwnItemInfo;                                     // 0x0020(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	ESBClassType                                  InClassType;                                       // 0x0138(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81B5[0x3];                                     // 0x0139(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBDhcBattlePlayerEquipImagineInfo     LocalImagineInfo;                                  // 0x013C(0x001C)(Edit, BlueprintVisible, NoDestructor)
	int32                                         LocalItemId;                                       // 0x0158(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81B6[0x4];                                     // 0x015C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 LocalUniqueId;                                     // 0x0160(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetStackBMax_ReturnValue;                 // 0x0170(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81B7[0x4];                                     // 0x0174(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryData                         CallFunc_CreateInventoryData_InventoryData;        // 0x0178(0x0098)(HasGetValueTypeHash)
	bool                                          CallFunc_CreateInventoryData_IsSuccess;            // 0x0210(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0211(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0212(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0213(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineForDhcBattle) == 0x000008, "Wrong alignment on MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineForDhcBattle");
static_assert(sizeof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineForDhcBattle) == 0x000218, "Wrong size on MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineForDhcBattle");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineForDhcBattle, InImagineInfo) == 0x000000, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineForDhcBattle::InImagineInfo' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineForDhcBattle, InOwnItemInfo) == 0x000020, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineForDhcBattle::InOwnItemInfo' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineForDhcBattle, InClassType) == 0x000138, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineForDhcBattle::InClassType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineForDhcBattle, LocalImagineInfo) == 0x00013C, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineForDhcBattle::LocalImagineInfo' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineForDhcBattle, LocalItemId) == 0x000158, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineForDhcBattle::LocalItemId' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineForDhcBattle, LocalUniqueId) == 0x000160, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineForDhcBattle::LocalUniqueId' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineForDhcBattle, CallFunc_GetStackBMax_ReturnValue) == 0x000170, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineForDhcBattle::CallFunc_GetStackBMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineForDhcBattle, CallFunc_CreateInventoryData_InventoryData) == 0x000178, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineForDhcBattle::CallFunc_CreateInventoryData_InventoryData' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineForDhcBattle, CallFunc_CreateInventoryData_IsSuccess) == 0x000210, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineForDhcBattle::CallFunc_CreateInventoryData_IsSuccess' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineForDhcBattle, CallFunc_IsValid_ReturnValue) == 0x000211, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineForDhcBattle::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineForDhcBattle, CallFunc_IsValid_ReturnValue_1) == 0x000212, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineForDhcBattle::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineForDhcBattle, CallFunc_IsValid_ReturnValue_2) == 0x000213, "Member 'MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineForDhcBattle::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");

}

