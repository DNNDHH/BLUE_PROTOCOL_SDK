#pragma once

 

// Package: WeaponSynthePart_WindowWeaponStatusPerkSlot

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function WeaponSynthePart_WindowWeaponStatusPerkSlot.WeaponSynthePart_WindowWeaponStatusPerkSlot_C.OnProtectNumChanged__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct WeaponSynthePart_WindowWeaponStatusPerkSlot_C_OnProtectNumChanged__DelegateSignature final
{
public:
	int32                                         ProtectNum;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthePart_WindowWeaponStatusPerkSlot_C_OnProtectNumChanged__DelegateSignature) == 0x000004, "Wrong alignment on WeaponSynthePart_WindowWeaponStatusPerkSlot_C_OnProtectNumChanged__DelegateSignature");
static_assert(sizeof(WeaponSynthePart_WindowWeaponStatusPerkSlot_C_OnProtectNumChanged__DelegateSignature) == 0x000004, "Wrong size on WeaponSynthePart_WindowWeaponStatusPerkSlot_C_OnProtectNumChanged__DelegateSignature");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatusPerkSlot_C_OnProtectNumChanged__DelegateSignature, ProtectNum) == 0x000000, "Member 'WeaponSynthePart_WindowWeaponStatusPerkSlot_C_OnProtectNumChanged__DelegateSignature::ProtectNum' has a wrong offset!");

// Function WeaponSynthePart_WindowWeaponStatusPerkSlot.WeaponSynthePart_WindowWeaponStatusPerkSlot_C.OnClickedPerkSlot__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct WeaponSynthePart_WindowWeaponStatusPerkSlot_C_OnClickedPerkSlot__DelegateSignature final
{
public:
	int32                                         SlotNo;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthePart_WindowWeaponStatusPerkSlot_C_OnClickedPerkSlot__DelegateSignature) == 0x000004, "Wrong alignment on WeaponSynthePart_WindowWeaponStatusPerkSlot_C_OnClickedPerkSlot__DelegateSignature");
static_assert(sizeof(WeaponSynthePart_WindowWeaponStatusPerkSlot_C_OnClickedPerkSlot__DelegateSignature) == 0x000004, "Wrong size on WeaponSynthePart_WindowWeaponStatusPerkSlot_C_OnClickedPerkSlot__DelegateSignature");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatusPerkSlot_C_OnClickedPerkSlot__DelegateSignature, SlotNo) == 0x000000, "Member 'WeaponSynthePart_WindowWeaponStatusPerkSlot_C_OnClickedPerkSlot__DelegateSignature::SlotNo' has a wrong offset!");

