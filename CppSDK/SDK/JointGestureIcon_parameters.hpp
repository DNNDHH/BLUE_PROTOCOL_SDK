#pragma once

 

// Package: JointGestureIcon

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function JointGestureIcon.JointGestureIcon_C.Update Icon
// 0x00B8 (0x00B8 - 0x0000)
struct JointGestureIcon_C_Update_Icon final
{
public:
	class ASBCharacter*                           Character;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     TargetCharacter;                                   // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44F5[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         CallFunc_GetValidPlayerState_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckTargetPlayer_Result;                 // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44F6[0x6];                                     // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44F7[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AHUD*                                   CallFunc_GetHUD_ReturnValue;                       // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_BattleHUD_C>      K2Node_DynamicCast_AsBPI_Battle_HUD;               // 0x0048(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44F8[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlayerJointGestureInfo              CallFunc_GetJointGestureInfo_ReturnValue;          // 0x005C(0x0014)(NoDestructor)
	ESBJointGestureStatusType                     CallFunc_GetStatusType_ReturnValue;                // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0072(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44F9[0x5];                                     // 0x0073(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character_1;         // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44FA[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerInteractionComponent*          CallFunc_GetPlayerInteractionComponent_ReturnValue; // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44FB[0x2];                                     // 0x009A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBInteractionInfo                     CallFunc_GetCurrentInteractionInfo_ReturnValue;    // 0x009C(0x0018)(NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_1;            // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_2;            // 0x00B5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(JointGestureIcon_C_Update_Icon) == 0x000008, "Wrong alignment on JointGestureIcon_C_Update_Icon");
static_assert(sizeof(JointGestureIcon_C_Update_Icon) == 0x0000B8, "Wrong size on JointGestureIcon_C_Update_Icon");
static_assert(offsetof(JointGestureIcon_C_Update_Icon, Character) == 0x000000, "Member 'JointGestureIcon_C_Update_Icon::Character' has a wrong offset!");
static_assert(offsetof(JointGestureIcon_C_Update_Icon, TargetCharacter) == 0x000008, "Member 'JointGestureIcon_C_Update_Icon::TargetCharacter' has a wrong offset!");
static_assert(offsetof(JointGestureIcon_C_Update_Icon, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000010, "Member 'JointGestureIcon_C_Update_Icon::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(JointGestureIcon_C_Update_Icon, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'JointGestureIcon_C_Update_Icon::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(JointGestureIcon_C_Update_Icon, CallFunc_GetValidPlayerState_ReturnValue) == 0x000020, "Member 'JointGestureIcon_C_Update_Icon::CallFunc_GetValidPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(JointGestureIcon_C_Update_Icon, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'JointGestureIcon_C_Update_Icon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(JointGestureIcon_C_Update_Icon, CallFunc_CheckTargetPlayer_Result) == 0x000029, "Member 'JointGestureIcon_C_Update_Icon::CallFunc_CheckTargetPlayer_Result' has a wrong offset!");
static_assert(offsetof(JointGestureIcon_C_Update_Icon, CallFunc_GetPlayerController_ReturnValue) == 0x000030, "Member 'JointGestureIcon_C_Update_Icon::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(JointGestureIcon_C_Update_Icon, CallFunc_IsValid_ReturnValue_1) == 0x000038, "Member 'JointGestureIcon_C_Update_Icon::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(JointGestureIcon_C_Update_Icon, CallFunc_GetHUD_ReturnValue) == 0x000040, "Member 'JointGestureIcon_C_Update_Icon::CallFunc_GetHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(JointGestureIcon_C_Update_Icon, K2Node_DynamicCast_AsBPI_Battle_HUD) == 0x000048, "Member 'JointGestureIcon_C_Update_Icon::K2Node_DynamicCast_AsBPI_Battle_HUD' has a wrong offset!");
static_assert(offsetof(JointGestureIcon_C_Update_Icon, K2Node_DynamicCast_bSuccess_1) == 0x000058, "Member 'JointGestureIcon_C_Update_Icon::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(JointGestureIcon_C_Update_Icon, CallFunc_GetJointGestureInfo_ReturnValue) == 0x00005C, "Member 'JointGestureIcon_C_Update_Icon::CallFunc_GetJointGestureInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(JointGestureIcon_C_Update_Icon, CallFunc_GetStatusType_ReturnValue) == 0x000070, "Member 'JointGestureIcon_C_Update_Icon::CallFunc_GetStatusType_ReturnValue' has a wrong offset!");
static_assert(offsetof(JointGestureIcon_C_Update_Icon, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000071, "Member 'JointGestureIcon_C_Update_Icon::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(JointGestureIcon_C_Update_Icon, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000072, "Member 'JointGestureIcon_C_Update_Icon::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(JointGestureIcon_C_Update_Icon, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000078, "Member 'JointGestureIcon_C_Update_Icon::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(JointGestureIcon_C_Update_Icon, K2Node_DynamicCast_AsSBPlayer_Character_1) == 0x000080, "Member 'JointGestureIcon_C_Update_Icon::K2Node_DynamicCast_AsSBPlayer_Character_1' has a wrong offset!");
static_assert(offsetof(JointGestureIcon_C_Update_Icon, K2Node_DynamicCast_bSuccess_2) == 0x000088, "Member 'JointGestureIcon_C_Update_Icon::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(JointGestureIcon_C_Update_Icon, CallFunc_GetPlayerInteractionComponent_ReturnValue) == 0x000090, "Member 'JointGestureIcon_C_Update_Icon::CallFunc_GetPlayerInteractionComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(JointGestureIcon_C_Update_Icon, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000098, "Member 'JointGestureIcon_C_Update_Icon::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(JointGestureIcon_C_Update_Icon, CallFunc_IsValid_ReturnValue_2) == 0x000099, "Member 'JointGestureIcon_C_Update_Icon::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(JointGestureIcon_C_Update_Icon, CallFunc_GetCurrentInteractionInfo_ReturnValue) == 0x00009C, "Member 'JointGestureIcon_C_Update_Icon::CallFunc_GetCurrentInteractionInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(JointGestureIcon_C_Update_Icon, CallFunc_NotEqual_IntInt_ReturnValue_1) == 0x0000B4, "Member 'JointGestureIcon_C_Update_Icon::CallFunc_NotEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(JointGestureIcon_C_Update_Icon, CallFunc_NotEqual_IntInt_ReturnValue_2) == 0x0000B5, "Member 'JointGestureIcon_C_Update_Icon::CallFunc_NotEqual_IntInt_ReturnValue_2' has a wrong offset!");

// Function JointGestureIcon.JointGestureIcon_C.CheckTargetPlayer
// 0x0020 (0x0020 - 0x0000)
struct JointGestureIcon_C_CheckTargetPlayer final
{
public:
	class ASBPlayerCharacter*                     InTargetCharacter;                                 // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Result;                                            // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44FC[0x6];                                     // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(JointGestureIcon_C_CheckTargetPlayer) == 0x000008, "Wrong alignment on JointGestureIcon_C_CheckTargetPlayer");
static_assert(sizeof(JointGestureIcon_C_CheckTargetPlayer) == 0x000020, "Wrong size on JointGestureIcon_C_CheckTargetPlayer");
static_assert(offsetof(JointGestureIcon_C_CheckTargetPlayer, InTargetCharacter) == 0x000000, "Member 'JointGestureIcon_C_CheckTargetPlayer::InTargetCharacter' has a wrong offset!");
static_assert(offsetof(JointGestureIcon_C_CheckTargetPlayer, Result) == 0x000008, "Member 'JointGestureIcon_C_CheckTargetPlayer::Result' has a wrong offset!");
static_assert(offsetof(JointGestureIcon_C_CheckTargetPlayer, CallFunc_IsValid_ReturnValue) == 0x000009, "Member 'JointGestureIcon_C_CheckTargetPlayer::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(JointGestureIcon_C_CheckTargetPlayer, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000010, "Member 'JointGestureIcon_C_CheckTargetPlayer::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(JointGestureIcon_C_CheckTargetPlayer, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000018, "Member 'JointGestureIcon_C_CheckTargetPlayer::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

}

