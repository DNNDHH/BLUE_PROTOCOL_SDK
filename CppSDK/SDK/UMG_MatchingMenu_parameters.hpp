#pragma once

 

// Package: UMG_MatchingMenu

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function UMG_MatchingMenu.UMG_MatchingMenu_C.OnClose__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UMG_MatchingMenu_C_OnClose__DelegateSignature final
{
public:
	class UUMG_MatchingMenu_C*                    Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MatchingMenu_C_OnClose__DelegateSignature) == 0x000008, "Wrong alignment on UMG_MatchingMenu_C_OnClose__DelegateSignature");
static_assert(sizeof(UMG_MatchingMenu_C_OnClose__DelegateSignature) == 0x000008, "Wrong size on UMG_MatchingMenu_C_OnClose__DelegateSignature");
static_assert(offsetof(UMG_MatchingMenu_C_OnClose__DelegateSignature, Sender) == 0x000000, "Member 'UMG_MatchingMenu_C_OnClose__DelegateSignature::Sender' has a wrong offset!");

// Function UMG_MatchingMenu.UMG_MatchingMenu_C.ExecuteUbergraph_UMG_MatchingMenu
// 0x0390 (0x0390 - 0x0000)
struct UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A03[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlayerIsInBattle_ReturnValue;           // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A04[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBBattleParamInterface> CallFunc_IsDeadHitPoint_self_CastInput;            // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDeadHitPoint_ReturnValue;               // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A05[0x1];                                     // 0x002B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBMapInfo>                     K2Node_ComponentBoundEvent_DungeonMapInfoArray;    // 0x0030(0x0010)(ReferenceParm)
	bool                                          K2Node_ComponentBoundEvent_bUnlimit;               // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A06[0x6];                                     // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class USBMatchingGameState* MatchedGame)> K2Node_CreateDelegate_OutputDelegate;              // 0x0050(0x0010)(ZeroConstructor, NoDestructor)
	class UBP_DefaultGameInstance_C*              K2Node_DynamicCast_AsBP_Default_Game_Instance;     // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A07[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMatchingGameState*                   K2Node_CustomEvent_MatchedGame;                    // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue_1;            // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class USBMatchingGameState* MatchedGame)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0080(0x0010)(ZeroConstructor, NoDestructor)
	class UBP_DefaultGameInstance_C*              K2Node_DynamicCast_AsBP_Default_Game_Instance_1;   // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A08[0x6];                                     // 0x009A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetCurrentWidget_ReturnValue;             // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetCurrentWidget_ReturnValue_1;           // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A09[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBDungeonSupply                       K2Node_ComponentBoundEvent_DungeonSupply_1;        // 0x00D0(0x0008)(NoDestructor)
	class UUMG_ProductDetailMenu_C*               K2Node_CustomEvent_Sender;                         // 0x00D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBDungeonSupply                       K2Node_ComponentBoundEvent_DungeonSupply;          // 0x00E0(0x0008)(NoDestructor)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerMailComponent*                 CallFunc_GetMailComponent_ReturnValue;             // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x00F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsRestrictedUsage_ReturnValue;            // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A0A[0x7];                                     // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0110(0x0018)()
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A0B[0x3];                                     // 0x0129(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetDungeonId_ReturnValue;                 // 0x012C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetDungeonId_ReturnValue_1;               // 0x0134(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMapInfo_IsExists;                      // 0x013C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A0C[0x3];                                     // 0x013D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMapInfo                             CallFunc_GetMapInfo_ReturnValue;                   // 0x0140(0x01E0)()
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0320(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x0321(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A0D[0x2];                                     // 0x0322(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetDungeonId_ReturnValue_2;               // 0x0324(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x032C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0x032D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_OnStartMatchmaking_Result;                // 0x032E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetCurrentMatchmakingState_bExists;       // 0x032F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class USBMatchingGameState*                   CallFunc_GetCurrentMatchmakingState_ReturnValue;   // 0x0330(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsGathered_ReturnValue;                   // 0x0338(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsMatched_ReturnValue;                    // 0x0339(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A0E[0x2];                                     // 0x033A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetGameContentId_ReturnValue;             // 0x033C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x0344(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue_2;        // 0x0345(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0346(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7A0F[0x1];                                     // 0x0347(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0348(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0358(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0359(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7A10[0x6];                                     // 0x035A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0360(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0370(0x0018)()
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x0388(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x0389(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu) == 0x000008, "Wrong alignment on UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu");
static_assert(sizeof(UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu) == 0x000390, "Wrong size on UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu");
static_assert(offsetof(UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu, EntryPoint) == 0x000000, "Member 'UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000004, "Member 'UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000008, "Member 'UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu, CallFunc_IsPlayerIsInBattle_ReturnValue) == 0x000010, "Member 'UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu::CallFunc_IsPlayerIsInBattle_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu, CallFunc_IsDeadHitPoint_self_CastInput) == 0x000018, "Member 'UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu::CallFunc_IsDeadHitPoint_self_CastInput' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu, CallFunc_IsDeadHitPoint_ReturnValue) == 0x000028, "Member 'UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu::CallFunc_IsDeadHitPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu, CallFunc_BooleanAND_ReturnValue) == 0x000029, "Member 'UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu, CallFunc_BooleanAND_ReturnValue_1) == 0x00002A, "Member 'UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu, CallFunc_PlaySE_ReturnValue) == 0x00002C, "Member 'UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu, K2Node_ComponentBoundEvent_DungeonMapInfoArray) == 0x000030, "Member 'UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu::K2Node_ComponentBoundEvent_DungeonMapInfoArray' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu, K2Node_ComponentBoundEvent_bUnlimit) == 0x000040, "Member 'UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu::K2Node_ComponentBoundEvent_bUnlimit' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu, CallFunc_Not_PreBool_ReturnValue) == 0x000041, "Member 'UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu, CallFunc_GetGameInstance_ReturnValue) == 0x000048, "Member 'UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu, K2Node_CreateDelegate_OutputDelegate) == 0x000050, "Member 'UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu, K2Node_DynamicCast_AsBP_Default_Game_Instance) == 0x000060, "Member 'UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu::K2Node_DynamicCast_AsBP_Default_Game_Instance' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu, K2Node_DynamicCast_bSuccess) == 0x000068, "Member 'UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu, K2Node_CustomEvent_MatchedGame) == 0x000070, "Member 'UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu::K2Node_CustomEvent_MatchedGame' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu, CallFunc_GetGameInstance_ReturnValue_1) == 0x000078, "Member 'UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu::CallFunc_GetGameInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu, K2Node_CreateDelegate_OutputDelegate_1) == 0x000080, "Member 'UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu, K2Node_DynamicCast_AsBP_Default_Game_Instance_1) == 0x000090, "Member 'UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu::K2Node_DynamicCast_AsBP_Default_Game_Instance_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu, K2Node_DynamicCast_bSuccess_1) == 0x000098, "Member 'UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu, CallFunc_IsVisible_ReturnValue) == 0x000099, "Member 'UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu, CallFunc_GetCurrentWidget_ReturnValue) == 0x0000A0, "Member 'UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu::CallFunc_GetCurrentWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu, CallFunc_GetCurrentWidget_ReturnValue_1) == 0x0000A8, "Member 'UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu::CallFunc_GetCurrentWidget_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu, CallFunc_GetMasterDataManager_IsValid) == 0x0000B0, "Member 'UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu, CallFunc_GetMasterDataManager_ReturnValue) == 0x0000B8, "Member 'UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu, CallFunc_PlayAnimation_ReturnValue) == 0x0000C0, "Member 'UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu, CallFunc_PlayAnimation_ReturnValue_1) == 0x0000C8, "Member 'UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu, K2Node_ComponentBoundEvent_DungeonSupply_1) == 0x0000D0, "Member 'UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu::K2Node_ComponentBoundEvent_DungeonSupply_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu, K2Node_CustomEvent_Sender) == 0x0000D8, "Member 'UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu::K2Node_CustomEvent_Sender' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu, K2Node_ComponentBoundEvent_DungeonSupply) == 0x0000E0, "Member 'UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu::K2Node_ComponentBoundEvent_DungeonSupply' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu, CallFunc_GetSBPlayerController_ReturnValue) == 0x0000E8, "Member 'UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu, CallFunc_GetMailComponent_ReturnValue) == 0x0000F0, "Member 'UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu::CallFunc_GetMailComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu, CallFunc_GetTextFromAsset_ReturnValue) == 0x0000F8, "Member 'UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu, CallFunc_IsRestrictedUsage_ReturnValue) == 0x000108, "Member 'UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu::CallFunc_IsRestrictedUsage_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu, CallFunc_Conv_StringToText_ReturnValue) == 0x000110, "Member 'UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu, CallFunc_Not_PreBool_ReturnValue_1) == 0x000128, "Member 'UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu, CallFunc_GetDungeonId_ReturnValue) == 0x00012C, "Member 'UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu::CallFunc_GetDungeonId_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu, CallFunc_GetDungeonId_ReturnValue_1) == 0x000134, "Member 'UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu::CallFunc_GetDungeonId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu, CallFunc_GetMapInfo_IsExists) == 0x00013C, "Member 'UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu::CallFunc_GetMapInfo_IsExists' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu, CallFunc_GetMapInfo_ReturnValue) == 0x000140, "Member 'UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu::CallFunc_GetMapInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000320, "Member 'UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu, CallFunc_EqualEqual_StrStr_ReturnValue_1) == 0x000321, "Member 'UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu::CallFunc_EqualEqual_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu, CallFunc_GetDungeonId_ReturnValue_2) == 0x000324, "Member 'UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu::CallFunc_GetDungeonId_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu, CallFunc_BooleanOR_ReturnValue) == 0x00032C, "Member 'UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu, CallFunc_EqualEqual_NameName_ReturnValue_1) == 0x00032D, "Member 'UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu::CallFunc_EqualEqual_NameName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu, CallFunc_OnStartMatchmaking_Result) == 0x00032E, "Member 'UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu::CallFunc_OnStartMatchmaking_Result' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu, CallFunc_GetCurrentMatchmakingState_bExists) == 0x00032F, "Member 'UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu::CallFunc_GetCurrentMatchmakingState_bExists' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu, CallFunc_GetCurrentMatchmakingState_ReturnValue) == 0x000330, "Member 'UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu::CallFunc_GetCurrentMatchmakingState_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu, CallFunc_IsGathered_ReturnValue) == 0x000338, "Member 'UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu::CallFunc_IsGathered_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu, CallFunc_IsMatched_ReturnValue) == 0x000339, "Member 'UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu::CallFunc_IsMatched_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu, CallFunc_GetGameContentId_ReturnValue) == 0x00033C, "Member 'UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu::CallFunc_GetGameContentId_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu, CallFunc_BooleanAND_ReturnValue_2) == 0x000344, "Member 'UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu, CallFunc_EqualEqual_NameName_ReturnValue_2) == 0x000345, "Member 'UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu::CallFunc_EqualEqual_NameName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu, CallFunc_MakeLiteralByte_ReturnValue) == 0x000346, "Member 'UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu, K2Node_CreateDelegate_OutputDelegate_2) == 0x000348, "Member 'UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000358, "Member 'UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000359, "Member 'UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000360, "Member 'UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000370, "Member 'UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x000388, "Member 'UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu, CallFunc_Not_PreBool_ReturnValue_2) == 0x000389, "Member 'UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");

