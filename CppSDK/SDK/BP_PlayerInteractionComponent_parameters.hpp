#pragma once

 

// Package: BP_PlayerInteractionComponent

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function BP_PlayerInteractionComponent.BP_PlayerInteractionComponent_C.ExecuteUbergraph_BP_PlayerInteractionComponent
// 0x0004 (0x0004 - 0x0000)
struct BP_PlayerInteractionComponent_C_ExecuteUbergraph_BP_PlayerInteractionComponent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerInteractionComponent_C_ExecuteUbergraph_BP_PlayerInteractionComponent) == 0x000004, "Wrong alignment on BP_PlayerInteractionComponent_C_ExecuteUbergraph_BP_PlayerInteractionComponent");
static_assert(sizeof(BP_PlayerInteractionComponent_C_ExecuteUbergraph_BP_PlayerInteractionComponent) == 0x000004, "Wrong size on BP_PlayerInteractionComponent_C_ExecuteUbergraph_BP_PlayerInteractionComponent");
static_assert(offsetof(BP_PlayerInteractionComponent_C_ExecuteUbergraph_BP_PlayerInteractionComponent, EntryPoint) == 0x000000, "Member 'BP_PlayerInteractionComponent_C_ExecuteUbergraph_BP_PlayerInteractionComponent::EntryPoint' has a wrong offset!");

// Function BP_PlayerInteractionComponent.BP_PlayerInteractionComponent_C.TutorialHelp
// 0x0058 (0x0058 - 0x0000)
struct BP_PlayerInteractionComponent_C_TutorialHelp final
{
public:
	struct FSBInteractionInfo                     CallFunc_GetCurrentInteractionInfo_ReturnValue;    // 0x0000(0x0018)(NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_GetJingleManager_IsValid;                 // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D15[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UJingleManager*                         CallFunc_GetJingleManager_ReturnValue;             // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D16[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D17[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBCharactersLogComponent*              CallFunc_GetCharacterLogComponent_ReturnValue;     // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsUnlockTutorialHelp_ReturnValue;         // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerInteractionComponent_C_TutorialHelp) == 0x000008, "Wrong alignment on BP_PlayerInteractionComponent_C_TutorialHelp");
static_assert(sizeof(BP_PlayerInteractionComponent_C_TutorialHelp) == 0x000058, "Wrong size on BP_PlayerInteractionComponent_C_TutorialHelp");
static_assert(offsetof(BP_PlayerInteractionComponent_C_TutorialHelp, CallFunc_GetCurrentInteractionInfo_ReturnValue) == 0x000000, "Member 'BP_PlayerInteractionComponent_C_TutorialHelp::CallFunc_GetCurrentInteractionInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerInteractionComponent_C_TutorialHelp, CallFunc_GetJingleManager_IsValid) == 0x000018, "Member 'BP_PlayerInteractionComponent_C_TutorialHelp::CallFunc_GetJingleManager_IsValid' has a wrong offset!");
static_assert(offsetof(BP_PlayerInteractionComponent_C_TutorialHelp, CallFunc_GetJingleManager_ReturnValue) == 0x000020, "Member 'BP_PlayerInteractionComponent_C_TutorialHelp::CallFunc_GetJingleManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerInteractionComponent_C_TutorialHelp, K2Node_SwitchEnum_CmpSuccess) == 0x000028, "Member 'BP_PlayerInteractionComponent_C_TutorialHelp::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_PlayerInteractionComponent_C_TutorialHelp, CallFunc_GetPlayerController_ReturnValue) == 0x000030, "Member 'BP_PlayerInteractionComponent_C_TutorialHelp::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerInteractionComponent_C_TutorialHelp, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000038, "Member 'BP_PlayerInteractionComponent_C_TutorialHelp::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(BP_PlayerInteractionComponent_C_TutorialHelp, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'BP_PlayerInteractionComponent_C_TutorialHelp::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PlayerInteractionComponent_C_TutorialHelp, CallFunc_GetCharacterLogComponent_ReturnValue) == 0x000048, "Member 'BP_PlayerInteractionComponent_C_TutorialHelp::CallFunc_GetCharacterLogComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerInteractionComponent_C_TutorialHelp, CallFunc_IsUnlockTutorialHelp_ReturnValue) == 0x000050, "Member 'BP_PlayerInteractionComponent_C_TutorialHelp::CallFunc_IsUnlockTutorialHelp_ReturnValue' has a wrong offset!");

// Function BP_PlayerInteractionComponent.BP_PlayerInteractionComponent_C.UpdateInteractionInfo
// 0x0040 (0x0040 - 0x0000)
struct BP_PlayerInteractionComponent_C_UpdateInteractionInfo final
{
public:
	struct FSBInteractionInfo                     CallFunc_GetCurrentInteractionInfo_ReturnValue;    // 0x0000(0x0018)(NoDestructor, ContainsInstancedReference)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHUD*                                   CallFunc_GetHUD_ReturnValue;                       // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_BattleHUD_C>      K2Node_DynamicCast_AsBPI_Battle_HUD;               // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerInteractionComponent_C_UpdateInteractionInfo) == 0x000008, "Wrong alignment on BP_PlayerInteractionComponent_C_UpdateInteractionInfo");
static_assert(sizeof(BP_PlayerInteractionComponent_C_UpdateInteractionInfo) == 0x000040, "Wrong size on BP_PlayerInteractionComponent_C_UpdateInteractionInfo");
static_assert(offsetof(BP_PlayerInteractionComponent_C_UpdateInteractionInfo, CallFunc_GetCurrentInteractionInfo_ReturnValue) == 0x000000, "Member 'BP_PlayerInteractionComponent_C_UpdateInteractionInfo::CallFunc_GetCurrentInteractionInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerInteractionComponent_C_UpdateInteractionInfo, CallFunc_GetPlayerController_ReturnValue) == 0x000018, "Member 'BP_PlayerInteractionComponent_C_UpdateInteractionInfo::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerInteractionComponent_C_UpdateInteractionInfo, CallFunc_GetHUD_ReturnValue) == 0x000020, "Member 'BP_PlayerInteractionComponent_C_UpdateInteractionInfo::CallFunc_GetHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerInteractionComponent_C_UpdateInteractionInfo, K2Node_DynamicCast_AsBPI_Battle_HUD) == 0x000028, "Member 'BP_PlayerInteractionComponent_C_UpdateInteractionInfo::K2Node_DynamicCast_AsBPI_Battle_HUD' has a wrong offset!");
static_assert(offsetof(BP_PlayerInteractionComponent_C_UpdateInteractionInfo, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'BP_PlayerInteractionComponent_C_UpdateInteractionInfo::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