// Function WeaponSynthePart_WindowWeaponStatusPerkSlot.WeaponSynthePart_WindowWeaponStatusPerkSlot_C.ExecuteUbergraph_WeaponSynthePart_WindowWeaponStatusPerkSlot
// 0x0028 (0x0028 - 0x0000)
struct WeaponSynthePart_WindowWeaponStatusPerkSlot_C_ExecuteUbergraph_WeaponSynthePart_WindowWeaponStatusPerkSlot final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5CB9[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWeaponSynthePart_PerkSlotBox_C*        CallFunc_GetPerkSlotBox_PerkSlotBox;               // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_ProtectNum;             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5CBA[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_ComponentBoundEvent_SlotNo;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5CBB[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWeaponSynthePart_PerkSlotBox_C*        CallFunc_GetPerkSlotBox_PerkSlotBox_1;             // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthePart_WindowWeaponStatusPerkSlot_C_ExecuteUbergraph_WeaponSynthePart_WindowWeaponStatusPerkSlot) == 0x000008, "Wrong alignment on WeaponSynthePart_WindowWeaponStatusPerkSlot_C_ExecuteUbergraph_WeaponSynthePart_WindowWeaponStatusPerkSlot");
static_assert(sizeof(WeaponSynthePart_WindowWeaponStatusPerkSlot_C_ExecuteUbergraph_WeaponSynthePart_WindowWeaponStatusPerkSlot) == 0x000028, "Wrong size on WeaponSynthePart_WindowWeaponStatusPerkSlot_C_ExecuteUbergraph_WeaponSynthePart_WindowWeaponStatusPerkSlot");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatusPerkSlot_C_ExecuteUbergraph_WeaponSynthePart_WindowWeaponStatusPerkSlot, EntryPoint) == 0x000000, "Member 'WeaponSynthePart_WindowWeaponStatusPerkSlot_C_ExecuteUbergraph_WeaponSynthePart_WindowWeaponStatusPerkSlot::EntryPoint' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatusPerkSlot_C_ExecuteUbergraph_WeaponSynthePart_WindowWeaponStatusPerkSlot, CallFunc_GetPerkSlotBox_PerkSlotBox) == 0x000008, "Member 'WeaponSynthePart_WindowWeaponStatusPerkSlot_C_ExecuteUbergraph_WeaponSynthePart_WindowWeaponStatusPerkSlot::CallFunc_GetPerkSlotBox_PerkSlotBox' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatusPerkSlot_C_ExecuteUbergraph_WeaponSynthePart_WindowWeaponStatusPerkSlot, K2Node_ComponentBoundEvent_ProtectNum) == 0x000010, "Member 'WeaponSynthePart_WindowWeaponStatusPerkSlot_C_ExecuteUbergraph_WeaponSynthePart_WindowWeaponStatusPerkSlot::K2Node_ComponentBoundEvent_ProtectNum' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatusPerkSlot_C_ExecuteUbergraph_WeaponSynthePart_WindowWeaponStatusPerkSlot, K2Node_Event_IsDesignTime) == 0x000014, "Member 'WeaponSynthePart_WindowWeaponStatusPerkSlot_C_ExecuteUbergraph_WeaponSynthePart_WindowWeaponStatusPerkSlot::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatusPerkSlot_C_ExecuteUbergraph_WeaponSynthePart_WindowWeaponStatusPerkSlot, K2Node_ComponentBoundEvent_SlotNo) == 0x000018, "Member 'WeaponSynthePart_WindowWeaponStatusPerkSlot_C_ExecuteUbergraph_WeaponSynthePart_WindowWeaponStatusPerkSlot::K2Node_ComponentBoundEvent_SlotNo' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatusPerkSlot_C_ExecuteUbergraph_WeaponSynthePart_WindowWeaponStatusPerkSlot, CallFunc_GetPerkSlotBox_PerkSlotBox_1) == 0x000020, "Member 'WeaponSynthePart_WindowWeaponStatusPerkSlot_C_ExecuteUbergraph_WeaponSynthePart_WindowWeaponStatusPerkSlot::CallFunc_GetPerkSlotBox_PerkSlotBox_1' has a wrong offset!");

// Function WeaponSynthePart_WindowWeaponStatusPerkSlot.WeaponSynthePart_WindowWeaponStatusPerkSlot_C.BndEvt__WeaponSynthePart_WindowWeaponStatusPerkSlotXXX_PerkSlotBox_K2Node_ComponentBoundEvent_1_OnClickedPerkSlot__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct WeaponSynthePart_WindowWeaponStatusPerkSlot_C_BndEvt__WeaponSynthePart_WindowWeaponStatusPerkSlotXXX_PerkSlotBox_K2Node_ComponentBoundEvent_1_OnClickedPerkSlot__DelegateSignature final
{
public:
	int32                                         SlotNo;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthePart_WindowWeaponStatusPerkSlot_C_BndEvt__WeaponSynthePart_WindowWeaponStatusPerkSlotXXX_PerkSlotBox_K2Node_ComponentBoundEvent_1_OnClickedPerkSlot__DelegateSignature) == 0x000004, "Wrong alignment on WeaponSynthePart_WindowWeaponStatusPerkSlot_C_BndEvt__WeaponSynthePart_WindowWeaponStatusPerkSlotXXX_PerkSlotBox_K2Node_ComponentBoundEvent_1_OnClickedPerkSlot__DelegateSignature");