// Function UMG_MatchingMenu.UMG_MatchingMenu_C.BndEvt__UMG_MatchingMenu_MainWindow_K2Node_ComponentBoundEvent_3_OnClickSupplyIcon__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UMG_MatchingMenu_C_BndEvt__UMG_MatchingMenu_MainWindow_K2Node_ComponentBoundEvent_3_OnClickSupplyIcon__DelegateSignature final
{
public:
	struct FSBDungeonSupply                       DungeonSupply;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(UMG_MatchingMenu_C_BndEvt__UMG_MatchingMenu_MainWindow_K2Node_ComponentBoundEvent_3_OnClickSupplyIcon__DelegateSignature) == 0x000004, "Wrong alignment on UMG_MatchingMenu_C_BndEvt__UMG_MatchingMenu_MainWindow_K2Node_ComponentBoundEvent_3_OnClickSupplyIcon__DelegateSignature");
static_assert(sizeof(UMG_MatchingMenu_C_BndEvt__UMG_MatchingMenu_MainWindow_K2Node_ComponentBoundEvent_3_OnClickSupplyIcon__DelegateSignature) == 0x000008, "Wrong size on UMG_MatchingMenu_C_BndEvt__UMG_MatchingMenu_MainWindow_K2Node_ComponentBoundEvent_3_OnClickSupplyIcon__DelegateSignature");
static_assert(offsetof(UMG_MatchingMenu_C_BndEvt__UMG_MatchingMenu_MainWindow_K2Node_ComponentBoundEvent_3_OnClickSupplyIcon__DelegateSignature, DungeonSupply) == 0x000000, "Member 'UMG_MatchingMenu_C_BndEvt__UMG_MatchingMenu_MainWindow_K2Node_ComponentBoundEvent_3_OnClickSupplyIcon__DelegateSignature::DungeonSupply' has a wrong offset!");

