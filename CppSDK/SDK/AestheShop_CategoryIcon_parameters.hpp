#pragma once

 

// Package: AestheShop_CategoryIcon

#include "Basic.hpp"

#include "E_AestheShop_TopMenuItems_DetailSettings_structs.hpp"


namespace SDK::Params
{

// Function AestheShop_CategoryIcon.AestheShop_CategoryIcon_C.SetIcon
// 0x0060 (0x0060 - 0x0000)
struct AestheShop_CategoryIcon_C_SetIcon final
{
public:
	E_AestheShop_TopMenuItems_DetailSettings      InDetailSettings;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5B46[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              TmpTexture;                                        // 0x0008(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetAestheCategoryIconTexture_OutIconTexture; // 0x0030(0x0028)(HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AestheShop_CategoryIcon_C_SetIcon) == 0x000008, "Wrong alignment on AestheShop_CategoryIcon_C_SetIcon");
static_assert(sizeof(AestheShop_CategoryIcon_C_SetIcon) == 0x000060, "Wrong size on AestheShop_CategoryIcon_C_SetIcon");
static_assert(offsetof(AestheShop_CategoryIcon_C_SetIcon, InDetailSettings) == 0x000000, "Member 'AestheShop_CategoryIcon_C_SetIcon::InDetailSettings' has a wrong offset!");
static_assert(offsetof(AestheShop_CategoryIcon_C_SetIcon, TmpTexture) == 0x000008, "Member 'AestheShop_CategoryIcon_C_SetIcon::TmpTexture' has a wrong offset!");
static_assert(offsetof(AestheShop_CategoryIcon_C_SetIcon, CallFunc_GetAestheCategoryIconTexture_OutIconTexture) == 0x000030, "Member 'AestheShop_CategoryIcon_C_SetIcon::CallFunc_GetAestheCategoryIconTexture_OutIconTexture' has a wrong offset!");
static_assert(offsetof(AestheShop_CategoryIcon_C_SetIcon, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000058, "Member 'AestheShop_CategoryIcon_C_SetIcon::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");

}

