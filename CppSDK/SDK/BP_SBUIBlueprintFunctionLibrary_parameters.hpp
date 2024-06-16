#pragma once

 

// Package: BP_SBUIBlueprintFunctionLibrary

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Slate_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.CanInterruptNotification
// 0x00C0 (0x00C0 - 0x0000)
struct BP_SBUIBlueprintFunctionLibrary_C_CanInterruptNotification final
{
public:
	bool                                          IgnoreFindnemy;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_976C[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Result;                                            // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_976D[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsShowLoadingScreen_ReturnValue;          // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_976E[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AHUD*                                   CallFunc_GetHUD_ReturnValue;                       // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_BattleHUD_C>      K2Node_DynamicCast_AsBPI_Battle_HUD;               // 0x0030(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_976F[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsChatWindowActive_Active;                // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPhotoMode_ReturnValue;                  // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsQuestMenuOpen_ReturnValue;              // 0x0053(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsTextWindowOpen_ReturnValue;             // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsShopMenuOpen_ReturnValue;               // 0x0055(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsMainMenuOpen_ReturnValue;               // 0x0056(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9770[0x1];                                     // 0x0057(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9771[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsFishingMode_ReturnValue;                // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9772[0x6];                                     // 0x0072(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerCharacter_C*                  K2Node_DynamicCast_AsBP_Player_Character;          // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9773[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerWarpComponent*                 CallFunc_GetComponentByClass_ReturnValue;          // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_GetWarpState_ReturnValue;                 // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0092(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPlayDemo_ReturnValue;                   // 0x0093(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsFindByEnemy_ReturnValue;                // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9774[0x3];                                     // 0x0095(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBBattleParamInterface> CallFunc_IsAliveHitPoint_self_CastInput;           // 0x0098(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAliveHitPoint_ReturnValue;              // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x00AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x00AB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9775[0x4];                                     // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsSilentInterruptDialog_ReturnValue;      // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SBUIBlueprintFunctionLibrary_C_CanInterruptNotification) == 0x000008, "Wrong alignment on BP_SBUIBlueprintFunctionLibrary_C_CanInterruptNotification");
static_assert(sizeof(BP_SBUIBlueprintFunctionLibrary_C_CanInterruptNotification) == 0x0000C0, "Wrong size on BP_SBUIBlueprintFunctionLibrary_C_CanInterruptNotification");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_CanInterruptNotification, IgnoreFindnemy) == 0x000000, "Member 'BP_SBUIBlueprintFunctionLibrary_C_CanInterruptNotification::IgnoreFindnemy' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_CanInterruptNotification, __WorldContext) == 0x000008, "Member 'BP_SBUIBlueprintFunctionLibrary_C_CanInterruptNotification::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_CanInterruptNotification, Result) == 0x000010, "Member 'BP_SBUIBlueprintFunctionLibrary_C_CanInterruptNotification::Result' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_CanInterruptNotification, CallFunc_GetPlayerController_ReturnValue) == 0x000018, "Member 'BP_SBUIBlueprintFunctionLibrary_C_CanInterruptNotification::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_CanInterruptNotification, CallFunc_IsShowLoadingScreen_ReturnValue) == 0x000020, "Member 'BP_SBUIBlueprintFunctionLibrary_C_CanInterruptNotification::CallFunc_IsShowLoadingScreen_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_CanInterruptNotification, CallFunc_GetHUD_ReturnValue) == 0x000028, "Member 'BP_SBUIBlueprintFunctionLibrary_C_CanInterruptNotification::CallFunc_GetHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_CanInterruptNotification, K2Node_DynamicCast_AsBPI_Battle_HUD) == 0x000030, "Member 'BP_SBUIBlueprintFunctionLibrary_C_CanInterruptNotification::K2Node_DynamicCast_AsBPI_Battle_HUD' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_CanInterruptNotification, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'BP_SBUIBlueprintFunctionLibrary_C_CanInterruptNotification::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_CanInterruptNotification, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000048, "Member 'BP_SBUIBlueprintFunctionLibrary_C_CanInterruptNotification::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_CanInterruptNotification, K2Node_DynamicCast_bSuccess_1) == 0x000050, "Member 'BP_SBUIBlueprintFunctionLibrary_C_CanInterruptNotification::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_CanInterruptNotification, CallFunc_IsChatWindowActive_Active) == 0x000051, "Member 'BP_SBUIBlueprintFunctionLibrary_C_CanInterruptNotification::CallFunc_IsChatWindowActive_Active' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_CanInterruptNotification, CallFunc_IsPhotoMode_ReturnValue) == 0x000052, "Member 'BP_SBUIBlueprintFunctionLibrary_C_CanInterruptNotification::CallFunc_IsPhotoMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_CanInterruptNotification, CallFunc_IsQuestMenuOpen_ReturnValue) == 0x000053, "Member 'BP_SBUIBlueprintFunctionLibrary_C_CanInterruptNotification::CallFunc_IsQuestMenuOpen_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_CanInterruptNotification, CallFunc_IsTextWindowOpen_ReturnValue) == 0x000054, "Member 'BP_SBUIBlueprintFunctionLibrary_C_CanInterruptNotification::CallFunc_IsTextWindowOpen_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_CanInterruptNotification, CallFunc_IsShopMenuOpen_ReturnValue) == 0x000055, "Member 'BP_SBUIBlueprintFunctionLibrary_C_CanInterruptNotification::CallFunc_IsShopMenuOpen_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_CanInterruptNotification, CallFunc_IsMainMenuOpen_ReturnValue) == 0x000056, "Member 'BP_SBUIBlueprintFunctionLibrary_C_CanInterruptNotification::CallFunc_IsMainMenuOpen_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_CanInterruptNotification, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000058, "Member 'BP_SBUIBlueprintFunctionLibrary_C_CanInterruptNotification::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_CanInterruptNotification, CallFunc_Not_PreBool_ReturnValue) == 0x000060, "Member 'BP_SBUIBlueprintFunctionLibrary_C_CanInterruptNotification::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_CanInterruptNotification, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000068, "Member 'BP_SBUIBlueprintFunctionLibrary_C_CanInterruptNotification::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_CanInterruptNotification, K2Node_DynamicCast_bSuccess_2) == 0x000070, "Member 'BP_SBUIBlueprintFunctionLibrary_C_CanInterruptNotification::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_CanInterruptNotification, CallFunc_IsFishingMode_ReturnValue) == 0x000071, "Member 'BP_SBUIBlueprintFunctionLibrary_C_CanInterruptNotification::CallFunc_IsFishingMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_CanInterruptNotification, K2Node_DynamicCast_AsBP_Player_Character) == 0x000078, "Member 'BP_SBUIBlueprintFunctionLibrary_C_CanInterruptNotification::K2Node_DynamicCast_AsBP_Player_Character' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_CanInterruptNotification, K2Node_DynamicCast_bSuccess_3) == 0x000080, "Member 'BP_SBUIBlueprintFunctionLibrary_C_CanInterruptNotification::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_CanInterruptNotification, CallFunc_GetComponentByClass_ReturnValue) == 0x000088, "Member 'BP_SBUIBlueprintFunctionLibrary_C_CanInterruptNotification::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_CanInterruptNotification, CallFunc_IsValid_ReturnValue) == 0x000090, "Member 'BP_SBUIBlueprintFunctionLibrary_C_CanInterruptNotification::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_CanInterruptNotification, CallFunc_GetWarpState_ReturnValue) == 0x000091, "Member 'BP_SBUIBlueprintFunctionLibrary_C_CanInterruptNotification::CallFunc_GetWarpState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_CanInterruptNotification, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000092, "Member 'BP_SBUIBlueprintFunctionLibrary_C_CanInterruptNotification::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_CanInterruptNotification, CallFunc_IsPlayDemo_ReturnValue) == 0x000093, "Member 'BP_SBUIBlueprintFunctionLibrary_C_CanInterruptNotification::CallFunc_IsPlayDemo_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_CanInterruptNotification, CallFunc_IsFindByEnemy_ReturnValue) == 0x000094, "Member 'BP_SBUIBlueprintFunctionLibrary_C_CanInterruptNotification::CallFunc_IsFindByEnemy_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_CanInterruptNotification, CallFunc_IsAliveHitPoint_self_CastInput) == 0x000098, "Member 'BP_SBUIBlueprintFunctionLibrary_C_CanInterruptNotification::CallFunc_IsAliveHitPoint_self_CastInput' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_CanInterruptNotification, CallFunc_IsAliveHitPoint_ReturnValue) == 0x0000A8, "Member 'BP_SBUIBlueprintFunctionLibrary_C_CanInterruptNotification::CallFunc_IsAliveHitPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_CanInterruptNotification, CallFunc_BooleanAND_ReturnValue) == 0x0000A9, "Member 'BP_SBUIBlueprintFunctionLibrary_C_CanInterruptNotification::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_CanInterruptNotification, CallFunc_EqualEqual_BoolBool_ReturnValue) == 0x0000AA, "Member 'BP_SBUIBlueprintFunctionLibrary_C_CanInterruptNotification::CallFunc_EqualEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_CanInterruptNotification, CallFunc_GetConfigSaveManager_IsValid) == 0x0000AB, "Member 'BP_SBUIBlueprintFunctionLibrary_C_CanInterruptNotification::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_CanInterruptNotification, CallFunc_GetConfigSaveManager_ReturnValue) == 0x0000B0, "Member 'BP_SBUIBlueprintFunctionLibrary_C_CanInterruptNotification::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_CanInterruptNotification, CallFunc_Greater_FloatFloat_ReturnValue) == 0x0000B8, "Member 'BP_SBUIBlueprintFunctionLibrary_C_CanInterruptNotification::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_CanInterruptNotification, CallFunc_IsSilentInterruptDialog_ReturnValue) == 0x0000B9, "Member 'BP_SBUIBlueprintFunctionLibrary_C_CanInterruptNotification::CallFunc_IsSilentInterruptDialog_ReturnValue' has a wrong offset!");

// Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.GetParentWidget
// 0x0050 (0x0050 - 0x0000)
struct BP_SBUIBlueprintFunctionLibrary_C_GetParentWidget final
{
public:
	class UObject*                                Children;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            Parent;                                            // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Cnt;                                               // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9776[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                SwapOnj;                                           // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9777[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            CallFunc_CastOuterAsWidget_OwnerWidget;            // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CastOuterAsWidget_Result;                 // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9778[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_CastOuterAsWidget_OuteroObject;           // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SBUIBlueprintFunctionLibrary_C_GetParentWidget) == 0x000008, "Wrong alignment on BP_SBUIBlueprintFunctionLibrary_C_GetParentWidget");
static_assert(sizeof(BP_SBUIBlueprintFunctionLibrary_C_GetParentWidget) == 0x000050, "Wrong size on BP_SBUIBlueprintFunctionLibrary_C_GetParentWidget");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_GetParentWidget, Children) == 0x000000, "Member 'BP_SBUIBlueprintFunctionLibrary_C_GetParentWidget::Children' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_GetParentWidget, __WorldContext) == 0x000008, "Member 'BP_SBUIBlueprintFunctionLibrary_C_GetParentWidget::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_GetParentWidget, Parent) == 0x000010, "Member 'BP_SBUIBlueprintFunctionLibrary_C_GetParentWidget::Parent' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_GetParentWidget, Cnt) == 0x000018, "Member 'BP_SBUIBlueprintFunctionLibrary_C_GetParentWidget::Cnt' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_GetParentWidget, SwapOnj) == 0x000020, "Member 'BP_SBUIBlueprintFunctionLibrary_C_GetParentWidget::SwapOnj' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_GetParentWidget, CallFunc_Greater_IntInt_ReturnValue) == 0x000028, "Member 'BP_SBUIBlueprintFunctionLibrary_C_GetParentWidget::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_GetParentWidget, Temp_int_Variable) == 0x00002C, "Member 'BP_SBUIBlueprintFunctionLibrary_C_GetParentWidget::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_GetParentWidget, CallFunc_CastOuterAsWidget_OwnerWidget) == 0x000030, "Member 'BP_SBUIBlueprintFunctionLibrary_C_GetParentWidget::CallFunc_CastOuterAsWidget_OwnerWidget' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_GetParentWidget, CallFunc_CastOuterAsWidget_Result) == 0x000038, "Member 'BP_SBUIBlueprintFunctionLibrary_C_GetParentWidget::CallFunc_CastOuterAsWidget_Result' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_GetParentWidget, CallFunc_CastOuterAsWidget_OuteroObject) == 0x000040, "Member 'BP_SBUIBlueprintFunctionLibrary_C_GetParentWidget::CallFunc_CastOuterAsWidget_OuteroObject' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_GetParentWidget, CallFunc_Add_IntInt_ReturnValue) == 0x000048, "Member 'BP_SBUIBlueprintFunctionLibrary_C_GetParentWidget::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_GetParentWidget, CallFunc_BooleanOR_ReturnValue) == 0x00004C, "Member 'BP_SBUIBlueprintFunctionLibrary_C_GetParentWidget::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.CastOuterAsWidget
// 0x0040 (0x0040 - 0x0000)
struct BP_SBUIBlueprintFunctionLibrary_C_CastOuterAsWidget final
{
public:
	class UObject*                                Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            OwnerWidget;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Result;                                            // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9779[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                OuteroObject;                                      // 0x0020(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_GetOuterObject_ReturnValue;               // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            K2Node_DynamicCast_AsUser_Widget;                  // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SBUIBlueprintFunctionLibrary_C_CastOuterAsWidget) == 0x000008, "Wrong alignment on BP_SBUIBlueprintFunctionLibrary_C_CastOuterAsWidget");
static_assert(sizeof(BP_SBUIBlueprintFunctionLibrary_C_CastOuterAsWidget) == 0x000040, "Wrong size on BP_SBUIBlueprintFunctionLibrary_C_CastOuterAsWidget");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_CastOuterAsWidget, Widget) == 0x000000, "Member 'BP_SBUIBlueprintFunctionLibrary_C_CastOuterAsWidget::Widget' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_CastOuterAsWidget, __WorldContext) == 0x000008, "Member 'BP_SBUIBlueprintFunctionLibrary_C_CastOuterAsWidget::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_CastOuterAsWidget, OwnerWidget) == 0x000010, "Member 'BP_SBUIBlueprintFunctionLibrary_C_CastOuterAsWidget::OwnerWidget' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_CastOuterAsWidget, Result) == 0x000018, "Member 'BP_SBUIBlueprintFunctionLibrary_C_CastOuterAsWidget::Result' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_CastOuterAsWidget, OuteroObject) == 0x000020, "Member 'BP_SBUIBlueprintFunctionLibrary_C_CastOuterAsWidget::OuteroObject' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_CastOuterAsWidget, CallFunc_GetOuterObject_ReturnValue) == 0x000028, "Member 'BP_SBUIBlueprintFunctionLibrary_C_CastOuterAsWidget::CallFunc_GetOuterObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_CastOuterAsWidget, K2Node_DynamicCast_AsUser_Widget) == 0x000030, "Member 'BP_SBUIBlueprintFunctionLibrary_C_CastOuterAsWidget::K2Node_DynamicCast_AsUser_Widget' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_CastOuterAsWidget, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'BP_SBUIBlueprintFunctionLibrary_C_CastOuterAsWidget::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.ChangeLevelSyncTextColor
// 0x0098 (0x0098 - 0x0000)
struct BP_SBUIBlueprintFunctionLibrary_C_ChangeLevelSyncTextColor final
{
public:
	class UTextBlock*                             InTextWidget;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 InItemUniqueId;                                    // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          InStoregeCheck;                                    // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_977A[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsLevelSync;                                      // 0x0028(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_977B[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           ClrLevelSync;                                      // 0x002C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bLocalLecelCheck;                                  // 0x003C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckItemLevelStorageItem_ReturnValue;    // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckItemLevel_ReturnValue;               // 0x003E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x003F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_977C[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0048(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0070(0x0028)()
};
static_assert(alignof(BP_SBUIBlueprintFunctionLibrary_C_ChangeLevelSyncTextColor) == 0x000008, "Wrong alignment on BP_SBUIBlueprintFunctionLibrary_C_ChangeLevelSyncTextColor");
static_assert(sizeof(BP_SBUIBlueprintFunctionLibrary_C_ChangeLevelSyncTextColor) == 0x000098, "Wrong size on BP_SBUIBlueprintFunctionLibrary_C_ChangeLevelSyncTextColor");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_ChangeLevelSyncTextColor, InTextWidget) == 0x000000, "Member 'BP_SBUIBlueprintFunctionLibrary_C_ChangeLevelSyncTextColor::InTextWidget' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_ChangeLevelSyncTextColor, InItemUniqueId) == 0x000008, "Member 'BP_SBUIBlueprintFunctionLibrary_C_ChangeLevelSyncTextColor::InItemUniqueId' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_ChangeLevelSyncTextColor, InStoregeCheck) == 0x000018, "Member 'BP_SBUIBlueprintFunctionLibrary_C_ChangeLevelSyncTextColor::InStoregeCheck' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_ChangeLevelSyncTextColor, __WorldContext) == 0x000020, "Member 'BP_SBUIBlueprintFunctionLibrary_C_ChangeLevelSyncTextColor::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_ChangeLevelSyncTextColor, bIsLevelSync) == 0x000028, "Member 'BP_SBUIBlueprintFunctionLibrary_C_ChangeLevelSyncTextColor::bIsLevelSync' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_ChangeLevelSyncTextColor, ClrLevelSync) == 0x00002C, "Member 'BP_SBUIBlueprintFunctionLibrary_C_ChangeLevelSyncTextColor::ClrLevelSync' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_ChangeLevelSyncTextColor, bLocalLecelCheck) == 0x00003C, "Member 'BP_SBUIBlueprintFunctionLibrary_C_ChangeLevelSyncTextColor::bLocalLecelCheck' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_ChangeLevelSyncTextColor, CallFunc_CheckItemLevelStorageItem_ReturnValue) == 0x00003D, "Member 'BP_SBUIBlueprintFunctionLibrary_C_ChangeLevelSyncTextColor::CallFunc_CheckItemLevelStorageItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_ChangeLevelSyncTextColor, CallFunc_CheckItemLevel_ReturnValue) == 0x00003E, "Member 'BP_SBUIBlueprintFunctionLibrary_C_ChangeLevelSyncTextColor::CallFunc_CheckItemLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_ChangeLevelSyncTextColor, CallFunc_Not_PreBool_ReturnValue) == 0x00003F, "Member 'BP_SBUIBlueprintFunctionLibrary_C_ChangeLevelSyncTextColor::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_ChangeLevelSyncTextColor, CallFunc_BooleanAND_ReturnValue) == 0x000040, "Member 'BP_SBUIBlueprintFunctionLibrary_C_ChangeLevelSyncTextColor::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_ChangeLevelSyncTextColor, K2Node_MakeStruct_SlateColor) == 0x000048, "Member 'BP_SBUIBlueprintFunctionLibrary_C_ChangeLevelSyncTextColor::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_ChangeLevelSyncTextColor, K2Node_MakeStruct_SlateColor_1) == 0x000070, "Member 'BP_SBUIBlueprintFunctionLibrary_C_ChangeLevelSyncTextColor::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");

// Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.IsRegisterWishlistLimit
// 0x0040 (0x0040 - 0x0000)
struct BP_SBUIBlueprintFunctionLibrary_C_IsRegisterWishlistLimit final
{
public:
	class UObject*                                WorldContextObject;                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsRegisterWishList;                               // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_977D[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FSBWishListData>                CallFunc_GetAllWishlistData_ReturnValue;           // 0x0028(0x0010)(ConstParm, ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SBUIBlueprintFunctionLibrary_C_IsRegisterWishlistLimit) == 0x000008, "Wrong alignment on BP_SBUIBlueprintFunctionLibrary_C_IsRegisterWishlistLimit");
static_assert(sizeof(BP_SBUIBlueprintFunctionLibrary_C_IsRegisterWishlistLimit) == 0x000040, "Wrong size on BP_SBUIBlueprintFunctionLibrary_C_IsRegisterWishlistLimit");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_IsRegisterWishlistLimit, WorldContextObject) == 0x000000, "Member 'BP_SBUIBlueprintFunctionLibrary_C_IsRegisterWishlistLimit::WorldContextObject' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_IsRegisterWishlistLimit, __WorldContext) == 0x000008, "Member 'BP_SBUIBlueprintFunctionLibrary_C_IsRegisterWishlistLimit::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_IsRegisterWishlistLimit, bIsRegisterWishList) == 0x000010, "Member 'BP_SBUIBlueprintFunctionLibrary_C_IsRegisterWishlistLimit::bIsRegisterWishList' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_IsRegisterWishlistLimit, CallFunc_GetCharacterId_ReturnValue) == 0x000018, "Member 'BP_SBUIBlueprintFunctionLibrary_C_IsRegisterWishlistLimit::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_IsRegisterWishlistLimit, CallFunc_GetAllWishlistData_ReturnValue) == 0x000028, "Member 'BP_SBUIBlueprintFunctionLibrary_C_IsRegisterWishlistLimit::CallFunc_GetAllWishlistData_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_IsRegisterWishlistLimit, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'BP_SBUIBlueprintFunctionLibrary_C_IsRegisterWishlistLimit::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_IsRegisterWishlistLimit, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x00003C, "Member 'BP_SBUIBlueprintFunctionLibrary_C_IsRegisterWishlistLimit::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");

// Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.ChangeImagineLevelSync
// 0x0038 (0x0038 - 0x0000)
struct BP_SBUIBlueprintFunctionLibrary_C_ChangeImagineLevelSync final
{
public:
	class FString                                 InItemUniqueId;                                    // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UTextBlock*                             InTextWidget;                                      // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InStorageCheck;                                    // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          InUseClassTypeForLevelSync;                        // 0x0019(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBClassType                                  InClassTypeForLevelSync;                           // 0x001A(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ForceLevelSyncOff;                                 // 0x001B(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_977E[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsLevelSync;                                      // 0x0028(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bLocalLecelCheck;                                  // 0x0029(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckItemLevelSyncImagineStorageItem_ReturnValue; // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckItemLevelSyncImagine_ReturnValue;    // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x002E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default;                             // 0x002F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetLevelSyncColor_bIsLevelSync;           // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SBUIBlueprintFunctionLibrary_C_ChangeImagineLevelSync) == 0x000008, "Wrong alignment on BP_SBUIBlueprintFunctionLibrary_C_ChangeImagineLevelSync");
static_assert(sizeof(BP_SBUIBlueprintFunctionLibrary_C_ChangeImagineLevelSync) == 0x000038, "Wrong size on BP_SBUIBlueprintFunctionLibrary_C_ChangeImagineLevelSync");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_ChangeImagineLevelSync, InItemUniqueId) == 0x000000, "Member 'BP_SBUIBlueprintFunctionLibrary_C_ChangeImagineLevelSync::InItemUniqueId' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_ChangeImagineLevelSync, InTextWidget) == 0x000010, "Member 'BP_SBUIBlueprintFunctionLibrary_C_ChangeImagineLevelSync::InTextWidget' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_ChangeImagineLevelSync, InStorageCheck) == 0x000018, "Member 'BP_SBUIBlueprintFunctionLibrary_C_ChangeImagineLevelSync::InStorageCheck' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_ChangeImagineLevelSync, InUseClassTypeForLevelSync) == 0x000019, "Member 'BP_SBUIBlueprintFunctionLibrary_C_ChangeImagineLevelSync::InUseClassTypeForLevelSync' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_ChangeImagineLevelSync, InClassTypeForLevelSync) == 0x00001A, "Member 'BP_SBUIBlueprintFunctionLibrary_C_ChangeImagineLevelSync::InClassTypeForLevelSync' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_ChangeImagineLevelSync, ForceLevelSyncOff) == 0x00001B, "Member 'BP_SBUIBlueprintFunctionLibrary_C_ChangeImagineLevelSync::ForceLevelSyncOff' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_ChangeImagineLevelSync, __WorldContext) == 0x000020, "Member 'BP_SBUIBlueprintFunctionLibrary_C_ChangeImagineLevelSync::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_ChangeImagineLevelSync, bIsLevelSync) == 0x000028, "Member 'BP_SBUIBlueprintFunctionLibrary_C_ChangeImagineLevelSync::bIsLevelSync' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_ChangeImagineLevelSync, bLocalLecelCheck) == 0x000029, "Member 'BP_SBUIBlueprintFunctionLibrary_C_ChangeImagineLevelSync::bLocalLecelCheck' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_ChangeImagineLevelSync, CallFunc_CheckItemLevelSyncImagineStorageItem_ReturnValue) == 0x00002A, "Member 'BP_SBUIBlueprintFunctionLibrary_C_ChangeImagineLevelSync::CallFunc_CheckItemLevelSyncImagineStorageItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_ChangeImagineLevelSync, CallFunc_CheckItemLevelSyncImagine_ReturnValue) == 0x00002B, "Member 'BP_SBUIBlueprintFunctionLibrary_C_ChangeImagineLevelSync::CallFunc_CheckItemLevelSyncImagine_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_ChangeImagineLevelSync, Temp_bool_Variable) == 0x00002C, "Member 'BP_SBUIBlueprintFunctionLibrary_C_ChangeImagineLevelSync::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_ChangeImagineLevelSync, CallFunc_BooleanAND_ReturnValue) == 0x00002D, "Member 'BP_SBUIBlueprintFunctionLibrary_C_ChangeImagineLevelSync::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_ChangeImagineLevelSync, Temp_bool_Variable_1) == 0x00002E, "Member 'BP_SBUIBlueprintFunctionLibrary_C_ChangeImagineLevelSync::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_ChangeImagineLevelSync, K2Node_Select_Default) == 0x00002F, "Member 'BP_SBUIBlueprintFunctionLibrary_C_ChangeImagineLevelSync::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_ChangeImagineLevelSync, CallFunc_SetLevelSyncColor_bIsLevelSync) == 0x000030, "Member 'BP_SBUIBlueprintFunctionLibrary_C_ChangeImagineLevelSync::CallFunc_SetLevelSyncColor_bIsLevelSync' has a wrong offset!");

// Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.ChangeWeaponLevelSync
// 0x0030 (0x0030 - 0x0000)
struct BP_SBUIBlueprintFunctionLibrary_C_ChangeWeaponLevelSync final
{
public:
	class FString                                 InItemUniqueId;                                    // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UTextBlock*                             InTextWidget;                                      // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InStoregeCheck;                                    // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_977F[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsLevelSync;                                      // 0x0028(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bLocalLecelCheck;                                  // 0x0029(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckItemLevelSyncWeaponStorageItem_ReturnValue; // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetLevelSyncColor_bIsLevelSync;           // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckItemLevelSyncWeapon_ReturnValue;     // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SBUIBlueprintFunctionLibrary_C_ChangeWeaponLevelSync) == 0x000008, "Wrong alignment on BP_SBUIBlueprintFunctionLibrary_C_ChangeWeaponLevelSync");
static_assert(sizeof(BP_SBUIBlueprintFunctionLibrary_C_ChangeWeaponLevelSync) == 0x000030, "Wrong size on BP_SBUIBlueprintFunctionLibrary_C_ChangeWeaponLevelSync");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_ChangeWeaponLevelSync, InItemUniqueId) == 0x000000, "Member 'BP_SBUIBlueprintFunctionLibrary_C_ChangeWeaponLevelSync::InItemUniqueId' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_ChangeWeaponLevelSync, InTextWidget) == 0x000010, "Member 'BP_SBUIBlueprintFunctionLibrary_C_ChangeWeaponLevelSync::InTextWidget' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_ChangeWeaponLevelSync, InStoregeCheck) == 0x000018, "Member 'BP_SBUIBlueprintFunctionLibrary_C_ChangeWeaponLevelSync::InStoregeCheck' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_ChangeWeaponLevelSync, __WorldContext) == 0x000020, "Member 'BP_SBUIBlueprintFunctionLibrary_C_ChangeWeaponLevelSync::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_ChangeWeaponLevelSync, bIsLevelSync) == 0x000028, "Member 'BP_SBUIBlueprintFunctionLibrary_C_ChangeWeaponLevelSync::bIsLevelSync' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_ChangeWeaponLevelSync, bLocalLecelCheck) == 0x000029, "Member 'BP_SBUIBlueprintFunctionLibrary_C_ChangeWeaponLevelSync::bLocalLecelCheck' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_ChangeWeaponLevelSync, CallFunc_CheckItemLevelSyncWeaponStorageItem_ReturnValue) == 0x00002A, "Member 'BP_SBUIBlueprintFunctionLibrary_C_ChangeWeaponLevelSync::CallFunc_CheckItemLevelSyncWeaponStorageItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_ChangeWeaponLevelSync, CallFunc_SetLevelSyncColor_bIsLevelSync) == 0x00002B, "Member 'BP_SBUIBlueprintFunctionLibrary_C_ChangeWeaponLevelSync::CallFunc_SetLevelSyncColor_bIsLevelSync' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_ChangeWeaponLevelSync, CallFunc_CheckItemLevelSyncWeapon_ReturnValue) == 0x00002C, "Member 'BP_SBUIBlueprintFunctionLibrary_C_ChangeWeaponLevelSync::CallFunc_CheckItemLevelSyncWeapon_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_ChangeWeaponLevelSync, CallFunc_BooleanAND_ReturnValue) == 0x00002D, "Member 'BP_SBUIBlueprintFunctionLibrary_C_ChangeWeaponLevelSync::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.ChangeWeaponLevelSyncByWeaponId
// 0x0020 (0x0020 - 0x0000)
struct BP_SBUIBlueprintFunctionLibrary_C_ChangeWeaponLevelSyncByWeaponId final
{
public:
	int32                                         InWeaponID;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9780[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTextBlock*                             InTextWidget;                                      // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsLevelSync;                                      // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckItemLevelSyncWeaponItemId_ReturnValue; // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetLevelSyncColor_bIsLevelSync;           // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SBUIBlueprintFunctionLibrary_C_ChangeWeaponLevelSyncByWeaponId) == 0x000008, "Wrong alignment on BP_SBUIBlueprintFunctionLibrary_C_ChangeWeaponLevelSyncByWeaponId");
static_assert(sizeof(BP_SBUIBlueprintFunctionLibrary_C_ChangeWeaponLevelSyncByWeaponId) == 0x000020, "Wrong size on BP_SBUIBlueprintFunctionLibrary_C_ChangeWeaponLevelSyncByWeaponId");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_ChangeWeaponLevelSyncByWeaponId, InWeaponID) == 0x000000, "Member 'BP_SBUIBlueprintFunctionLibrary_C_ChangeWeaponLevelSyncByWeaponId::InWeaponID' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_ChangeWeaponLevelSyncByWeaponId, InTextWidget) == 0x000008, "Member 'BP_SBUIBlueprintFunctionLibrary_C_ChangeWeaponLevelSyncByWeaponId::InTextWidget' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_ChangeWeaponLevelSyncByWeaponId, __WorldContext) == 0x000010, "Member 'BP_SBUIBlueprintFunctionLibrary_C_ChangeWeaponLevelSyncByWeaponId::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_ChangeWeaponLevelSyncByWeaponId, bIsLevelSync) == 0x000018, "Member 'BP_SBUIBlueprintFunctionLibrary_C_ChangeWeaponLevelSyncByWeaponId::bIsLevelSync' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_ChangeWeaponLevelSyncByWeaponId, CallFunc_CheckItemLevelSyncWeaponItemId_ReturnValue) == 0x000019, "Member 'BP_SBUIBlueprintFunctionLibrary_C_ChangeWeaponLevelSyncByWeaponId::CallFunc_CheckItemLevelSyncWeaponItemId_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_ChangeWeaponLevelSyncByWeaponId, CallFunc_SetLevelSyncColor_bIsLevelSync) == 0x00001A, "Member 'BP_SBUIBlueprintFunctionLibrary_C_ChangeWeaponLevelSyncByWeaponId::CallFunc_SetLevelSyncColor_bIsLevelSync' has a wrong offset!");

// Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.SetLevelSyncColor
// 0x00E8 (0x00E8 - 0x0000)
struct BP_SBUIBlueprintFunctionLibrary_C_SetLevelSyncColor final
{
public:
	bool                                          Condition;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9781[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTextBlock*                             InputPin;                                          // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsLevelSync;                                      // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalIsLevelSync;                                  // 0x0019(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9782[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            LocalSlateColor;                                   // 0x0020(0x0028)(Edit, BlueprintVisible)
	class UTextBlock*                             LocalInputPin;                                     // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Clr;                                               // 0x0050(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9783[0x6];                                     // 0x0062(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0068(0x0028)()
	bool                                          Temp_bool_Variable;                                // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_LinearColorLinearColor_ReturnValue; // 0x0092(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0093(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9784[0x4];                                     // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0098(0x0028)()
	struct FSlateColor                            K2Node_Select_Default;                             // 0x00C0(0x0028)()
};
static_assert(alignof(BP_SBUIBlueprintFunctionLibrary_C_SetLevelSyncColor) == 0x000008, "Wrong alignment on BP_SBUIBlueprintFunctionLibrary_C_SetLevelSyncColor");
static_assert(sizeof(BP_SBUIBlueprintFunctionLibrary_C_SetLevelSyncColor) == 0x0000E8, "Wrong size on BP_SBUIBlueprintFunctionLibrary_C_SetLevelSyncColor");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_SetLevelSyncColor, Condition) == 0x000000, "Member 'BP_SBUIBlueprintFunctionLibrary_C_SetLevelSyncColor::Condition' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_SetLevelSyncColor, InputPin) == 0x000008, "Member 'BP_SBUIBlueprintFunctionLibrary_C_SetLevelSyncColor::InputPin' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_SetLevelSyncColor, __WorldContext) == 0x000010, "Member 'BP_SBUIBlueprintFunctionLibrary_C_SetLevelSyncColor::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_SetLevelSyncColor, bIsLevelSync) == 0x000018, "Member 'BP_SBUIBlueprintFunctionLibrary_C_SetLevelSyncColor::bIsLevelSync' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_SetLevelSyncColor, LocalIsLevelSync) == 0x000019, "Member 'BP_SBUIBlueprintFunctionLibrary_C_SetLevelSyncColor::LocalIsLevelSync' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_SetLevelSyncColor, LocalSlateColor) == 0x000020, "Member 'BP_SBUIBlueprintFunctionLibrary_C_SetLevelSyncColor::LocalSlateColor' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_SetLevelSyncColor, LocalInputPin) == 0x000048, "Member 'BP_SBUIBlueprintFunctionLibrary_C_SetLevelSyncColor::LocalInputPin' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_SetLevelSyncColor, Clr) == 0x000050, "Member 'BP_SBUIBlueprintFunctionLibrary_C_SetLevelSyncColor::Clr' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_SetLevelSyncColor, CallFunc_IsValid_ReturnValue) == 0x000060, "Member 'BP_SBUIBlueprintFunctionLibrary_C_SetLevelSyncColor::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_SetLevelSyncColor, CallFunc_Not_PreBool_ReturnValue) == 0x000061, "Member 'BP_SBUIBlueprintFunctionLibrary_C_SetLevelSyncColor::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_SetLevelSyncColor, K2Node_MakeStruct_SlateColor) == 0x000068, "Member 'BP_SBUIBlueprintFunctionLibrary_C_SetLevelSyncColor::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_SetLevelSyncColor, Temp_bool_Variable) == 0x000090, "Member 'BP_SBUIBlueprintFunctionLibrary_C_SetLevelSyncColor::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_SetLevelSyncColor, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000091, "Member 'BP_SBUIBlueprintFunctionLibrary_C_SetLevelSyncColor::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_SetLevelSyncColor, CallFunc_NotEqual_LinearColorLinearColor_ReturnValue) == 0x000092, "Member 'BP_SBUIBlueprintFunctionLibrary_C_SetLevelSyncColor::CallFunc_NotEqual_LinearColorLinearColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_SetLevelSyncColor, CallFunc_BooleanOR_ReturnValue) == 0x000093, "Member 'BP_SBUIBlueprintFunctionLibrary_C_SetLevelSyncColor::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_SetLevelSyncColor, K2Node_MakeStruct_SlateColor_1) == 0x000098, "Member 'BP_SBUIBlueprintFunctionLibrary_C_SetLevelSyncColor::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_SetLevelSyncColor, K2Node_Select_Default) == 0x0000C0, "Member 'BP_SBUIBlueprintFunctionLibrary_C_SetLevelSyncColor::K2Node_Select_Default' has a wrong offset!");

// Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.SetFullscreen
// 0x0030 (0x0030 - 0x0000)
struct BP_SBUIBlueprintFunctionLibrary_C_SetFullscreen final
{
public:
	class UCanvasPanelSlot*                       CanvasPanelSlot;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FAnchors                               K2Node_MakeStruct_Anchors;                         // 0x0020(0x0010)(NoDestructor)
};
static_assert(alignof(BP_SBUIBlueprintFunctionLibrary_C_SetFullscreen) == 0x000008, "Wrong alignment on BP_SBUIBlueprintFunctionLibrary_C_SetFullscreen");
static_assert(sizeof(BP_SBUIBlueprintFunctionLibrary_C_SetFullscreen) == 0x000030, "Wrong size on BP_SBUIBlueprintFunctionLibrary_C_SetFullscreen");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_SetFullscreen, CanvasPanelSlot) == 0x000000, "Member 'BP_SBUIBlueprintFunctionLibrary_C_SetFullscreen::CanvasPanelSlot' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_SetFullscreen, __WorldContext) == 0x000008, "Member 'BP_SBUIBlueprintFunctionLibrary_C_SetFullscreen::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_SetFullscreen, K2Node_MakeStruct_Margin) == 0x000010, "Member 'BP_SBUIBlueprintFunctionLibrary_C_SetFullscreen::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_SetFullscreen, K2Node_MakeStruct_Anchors) == 0x000020, "Member 'BP_SBUIBlueprintFunctionLibrary_C_SetFullscreen::K2Node_MakeStruct_Anchors' has a wrong offset!");

// Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.GetImagineLevelSyncLevel
// 0x0058 (0x0058 - 0x0000)
struct BP_SBUIBlueprintFunctionLibrary_C_GetImagineLevelSyncLevel final
{
public:
	class FString                                 InImagineUniqueId;                                 // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         InImagineLevel;                                    // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9785[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OutImagineLevel;                                   // 0x0020(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalImagineLevel;                                 // 0x0024(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalClassLevel;                                   // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalLevelSyncTargelLevel;                         // 0x002C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 LocalImagineUniqueId;                              // 0x0030(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetLevel_ReturnValue;                     // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetLevelSyncTarget_ReturnValue;           // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_2;           // 0x0053(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_3;           // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0055(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SBUIBlueprintFunctionLibrary_C_GetImagineLevelSyncLevel) == 0x000008, "Wrong alignment on BP_SBUIBlueprintFunctionLibrary_C_GetImagineLevelSyncLevel");
static_assert(sizeof(BP_SBUIBlueprintFunctionLibrary_C_GetImagineLevelSyncLevel) == 0x000058, "Wrong size on BP_SBUIBlueprintFunctionLibrary_C_GetImagineLevelSyncLevel");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_GetImagineLevelSyncLevel, InImagineUniqueId) == 0x000000, "Member 'BP_SBUIBlueprintFunctionLibrary_C_GetImagineLevelSyncLevel::InImagineUniqueId' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_GetImagineLevelSyncLevel, InImagineLevel) == 0x000010, "Member 'BP_SBUIBlueprintFunctionLibrary_C_GetImagineLevelSyncLevel::InImagineLevel' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_GetImagineLevelSyncLevel, __WorldContext) == 0x000018, "Member 'BP_SBUIBlueprintFunctionLibrary_C_GetImagineLevelSyncLevel::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_GetImagineLevelSyncLevel, OutImagineLevel) == 0x000020, "Member 'BP_SBUIBlueprintFunctionLibrary_C_GetImagineLevelSyncLevel::OutImagineLevel' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_GetImagineLevelSyncLevel, LocalImagineLevel) == 0x000024, "Member 'BP_SBUIBlueprintFunctionLibrary_C_GetImagineLevelSyncLevel::LocalImagineLevel' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_GetImagineLevelSyncLevel, LocalClassLevel) == 0x000028, "Member 'BP_SBUIBlueprintFunctionLibrary_C_GetImagineLevelSyncLevel::LocalClassLevel' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_GetImagineLevelSyncLevel, LocalLevelSyncTargelLevel) == 0x00002C, "Member 'BP_SBUIBlueprintFunctionLibrary_C_GetImagineLevelSyncLevel::LocalLevelSyncTargelLevel' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_GetImagineLevelSyncLevel, LocalImagineUniqueId) == 0x000030, "Member 'BP_SBUIBlueprintFunctionLibrary_C_GetImagineLevelSyncLevel::LocalImagineUniqueId' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_GetImagineLevelSyncLevel, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000040, "Member 'BP_SBUIBlueprintFunctionLibrary_C_GetImagineLevelSyncLevel::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_GetImagineLevelSyncLevel, CallFunc_GetLevel_ReturnValue) == 0x000048, "Member 'BP_SBUIBlueprintFunctionLibrary_C_GetImagineLevelSyncLevel::CallFunc_GetLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_GetImagineLevelSyncLevel, CallFunc_GetLevelSyncTarget_ReturnValue) == 0x00004C, "Member 'BP_SBUIBlueprintFunctionLibrary_C_GetImagineLevelSyncLevel::CallFunc_GetLevelSyncTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_GetImagineLevelSyncLevel, CallFunc_IsValid_ReturnValue) == 0x000050, "Member 'BP_SBUIBlueprintFunctionLibrary_C_GetImagineLevelSyncLevel::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_GetImagineLevelSyncLevel, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000051, "Member 'BP_SBUIBlueprintFunctionLibrary_C_GetImagineLevelSyncLevel::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_GetImagineLevelSyncLevel, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000052, "Member 'BP_SBUIBlueprintFunctionLibrary_C_GetImagineLevelSyncLevel::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_GetImagineLevelSyncLevel, CallFunc_LessEqual_IntInt_ReturnValue_2) == 0x000053, "Member 'BP_SBUIBlueprintFunctionLibrary_C_GetImagineLevelSyncLevel::CallFunc_LessEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_GetImagineLevelSyncLevel, CallFunc_LessEqual_IntInt_ReturnValue_3) == 0x000054, "Member 'BP_SBUIBlueprintFunctionLibrary_C_GetImagineLevelSyncLevel::CallFunc_LessEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_GetImagineLevelSyncLevel, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000055, "Member 'BP_SBUIBlueprintFunctionLibrary_C_GetImagineLevelSyncLevel::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.SetVisibilityComparison
// 0x0020 (0x0020 - 0x0000)
struct BP_SBUIBlueprintFunctionLibrary_C_SetVisibilityComparison final
{
public:
	class UWidget*                                Target;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              InVisibility;                                      // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9786[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SBUIBlueprintFunctionLibrary_C_SetVisibilityComparison) == 0x000008, "Wrong alignment on BP_SBUIBlueprintFunctionLibrary_C_SetVisibilityComparison");
static_assert(sizeof(BP_SBUIBlueprintFunctionLibrary_C_SetVisibilityComparison) == 0x000020, "Wrong size on BP_SBUIBlueprintFunctionLibrary_C_SetVisibilityComparison");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_SetVisibilityComparison, Target) == 0x000000, "Member 'BP_SBUIBlueprintFunctionLibrary_C_SetVisibilityComparison::Target' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_SetVisibilityComparison, InVisibility) == 0x000008, "Member 'BP_SBUIBlueprintFunctionLibrary_C_SetVisibilityComparison::InVisibility' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_SetVisibilityComparison, __WorldContext) == 0x000010, "Member 'BP_SBUIBlueprintFunctionLibrary_C_SetVisibilityComparison::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_SetVisibilityComparison, CallFunc_GetVisibility_ReturnValue) == 0x000018, "Member 'BP_SBUIBlueprintFunctionLibrary_C_SetVisibilityComparison::CallFunc_GetVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_SetVisibilityComparison, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000019, "Member 'BP_SBUIBlueprintFunctionLibrary_C_SetVisibilityComparison::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_SetVisibilityComparison, CallFunc_IsValid_ReturnValue) == 0x00001A, "Member 'BP_SBUIBlueprintFunctionLibrary_C_SetVisibilityComparison::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.GetStackBEnableType
// 0x0210 (0x0210 - 0x0000)
struct BP_SBUIBlueprintFunctionLibrary_C_GetStackBEnableType final
{
public:
	class UObject*                                InWorldContextObject;                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBStackBEnableType                           OutStackBEnableType;                               // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9787[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                LocalWorldContextObject;                           // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9788[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMapInfo                             CallFunc_GetCurrentMapInfo_OutMapInfo;             // 0x0028(0x01E0)()
	bool                                          CallFunc_GetCurrentMapInfo_ReturnValue;            // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SBUIBlueprintFunctionLibrary_C_GetStackBEnableType) == 0x000008, "Wrong alignment on BP_SBUIBlueprintFunctionLibrary_C_GetStackBEnableType");
static_assert(sizeof(BP_SBUIBlueprintFunctionLibrary_C_GetStackBEnableType) == 0x000210, "Wrong size on BP_SBUIBlueprintFunctionLibrary_C_GetStackBEnableType");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_GetStackBEnableType, InWorldContextObject) == 0x000000, "Member 'BP_SBUIBlueprintFunctionLibrary_C_GetStackBEnableType::InWorldContextObject' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_GetStackBEnableType, __WorldContext) == 0x000008, "Member 'BP_SBUIBlueprintFunctionLibrary_C_GetStackBEnableType::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_GetStackBEnableType, OutStackBEnableType) == 0x000010, "Member 'BP_SBUIBlueprintFunctionLibrary_C_GetStackBEnableType::OutStackBEnableType' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_GetStackBEnableType, LocalWorldContextObject) == 0x000018, "Member 'BP_SBUIBlueprintFunctionLibrary_C_GetStackBEnableType::LocalWorldContextObject' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_GetStackBEnableType, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'BP_SBUIBlueprintFunctionLibrary_C_GetStackBEnableType::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_GetStackBEnableType, CallFunc_GetCurrentMapInfo_OutMapInfo) == 0x000028, "Member 'BP_SBUIBlueprintFunctionLibrary_C_GetStackBEnableType::CallFunc_GetCurrentMapInfo_OutMapInfo' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_GetStackBEnableType, CallFunc_GetCurrentMapInfo_ReturnValue) == 0x000208, "Member 'BP_SBUIBlueprintFunctionLibrary_C_GetStackBEnableType::CallFunc_GetCurrentMapInfo_ReturnValue' has a wrong offset!");

// Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.SetStackBEnableColor
// 0x0020 (0x0020 - 0x0000)
struct BP_SBUIBlueprintFunctionLibrary_C_SetStackBEnableColor final
{
public:
	ESBStackBEnableType                           InStackBEnableType;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9789[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTextBlock*                             InTextWidget;                                      // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OutIsStackBEnableFull;                             // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetLevelSyncColor_bIsLevelSync;           // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SBUIBlueprintFunctionLibrary_C_SetStackBEnableColor) == 0x000008, "Wrong alignment on BP_SBUIBlueprintFunctionLibrary_C_SetStackBEnableColor");
static_assert(sizeof(BP_SBUIBlueprintFunctionLibrary_C_SetStackBEnableColor) == 0x000020, "Wrong size on BP_SBUIBlueprintFunctionLibrary_C_SetStackBEnableColor");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_SetStackBEnableColor, InStackBEnableType) == 0x000000, "Member 'BP_SBUIBlueprintFunctionLibrary_C_SetStackBEnableColor::InStackBEnableType' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_SetStackBEnableColor, InTextWidget) == 0x000008, "Member 'BP_SBUIBlueprintFunctionLibrary_C_SetStackBEnableColor::InTextWidget' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_SetStackBEnableColor, __WorldContext) == 0x000010, "Member 'BP_SBUIBlueprintFunctionLibrary_C_SetStackBEnableColor::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_SetStackBEnableColor, OutIsStackBEnableFull) == 0x000018, "Member 'BP_SBUIBlueprintFunctionLibrary_C_SetStackBEnableColor::OutIsStackBEnableFull' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_SetStackBEnableColor, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000019, "Member 'BP_SBUIBlueprintFunctionLibrary_C_SetStackBEnableColor::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_SetStackBEnableColor, CallFunc_SetLevelSyncColor_bIsLevelSync) == 0x00001A, "Member 'BP_SBUIBlueprintFunctionLibrary_C_SetStackBEnableColor::CallFunc_SetLevelSyncColor_bIsLevelSync' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_SetStackBEnableColor, CallFunc_Not_PreBool_ReturnValue) == 0x00001B, "Member 'BP_SBUIBlueprintFunctionLibrary_C_SetStackBEnableColor::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.IsDhcBattleMap
// 0x0010 (0x0010 - 0x0000)
struct BP_SBUIBlueprintFunctionLibrary_C_IsDhcBattleMap final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Param_IsDhcBattleMap;                              // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsCurrentGameContentId_ReturnValue;       // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SBUIBlueprintFunctionLibrary_C_IsDhcBattleMap) == 0x000008, "Wrong alignment on BP_SBUIBlueprintFunctionLibrary_C_IsDhcBattleMap");
static_assert(sizeof(BP_SBUIBlueprintFunctionLibrary_C_IsDhcBattleMap) == 0x000010, "Wrong size on BP_SBUIBlueprintFunctionLibrary_C_IsDhcBattleMap");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_IsDhcBattleMap, __WorldContext) == 0x000000, "Member 'BP_SBUIBlueprintFunctionLibrary_C_IsDhcBattleMap::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_IsDhcBattleMap, Param_IsDhcBattleMap) == 0x000008, "Member 'BP_SBUIBlueprintFunctionLibrary_C_IsDhcBattleMap::Param_IsDhcBattleMap' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_IsDhcBattleMap, CallFunc_IsCurrentGameContentId_ReturnValue) == 0x000009, "Member 'BP_SBUIBlueprintFunctionLibrary_C_IsDhcBattleMap::CallFunc_IsCurrentGameContentId_ReturnValue' has a wrong offset!");

// Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.SetTextComparison
// 0x0070 (0x0070 - 0x0000)
struct BP_SBUIBlueprintFunctionLibrary_C_SetTextComparison final
{
public:
	class UTextBlock*                             Target;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   InText;                                            // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                __WorldContext;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   LocalText;                                         // 0x0028(0x0018)(Edit, BlueprintVisible)
	class UTextBlock*                             LocalTarget;                                       // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_978A[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0050(0x0018)()
	bool                                          CallFunc_NotEqual_TextText_ReturnValue;            // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SBUIBlueprintFunctionLibrary_C_SetTextComparison) == 0x000008, "Wrong alignment on BP_SBUIBlueprintFunctionLibrary_C_SetTextComparison");
static_assert(sizeof(BP_SBUIBlueprintFunctionLibrary_C_SetTextComparison) == 0x000070, "Wrong size on BP_SBUIBlueprintFunctionLibrary_C_SetTextComparison");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_SetTextComparison, Target) == 0x000000, "Member 'BP_SBUIBlueprintFunctionLibrary_C_SetTextComparison::Target' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_SetTextComparison, InText) == 0x000008, "Member 'BP_SBUIBlueprintFunctionLibrary_C_SetTextComparison::InText' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_SetTextComparison, __WorldContext) == 0x000020, "Member 'BP_SBUIBlueprintFunctionLibrary_C_SetTextComparison::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_SetTextComparison, LocalText) == 0x000028, "Member 'BP_SBUIBlueprintFunctionLibrary_C_SetTextComparison::LocalText' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_SetTextComparison, LocalTarget) == 0x000040, "Member 'BP_SBUIBlueprintFunctionLibrary_C_SetTextComparison::LocalTarget' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_SetTextComparison, CallFunc_IsValid_ReturnValue) == 0x000048, "Member 'BP_SBUIBlueprintFunctionLibrary_C_SetTextComparison::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_SetTextComparison, CallFunc_GetText_ReturnValue) == 0x000050, "Member 'BP_SBUIBlueprintFunctionLibrary_C_SetTextComparison::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_SetTextComparison, CallFunc_NotEqual_TextText_ReturnValue) == 0x000068, "Member 'BP_SBUIBlueprintFunctionLibrary_C_SetTextComparison::CallFunc_NotEqual_TextText_ReturnValue' has a wrong offset!");

// Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.GetRewardString
// 0x00F8 (0x00F8 - 0x0000)
struct BP_SBUIBlueprintFunctionLibrary_C_GetRewardString final
{
public:
	TArray<class FName>                           InRewardId;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 OutString;                                         // 0x0018(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         Local_TextIndex;                                   // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Local_Count;                                       // 0x002C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 Local_RewardString;                                // 0x0030(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FSBMasterReward>                CallFunc_GetMasterRewardData_OutRewardList;        // 0x0040(0x0010)(ReferenceParm)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBMasterReward                        CallFunc_Array_Get_Item;                           // 0x0058(0x0014)(NoDestructor)
	uint8                                         Pad_978B[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetRewardItemNameAndType2_OutName;        // 0x0070(0x0018)()
	class FText                                   CallFunc_GetRewardItemNameAndType2_OutType;        // 0x0088(0x0018)()
	bool                                          CallFunc_GetRewardItemNameAndType2_OutNoName;      // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_978C[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_978D[0x4];                                     // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x00C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_978E[0x3];                                     // 0x00D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x00E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SBUIBlueprintFunctionLibrary_C_GetRewardString) == 0x000008, "Wrong alignment on BP_SBUIBlueprintFunctionLibrary_C_GetRewardString");
static_assert(sizeof(BP_SBUIBlueprintFunctionLibrary_C_GetRewardString) == 0x0000F8, "Wrong size on BP_SBUIBlueprintFunctionLibrary_C_GetRewardString");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_GetRewardString, InRewardId) == 0x000000, "Member 'BP_SBUIBlueprintFunctionLibrary_C_GetRewardString::InRewardId' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_GetRewardString, __WorldContext) == 0x000010, "Member 'BP_SBUIBlueprintFunctionLibrary_C_GetRewardString::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_GetRewardString, OutString) == 0x000018, "Member 'BP_SBUIBlueprintFunctionLibrary_C_GetRewardString::OutString' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_GetRewardString, Local_TextIndex) == 0x000028, "Member 'BP_SBUIBlueprintFunctionLibrary_C_GetRewardString::Local_TextIndex' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_GetRewardString, Local_Count) == 0x00002C, "Member 'BP_SBUIBlueprintFunctionLibrary_C_GetRewardString::Local_Count' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_GetRewardString, Local_RewardString) == 0x000030, "Member 'BP_SBUIBlueprintFunctionLibrary_C_GetRewardString::Local_RewardString' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_GetRewardString, CallFunc_GetMasterRewardData_OutRewardList) == 0x000040, "Member 'BP_SBUIBlueprintFunctionLibrary_C_GetRewardString::CallFunc_GetMasterRewardData_OutRewardList' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_GetRewardString, Temp_int_Array_Index_Variable) == 0x000050, "Member 'BP_SBUIBlueprintFunctionLibrary_C_GetRewardString::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_GetRewardString, CallFunc_Array_Length_ReturnValue) == 0x000054, "Member 'BP_SBUIBlueprintFunctionLibrary_C_GetRewardString::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_GetRewardString, CallFunc_Array_Get_Item) == 0x000058, "Member 'BP_SBUIBlueprintFunctionLibrary_C_GetRewardString::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_GetRewardString, CallFunc_GetRewardItemNameAndType2_OutName) == 0x000070, "Member 'BP_SBUIBlueprintFunctionLibrary_C_GetRewardString::CallFunc_GetRewardItemNameAndType2_OutName' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_GetRewardString, CallFunc_GetRewardItemNameAndType2_OutType) == 0x000088, "Member 'BP_SBUIBlueprintFunctionLibrary_C_GetRewardString::CallFunc_GetRewardItemNameAndType2_OutType' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_GetRewardString, CallFunc_GetRewardItemNameAndType2_OutNoName) == 0x0000A0, "Member 'BP_SBUIBlueprintFunctionLibrary_C_GetRewardString::CallFunc_GetRewardItemNameAndType2_OutNoName' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_GetRewardString, CallFunc_Conv_TextToString_ReturnValue) == 0x0000A8, "Member 'BP_SBUIBlueprintFunctionLibrary_C_GetRewardString::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_GetRewardString, CallFunc_Add_IntInt_ReturnValue) == 0x0000B8, "Member 'BP_SBUIBlueprintFunctionLibrary_C_GetRewardString::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_GetRewardString, CallFunc_Concat_StrStr_ReturnValue) == 0x0000C0, "Member 'BP_SBUIBlueprintFunctionLibrary_C_GetRewardString::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_GetRewardString, Temp_int_Loop_Counter_Variable) == 0x0000D0, "Member 'BP_SBUIBlueprintFunctionLibrary_C_GetRewardString::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_GetRewardString, CallFunc_Less_IntInt_ReturnValue) == 0x0000D4, "Member 'BP_SBUIBlueprintFunctionLibrary_C_GetRewardString::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_GetRewardString, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000D8, "Member 'BP_SBUIBlueprintFunctionLibrary_C_GetRewardString::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_GetRewardString, Temp_int_Variable) == 0x0000DC, "Member 'BP_SBUIBlueprintFunctionLibrary_C_GetRewardString::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_GetRewardString, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0000E0, "Member 'BP_SBUIBlueprintFunctionLibrary_C_GetRewardString::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_GetRewardString, CallFunc_NotEqual_IntInt_ReturnValue) == 0x0000F0, "Member 'BP_SBUIBlueprintFunctionLibrary_C_GetRewardString::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");

// Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.GetAdventureboardGoalRewardString
// 0x00C0 (0x00C0 - 0x0000)
struct BP_SBUIBlueprintFunctionLibrary_C_GetAdventureboardGoalRewardString final
{
public:
	int32                                         InBoardId;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_978F[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 OutRewadString;                                    // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9790[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBAdventureBoardPanelParamMasterData> CallFunc_GetAdventureBoardPanelList_OutPanelList;  // 0x0038(0x0010)(ReferenceParm)
	bool                                          CallFunc_GetAdventureBoardPanelList_ReturnValue;   // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9791[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9792[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAdventureBoardPanelParamMasterData  CallFunc_Array_Get_Item;                           // 0x0058(0x0050)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9793[0x7];                                     // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetRewardString_OutString;                // 0x00B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SBUIBlueprintFunctionLibrary_C_GetAdventureboardGoalRewardString) == 0x000008, "Wrong alignment on BP_SBUIBlueprintFunctionLibrary_C_GetAdventureboardGoalRewardString");
static_assert(sizeof(BP_SBUIBlueprintFunctionLibrary_C_GetAdventureboardGoalRewardString) == 0x0000C0, "Wrong size on BP_SBUIBlueprintFunctionLibrary_C_GetAdventureboardGoalRewardString");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_GetAdventureboardGoalRewardString, InBoardId) == 0x000000, "Member 'BP_SBUIBlueprintFunctionLibrary_C_GetAdventureboardGoalRewardString::InBoardId' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_GetAdventureboardGoalRewardString, __WorldContext) == 0x000008, "Member 'BP_SBUIBlueprintFunctionLibrary_C_GetAdventureboardGoalRewardString::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_GetAdventureboardGoalRewardString, OutRewadString) == 0x000010, "Member 'BP_SBUIBlueprintFunctionLibrary_C_GetAdventureboardGoalRewardString::OutRewadString' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_GetAdventureboardGoalRewardString, Temp_int_Array_Index_Variable) == 0x000020, "Member 'BP_SBUIBlueprintFunctionLibrary_C_GetAdventureboardGoalRewardString::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_GetAdventureboardGoalRewardString, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'BP_SBUIBlueprintFunctionLibrary_C_GetAdventureboardGoalRewardString::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_GetAdventureboardGoalRewardString, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'BP_SBUIBlueprintFunctionLibrary_C_GetAdventureboardGoalRewardString::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_GetAdventureboardGoalRewardString, CallFunc_GetMasterDataManager_IsValid) == 0x00002C, "Member 'BP_SBUIBlueprintFunctionLibrary_C_GetAdventureboardGoalRewardString::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_GetAdventureboardGoalRewardString, CallFunc_GetMasterDataManager_ReturnValue) == 0x000030, "Member 'BP_SBUIBlueprintFunctionLibrary_C_GetAdventureboardGoalRewardString::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_GetAdventureboardGoalRewardString, CallFunc_GetAdventureBoardPanelList_OutPanelList) == 0x000038, "Member 'BP_SBUIBlueprintFunctionLibrary_C_GetAdventureboardGoalRewardString::CallFunc_GetAdventureBoardPanelList_OutPanelList' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_GetAdventureboardGoalRewardString, CallFunc_GetAdventureBoardPanelList_ReturnValue) == 0x000048, "Member 'BP_SBUIBlueprintFunctionLibrary_C_GetAdventureboardGoalRewardString::CallFunc_GetAdventureBoardPanelList_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_GetAdventureboardGoalRewardString, CallFunc_Array_Length_ReturnValue) == 0x00004C, "Member 'BP_SBUIBlueprintFunctionLibrary_C_GetAdventureboardGoalRewardString::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_GetAdventureboardGoalRewardString, CallFunc_Less_IntInt_ReturnValue) == 0x000050, "Member 'BP_SBUIBlueprintFunctionLibrary_C_GetAdventureboardGoalRewardString::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_GetAdventureboardGoalRewardString, CallFunc_Array_Get_Item) == 0x000058, "Member 'BP_SBUIBlueprintFunctionLibrary_C_GetAdventureboardGoalRewardString::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_GetAdventureboardGoalRewardString, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000A8, "Member 'BP_SBUIBlueprintFunctionLibrary_C_GetAdventureboardGoalRewardString::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_GetAdventureboardGoalRewardString, CallFunc_GetRewardString_OutString) == 0x0000B0, "Member 'BP_SBUIBlueprintFunctionLibrary_C_GetAdventureboardGoalRewardString::CallFunc_GetRewardString_OutString' has a wrong offset!");

// Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.GetAdventureboardCompleteRewardString
// 0x00C0 (0x00C0 - 0x0000)
struct BP_SBUIBlueprintFunctionLibrary_C_GetAdventureboardCompleteRewardString final
{
public:
	int32                                         InBoardId;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9794[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 OutRewardString;                                   // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9795[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindAdventureBoard_IsExists;              // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9796[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAdventureBoardParamMasterData       CallFunc_FindAdventureBoard_ReturnValue;           // 0x0038(0x0078)(ConstParm)
	class FString                                 CallFunc_GetRewardString_OutString;                // 0x00B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SBUIBlueprintFunctionLibrary_C_GetAdventureboardCompleteRewardString) == 0x000008, "Wrong alignment on BP_SBUIBlueprintFunctionLibrary_C_GetAdventureboardCompleteRewardString");
static_assert(sizeof(BP_SBUIBlueprintFunctionLibrary_C_GetAdventureboardCompleteRewardString) == 0x0000C0, "Wrong size on BP_SBUIBlueprintFunctionLibrary_C_GetAdventureboardCompleteRewardString");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_GetAdventureboardCompleteRewardString, InBoardId) == 0x000000, "Member 'BP_SBUIBlueprintFunctionLibrary_C_GetAdventureboardCompleteRewardString::InBoardId' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_GetAdventureboardCompleteRewardString, __WorldContext) == 0x000008, "Member 'BP_SBUIBlueprintFunctionLibrary_C_GetAdventureboardCompleteRewardString::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_GetAdventureboardCompleteRewardString, OutRewardString) == 0x000010, "Member 'BP_SBUIBlueprintFunctionLibrary_C_GetAdventureboardCompleteRewardString::OutRewardString' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_GetAdventureboardCompleteRewardString, CallFunc_GetMasterDataManager_IsValid) == 0x000020, "Member 'BP_SBUIBlueprintFunctionLibrary_C_GetAdventureboardCompleteRewardString::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_GetAdventureboardCompleteRewardString, CallFunc_GetMasterDataManager_ReturnValue) == 0x000028, "Member 'BP_SBUIBlueprintFunctionLibrary_C_GetAdventureboardCompleteRewardString::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_GetAdventureboardCompleteRewardString, CallFunc_FindAdventureBoard_IsExists) == 0x000030, "Member 'BP_SBUIBlueprintFunctionLibrary_C_GetAdventureboardCompleteRewardString::CallFunc_FindAdventureBoard_IsExists' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_GetAdventureboardCompleteRewardString, CallFunc_FindAdventureBoard_ReturnValue) == 0x000038, "Member 'BP_SBUIBlueprintFunctionLibrary_C_GetAdventureboardCompleteRewardString::CallFunc_FindAdventureBoard_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_GetAdventureboardCompleteRewardString, CallFunc_GetRewardString_OutString) == 0x0000B0, "Member 'BP_SBUIBlueprintFunctionLibrary_C_GetAdventureboardCompleteRewardString::CallFunc_GetRewardString_OutString' has a wrong offset!");

// Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.IsUseSkyStore
// 0x0010 (0x0010 - 0x0000)
struct BP_SBUIBlueprintFunctionLibrary_C_IsUseSkyStore final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Result;                                            // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEnableOpenRmShopMenu_ReturnValue;       // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SBUIBlueprintFunctionLibrary_C_IsUseSkyStore) == 0x000008, "Wrong alignment on BP_SBUIBlueprintFunctionLibrary_C_IsUseSkyStore");
static_assert(sizeof(BP_SBUIBlueprintFunctionLibrary_C_IsUseSkyStore) == 0x000010, "Wrong size on BP_SBUIBlueprintFunctionLibrary_C_IsUseSkyStore");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_IsUseSkyStore, __WorldContext) == 0x000000, "Member 'BP_SBUIBlueprintFunctionLibrary_C_IsUseSkyStore::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_IsUseSkyStore, Result) == 0x000008, "Member 'BP_SBUIBlueprintFunctionLibrary_C_IsUseSkyStore::Result' has a wrong offset!");
static_assert(offsetof(BP_SBUIBlueprintFunctionLibrary_C_IsUseSkyStore, CallFunc_IsEnableOpenRmShopMenu_ReturnValue) == 0x000009, "Member 'BP_SBUIBlueprintFunctionLibrary_C_IsUseSkyStore::CallFunc_IsEnableOpenRmShopMenu_ReturnValue' has a wrong offset!");

}