// Function UMG_MatchingMenu.UMG_MatchingMenu_C.OnCloseDetailMenu
// 0x0008 (0x0008 - 0x0000)
struct UMG_MatchingMenu_C_OnCloseDetailMenu final
{
public:
	class UUMG_ProductDetailMenu_C*               Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MatchingMenu_C_OnCloseDetailMenu) == 0x000008, "Wrong alignment on UMG_MatchingMenu_C_OnCloseDetailMenu");
static_assert(sizeof(UMG_MatchingMenu_C_OnCloseDetailMenu) == 0x000008, "Wrong size on UMG_MatchingMenu_C_OnCloseDetailMenu");
static_assert(offsetof(UMG_MatchingMenu_C_OnCloseDetailMenu, Sender) == 0x000000, "Member 'UMG_MatchingMenu_C_OnCloseDetailMenu::Sender' has a wrong offset!");

// Function UMG_MatchingMenu.UMG_MatchingMenu_C.BndEvt__UMG_MatchingMenu_UMG_MatchingMenu_AfterApplying_K2Node_ComponentBoundEvent_1_OnClickSupplyIcon__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UMG_MatchingMenu_C_BndEvt__UMG_MatchingMenu_UMG_MatchingMenu_AfterApplying_K2Node_ComponentBoundEvent_1_OnClickSupplyIcon__DelegateSignature final
{
public:
	struct FSBDungeonSupply                       DungeonSupply;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(UMG_MatchingMenu_C_BndEvt__UMG_MatchingMenu_UMG_MatchingMenu_AfterApplying_K2Node_ComponentBoundEvent_1_OnClickSupplyIcon__DelegateSignature) == 0x000004, "Wrong alignment on UMG_MatchingMenu_C_BndEvt__UMG_MatchingMenu_UMG_MatchingMenu_AfterApplying_K2Node_ComponentBoundEvent_1_OnClickSupplyIcon__DelegateSignature");