static_assert(sizeof(WeaponSynthePart_WindowWeaponStatusPerkSlot_C_BndEvt__WeaponSynthePart_WindowWeaponStatusPerkSlotXXX_PerkSlotBox_K2Node_ComponentBoundEvent_1_OnClickedPerkSlot__DelegateSignature) == 0x000004, "Wrong size on WeaponSynthePart_WindowWeaponStatusPerkSlot_C_BndEvt__WeaponSynthePart_WindowWeaponStatusPerkSlotXXX_PerkSlotBox_K2Node_ComponentBoundEvent_1_OnClickedPerkSlot__DelegateSignature");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatusPerkSlot_C_BndEvt__WeaponSynthePart_WindowWeaponStatusPerkSlotXXX_PerkSlotBox_K2Node_ComponentBoundEvent_1_OnClickedPerkSlot__DelegateSignature, SlotNo) == 0x000000, "Member 'WeaponSynthePart_WindowWeaponStatusPerkSlot_C_BndEvt__WeaponSynthePart_WindowWeaponStatusPerkSlotXXX_PerkSlotBox_K2Node_ComponentBoundEvent_1_OnClickedPerkSlot__DelegateSignature::SlotNo' has a wrong offset!");

// Function WeaponSynthePart_WindowWeaponStatusPerkSlot.WeaponSynthePart_WindowWeaponStatusPerkSlot_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WeaponSynthePart_WindowWeaponStatusPerkSlot_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponSynthePart_WindowWeaponStatusPerkSlot_C_PreConstruct) == 0x000001, "Wrong alignment on WeaponSynthePart_WindowWeaponStatusPerkSlot_C_PreConstruct");
static_assert(sizeof(WeaponSynthePart_WindowWeaponStatusPerkSlot_C_PreConstruct) == 0x000001, "Wrong size on WeaponSynthePart_WindowWeaponStatusPerkSlot_C_PreConstruct");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatusPerkSlot_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WeaponSynthePart_WindowWeaponStatusPerkSlot_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WeaponSynthePart_WindowWeaponStatusPerkSlot.WeaponSynthePart_WindowWeaponStatusPerkSlot_C.BndEvt__WeaponSynthePart_WindowWeaponStatusPerkSlot_PerkSlotBox_K2Node_ComponentBoundEvent_0_OnProtectNumChanged__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct WeaponSynthePart_WindowWeaponStatusPerkSlot_C_BndEvt__WeaponSynthePart_WindowWeaponStatusPerkSlot_PerkSlotBox_K2Node_ComponentBoundEvent_0_OnProtectNumChanged__DelegateSignature final
{
public:
	int32                                         ProtectNum;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthePart_WindowWeaponStatusPerkSlot_C_BndEvt__WeaponSynthePart_WindowWeaponStatusPerkSlot_PerkSlotBox_K2Node_ComponentBoundEvent_0_OnProtectNumChanged__DelegateSignature) == 0x000004, "Wrong alignment on WeaponSynthePart_WindowWeaponStatusPerkSlot_C_BndEvt__WeaponSynthePart_WindowWeaponStatusPerkSlot_PerkSlotBox_K2Node_ComponentBoundEvent_0_OnProtectNumChanged__DelegateSignature");
static_assert(sizeof(WeaponSynthePart_WindowWeaponStatusPerkSlot_C_BndEvt__WeaponSynthePart_WindowWeaponStatusPerkSlot_PerkSlotBox_K2Node_ComponentBoundEvent_0_OnProtectNumChanged__DelegateSignature) == 0x000004, "Wrong size on WeaponSynthePart_WindowWeaponStatusPerkSlot_C_BndEvt__WeaponSynthePart_WindowWeaponStatusPerkSlot_PerkSlotBox_K2Node_ComponentBoundEvent_0_OnProtectNumChanged__DelegateSignature");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatusPerkSlot_C_BndEvt__WeaponSynthePart_WindowWeaponStatusPerkSlot_PerkSlotBox_K2Node_ComponentBoundEvent_0_OnProtectNumChanged__DelegateSignature, ProtectNum) == 0x000000, "Member 'WeaponSynthePart_WindowWeaponStatusPerkSlot_C_BndEvt__WeaponSynthePart_WindowWeaponStatusPerkSlot_PerkSlotBox_K2Node_ComponentBoundEvent_0_OnProtectNumChanged__DelegateSignature::ProtectNum' has a wrong offset!");

