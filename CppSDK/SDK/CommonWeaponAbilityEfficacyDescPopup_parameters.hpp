#pragma once

 

// Package: CommonWeaponAbilityEfficacyDescPopup

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function CommonWeaponAbilityEfficacyDescPopup.CommonWeaponAbilityEfficacyDescPopup_C.ExecuteUbergraph_CommonWeaponAbilityEfficacyDescPopup
// 0x0018 (0x0018 - 0x0000)
struct CommonWeaponAbilityEfficacyDescPopup_C_ExecuteUbergraph_CommonWeaponAbilityEfficacyDescPopup final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonWeaponAbilityEfficacyDescPopup_C_ExecuteUbergraph_CommonWeaponAbilityEfficacyDescPopup) == 0x000004, "Wrong alignment on CommonWeaponAbilityEfficacyDescPopup_C_ExecuteUbergraph_CommonWeaponAbilityEfficacyDescPopup");
static_assert(sizeof(CommonWeaponAbilityEfficacyDescPopup_C_ExecuteUbergraph_CommonWeaponAbilityEfficacyDescPopup) == 0x000018, "Wrong size on CommonWeaponAbilityEfficacyDescPopup_C_ExecuteUbergraph_CommonWeaponAbilityEfficacyDescPopup");
static_assert(offsetof(CommonWeaponAbilityEfficacyDescPopup_C_ExecuteUbergraph_CommonWeaponAbilityEfficacyDescPopup, EntryPoint) == 0x000000, "Member 'CommonWeaponAbilityEfficacyDescPopup_C_ExecuteUbergraph_CommonWeaponAbilityEfficacyDescPopup::EntryPoint' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityEfficacyDescPopup_C_ExecuteUbergraph_CommonWeaponAbilityEfficacyDescPopup, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'CommonWeaponAbilityEfficacyDescPopup_C_ExecuteUbergraph_CommonWeaponAbilityEfficacyDescPopup::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityEfficacyDescPopup_C_ExecuteUbergraph_CommonWeaponAbilityEfficacyDescPopup, K2Node_Event_IsDesignTime) == 0x000014, "Member 'CommonWeaponAbilityEfficacyDescPopup_C_ExecuteUbergraph_CommonWeaponAbilityEfficacyDescPopup::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityEfficacyDescPopup_C_ExecuteUbergraph_CommonWeaponAbilityEfficacyDescPopup, CallFunc_Not_PreBool_ReturnValue) == 0x000015, "Member 'CommonWeaponAbilityEfficacyDescPopup_C_ExecuteUbergraph_CommonWeaponAbilityEfficacyDescPopup::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function CommonWeaponAbilityEfficacyDescPopup.CommonWeaponAbilityEfficacyDescPopup_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct CommonWeaponAbilityEfficacyDescPopup_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonWeaponAbilityEfficacyDescPopup_C_PreConstruct) == 0x000001, "Wrong alignment on CommonWeaponAbilityEfficacyDescPopup_C_PreConstruct");
static_assert(sizeof(CommonWeaponAbilityEfficacyDescPopup_C_PreConstruct) == 0x000001, "Wrong size on CommonWeaponAbilityEfficacyDescPopup_C_PreConstruct");
static_assert(offsetof(CommonWeaponAbilityEfficacyDescPopup_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'CommonWeaponAbilityEfficacyDescPopup_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function CommonWeaponAbilityEfficacyDescPopup.CommonWeaponAbilityEfficacyDescPopup_C.Setup
// 0x0058 (0x0058 - 0x0000)
struct CommonWeaponAbilityEfficacyDescPopup_C_Setup final
{
public:
	struct FSBWeaponItemData                      InWeaponItemData;                                  // 0x0000(0x0050)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonWeaponAbilityEfficacyDescPopup_C_Setup) == 0x000008, "Wrong alignment on CommonWeaponAbilityEfficacyDescPopup_C_Setup");
static_assert(sizeof(CommonWeaponAbilityEfficacyDescPopup_C_Setup) == 0x000058, "Wrong size on CommonWeaponAbilityEfficacyDescPopup_C_Setup");
static_assert(offsetof(CommonWeaponAbilityEfficacyDescPopup_C_Setup, InWeaponItemData) == 0x000000, "Member 'CommonWeaponAbilityEfficacyDescPopup_C_Setup::InWeaponItemData' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityEfficacyDescPopup_C_Setup, CallFunc_IsValid_ReturnValue) == 0x000050, "Member 'CommonWeaponAbilityEfficacyDescPopup_C_Setup::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function CommonWeaponAbilityEfficacyDescPopup.CommonWeaponAbilityEfficacyDescPopup_C.SetupByUniqueId
// 0x0168 (0x0168 - 0x0000)
struct CommonWeaponAbilityEfficacyDescPopup_C_SetupByUniqueId final
{
public:
	class FString                                 UniqueId;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x0010(0x0010)(ReferenceParm)
	struct FOwnItemInfo                           CallFunc_FindItemByAllStorage_OutResult;           // 0x0020(0x0118)()
	bool                                          CallFunc_FindItemByAllStorage_ReturnValue;         // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9251[0x7];                                     // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0148(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0150(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEmpty_ReturnValue_1;                    // 0x0161(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonWeaponAbilityEfficacyDescPopup_C_SetupByUniqueId) == 0x000008, "Wrong alignment on CommonWeaponAbilityEfficacyDescPopup_C_SetupByUniqueId");
static_assert(sizeof(CommonWeaponAbilityEfficacyDescPopup_C_SetupByUniqueId) == 0x000168, "Wrong size on CommonWeaponAbilityEfficacyDescPopup_C_SetupByUniqueId");
static_assert(offsetof(CommonWeaponAbilityEfficacyDescPopup_C_SetupByUniqueId, UniqueId) == 0x000000, "Member 'CommonWeaponAbilityEfficacyDescPopup_C_SetupByUniqueId::UniqueId' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityEfficacyDescPopup_C_SetupByUniqueId, K2Node_MakeArray_Array) == 0x000010, "Member 'CommonWeaponAbilityEfficacyDescPopup_C_SetupByUniqueId::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityEfficacyDescPopup_C_SetupByUniqueId, CallFunc_FindItemByAllStorage_OutResult) == 0x000020, "Member 'CommonWeaponAbilityEfficacyDescPopup_C_SetupByUniqueId::CallFunc_FindItemByAllStorage_OutResult' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityEfficacyDescPopup_C_SetupByUniqueId, CallFunc_FindItemByAllStorage_ReturnValue) == 0x000138, "Member 'CommonWeaponAbilityEfficacyDescPopup_C_SetupByUniqueId::CallFunc_FindItemByAllStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityEfficacyDescPopup_C_SetupByUniqueId, CallFunc_Array_Get_Item) == 0x000140, "Member 'CommonWeaponAbilityEfficacyDescPopup_C_SetupByUniqueId::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityEfficacyDescPopup_C_SetupByUniqueId, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000148, "Member 'CommonWeaponAbilityEfficacyDescPopup_C_SetupByUniqueId::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityEfficacyDescPopup_C_SetupByUniqueId, CallFunc_GetDisplayName_ReturnValue) == 0x000150, "Member 'CommonWeaponAbilityEfficacyDescPopup_C_SetupByUniqueId::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityEfficacyDescPopup_C_SetupByUniqueId, CallFunc_IsEmpty_ReturnValue) == 0x000160, "Member 'CommonWeaponAbilityEfficacyDescPopup_C_SetupByUniqueId::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityEfficacyDescPopup_C_SetupByUniqueId, CallFunc_IsEmpty_ReturnValue_1) == 0x000161, "Member 'CommonWeaponAbilityEfficacyDescPopup_C_SetupByUniqueId::CallFunc_IsEmpty_ReturnValue_1' has a wrong offset!");

}