static_assert(sizeof(UMG_MatchingMenu_C_BndEvt__UMG_MatchingMenu_UMG_MatchingMenu_AfterApplying_K2Node_ComponentBoundEvent_1_OnClickSupplyIcon__DelegateSignature) == 0x000008, "Wrong size on UMG_MatchingMenu_C_BndEvt__UMG_MatchingMenu_UMG_MatchingMenu_AfterApplying_K2Node_ComponentBoundEvent_1_OnClickSupplyIcon__DelegateSignature");
static_assert(offsetof(UMG_MatchingMenu_C_BndEvt__UMG_MatchingMenu_UMG_MatchingMenu_AfterApplying_K2Node_ComponentBoundEvent_1_OnClickSupplyIcon__DelegateSignature, DungeonSupply) == 0x000000, "Member 'UMG_MatchingMenu_C_BndEvt__UMG_MatchingMenu_UMG_MatchingMenu_AfterApplying_K2Node_ComponentBoundEvent_1_OnClickSupplyIcon__DelegateSignature::DungeonSupply' has a wrong offset!");

// Function UMG_MatchingMenu.UMG_MatchingMenu_C.OnMatchedGame_Event
// 0x0008 (0x0008 - 0x0000)
struct UMG_MatchingMenu_C_OnMatchedGame_Event final
{
public:
	class USBMatchingGameState*                   MatchedGame;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MatchingMenu_C_OnMatchedGame_Event) == 0x000008, "Wrong alignment on UMG_MatchingMenu_C_OnMatchedGame_Event");
