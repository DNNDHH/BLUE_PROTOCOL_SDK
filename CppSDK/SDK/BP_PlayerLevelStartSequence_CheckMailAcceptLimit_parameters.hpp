#pragma once

 

// Package: BP_PlayerLevelStartSequence_CheckMailAcceptLimit

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function BP_PlayerLevelStartSequence_CheckMailAcceptLimit.BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C.ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckMailAcceptLimit
// 0x0120 (0x0120 - 0x0000)
struct BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckMailAcceptLimit final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91C3[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_UtcNow_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTotalDays_ReturnValue;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCityCurrentMapLevel_ReturnValue;        // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bIsSyncd;                       // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91C4[0x1];                                     // 0x0017(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHUD*                                   CallFunc_GetHUD_ReturnValue;                       // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerMailComponent*                 CallFunc_GetMailComponent_ReturnValue;             // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBBattleHUD*                           K2Node_DynamicCast_AsSBBattle_HUD;                 // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91C5[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBNotifyMessageInterface> K2Node_DynamicCast_AsSBNotify_Message_Interface;   // 0x0040(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91C6[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMailLimitStatus                     CallFunc_GetLimitStatus_ReturnValue;               // 0x0058(0x0010)(ConstParm, NoDestructor)
	bool                                          CallFunc_IsLimitSyncd_ReturnValue;                 // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91C7[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimespan                              CallFunc_Subtract_DateTimeDateTime_ReturnValue;    // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91C8[0x3];                                     // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool bIsSyncd)>                K2Node_CreateDelegate_OutputDelegate;              // 0x007C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_91C9[0x4];                                     // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMapLevelInfo                        CallFunc_GetCurrentMapLevelInfo_OutMapLevelInfo;   // 0x0090(0x0080)()
	bool                                          CallFunc_GetCurrentMapLevelInfo_ReturnValue;       // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0111(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsStandalone_ReturnValue;                 // 0x0112(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0113(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckMailAcceptLimit) == 0x000010, "Wrong alignment on BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckMailAcceptLimit");
static_assert(sizeof(BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckMailAcceptLimit) == 0x000120, "Wrong size on BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckMailAcceptLimit");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckMailAcceptLimit, EntryPoint) == 0x000000, "Member 'BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckMailAcceptLimit::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckMailAcceptLimit, CallFunc_UtcNow_ReturnValue) == 0x000008, "Member 'BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckMailAcceptLimit::CallFunc_UtcNow_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckMailAcceptLimit, CallFunc_GetTotalDays_ReturnValue) == 0x000010, "Member 'BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckMailAcceptLimit::CallFunc_GetTotalDays_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckMailAcceptLimit, CallFunc_IsCityCurrentMapLevel_ReturnValue) == 0x000014, "Member 'BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckMailAcceptLimit::CallFunc_IsCityCurrentMapLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckMailAcceptLimit, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000015, "Member 'BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckMailAcceptLimit::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckMailAcceptLimit, K2Node_CustomEvent_bIsSyncd) == 0x000016, "Member 'BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckMailAcceptLimit::K2Node_CustomEvent_bIsSyncd' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckMailAcceptLimit, CallFunc_GetSBPlayerController_ReturnValue) == 0x000018, "Member 'BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckMailAcceptLimit::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckMailAcceptLimit, CallFunc_GetHUD_ReturnValue) == 0x000020, "Member 'BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckMailAcceptLimit::CallFunc_GetHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckMailAcceptLimit, CallFunc_GetMailComponent_ReturnValue) == 0x000028, "Member 'BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckMailAcceptLimit::CallFunc_GetMailComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckMailAcceptLimit, K2Node_DynamicCast_AsSBBattle_HUD) == 0x000030, "Member 'BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckMailAcceptLimit::K2Node_DynamicCast_AsSBBattle_HUD' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckMailAcceptLimit, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckMailAcceptLimit::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckMailAcceptLimit, K2Node_DynamicCast_AsSBNotify_Message_Interface) == 0x000040, "Member 'BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckMailAcceptLimit::K2Node_DynamicCast_AsSBNotify_Message_Interface' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckMailAcceptLimit, K2Node_DynamicCast_bSuccess_1) == 0x000050, "Member 'BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckMailAcceptLimit::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckMailAcceptLimit, CallFunc_GetLimitStatus_ReturnValue) == 0x000058, "Member 'BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckMailAcceptLimit::CallFunc_GetLimitStatus_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckMailAcceptLimit, CallFunc_IsLimitSyncd_ReturnValue) == 0x000068, "Member 'BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckMailAcceptLimit::CallFunc_IsLimitSyncd_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckMailAcceptLimit, CallFunc_Subtract_DateTimeDateTime_ReturnValue) == 0x000070, "Member 'BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckMailAcceptLimit::CallFunc_Subtract_DateTimeDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckMailAcceptLimit, CallFunc_Not_PreBool_ReturnValue) == 0x000078, "Member 'BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckMailAcceptLimit::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckMailAcceptLimit, K2Node_CreateDelegate_OutputDelegate) == 0x00007C, "Member 'BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckMailAcceptLimit::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckMailAcceptLimit, CallFunc_GetCurrentMapLevelInfo_OutMapLevelInfo) == 0x000090, "Member 'BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckMailAcceptLimit::CallFunc_GetCurrentMapLevelInfo_OutMapLevelInfo' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckMailAcceptLimit, CallFunc_GetCurrentMapLevelInfo_ReturnValue) == 0x000110, "Member 'BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckMailAcceptLimit::CallFunc_GetCurrentMapLevelInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckMailAcceptLimit, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000111, "Member 'BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckMailAcceptLimit::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckMailAcceptLimit, CallFunc_IsStandalone_ReturnValue) == 0x000112, "Member 'BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckMailAcceptLimit::CallFunc_IsStandalone_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckMailAcceptLimit, CallFunc_BooleanOR_ReturnValue) == 0x000113, "Member 'BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckMailAcceptLimit::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function BP_PlayerLevelStartSequence_CheckMailAcceptLimit.BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C.OnSynced
// 0x0001 (0x0001 - 0x0000)
struct BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C_OnSynced final
{
public:
	bool                                          bIsSyncd;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C_OnSynced) == 0x000001, "Wrong alignment on BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C_OnSynced");
static_assert(sizeof(BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C_OnSynced) == 0x000001, "Wrong size on BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C_OnSynced");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C_OnSynced, bIsSyncd) == 0x000000, "Member 'BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C_OnSynced::bIsSyncd' has a wrong offset!");

// Function BP_PlayerLevelStartSequence_CheckMailAcceptLimit.BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C.GetDescription
// 0x0010 (0x0010 - 0x0000)
struct BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C_GetDescription final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C_GetDescription) == 0x000008, "Wrong alignment on BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C_GetDescription");
static_assert(sizeof(BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C_GetDescription) == 0x000010, "Wrong size on BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C_GetDescription");
static_assert(offsetof(BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C_GetDescription, ReturnValue) == 0x000000, "Member 'BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C_GetDescription::ReturnValue' has a wrong offset!");

}

