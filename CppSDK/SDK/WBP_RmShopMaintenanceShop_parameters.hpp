#pragma once

 

// Package: WBP_RmShopMaintenanceShop

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_RmShopMaintenanceShop.WBP_RmShopMaintenanceShop_C.ExecuteUbergraph_WBP_RmShopMaintenanceShop
// 0x0068 (0x0068 - 0x0000)
struct WBP_RmShopMaintenanceShop_C_ExecuteUbergraph_WBP_RmShopMaintenanceShop final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_4D51[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetGameConfigValueString_OutValue;        // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetGameConfigValueString_ReturnValue;     // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D52[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetGameConfigValueString_OutValue_1;      // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetGameConfigValueString_ReturnValue_1;   // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D53[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_RmShopMaintenanceShop_C_ExecuteUbergraph_WBP_RmShopMaintenanceShop) == 0x000008, "Wrong alignment on WBP_RmShopMaintenanceShop_C_ExecuteUbergraph_WBP_RmShopMaintenanceShop");
static_assert(sizeof(WBP_RmShopMaintenanceShop_C_ExecuteUbergraph_WBP_RmShopMaintenanceShop) == 0x000068, "Wrong size on WBP_RmShopMaintenanceShop_C_ExecuteUbergraph_WBP_RmShopMaintenanceShop");
static_assert(offsetof(WBP_RmShopMaintenanceShop_C_ExecuteUbergraph_WBP_RmShopMaintenanceShop, EntryPoint) == 0x000000, "Member 'WBP_RmShopMaintenanceShop_C_ExecuteUbergraph_WBP_RmShopMaintenanceShop::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_RmShopMaintenanceShop_C_ExecuteUbergraph_WBP_RmShopMaintenanceShop, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_RmShopMaintenanceShop_C_ExecuteUbergraph_WBP_RmShopMaintenanceShop::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_RmShopMaintenanceShop_C_ExecuteUbergraph_WBP_RmShopMaintenanceShop, CallFunc_GetGameConfigValueString_OutValue) == 0x000018, "Member 'WBP_RmShopMaintenanceShop_C_ExecuteUbergraph_WBP_RmShopMaintenanceShop::CallFunc_GetGameConfigValueString_OutValue' has a wrong offset!");
static_assert(offsetof(WBP_RmShopMaintenanceShop_C_ExecuteUbergraph_WBP_RmShopMaintenanceShop, CallFunc_GetGameConfigValueString_ReturnValue) == 0x000028, "Member 'WBP_RmShopMaintenanceShop_C_ExecuteUbergraph_WBP_RmShopMaintenanceShop::CallFunc_GetGameConfigValueString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RmShopMaintenanceShop_C_ExecuteUbergraph_WBP_RmShopMaintenanceShop, CallFunc_GetGameConfigValueString_OutValue_1) == 0x000030, "Member 'WBP_RmShopMaintenanceShop_C_ExecuteUbergraph_WBP_RmShopMaintenanceShop::CallFunc_GetGameConfigValueString_OutValue_1' has a wrong offset!");
static_assert(offsetof(WBP_RmShopMaintenanceShop_C_ExecuteUbergraph_WBP_RmShopMaintenanceShop, CallFunc_GetGameConfigValueString_ReturnValue_1) == 0x000040, "Member 'WBP_RmShopMaintenanceShop_C_ExecuteUbergraph_WBP_RmShopMaintenanceShop::CallFunc_GetGameConfigValueString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_RmShopMaintenanceShop_C_ExecuteUbergraph_WBP_RmShopMaintenanceShop, CallFunc_Concat_StrStr_ReturnValue) == 0x000048, "Member 'WBP_RmShopMaintenanceShop_C_ExecuteUbergraph_WBP_RmShopMaintenanceShop::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RmShopMaintenanceShop_C_ExecuteUbergraph_WBP_RmShopMaintenanceShop, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000058, "Member 'WBP_RmShopMaintenanceShop_C_ExecuteUbergraph_WBP_RmShopMaintenanceShop::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");

}