static_assert(sizeof(UMG_MatchingMenu_C_OnMatchedGame_Event) == 0x000008, "Wrong size on UMG_MatchingMenu_C_OnMatchedGame_Event");
static_assert(offsetof(UMG_MatchingMenu_C_OnMatchedGame_Event, MatchedGame) == 0x000000, "Member 'UMG_MatchingMenu_C_OnMatchedGame_Event::MatchedGame' has a wrong offset!");

// Function UMG_MatchingMenu.UMG_MatchingMenu_C.BndEvt__MatchingMenuMain_K2Node_ComponentBoundEvent_46_OnStartMatchmaking__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct UMG_MatchingMenu_C_BndEvt__MatchingMenuMain_K2Node_ComponentBoundEvent_46_OnStartMatchmaking__DelegateSignature final
{
public:
	TArray<struct FSBMapInfo>                     DungeonMapInfoArray;                               // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          bUnlimit;                                          // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_MatchingMenu_C_BndEvt__MatchingMenuMain_K2Node_ComponentBoundEvent_46_OnStartMatchmaking__DelegateSignature) == 0x000008, "Wrong alignment on UMG_MatchingMenu_C_BndEvt__MatchingMenuMain_K2Node_ComponentBoundEvent_46_OnStartMatchmaking__DelegateSignature");
static_assert(sizeof(UMG_MatchingMenu_C_BndEvt__MatchingMenuMain_K2Node_ComponentBoundEvent_46_OnStartMatchmaking__DelegateSignature) == 0x000018, "Wrong size on UMG_MatchingMenu_C_BndEvt__MatchingMenuMain_K2Node_ComponentBoundEvent_46_OnStartMatchmaking__DelegateSignature");
static_assert(offsetof(UMG_MatchingMenu_C_BndEvt__MatchingMenuMain_K2Node_ComponentBoundEvent_46_OnStartMatchmaking__DelegateSignature, DungeonMapInfoArray) == 0x000000, "Member 'UMG_MatchingMenu_C_BndEvt__MatchingMenuMain_K2Node_ComponentBoundEvent_46_OnStartMatchmaking__DelegateSignature::DungeonMapInfoArray' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_BndEvt__MatchingMenuMain_K2Node_ComponentBoundEvent_46_OnStartMatchmaking__DelegateSignature, bUnlimit) == 0x000010, "Member 'UMG_MatchingMenu_C_BndEvt__MatchingMenuMain_K2Node_ComponentBoundEvent_46_OnStartMatchmaking__DelegateSignature::bUnlimit' has a wrong offset!");

// Function UMG_MatchingMenu.UMG_MatchingMenu_C.SetWindowState
// 0x0040 (0x0040 - 0x0000)
struct UMG_MatchingMenu_C_SetWindowState final
{
public:
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue_1;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetCurrentGameContentId_ReturnValue;      // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetGameContentIdPartyMemberIsParticipatingIn_ReturnValue; // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetDungeonId_ReturnValue;                 // 0x0018(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetSomeOfPartyMemberIsInMissionResult_ReturnValue; // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue_1;          // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A11[0x2];                                     // 0x0026(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PlaySE_ReturnValue_2;                     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCurrentMatchmakingState_bExists;       // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A12[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMatchingGameState*                   CallFunc_GetCurrentMatchmakingState_ReturnValue;   // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsGathered_ReturnValue;                   // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsMatched_ReturnValue;                    // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_MatchingMenu_C_SetWindowState) == 0x000008, "Wrong alignment on UMG_MatchingMenu_C_SetWindowState");
static_assert(sizeof(UMG_MatchingMenu_C_SetWindowState) == 0x000040, "Wrong size on UMG_MatchingMenu_C_SetWindowState");
static_assert(offsetof(UMG_MatchingMenu_C_SetWindowState, CallFunc_PlaySE_ReturnValue) == 0x000000, "Member 'UMG_MatchingMenu_C_SetWindowState::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_SetWindowState, CallFunc_PlaySE_ReturnValue_1) == 0x000004, "Member 'UMG_MatchingMenu_C_SetWindowState::CallFunc_PlaySE_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_SetWindowState, CallFunc_GetCurrentGameContentId_ReturnValue) == 0x000008, "Member 'UMG_MatchingMenu_C_SetWindowState::CallFunc_GetCurrentGameContentId_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_SetWindowState, CallFunc_GetGameContentIdPartyMemberIsParticipatingIn_ReturnValue) == 0x000010, "Member 'UMG_MatchingMenu_C_SetWindowState::CallFunc_GetGameContentIdPartyMemberIsParticipatingIn_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_SetWindowState, CallFunc_GetDungeonId_ReturnValue) == 0x000018, "Member 'UMG_MatchingMenu_C_SetWindowState::CallFunc_GetDungeonId_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_SetWindowState, CallFunc_GetSomeOfPartyMemberIsInMissionResult_ReturnValue) == 0x000020, "Member 'UMG_MatchingMenu_C_SetWindowState::CallFunc_GetSomeOfPartyMemberIsInMissionResult_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_SetWindowState, CallFunc_NotEqual_NameName_ReturnValue) == 0x000021, "Member 'UMG_MatchingMenu_C_SetWindowState::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_SetWindowState, CallFunc_Not_PreBool_ReturnValue) == 0x000022, "Member 'UMG_MatchingMenu_C_SetWindowState::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_SetWindowState, CallFunc_NotEqual_NameName_ReturnValue_1) == 0x000023, "Member 'UMG_MatchingMenu_C_SetWindowState::CallFunc_NotEqual_NameName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_SetWindowState, CallFunc_BooleanAND_ReturnValue) == 0x000024, "Member 'UMG_MatchingMenu_C_SetWindowState::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_SetWindowState, CallFunc_BooleanAND_ReturnValue_1) == 0x000025, "Member 'UMG_MatchingMenu_C_SetWindowState::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_SetWindowState, CallFunc_PlaySE_ReturnValue_2) == 0x000028, "Member 'UMG_MatchingMenu_C_SetWindowState::CallFunc_PlaySE_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_SetWindowState, CallFunc_GetCurrentMatchmakingState_bExists) == 0x00002C, "Member 'UMG_MatchingMenu_C_SetWindowState::CallFunc_GetCurrentMatchmakingState_bExists' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_SetWindowState, CallFunc_GetCurrentMatchmakingState_ReturnValue) == 0x000030, "Member 'UMG_MatchingMenu_C_SetWindowState::CallFunc_GetCurrentMatchmakingState_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_SetWindowState, CallFunc_IsGathered_ReturnValue) == 0x000038, "Member 'UMG_MatchingMenu_C_SetWindowState::CallFunc_IsGathered_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_SetWindowState, CallFunc_IsMatched_ReturnValue) == 0x000039, "Member 'UMG_MatchingMenu_C_SetWindowState::CallFunc_IsMatched_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_SetWindowState, CallFunc_BooleanAND_ReturnValue_2) == 0x00003A, "Member 'UMG_MatchingMenu_C_SetWindowState::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");

