#pragma once

 

// Package: RmShopMenuBg

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function RmShopMenuBg.RmShopMenuBg_C.ShowBg
// 0x0018 (0x0018 - 0x0000)
struct RmShopMenuBg_C_ShowBg final
{
public:
	ESBRmShopMenuType                             InMenuType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5617[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(RmShopMenuBg_C_ShowBg) == 0x000008, "Wrong alignment on RmShopMenuBg_C_ShowBg");
static_assert(sizeof(RmShopMenuBg_C_ShowBg) == 0x000018, "Wrong size on RmShopMenuBg_C_ShowBg");
static_assert(offsetof(RmShopMenuBg_C_ShowBg, InMenuType) == 0x000000, "Member 'RmShopMenuBg_C_ShowBg::InMenuType' has a wrong offset!");
static_assert(offsetof(RmShopMenuBg_C_ShowBg, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'RmShopMenuBg_C_ShowBg::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenuBg_C_ShowBg, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000010, "Member 'RmShopMenuBg_C_ShowBg::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function RmShopMenuBg.RmShopMenuBg_C.SetBgImg
// 0x0018 (0x0018 - 0x0000)
struct RmShopMenuBg_C_SetBgImg final
{
public:
	ESBRmShopMenuType                             InMenuType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5618[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UImage*                                 InImage;                                           // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(RmShopMenuBg_C_SetBgImg) == 0x000008, "Wrong alignment on RmShopMenuBg_C_SetBgImg");
static_assert(sizeof(RmShopMenuBg_C_SetBgImg) == 0x000018, "Wrong size on RmShopMenuBg_C_SetBgImg");
static_assert(offsetof(RmShopMenuBg_C_SetBgImg, InMenuType) == 0x000000, "Member 'RmShopMenuBg_C_SetBgImg::InMenuType' has a wrong offset!");
static_assert(offsetof(RmShopMenuBg_C_SetBgImg, InImage) == 0x000008, "Member 'RmShopMenuBg_C_SetBgImg::InImage' has a wrong offset!");
static_assert(offsetof(RmShopMenuBg_C_SetBgImg, K2Node_SwitchEnum_CmpSuccess) == 0x000010, "Member 'RmShopMenuBg_C_SetBgImg::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

}

