#pragma once

 

// Package: ItemSelectorIcon

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function ItemSelectorIcon.ItemSelectorIcon_C.ExecuteUbergraph_ItemSelectorIcon
// 0x000C (0x000C - 0x0000)
struct ItemSelectorIcon_C_ExecuteUbergraph_ItemSelectorIcon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetAnimationCurrentTime_ReturnValue;      // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ItemSelectorIcon_C_ExecuteUbergraph_ItemSelectorIcon) == 0x000004, "Wrong alignment on ItemSelectorIcon_C_ExecuteUbergraph_ItemSelectorIcon");
static_assert(sizeof(ItemSelectorIcon_C_ExecuteUbergraph_ItemSelectorIcon) == 0x00000C, "Wrong size on ItemSelectorIcon_C_ExecuteUbergraph_ItemSelectorIcon");
static_assert(offsetof(ItemSelectorIcon_C_ExecuteUbergraph_ItemSelectorIcon, EntryPoint) == 0x000000, "Member 'ItemSelectorIcon_C_ExecuteUbergraph_ItemSelectorIcon::EntryPoint' has a wrong offset!");
static_assert(offsetof(ItemSelectorIcon_C_ExecuteUbergraph_ItemSelectorIcon, CallFunc_GetAnimationCurrentTime_ReturnValue) == 0x000004, "Member 'ItemSelectorIcon_C_ExecuteUbergraph_ItemSelectorIcon::CallFunc_GetAnimationCurrentTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemSelectorIcon_C_ExecuteUbergraph_ItemSelectorIcon, CallFunc_NearlyEqual_FloatFloat_ReturnValue) == 0x000008, "Member 'ItemSelectorIcon_C_ExecuteUbergraph_ItemSelectorIcon::CallFunc_NearlyEqual_FloatFloat_ReturnValue' has a wrong offset!");

// Function ItemSelectorIcon.ItemSelectorIcon_C.PlayAnimationUp
// 0x0008 (0x0008 - 0x0000)
struct ItemSelectorIcon_C_PlayAnimationUp final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemSelectorIcon_C_PlayAnimationUp) == 0x000008, "Wrong alignment on ItemSelectorIcon_C_PlayAnimationUp");
static_assert(sizeof(ItemSelectorIcon_C_PlayAnimationUp) == 0x000008, "Wrong size on ItemSelectorIcon_C_PlayAnimationUp");
static_assert(offsetof(ItemSelectorIcon_C_PlayAnimationUp, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000000, "Member 'ItemSelectorIcon_C_PlayAnimationUp::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");

// Function ItemSelectorIcon.ItemSelectorIcon_C.PlayAnimationDown
// 0x0008 (0x0008 - 0x0000)
struct ItemSelectorIcon_C_PlayAnimationDown final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemSelectorIcon_C_PlayAnimationDown) == 0x000008, "Wrong alignment on ItemSelectorIcon_C_PlayAnimationDown");
static_assert(sizeof(ItemSelectorIcon_C_PlayAnimationDown) == 0x000008, "Wrong size on ItemSelectorIcon_C_PlayAnimationDown");
static_assert(offsetof(ItemSelectorIcon_C_PlayAnimationDown, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'ItemSelectorIcon_C_PlayAnimationDown::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function ItemSelectorIcon.ItemSelectorIcon_C.Setup
// 0x0100 (0x0100 - 0x0000)
struct ItemSelectorIcon_C_Setup final
{
public:
	int32                                         InItemIndex;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InAmount;                                          // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ItemLV;                                            // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ClassLv;                                           // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsRegistShortcutByItem_ReturnValue;       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_704A[0x5];                                     // 0x0013(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemMasterData_IsExists;               // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_704B[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_GetItemMasterData_ReturnValue;            // 0x0028(0x00D0)()
	int32                                         CallFunc_GetClassLevel_ReturnValue;                // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemSelectorIcon_C_Setup) == 0x000008, "Wrong alignment on ItemSelectorIcon_C_Setup");
static_assert(sizeof(ItemSelectorIcon_C_Setup) == 0x000100, "Wrong size on ItemSelectorIcon_C_Setup");
static_assert(offsetof(ItemSelectorIcon_C_Setup, InItemIndex) == 0x000000, "Member 'ItemSelectorIcon_C_Setup::InItemIndex' has a wrong offset!");
static_assert(offsetof(ItemSelectorIcon_C_Setup, InAmount) == 0x000004, "Member 'ItemSelectorIcon_C_Setup::InAmount' has a wrong offset!");
static_assert(offsetof(ItemSelectorIcon_C_Setup, ItemLV) == 0x000008, "Member 'ItemSelectorIcon_C_Setup::ItemLV' has a wrong offset!");
static_assert(offsetof(ItemSelectorIcon_C_Setup, ClassLv) == 0x00000C, "Member 'ItemSelectorIcon_C_Setup::ClassLv' has a wrong offset!");
static_assert(offsetof(ItemSelectorIcon_C_Setup, CallFunc_IsRegistShortcutByItem_ReturnValue) == 0x000010, "Member 'ItemSelectorIcon_C_Setup::CallFunc_IsRegistShortcutByItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemSelectorIcon_C_Setup, CallFunc_Greater_IntInt_ReturnValue) == 0x000011, "Member 'ItemSelectorIcon_C_Setup::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemSelectorIcon_C_Setup, CallFunc_GetMasterDataManager_IsValid) == 0x000012, "Member 'ItemSelectorIcon_C_Setup::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(ItemSelectorIcon_C_Setup, CallFunc_GetMasterDataManager_ReturnValue) == 0x000018, "Member 'ItemSelectorIcon_C_Setup::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemSelectorIcon_C_Setup, CallFunc_GetItemMasterData_IsExists) == 0x000020, "Member 'ItemSelectorIcon_C_Setup::CallFunc_GetItemMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(ItemSelectorIcon_C_Setup, CallFunc_GetItemMasterData_ReturnValue) == 0x000028, "Member 'ItemSelectorIcon_C_Setup::CallFunc_GetItemMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemSelectorIcon_C_Setup, CallFunc_GetClassLevel_ReturnValue) == 0x0000F8, "Member 'ItemSelectorIcon_C_Setup::CallFunc_GetClassLevel_ReturnValue' has a wrong offset!");

// Function ItemSelectorIcon.ItemSelectorIcon_C.PlayAnimationLeft
// 0x0008 (0x0008 - 0x0000)
struct ItemSelectorIcon_C_PlayAnimationLeft final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemSelectorIcon_C_PlayAnimationLeft) == 0x000008, "Wrong alignment on ItemSelectorIcon_C_PlayAnimationLeft");
static_assert(sizeof(ItemSelectorIcon_C_PlayAnimationLeft) == 0x000008, "Wrong size on ItemSelectorIcon_C_PlayAnimationLeft");
static_assert(offsetof(ItemSelectorIcon_C_PlayAnimationLeft, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'ItemSelectorIcon_C_PlayAnimationLeft::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function ItemSelectorIcon.ItemSelectorIcon_C.PlayAnimationRight
// 0x0008 (0x0008 - 0x0000)
struct ItemSelectorIcon_C_PlayAnimationRight final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemSelectorIcon_C_PlayAnimationRight) == 0x000008, "Wrong alignment on ItemSelectorIcon_C_PlayAnimationRight");
static_assert(sizeof(ItemSelectorIcon_C_PlayAnimationRight) == 0x000008, "Wrong size on ItemSelectorIcon_C_PlayAnimationRight");
static_assert(offsetof(ItemSelectorIcon_C_PlayAnimationRight, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'ItemSelectorIcon_C_PlayAnimationRight::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function ItemSelectorIcon.ItemSelectorIcon_C.PlayAnimationScaleUp
// 0x0008 (0x0008 - 0x0000)
struct ItemSelectorIcon_C_PlayAnimationScaleUp final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemSelectorIcon_C_PlayAnimationScaleUp) == 0x000008, "Wrong alignment on ItemSelectorIcon_C_PlayAnimationScaleUp");
static_assert(sizeof(ItemSelectorIcon_C_PlayAnimationScaleUp) == 0x000008, "Wrong size on ItemSelectorIcon_C_PlayAnimationScaleUp");
static_assert(offsetof(ItemSelectorIcon_C_PlayAnimationScaleUp, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'ItemSelectorIcon_C_PlayAnimationScaleUp::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function ItemSelectorIcon.ItemSelectorIcon_C.PlayAnimationScaleDown
// 0x0008 (0x0008 - 0x0000)
struct ItemSelectorIcon_C_PlayAnimationScaleDown final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemSelectorIcon_C_PlayAnimationScaleDown) == 0x000008, "Wrong alignment on ItemSelectorIcon_C_PlayAnimationScaleDown");
static_assert(sizeof(ItemSelectorIcon_C_PlayAnimationScaleDown) == 0x000008, "Wrong size on ItemSelectorIcon_C_PlayAnimationScaleDown");
static_assert(offsetof(ItemSelectorIcon_C_PlayAnimationScaleDown, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'ItemSelectorIcon_C_PlayAnimationScaleDown::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}

