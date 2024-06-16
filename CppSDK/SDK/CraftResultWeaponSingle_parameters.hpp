#pragma once

 

// Package: CraftResultWeaponSingle

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function CraftResultWeaponSingle.CraftResultWeaponSingle_C.ExecuteUbergraph_CraftResultWeaponSingle
// 0x0040 (0x0040 - 0x0000)
struct CraftResultWeaponSingle_C_ExecuteUbergraph_CraftResultWeaponSingle final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6836[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_UID;                            // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_StorageNo;                      // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_isCritical;                     // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6837[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetEquipmentBag_ReturnValue;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6838[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetCharacterStorage_ReturnValue;          // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                K2Node_Select_Default;                             // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CraftResultWeaponSingle_C_ExecuteUbergraph_CraftResultWeaponSingle) == 0x000008, "Wrong alignment on CraftResultWeaponSingle_C_ExecuteUbergraph_CraftResultWeaponSingle");
static_assert(sizeof(CraftResultWeaponSingle_C_ExecuteUbergraph_CraftResultWeaponSingle) == 0x000040, "Wrong size on CraftResultWeaponSingle_C_ExecuteUbergraph_CraftResultWeaponSingle");
static_assert(offsetof(CraftResultWeaponSingle_C_ExecuteUbergraph_CraftResultWeaponSingle, EntryPoint) == 0x000000, "Member 'CraftResultWeaponSingle_C_ExecuteUbergraph_CraftResultWeaponSingle::EntryPoint' has a wrong offset!");
static_assert(offsetof(CraftResultWeaponSingle_C_ExecuteUbergraph_CraftResultWeaponSingle, Temp_bool_Variable) == 0x000004, "Member 'CraftResultWeaponSingle_C_ExecuteUbergraph_CraftResultWeaponSingle::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CraftResultWeaponSingle_C_ExecuteUbergraph_CraftResultWeaponSingle, K2Node_CustomEvent_UID) == 0x000008, "Member 'CraftResultWeaponSingle_C_ExecuteUbergraph_CraftResultWeaponSingle::K2Node_CustomEvent_UID' has a wrong offset!");
static_assert(offsetof(CraftResultWeaponSingle_C_ExecuteUbergraph_CraftResultWeaponSingle, K2Node_CustomEvent_StorageNo) == 0x000018, "Member 'CraftResultWeaponSingle_C_ExecuteUbergraph_CraftResultWeaponSingle::K2Node_CustomEvent_StorageNo' has a wrong offset!");
static_assert(offsetof(CraftResultWeaponSingle_C_ExecuteUbergraph_CraftResultWeaponSingle, K2Node_CustomEvent_isCritical) == 0x00001C, "Member 'CraftResultWeaponSingle_C_ExecuteUbergraph_CraftResultWeaponSingle::K2Node_CustomEvent_isCritical' has a wrong offset!");
static_assert(offsetof(CraftResultWeaponSingle_C_ExecuteUbergraph_CraftResultWeaponSingle, CallFunc_GetEquipmentBag_ReturnValue) == 0x000020, "Member 'CraftResultWeaponSingle_C_ExecuteUbergraph_CraftResultWeaponSingle::CallFunc_GetEquipmentBag_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftResultWeaponSingle_C_ExecuteUbergraph_CraftResultWeaponSingle, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000028, "Member 'CraftResultWeaponSingle_C_ExecuteUbergraph_CraftResultWeaponSingle::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftResultWeaponSingle_C_ExecuteUbergraph_CraftResultWeaponSingle, CallFunc_GetCharacterStorage_ReturnValue) == 0x000030, "Member 'CraftResultWeaponSingle_C_ExecuteUbergraph_CraftResultWeaponSingle::CallFunc_GetCharacterStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftResultWeaponSingle_C_ExecuteUbergraph_CraftResultWeaponSingle, K2Node_Select_Default) == 0x000038, "Member 'CraftResultWeaponSingle_C_ExecuteUbergraph_CraftResultWeaponSingle::K2Node_Select_Default' has a wrong offset!");

// Function CraftResultWeaponSingle.CraftResultWeaponSingle_C.SetUID
// 0x0018 (0x0018 - 0x0000)
struct CraftResultWeaponSingle_C_SetUID final
{
public:
	class FString                                 Param_UID;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         StorageNo;                                         // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsCritical;                                        // 0x0014(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CraftResultWeaponSingle_C_SetUID) == 0x000008, "Wrong alignment on CraftResultWeaponSingle_C_SetUID");
static_assert(sizeof(CraftResultWeaponSingle_C_SetUID) == 0x000018, "Wrong size on CraftResultWeaponSingle_C_SetUID");
static_assert(offsetof(CraftResultWeaponSingle_C_SetUID, Param_UID) == 0x000000, "Member 'CraftResultWeaponSingle_C_SetUID::Param_UID' has a wrong offset!");
static_assert(offsetof(CraftResultWeaponSingle_C_SetUID, StorageNo) == 0x000010, "Member 'CraftResultWeaponSingle_C_SetUID::StorageNo' has a wrong offset!");
static_assert(offsetof(CraftResultWeaponSingle_C_SetUID, IsCritical) == 0x000014, "Member 'CraftResultWeaponSingle_C_SetUID::IsCritical' has a wrong offset!");

// Function CraftResultWeaponSingle.CraftResultWeaponSingle_C.UpdateStorageDisp
// 0x0010 (0x0010 - 0x0000)
struct CraftResultWeaponSingle_C_UpdateStorageDisp final
{
public:
	bool                                          IsStorage;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6839[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_Select_Default;                             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CraftResultWeaponSingle_C_UpdateStorageDisp) == 0x000008, "Wrong alignment on CraftResultWeaponSingle_C_UpdateStorageDisp");
static_assert(sizeof(CraftResultWeaponSingle_C_UpdateStorageDisp) == 0x000010, "Wrong size on CraftResultWeaponSingle_C_UpdateStorageDisp");
static_assert(offsetof(CraftResultWeaponSingle_C_UpdateStorageDisp, IsStorage) == 0x000000, "Member 'CraftResultWeaponSingle_C_UpdateStorageDisp::IsStorage' has a wrong offset!");
static_assert(offsetof(CraftResultWeaponSingle_C_UpdateStorageDisp, Temp_bool_Variable) == 0x000001, "Member 'CraftResultWeaponSingle_C_UpdateStorageDisp::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CraftResultWeaponSingle_C_UpdateStorageDisp, K2Node_Select_Default) == 0x000008, "Member 'CraftResultWeaponSingle_C_UpdateStorageDisp::K2Node_Select_Default' has a wrong offset!");

// Function CraftResultWeaponSingle.CraftResultWeaponSingle_C.UpdatePerkDisp
// 0x02D8 (0x02D8 - 0x0000)
struct CraftResultWeaponSingle_C_UpdatePerkDisp final
{
public:
	class USBOwnItemListContainer*                Storage;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsCritical;                                        // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_683A[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBCharacterWeaponPerkData>     LocalPerkData;                                     // 0x0010(0x0010)(Edit, BlueprintVisible)
	struct FOwnItemInfo                           LocalOwnItemData;                                  // 0x0020(0x0118)(Edit, BlueprintVisible)
	bool                                          Temp_bool_Variable;                                // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_683B[0x7];                                     // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0140(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0168(0x0028)()
	struct FSlateColor                            K2Node_Select_Default;                             // 0x0190(0x0028)()
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist;         // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_683C[0x7];                                     // 0x01B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue;       // 0x01C0(0x0118)(ConstParm)
};
static_assert(alignof(CraftResultWeaponSingle_C_UpdatePerkDisp) == 0x000008, "Wrong alignment on CraftResultWeaponSingle_C_UpdatePerkDisp");
static_assert(sizeof(CraftResultWeaponSingle_C_UpdatePerkDisp) == 0x0002D8, "Wrong size on CraftResultWeaponSingle_C_UpdatePerkDisp");
static_assert(offsetof(CraftResultWeaponSingle_C_UpdatePerkDisp, Storage) == 0x000000, "Member 'CraftResultWeaponSingle_C_UpdatePerkDisp::Storage' has a wrong offset!");
static_assert(offsetof(CraftResultWeaponSingle_C_UpdatePerkDisp, IsCritical) == 0x000008, "Member 'CraftResultWeaponSingle_C_UpdatePerkDisp::IsCritical' has a wrong offset!");
static_assert(offsetof(CraftResultWeaponSingle_C_UpdatePerkDisp, LocalPerkData) == 0x000010, "Member 'CraftResultWeaponSingle_C_UpdatePerkDisp::LocalPerkData' has a wrong offset!");
static_assert(offsetof(CraftResultWeaponSingle_C_UpdatePerkDisp, LocalOwnItemData) == 0x000020, "Member 'CraftResultWeaponSingle_C_UpdatePerkDisp::LocalOwnItemData' has a wrong offset!");
static_assert(offsetof(CraftResultWeaponSingle_C_UpdatePerkDisp, Temp_bool_Variable) == 0x000138, "Member 'CraftResultWeaponSingle_C_UpdatePerkDisp::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CraftResultWeaponSingle_C_UpdatePerkDisp, K2Node_MakeStruct_SlateColor) == 0x000140, "Member 'CraftResultWeaponSingle_C_UpdatePerkDisp::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(CraftResultWeaponSingle_C_UpdatePerkDisp, K2Node_MakeStruct_SlateColor_1) == 0x000168, "Member 'CraftResultWeaponSingle_C_UpdatePerkDisp::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(CraftResultWeaponSingle_C_UpdatePerkDisp, K2Node_Select_Default) == 0x000190, "Member 'CraftResultWeaponSingle_C_UpdatePerkDisp::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CraftResultWeaponSingle_C_UpdatePerkDisp, CallFunc_BP_FindItem_ByUniqueId_bOutExist) == 0x0001B8, "Member 'CraftResultWeaponSingle_C_UpdatePerkDisp::CallFunc_BP_FindItem_ByUniqueId_bOutExist' has a wrong offset!");
static_assert(offsetof(CraftResultWeaponSingle_C_UpdatePerkDisp, CallFunc_BP_FindItem_ByUniqueId_ReturnValue) == 0x0001C0, "Member 'CraftResultWeaponSingle_C_UpdatePerkDisp::CallFunc_BP_FindItem_ByUniqueId_ReturnValue' has a wrong offset!");

// Function CraftResultWeaponSingle.CraftResultWeaponSingle_C.PlayAnimIn
// 0x0008 (0x0008 - 0x0000)
struct CraftResultWeaponSingle_C_PlayAnimIn final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CraftResultWeaponSingle_C_PlayAnimIn) == 0x000008, "Wrong alignment on CraftResultWeaponSingle_C_PlayAnimIn");
static_assert(sizeof(CraftResultWeaponSingle_C_PlayAnimIn) == 0x000008, "Wrong size on CraftResultWeaponSingle_C_PlayAnimIn");
static_assert(offsetof(CraftResultWeaponSingle_C_PlayAnimIn, CallFunc_PlayAnimationForward_ReturnValue) == 0x000000, "Member 'CraftResultWeaponSingle_C_PlayAnimIn::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

}

