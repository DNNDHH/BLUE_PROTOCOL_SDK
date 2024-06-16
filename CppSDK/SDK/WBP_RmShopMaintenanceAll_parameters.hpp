#pragma once

 

// Package: WBP_RmShopMaintenanceAll

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_RmShopMaintenanceAll.WBP_RmShopMaintenanceAll_C.ExecuteUbergraph_WBP_RmShopMaintenanceAll
// 0x0078 (0x0078 - 0x0000)
struct WBP_RmShopMaintenanceAll_C_ExecuteUbergraph_WBP_RmShopMaintenanceAll final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6108[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	class FString                                 CallFunc_GetGameConfigValueString_OutValue;        // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetGameConfigValueString_ReturnValue;     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6109[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetGameConfigValueString_OutValue_1;      // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetGameConfigValueString_ReturnValue_1;   // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_610A[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_RmShopMaintenanceAll_C_ExecuteUbergraph_WBP_RmShopMaintenanceAll) == 0x000008, "Wrong alignment on WBP_RmShopMaintenanceAll_C_ExecuteUbergraph_WBP_RmShopMaintenanceAll");
static_assert(sizeof(WBP_RmShopMaintenanceAll_C_ExecuteUbergraph_WBP_RmShopMaintenanceAll) == 0x000078, "Wrong size on WBP_RmShopMaintenanceAll_C_ExecuteUbergraph_WBP_RmShopMaintenanceAll");
static_assert(offsetof(WBP_RmShopMaintenanceAll_C_ExecuteUbergraph_WBP_RmShopMaintenanceAll, EntryPoint) == 0x000000, "Member 'WBP_RmShopMaintenanceAll_C_ExecuteUbergraph_WBP_RmShopMaintenanceAll::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_RmShopMaintenanceAll_C_ExecuteUbergraph_WBP_RmShopMaintenanceAll, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'WBP_RmShopMaintenanceAll_C_ExecuteUbergraph_WBP_RmShopMaintenanceAll::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RmShopMaintenanceAll_C_ExecuteUbergraph_WBP_RmShopMaintenanceAll, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'WBP_RmShopMaintenanceAll_C_ExecuteUbergraph_WBP_RmShopMaintenanceAll::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_RmShopMaintenanceAll_C_ExecuteUbergraph_WBP_RmShopMaintenanceAll, CallFunc_GetGameConfigValueString_OutValue) == 0x000020, "Member 'WBP_RmShopMaintenanceAll_C_ExecuteUbergraph_WBP_RmShopMaintenanceAll::CallFunc_GetGameConfigValueString_OutValue' has a wrong offset!");
static_assert(offsetof(WBP_RmShopMaintenanceAll_C_ExecuteUbergraph_WBP_RmShopMaintenanceAll, CallFunc_GetGameConfigValueString_ReturnValue) == 0x000030, "Member 'WBP_RmShopMaintenanceAll_C_ExecuteUbergraph_WBP_RmShopMaintenanceAll::CallFunc_GetGameConfigValueString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RmShopMaintenanceAll_C_ExecuteUbergraph_WBP_RmShopMaintenanceAll, CallFunc_GetGameConfigValueString_OutValue_1) == 0x000038, "Member 'WBP_RmShopMaintenanceAll_C_ExecuteUbergraph_WBP_RmShopMaintenanceAll::CallFunc_GetGameConfigValueString_OutValue_1' has a wrong offset!");
static_assert(offsetof(WBP_RmShopMaintenanceAll_C_ExecuteUbergraph_WBP_RmShopMaintenanceAll, CallFunc_GetGameConfigValueString_ReturnValue_1) == 0x000048, "Member 'WBP_RmShopMaintenanceAll_C_ExecuteUbergraph_WBP_RmShopMaintenanceAll::CallFunc_GetGameConfigValueString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_RmShopMaintenanceAll_C_ExecuteUbergraph_WBP_RmShopMaintenanceAll, CallFunc_Concat_StrStr_ReturnValue) == 0x000050, "Member 'WBP_RmShopMaintenanceAll_C_ExecuteUbergraph_WBP_RmShopMaintenanceAll::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RmShopMaintenanceAll_C_ExecuteUbergraph_WBP_RmShopMaintenanceAll, CallFunc_PlayAnimation_ReturnValue_1) == 0x000060, "Member 'WBP_RmShopMaintenanceAll_C_ExecuteUbergraph_WBP_RmShopMaintenanceAll::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_RmShopMaintenanceAll_C_ExecuteUbergraph_WBP_RmShopMaintenanceAll, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000068, "Member 'WBP_RmShopMaintenanceAll_C_ExecuteUbergraph_WBP_RmShopMaintenanceAll::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");

}

