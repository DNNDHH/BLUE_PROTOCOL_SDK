#pragma once

 

// Package: WeaponSynthePart_ItemBox

#include "Basic.hpp"


namespace SDK::Params
{

// Function WeaponSynthePart_ItemBox.WeaponSynthePart_ItemBox_C.ExecuteUbergraph_WeaponSynthePart_ItemBox
// 0x0004 (0x0004 - 0x0000)
struct WeaponSynthePart_ItemBox_C_ExecuteUbergraph_WeaponSynthePart_ItemBox final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthePart_ItemBox_C_ExecuteUbergraph_WeaponSynthePart_ItemBox) == 0x000004, "Wrong alignment on WeaponSynthePart_ItemBox_C_ExecuteUbergraph_WeaponSynthePart_ItemBox");
static_assert(sizeof(WeaponSynthePart_ItemBox_C_ExecuteUbergraph_WeaponSynthePart_ItemBox) == 0x000004, "Wrong size on WeaponSynthePart_ItemBox_C_ExecuteUbergraph_WeaponSynthePart_ItemBox");
static_assert(offsetof(WeaponSynthePart_ItemBox_C_ExecuteUbergraph_WeaponSynthePart_ItemBox, EntryPoint) == 0x000000, "Member 'WeaponSynthePart_ItemBox_C_ExecuteUbergraph_WeaponSynthePart_ItemBox::EntryPoint' has a wrong offset!");

// Function WeaponSynthePart_ItemBox.WeaponSynthePart_ItemBox_C.Generate
// 0x0018 (0x0018 - 0x0000)
struct WeaponSynthePart_ItemBox_C_Generate final
{
public:
	int32                                         ItemId;                                            // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D4F[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWeaponSynthePart_ItemBoxItem_C*        ItemBoxItem;                                       // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWeaponSynthePart_ItemBoxItem_C*        CallFunc_Create_ReturnValue;                       // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthePart_ItemBox_C_Generate) == 0x000008, "Wrong alignment on WeaponSynthePart_ItemBox_C_Generate");
static_assert(sizeof(WeaponSynthePart_ItemBox_C_Generate) == 0x000018, "Wrong size on WeaponSynthePart_ItemBox_C_Generate");
static_assert(offsetof(WeaponSynthePart_ItemBox_C_Generate, ItemId) == 0x000000, "Member 'WeaponSynthePart_ItemBox_C_Generate::ItemId' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_ItemBox_C_Generate, ItemBoxItem) == 0x000008, "Member 'WeaponSynthePart_ItemBox_C_Generate::ItemBoxItem' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_ItemBox_C_Generate, CallFunc_Create_ReturnValue) == 0x000010, "Member 'WeaponSynthePart_ItemBox_C_Generate::CallFunc_Create_ReturnValue' has a wrong offset!");

// Function WeaponSynthePart_ItemBox.WeaponSynthePart_ItemBox_C.Create
// 0x0020 (0x0020 - 0x0000)
struct WeaponSynthePart_ItemBox_C_Create final
{
public:
	class UWeaponSynthePart_ItemBoxItem_C*        ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWeaponSynthePart_ItemBoxItem_C*        Widget;                                            // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWeaponSynthePart_ItemBoxItem_C*        CallFunc_Create_ReturnValue;                       // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthePart_ItemBox_C_Create) == 0x000008, "Wrong alignment on WeaponSynthePart_ItemBox_C_Create");
static_assert(sizeof(WeaponSynthePart_ItemBox_C_Create) == 0x000020, "Wrong size on WeaponSynthePart_ItemBox_C_Create");
static_assert(offsetof(WeaponSynthePart_ItemBox_C_Create, ReturnValue) == 0x000000, "Member 'WeaponSynthePart_ItemBox_C_Create::ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_ItemBox_C_Create, Widget) == 0x000008, "Member 'WeaponSynthePart_ItemBox_C_Create::Widget' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_ItemBox_C_Create, CallFunc_Create_ReturnValue) == 0x000010, "Member 'WeaponSynthePart_ItemBox_C_Create::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_ItemBox_C_Create, CallFunc_AddChild_ReturnValue) == 0x000018, "Member 'WeaponSynthePart_ItemBox_C_Create::CallFunc_AddChild_ReturnValue' has a wrong offset!");

// Function WeaponSynthePart_ItemBox.WeaponSynthePart_ItemBox_C.GetCreateNum
// 0x0008 (0x0008 - 0x0000)
struct WeaponSynthePart_ItemBox_C_GetCreateNum final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthePart_ItemBox_C_GetCreateNum) == 0x000004, "Wrong alignment on WeaponSynthePart_ItemBox_C_GetCreateNum");
static_assert(sizeof(WeaponSynthePart_ItemBox_C_GetCreateNum) == 0x000008, "Wrong size on WeaponSynthePart_ItemBox_C_GetCreateNum");
static_assert(offsetof(WeaponSynthePart_ItemBox_C_GetCreateNum, ReturnValue) == 0x000000, "Member 'WeaponSynthePart_ItemBox_C_GetCreateNum::ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_ItemBox_C_GetCreateNum, CallFunc_GetChildrenCount_ReturnValue) == 0x000004, "Member 'WeaponSynthePart_ItemBox_C_GetCreateNum::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");

}