// Function UMG_MatchingMenu.UMG_MatchingMenu_C.GetCurrentWidget
// 0x0018 (0x0018 - 0x0000)
struct UMG_MatchingMenu_C_GetCurrentWidget final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A13[0x6];                                     // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_Select_Default;                             // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MatchingMenu_C_GetCurrentWidget) == 0x000008, "Wrong alignment on UMG_MatchingMenu_C_GetCurrentWidget");
static_assert(sizeof(UMG_MatchingMenu_C_GetCurrentWidget) == 0x000018, "Wrong size on UMG_MatchingMenu_C_GetCurrentWidget");
static_assert(offsetof(UMG_MatchingMenu_C_GetCurrentWidget, ReturnValue) == 0x000000, "Member 'UMG_MatchingMenu_C_GetCurrentWidget::ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_GetCurrentWidget, Temp_bool_Variable) == 0x000008, "Member 'UMG_MatchingMenu_C_GetCurrentWidget::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_GetCurrentWidget, CallFunc_IsVisible_ReturnValue) == 0x000009, "Member 'UMG_MatchingMenu_C_GetCurrentWidget::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_GetCurrentWidget, K2Node_Select_Default) == 0x000010, "Member 'UMG_MatchingMenu_C_GetCurrentWidget::K2Node_Select_Default' has a wrong offset!");

