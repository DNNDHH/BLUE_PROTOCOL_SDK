#pragma once

 

// Package: Expectation_WeaponStackBMax_ToolTip

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function Expectation_WeaponStackBMax_ToolTip.Expectation_WeaponStackBMax_ToolTip_C.ExecuteUbergraph_Expectation_WeaponStackBMax_ToolTip
// 0x0008 (0x0008 - 0x0000)
struct Expectation_WeaponStackBMax_ToolTip_C_ExecuteUbergraph_Expectation_WeaponStackBMax_ToolTip final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Expectation_WeaponStackBMax_ToolTip_C_ExecuteUbergraph_Expectation_WeaponStackBMax_ToolTip) == 0x000004, "Wrong alignment on Expectation_WeaponStackBMax_ToolTip_C_ExecuteUbergraph_Expectation_WeaponStackBMax_ToolTip");
static_assert(sizeof(Expectation_WeaponStackBMax_ToolTip_C_ExecuteUbergraph_Expectation_WeaponStackBMax_ToolTip) == 0x000008, "Wrong size on Expectation_WeaponStackBMax_ToolTip_C_ExecuteUbergraph_Expectation_WeaponStackBMax_ToolTip");
static_assert(offsetof(Expectation_WeaponStackBMax_ToolTip_C_ExecuteUbergraph_Expectation_WeaponStackBMax_ToolTip, EntryPoint) == 0x000000, "Member 'Expectation_WeaponStackBMax_ToolTip_C_ExecuteUbergraph_Expectation_WeaponStackBMax_ToolTip::EntryPoint' has a wrong offset!");
static_assert(offsetof(Expectation_WeaponStackBMax_ToolTip_C_ExecuteUbergraph_Expectation_WeaponStackBMax_ToolTip, K2Node_Event_IsDesignTime) == 0x000004, "Member 'Expectation_WeaponStackBMax_ToolTip_C_ExecuteUbergraph_Expectation_WeaponStackBMax_ToolTip::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function Expectation_WeaponStackBMax_ToolTip.Expectation_WeaponStackBMax_ToolTip_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct Expectation_WeaponStackBMax_ToolTip_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Expectation_WeaponStackBMax_ToolTip_C_PreConstruct) == 0x000001, "Wrong alignment on Expectation_WeaponStackBMax_ToolTip_C_PreConstruct");
static_assert(sizeof(Expectation_WeaponStackBMax_ToolTip_C_PreConstruct) == 0x000001, "Wrong size on Expectation_WeaponStackBMax_ToolTip_C_PreConstruct");
static_assert(offsetof(Expectation_WeaponStackBMax_ToolTip_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'Expectation_WeaponStackBMax_ToolTip_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function Expectation_WeaponStackBMax_ToolTip.Expectation_WeaponStackBMax_ToolTip_C.SetStackBMaxInfoByOwnItem
// 0x0118 (0x0118 - 0x0000)
struct Expectation_WeaponStackBMax_ToolTip_C_SetStackBMaxInfoByOwnItem final
{
public:
	struct FOwnItemInfo                           OwnItemInfo;                                       // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(Expectation_WeaponStackBMax_ToolTip_C_SetStackBMaxInfoByOwnItem) == 0x000008, "Wrong alignment on Expectation_WeaponStackBMax_ToolTip_C_SetStackBMaxInfoByOwnItem");
static_assert(sizeof(Expectation_WeaponStackBMax_ToolTip_C_SetStackBMaxInfoByOwnItem) == 0x000118, "Wrong size on Expectation_WeaponStackBMax_ToolTip_C_SetStackBMaxInfoByOwnItem");
static_assert(offsetof(Expectation_WeaponStackBMax_ToolTip_C_SetStackBMaxInfoByOwnItem, OwnItemInfo) == 0x000000, "Member 'Expectation_WeaponStackBMax_ToolTip_C_SetStackBMaxInfoByOwnItem::OwnItemInfo' has a wrong offset!");

// Function Expectation_WeaponStackBMax_ToolTip.Expectation_WeaponStackBMax_ToolTip_C.SetStackBMaxInfoByRecepiId
// 0x0004 (0x0004 - 0x0000)
struct Expectation_WeaponStackBMax_ToolTip_C_SetStackBMaxInfoByRecepiId final
{
public:
	int32                                         RecipeId;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Expectation_WeaponStackBMax_ToolTip_C_SetStackBMaxInfoByRecepiId) == 0x000004, "Wrong alignment on Expectation_WeaponStackBMax_ToolTip_C_SetStackBMaxInfoByRecepiId");
static_assert(sizeof(Expectation_WeaponStackBMax_ToolTip_C_SetStackBMaxInfoByRecepiId) == 0x000004, "Wrong size on Expectation_WeaponStackBMax_ToolTip_C_SetStackBMaxInfoByRecepiId");
static_assert(offsetof(Expectation_WeaponStackBMax_ToolTip_C_SetStackBMaxInfoByRecepiId, RecipeId) == 0x000000, "Member 'Expectation_WeaponStackBMax_ToolTip_C_SetStackBMaxInfoByRecepiId::RecipeId' has a wrong offset!");

// Function Expectation_WeaponStackBMax_ToolTip.Expectation_WeaponStackBMax_ToolTip_C.SetTitle
// 0x0028 (0x0028 - 0x0000)
struct Expectation_WeaponStackBMax_ToolTip_C_SetTitle final
{
public:
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0010(0x0018)()
};
static_assert(alignof(Expectation_WeaponStackBMax_ToolTip_C_SetTitle) == 0x000008, "Wrong alignment on Expectation_WeaponStackBMax_ToolTip_C_SetTitle");
static_assert(sizeof(Expectation_WeaponStackBMax_ToolTip_C_SetTitle) == 0x000028, "Wrong size on Expectation_WeaponStackBMax_ToolTip_C_SetTitle");
static_assert(offsetof(Expectation_WeaponStackBMax_ToolTip_C_SetTitle, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000000, "Member 'Expectation_WeaponStackBMax_ToolTip_C_SetTitle::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(Expectation_WeaponStackBMax_ToolTip_C_SetTitle, CallFunc_Conv_StringToText_ReturnValue) == 0x000010, "Member 'Expectation_WeaponStackBMax_ToolTip_C_SetTitle::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

}