// Function WeaponSynthePart_WindowWeaponStatusPerkSlot.WeaponSynthePart_WindowWeaponStatusPerkSlot_C.SetupSynthe
// 0x0120 (0x0120 - 0x0000)
struct WeaponSynthePart_WindowWeaponStatusPerkSlot_C_SetupSynthe final
{
public:
	struct FOwnItemInfo                           WeaponData;                                        // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UWeaponSynthePart_PerkSlotBox_C*        CallFunc_GetPerkSlotBox_PerkSlotBox;               // 0x0118(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthePart_WindowWeaponStatusPerkSlot_C_SetupSynthe) == 0x000008, "Wrong alignment on WeaponSynthePart_WindowWeaponStatusPerkSlot_C_SetupSynthe");
static_assert(sizeof(WeaponSynthePart_WindowWeaponStatusPerkSlot_C_SetupSynthe) == 0x000120, "Wrong size on WeaponSynthePart_WindowWeaponStatusPerkSlot_C_SetupSynthe");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatusPerkSlot_C_SetupSynthe, WeaponData) == 0x000000, "Member 'WeaponSynthePart_WindowWeaponStatusPerkSlot_C_SetupSynthe::WeaponData' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatusPerkSlot_C_SetupSynthe, CallFunc_GetPerkSlotBox_PerkSlotBox) == 0x000118, "Member 'WeaponSynthePart_WindowWeaponStatusPerkSlot_C_SetupSynthe::CallFunc_GetPerkSlotBox_PerkSlotBox' has a wrong offset!");

// Function WeaponSynthePart_WindowWeaponStatusPerkSlot.WeaponSynthePart_WindowWeaponStatusPerkSlot_C.SetupRebuilder
// 0x0120 (0x0120 - 0x0000)
struct WeaponSynthePart_WindowWeaponStatusPerkSlot_C_SetupRebuilder final
{
public:
	struct FOwnItemInfo                           WeaponData;                                        // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UWeaponSynthePart_PerkSlotBox_C*        CallFunc_GetPerkSlotBox_PerkSlotBox;               // 0x0118(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthePart_WindowWeaponStatusPerkSlot_C_SetupRebuilder) == 0x000008, "Wrong alignment on WeaponSynthePart_WindowWeaponStatusPerkSlot_C_SetupRebuilder");
static_assert(sizeof(WeaponSynthePart_WindowWeaponStatusPerkSlot_C_SetupRebuilder) == 0x000120, "Wrong size on WeaponSynthePart_WindowWeaponStatusPerkSlot_C_SetupRebuilder");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatusPerkSlot_C_SetupRebuilder, WeaponData) == 0x000000, "Member 'WeaponSynthePart_WindowWeaponStatusPerkSlot_C_SetupRebuilder::WeaponData' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatusPerkSlot_C_SetupRebuilder, CallFunc_GetPerkSlotBox_PerkSlotBox) == 0x000118, "Member 'WeaponSynthePart_WindowWeaponStatusPerkSlot_C_SetupRebuilder::CallFunc_GetPerkSlotBox_PerkSlotBox' has a wrong offset!");