// Function UMG_MatchingMenu.UMG_MatchingMenu_C.OnClickSupplyIcon
// 0x0038 (0x0038 - 0x0000)
struct UMG_MatchingMenu_C_OnClickSupplyIcon final
{
public:
	struct FSBDungeonSupply                       DungeonSupply;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A14[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UUMG_ProductDetailMenu_C* Sender)> K2Node_CreateDelegate_OutputDelegate;              // 0x000C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_7A15[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_ProductDetailMenu_C*               CallFunc_Create_ReturnValue;                       // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MatchingMenu_C_OnClickSupplyIcon) == 0x000008, "Wrong alignment on UMG_MatchingMenu_C_OnClickSupplyIcon");
static_assert(sizeof(UMG_MatchingMenu_C_OnClickSupplyIcon) == 0x000038, "Wrong size on UMG_MatchingMenu_C_OnClickSupplyIcon");
static_assert(offsetof(UMG_MatchingMenu_C_OnClickSupplyIcon, DungeonSupply) == 0x000000, "Member 'UMG_MatchingMenu_C_OnClickSupplyIcon::DungeonSupply' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_OnClickSupplyIcon, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'UMG_MatchingMenu_C_OnClickSupplyIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_OnClickSupplyIcon, K2Node_CreateDelegate_OutputDelegate) == 0x00000C, "Member 'UMG_MatchingMenu_C_OnClickSupplyIcon::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_OnClickSupplyIcon, CallFunc_GetOwningPlayer_ReturnValue) == 0x000020, "Member 'UMG_MatchingMenu_C_OnClickSupplyIcon::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_OnClickSupplyIcon, CallFunc_Create_ReturnValue) == 0x000028, "Member 'UMG_MatchingMenu_C_OnClickSupplyIcon::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_C_OnClickSupplyIcon, CallFunc_AddChildToCanvas_ReturnValue) == 0x000030, "Member 'UMG_MatchingMenu_C_OnClickSupplyIcon::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");

}