// Function WeaponSynthePart_WindowWeaponStatusPerkSlot.WeaponSynthePart_WindowWeaponStatusPerkSlot_C.SetupRemove
// 0x0120 (0x0120 - 0x0000)
struct WeaponSynthePart_WindowWeaponStatusPerkSlot_C_SetupRemove final
{
public:
	struct FOwnItemInfo                           WeaponData;                                        // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UWeaponSynthePart_PerkSlotBox_C*        CallFunc_GetPerkSlotBox_PerkSlotBox;               // 0x0118(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthePart_WindowWeaponStatusPerkSlot_C_SetupRemove) == 0x000008, "Wrong alignment on WeaponSynthePart_WindowWeaponStatusPerkSlot_C_SetupRemove");
static_assert(sizeof(WeaponSynthePart_WindowWeaponStatusPerkSlot_C_SetupRemove) == 0x000120, "Wrong size on WeaponSynthePart_WindowWeaponStatusPerkSlot_C_SetupRemove");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatusPerkSlot_C_SetupRemove, WeaponData) == 0x000000, "Member 'WeaponSynthePart_WindowWeaponStatusPerkSlot_C_SetupRemove::WeaponData' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatusPerkSlot_C_SetupRemove, CallFunc_GetPerkSlotBox_PerkSlotBox) == 0x000118, "Member 'WeaponSynthePart_WindowWeaponStatusPerkSlot_C_SetupRemove::CallFunc_GetPerkSlotBox_PerkSlotBox' has a wrong offset!");

// Function WeaponSynthePart_WindowWeaponStatusPerkSlot.WeaponSynthePart_WindowWeaponStatusPerkSlot_C.SetupExtender
// 0x0120 (0x0120 - 0x0000)
struct WeaponSynthePart_WindowWeaponStatusPerkSlot_C_SetupExtender final
{
public:
	struct FOwnItemInfo                           WeaponData;                                        // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UWeaponSynthePart_PerkSlotBox_C*        CallFunc_GetPerkSlotBox_PerkSlotBox;               // 0x0118(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthePart_WindowWeaponStatusPerkSlot_C_SetupExtender) == 0x000008, "Wrong alignment on WeaponSynthePart_WindowWeaponStatusPerkSlot_C_SetupExtender");
static_assert(sizeof(WeaponSynthePart_WindowWeaponStatusPerkSlot_C_SetupExtender) == 0x000120, "Wrong size on WeaponSynthePart_WindowWeaponStatusPerkSlot_C_SetupExtender");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatusPerkSlot_C_SetupExtender, WeaponData) == 0x000000, "Member 'WeaponSynthePart_WindowWeaponStatusPerkSlot_C_SetupExtender::WeaponData' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatusPerkSlot_C_SetupExtender, CallFunc_GetPerkSlotBox_PerkSlotBox) == 0x000118, "Member 'WeaponSynthePart_WindowWeaponStatusPerkSlot_C_SetupExtender::CallFunc_GetPerkSlotBox_PerkSlotBox' has a wrong offset!");

// Function WeaponSynthePart_WindowWeaponStatusPerkSlot.WeaponSynthePart_WindowWeaponStatusPerkSlot_C.GetPerkSlotBox
// 0x0008 (0x0008 - 0x0000)
struct WeaponSynthePart_WindowWeaponStatusPerkSlot_C_GetPerkSlotBox final
{
public:
	class UWeaponSynthePart_PerkSlotBox_C*        Param_PerkSlotBox;                                 // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthePart_WindowWeaponStatusPerkSlot_C_GetPerkSlotBox) == 0x000008, "Wrong alignment on WeaponSynthePart_WindowWeaponStatusPerkSlot_C_GetPerkSlotBox");
static_assert(sizeof(WeaponSynthePart_WindowWeaponStatusPerkSlot_C_GetPerkSlotBox) == 0x000008, "Wrong size on WeaponSynthePart_WindowWeaponStatusPerkSlot_C_GetPerkSlotBox");
static_assert(offsetof(WeaponSynthePart_WindowWeaponStatusPerkSlot_C_GetPerkSlotBox, Param_PerkSlotBox) == 0x000000, "Member 'WeaponSynthePart_WindowWeaponStatusPerkSlot_C_GetPerkSlotBox::Param_PerkSlotBox' has a wrong offset!");

}

