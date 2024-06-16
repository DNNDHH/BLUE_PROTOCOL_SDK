#pragma once

 

// Package: MiniMapIcons

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function MiniMapIcons.MiniMapIcons_C.ExecuteUbergraph_MiniMapIcons
// 0x05B8 (0x05B8 - 0x0000)
struct MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 InRetCode, bool bInIsExpiredStickerWeapons, TArray<class FString>& InExpiredStickerWeaponUniqueIds, struct FSBExpiredEquipmentData& InDirtyExpiredEquipmentData)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool Result)>                  K2Node_CreateDelegate_OutputDelegate_2;            // 0x0024(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool bWasSuccessful)>          K2Node_CreateDelegate_OutputDelegate_3;            // 0x0034(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_4;            // 0x0044(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_5;            // 0x0054(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_CustomEvent_Result_4;                       // 0x0064(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBMapErrorCode                               K2Node_CustomEvent_ErrorCode_1;                    // 0x0065(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_715B[0x2];                                     // 0x0066(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_715C[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_DefaultGameInstance_C*              K2Node_DynamicCast_AsBP_Default_Game_Instance;     // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_715D[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue_1;            // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMiniMapIconPartyMember_C*              K2Node_CustomEvent_PartyMember_2;                  // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_DefaultGameInstance_C*              K2Node_DynamicCast_AsBP_Default_Game_Instance_1;   // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_715E[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMiniMapIconPartyMember_C*              K2Node_CustomEvent_PartyMember_1;                  // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMiniMapIconPartyMember_C*              K2Node_CustomEvent_PartyMember;                    // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsDead;                         // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_715F[0x7];                                     // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Result_3;                       // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EAcceptedQuestErrorCode                       K2Node_CustomEvent_ErrorCode;                      // 0x00D9(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7160[0x2];                                     // 0x00DA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_RetCode_2;                      // 0x00DC(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAcceptedQuestInfo                     K2Node_CustomEvent_AcceptedQuestInfo;              // 0x00E0(0x0060)(ConstParm)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_1;        // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_Result_2;                       // 0x0149(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7161[0x2];                                     // 0x014A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_QuestIndex_1;                   // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_RetCode_1;                      // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_QuestIndex;                     // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EQuestCompleteResult                          K2Node_CustomEvent_CompleteResult;                 // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7162[0x7];                                     // 0x0159(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMailRewardData                      K2Node_CustomEvent_MailRewardData;                 // 0x0160(0x0180)(ConstParm)
	bool                                          K2Node_CustomEvent_Result_1;                       // 0x02E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7163[0x3];                                     // 0x02E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_RetCode;                        // 0x02E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAcceptedQuestInfo                     K2Node_CustomEvent_PrevAcceptedQuestInfo;          // 0x02E8(0x0060)(ConstParm)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x0348(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7164[0x7];                                     // 0x0349(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0350(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_2;        // 0x0358(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBCharacterData*                       CallFunc_GetCharacterData_ReturnValue;             // 0x0360(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_2;        // 0x0368(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x0370(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBMiniMapIconType                            Temp_byte_Variable;                                // 0x0371(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7165[0x2];                                     // 0x0372(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UMiniMapIconPartyMember_C* PartyMember, bool IsDead)> K2Node_CreateDelegate_OutputDelegate_6;            // 0x0374(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_7166[0x4];                                     // 0x0384(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FUnlockedQuestInfo>             K2Node_CustomEvent_QuestList;                      // 0x0388(0x0010)(ConstParm, ReferenceParm)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_3;        // 0x0398(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_3;        // 0x03A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_5;                     // 0x03A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetNetworkDataCache_IsValid_1;            // 0x03A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7167[0x6];                                     // 0x03AA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue_1;        // 0x03B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBCharacterData*                       CallFunc_GetCharacterData_ReturnValue_1;           // 0x03B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InRetCode;                      // 0x03C0(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bInIsExpiredStickerWeapons;     // 0x03C4(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7168[0x3];                                     // 0x03C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         K2Node_CustomEvent_InExpiredStickerWeaponUniqueIds; // 0x03C8(0x0010)(ConstParm, ReferenceParm)
	struct FSBExpiredEquipmentData                K2Node_CustomEvent_InDirtyExpiredEquipmentData;    // 0x03D8(0x0130)(ConstParm)
	ESBMiniMapIconType                            Temp_byte_Variable_1;                              // 0x0508(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0509(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBMiniMapIconType                            K2Node_Select_Default;                             // 0x050A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7169[0x1];                                     // 0x050B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_7;            // 0x050C(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_GetMiniMapIconZOrder_ReturnValue;         // 0x051C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_setZOrder_CheckLog_ReturnValue;           // 0x0520(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_Result;                         // 0x0521(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_716A[0x2];                                     // 0x0522(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool Result, ESBMapErrorCode ErrorCode)> K2Node_CreateDelegate_OutputDelegate_8;            // 0x0524(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_716B[0x4];                                     // 0x0534(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_4;        // 0x0538(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_4;        // 0x0540(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_6;                     // 0x0548(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_716C[0x7];                                     // 0x0549(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerCharacterCommonComponent*      CallFunc_GetPlayerCharacterCommonComponent_ReturnValue; // 0x0550(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_5;        // 0x0558(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_5;        // 0x0560(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_7;                     // 0x0568(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bWasSuccessful;                 // 0x0569(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_716D[0x6];                                     // 0x056A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerCharacterCommonComponent*      CallFunc_GetPlayerCharacterCommonComponent_ReturnValue_1; // 0x0570(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue;             // 0x0578(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_1;           // 0x0580(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Sender;                         // 0x0588(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param;                          // 0x0590(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBGameInstance*                        CallFunc_GetSBGameInstance_ReturnValue;            // 0x0598(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBFieldObjectManager*                  CallFunc_GetFieldObjectManager_ReturnValue;        // 0x05A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBGameInstance*                        CallFunc_GetSBGameInstance_ReturnValue_1;          // 0x05A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBFieldObjectManager*                  CallFunc_GetFieldObjectManager_ReturnValue_1;      // 0x05B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons) == 0x000008, "Wrong alignment on MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons");
static_assert(sizeof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons) == 0x0005B8, "Wrong size on MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, EntryPoint) == 0x000000, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::EntryPoint' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, K2Node_CreateDelegate_OutputDelegate_2) == 0x000024, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, K2Node_CreateDelegate_OutputDelegate_3) == 0x000034, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, K2Node_CreateDelegate_OutputDelegate_4) == 0x000044, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, K2Node_CreateDelegate_OutputDelegate_5) == 0x000054, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, K2Node_CustomEvent_Result_4) == 0x000064, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::K2Node_CustomEvent_Result_4' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, K2Node_CustomEvent_ErrorCode_1) == 0x000065, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::K2Node_CustomEvent_ErrorCode_1' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, CallFunc_GetPlayerController_ReturnValue) == 0x000068, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000070, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, K2Node_DynamicCast_bSuccess) == 0x000078, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, CallFunc_GetGameInstance_ReturnValue) == 0x000080, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, K2Node_DynamicCast_AsBP_Default_Game_Instance) == 0x000088, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::K2Node_DynamicCast_AsBP_Default_Game_Instance' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, K2Node_DynamicCast_bSuccess_1) == 0x000090, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, CallFunc_GetGameInstance_ReturnValue_1) == 0x000098, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::CallFunc_GetGameInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, K2Node_CustomEvent_PartyMember_2) == 0x0000A0, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::K2Node_CustomEvent_PartyMember_2' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, K2Node_DynamicCast_AsBP_Default_Game_Instance_1) == 0x0000A8, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::K2Node_DynamicCast_AsBP_Default_Game_Instance_1' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, K2Node_DynamicCast_bSuccess_2) == 0x0000B0, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, K2Node_CustomEvent_PartyMember_1) == 0x0000B8, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::K2Node_CustomEvent_PartyMember_1' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, K2Node_CustomEvent_PartyMember) == 0x0000C0, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::K2Node_CustomEvent_PartyMember' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, K2Node_CustomEvent_IsDead) == 0x0000C8, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::K2Node_CustomEvent_IsDead' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, CallFunc_GetPlayerController_ReturnValue_1) == 0x0000D0, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, K2Node_CustomEvent_Result_3) == 0x0000D8, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::K2Node_CustomEvent_Result_3' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, K2Node_CustomEvent_ErrorCode) == 0x0000D9, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::K2Node_CustomEvent_ErrorCode' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, K2Node_CustomEvent_RetCode_2) == 0x0000DC, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::K2Node_CustomEvent_RetCode_2' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, K2Node_CustomEvent_AcceptedQuestInfo) == 0x0000E0, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::K2Node_CustomEvent_AcceptedQuestInfo' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, K2Node_DynamicCast_AsSBPlayer_Controller_1) == 0x000140, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::K2Node_DynamicCast_AsSBPlayer_Controller_1' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, K2Node_DynamicCast_bSuccess_3) == 0x000148, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, K2Node_CustomEvent_Result_2) == 0x000149, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::K2Node_CustomEvent_Result_2' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, K2Node_CustomEvent_QuestIndex_1) == 0x00014C, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::K2Node_CustomEvent_QuestIndex_1' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, K2Node_CustomEvent_RetCode_1) == 0x000150, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::K2Node_CustomEvent_RetCode_1' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, K2Node_CustomEvent_QuestIndex) == 0x000154, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::K2Node_CustomEvent_QuestIndex' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, K2Node_CustomEvent_CompleteResult) == 0x000158, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::K2Node_CustomEvent_CompleteResult' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, K2Node_CustomEvent_MailRewardData) == 0x000160, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::K2Node_CustomEvent_MailRewardData' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, K2Node_CustomEvent_Result_1) == 0x0002E0, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::K2Node_CustomEvent_Result_1' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, K2Node_CustomEvent_RetCode) == 0x0002E4, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::K2Node_CustomEvent_RetCode' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, K2Node_CustomEvent_PrevAcceptedQuestInfo) == 0x0002E8, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::K2Node_CustomEvent_PrevAcceptedQuestInfo' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, CallFunc_GetNetworkDataCache_IsValid) == 0x000348, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000350, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, CallFunc_GetPlayerController_ReturnValue_2) == 0x000358, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::CallFunc_GetPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, CallFunc_GetCharacterData_ReturnValue) == 0x000360, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::CallFunc_GetCharacterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, K2Node_DynamicCast_AsSBPlayer_Controller_2) == 0x000368, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::K2Node_DynamicCast_AsSBPlayer_Controller_2' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, K2Node_DynamicCast_bSuccess_4) == 0x000370, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, Temp_byte_Variable) == 0x000371, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, K2Node_CreateDelegate_OutputDelegate_6) == 0x000374, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, K2Node_CustomEvent_QuestList) == 0x000388, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::K2Node_CustomEvent_QuestList' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, CallFunc_GetPlayerController_ReturnValue_3) == 0x000398, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::CallFunc_GetPlayerController_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, K2Node_DynamicCast_AsSBPlayer_Controller_3) == 0x0003A0, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::K2Node_DynamicCast_AsSBPlayer_Controller_3' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, K2Node_DynamicCast_bSuccess_5) == 0x0003A8, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, CallFunc_GetNetworkDataCache_IsValid_1) == 0x0003A9, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::CallFunc_GetNetworkDataCache_IsValid_1' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, CallFunc_GetNetworkDataCache_ReturnValue_1) == 0x0003B0, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::CallFunc_GetNetworkDataCache_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, CallFunc_GetCharacterData_ReturnValue_1) == 0x0003B8, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::CallFunc_GetCharacterData_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, K2Node_CustomEvent_InRetCode) == 0x0003C0, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::K2Node_CustomEvent_InRetCode' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, K2Node_CustomEvent_bInIsExpiredStickerWeapons) == 0x0003C4, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::K2Node_CustomEvent_bInIsExpiredStickerWeapons' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, K2Node_CustomEvent_InExpiredStickerWeaponUniqueIds) == 0x0003C8, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::K2Node_CustomEvent_InExpiredStickerWeaponUniqueIds' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, K2Node_CustomEvent_InDirtyExpiredEquipmentData) == 0x0003D8, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::K2Node_CustomEvent_InDirtyExpiredEquipmentData' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, Temp_byte_Variable_1) == 0x000508, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, Temp_bool_Variable) == 0x000509, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, K2Node_Select_Default) == 0x00050A, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, K2Node_CreateDelegate_OutputDelegate_7) == 0x00050C, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, CallFunc_GetMiniMapIconZOrder_ReturnValue) == 0x00051C, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::CallFunc_GetMiniMapIconZOrder_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, CallFunc_setZOrder_CheckLog_ReturnValue) == 0x000520, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::CallFunc_setZOrder_CheckLog_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, K2Node_CustomEvent_Result) == 0x000521, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, K2Node_CreateDelegate_OutputDelegate_8) == 0x000524, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, CallFunc_GetPlayerController_ReturnValue_4) == 0x000538, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::CallFunc_GetPlayerController_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, K2Node_DynamicCast_AsSBPlayer_Controller_4) == 0x000540, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::K2Node_DynamicCast_AsSBPlayer_Controller_4' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, K2Node_DynamicCast_bSuccess_6) == 0x000548, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::K2Node_DynamicCast_bSuccess_6' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, CallFunc_GetPlayerCharacterCommonComponent_ReturnValue) == 0x000550, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::CallFunc_GetPlayerCharacterCommonComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, CallFunc_GetPlayerController_ReturnValue_5) == 0x000558, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::CallFunc_GetPlayerController_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, K2Node_DynamicCast_AsSBPlayer_Controller_5) == 0x000560, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::K2Node_DynamicCast_AsSBPlayer_Controller_5' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, K2Node_DynamicCast_bSuccess_7) == 0x000568, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::K2Node_DynamicCast_bSuccess_7' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, K2Node_CustomEvent_bWasSuccessful) == 0x000569, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::K2Node_CustomEvent_bWasSuccessful' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, CallFunc_GetPlayerCharacterCommonComponent_ReturnValue_1) == 0x000570, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::CallFunc_GetPlayerCharacterCommonComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, CallFunc_GetEventExecutor_ReturnValue) == 0x000578, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::CallFunc_GetEventExecutor_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, CallFunc_GetEventExecutor_ReturnValue_1) == 0x000580, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::CallFunc_GetEventExecutor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, K2Node_CustomEvent_Sender) == 0x000588, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::K2Node_CustomEvent_Sender' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, K2Node_CustomEvent_Param) == 0x000590, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::K2Node_CustomEvent_Param' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, CallFunc_GetSBGameInstance_ReturnValue) == 0x000598, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::CallFunc_GetSBGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, CallFunc_GetFieldObjectManager_ReturnValue) == 0x0005A0, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::CallFunc_GetFieldObjectManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, CallFunc_GetSBGameInstance_ReturnValue_1) == 0x0005A8, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::CallFunc_GetSBGameInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons, CallFunc_GetFieldObjectManager_ReturnValue_1) == 0x0005B0, "Member 'MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons::CallFunc_GetFieldObjectManager_ReturnValue_1' has a wrong offset!");

// Function MiniMapIcons.MiniMapIcons_C.CustomEvent_2
// 0x0010 (0x0010 - 0x0000)
struct MiniMapIcons_C_CustomEvent_2 final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MiniMapIcons_C_CustomEvent_2) == 0x000008, "Wrong alignment on MiniMapIcons_C_CustomEvent_2");
static_assert(sizeof(MiniMapIcons_C_CustomEvent_2) == 0x000010, "Wrong size on MiniMapIcons_C_CustomEvent_2");
static_assert(offsetof(MiniMapIcons_C_CustomEvent_2, Sender) == 0x000000, "Member 'MiniMapIcons_C_CustomEvent_2::Sender' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_CustomEvent_2, Param) == 0x000008, "Member 'MiniMapIcons_C_CustomEvent_2::Param' has a wrong offset!");

// Function MiniMapIcons.MiniMapIcons_C.OnSaveQuestCheckList
// 0x0001 (0x0001 - 0x0000)
struct MiniMapIcons_C_OnSaveQuestCheckList final
{
public:
	bool                                          bWasSuccessful;                                    // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MiniMapIcons_C_OnSaveQuestCheckList) == 0x000001, "Wrong alignment on MiniMapIcons_C_OnSaveQuestCheckList");
static_assert(sizeof(MiniMapIcons_C_OnSaveQuestCheckList) == 0x000001, "Wrong size on MiniMapIcons_C_OnSaveQuestCheckList");
static_assert(offsetof(MiniMapIcons_C_OnSaveQuestCheckList, bWasSuccessful) == 0x000000, "Member 'MiniMapIcons_C_OnSaveQuestCheckList::bWasSuccessful' has a wrong offset!");

// Function MiniMapIcons.MiniMapIcons_C.OnGetMyCharacterInfo_Event_0
// 0x0001 (0x0001 - 0x0000)
struct MiniMapIcons_C_OnGetMyCharacterInfo_Event_0 final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MiniMapIcons_C_OnGetMyCharacterInfo_Event_0) == 0x000001, "Wrong alignment on MiniMapIcons_C_OnGetMyCharacterInfo_Event_0");
static_assert(sizeof(MiniMapIcons_C_OnGetMyCharacterInfo_Event_0) == 0x000001, "Wrong size on MiniMapIcons_C_OnGetMyCharacterInfo_Event_0");
static_assert(offsetof(MiniMapIcons_C_OnGetMyCharacterInfo_Event_0, Result) == 0x000000, "Member 'MiniMapIcons_C_OnGetMyCharacterInfo_Event_0::Result' has a wrong offset!");

// Function MiniMapIcons.MiniMapIcons_C.OnClassChangeNotify_Event_0
// 0x0148 (0x0148 - 0x0000)
struct MiniMapIcons_C_OnClassChangeNotify_Event_0 final
{
public:
	int32                                         InRetCode;                                         // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInIsExpiredStickerWeapons;                        // 0x0004(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_716E[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         InExpiredStickerWeaponUniqueIds;                   // 0x0008(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FSBExpiredEquipmentData                InDirtyExpiredEquipmentData;                       // 0x0018(0x0130)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(MiniMapIcons_C_OnClassChangeNotify_Event_0) == 0x000008, "Wrong alignment on MiniMapIcons_C_OnClassChangeNotify_Event_0");
static_assert(sizeof(MiniMapIcons_C_OnClassChangeNotify_Event_0) == 0x000148, "Wrong size on MiniMapIcons_C_OnClassChangeNotify_Event_0");
static_assert(offsetof(MiniMapIcons_C_OnClassChangeNotify_Event_0, InRetCode) == 0x000000, "Member 'MiniMapIcons_C_OnClassChangeNotify_Event_0::InRetCode' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnClassChangeNotify_Event_0, bInIsExpiredStickerWeapons) == 0x000004, "Member 'MiniMapIcons_C_OnClassChangeNotify_Event_0::bInIsExpiredStickerWeapons' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnClassChangeNotify_Event_0, InExpiredStickerWeaponUniqueIds) == 0x000008, "Member 'MiniMapIcons_C_OnClassChangeNotify_Event_0::InExpiredStickerWeaponUniqueIds' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnClassChangeNotify_Event_0, InDirtyExpiredEquipmentData) == 0x000018, "Member 'MiniMapIcons_C_OnClassChangeNotify_Event_0::InDirtyExpiredEquipmentData' has a wrong offset!");

// Function MiniMapIcons.MiniMapIcons_C.OnQuestListDelegete_Event_0
// 0x0010 (0x0010 - 0x0000)
struct MiniMapIcons_C_OnQuestListDelegete_Event_0 final
{
public:
	TArray<struct FUnlockedQuestInfo>             QuestList;                                         // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(MiniMapIcons_C_OnQuestListDelegete_Event_0) == 0x000008, "Wrong alignment on MiniMapIcons_C_OnQuestListDelegete_Event_0");
static_assert(sizeof(MiniMapIcons_C_OnQuestListDelegete_Event_0) == 0x000010, "Wrong size on MiniMapIcons_C_OnQuestListDelegete_Event_0");
static_assert(offsetof(MiniMapIcons_C_OnQuestListDelegete_Event_0, QuestList) == 0x000000, "Member 'MiniMapIcons_C_OnQuestListDelegete_Event_0::QuestList' has a wrong offset!");

// Function MiniMapIcons.MiniMapIcons_C.OnUpdateQuestProgressDelegate_Event_0
// 0x0068 (0x0068 - 0x0000)
struct MiniMapIcons_C_OnUpdateQuestProgressDelegate_Event_0 final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_716F[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         RetCode;                                           // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAcceptedQuestInfo                     PrevAcceptedQuestInfo;                             // 0x0008(0x0060)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(MiniMapIcons_C_OnUpdateQuestProgressDelegate_Event_0) == 0x000008, "Wrong alignment on MiniMapIcons_C_OnUpdateQuestProgressDelegate_Event_0");
static_assert(sizeof(MiniMapIcons_C_OnUpdateQuestProgressDelegate_Event_0) == 0x000068, "Wrong size on MiniMapIcons_C_OnUpdateQuestProgressDelegate_Event_0");
static_assert(offsetof(MiniMapIcons_C_OnUpdateQuestProgressDelegate_Event_0, Result) == 0x000000, "Member 'MiniMapIcons_C_OnUpdateQuestProgressDelegate_Event_0::Result' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnUpdateQuestProgressDelegate_Event_0, RetCode) == 0x000004, "Member 'MiniMapIcons_C_OnUpdateQuestProgressDelegate_Event_0::RetCode' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnUpdateQuestProgressDelegate_Event_0, PrevAcceptedQuestInfo) == 0x000008, "Member 'MiniMapIcons_C_OnUpdateQuestProgressDelegate_Event_0::PrevAcceptedQuestInfo' has a wrong offset!");

// Function MiniMapIcons.MiniMapIcons_C.OnCompleteQuestDelegate_Event_0
// 0x0190 (0x0190 - 0x0000)
struct MiniMapIcons_C_OnCompleteQuestDelegate_Event_0 final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         QuestIndex;                                        // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EQuestCompleteResult                          CompleteResult;                                    // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7170[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMailRewardData                      MailRewardData;                                    // 0x0010(0x0180)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(MiniMapIcons_C_OnCompleteQuestDelegate_Event_0) == 0x000008, "Wrong alignment on MiniMapIcons_C_OnCompleteQuestDelegate_Event_0");
static_assert(sizeof(MiniMapIcons_C_OnCompleteQuestDelegate_Event_0) == 0x000190, "Wrong size on MiniMapIcons_C_OnCompleteQuestDelegate_Event_0");
static_assert(offsetof(MiniMapIcons_C_OnCompleteQuestDelegate_Event_0, RetCode) == 0x000000, "Member 'MiniMapIcons_C_OnCompleteQuestDelegate_Event_0::RetCode' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCompleteQuestDelegate_Event_0, QuestIndex) == 0x000004, "Member 'MiniMapIcons_C_OnCompleteQuestDelegate_Event_0::QuestIndex' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCompleteQuestDelegate_Event_0, CompleteResult) == 0x000008, "Member 'MiniMapIcons_C_OnCompleteQuestDelegate_Event_0::CompleteResult' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCompleteQuestDelegate_Event_0, MailRewardData) == 0x000010, "Member 'MiniMapIcons_C_OnCompleteQuestDelegate_Event_0::MailRewardData' has a wrong offset!");

// Function MiniMapIcons.MiniMapIcons_C.OnCancelQuestDelegate_Event_0
// 0x0008 (0x0008 - 0x0000)
struct MiniMapIcons_C_OnCancelQuestDelegate_Event_0 final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7171[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         QuestIndex;                                        // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MiniMapIcons_C_OnCancelQuestDelegate_Event_0) == 0x000004, "Wrong alignment on MiniMapIcons_C_OnCancelQuestDelegate_Event_0");
static_assert(sizeof(MiniMapIcons_C_OnCancelQuestDelegate_Event_0) == 0x000008, "Wrong size on MiniMapIcons_C_OnCancelQuestDelegate_Event_0");
static_assert(offsetof(MiniMapIcons_C_OnCancelQuestDelegate_Event_0, Result) == 0x000000, "Member 'MiniMapIcons_C_OnCancelQuestDelegate_Event_0::Result' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCancelQuestDelegate_Event_0, QuestIndex) == 0x000004, "Member 'MiniMapIcons_C_OnCancelQuestDelegate_Event_0::QuestIndex' has a wrong offset!");

// Function MiniMapIcons.MiniMapIcons_C.OnAcceptQuestDelegate_Event_0
// 0x0068 (0x0068 - 0x0000)
struct MiniMapIcons_C_OnAcceptQuestDelegate_Event_0 final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	EAcceptedQuestErrorCode                       ErrorCode;                                         // 0x0001(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7172[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         RetCode;                                           // 0x0004(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAcceptedQuestInfo                     AcceptedQuestInfo;                                 // 0x0008(0x0060)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(MiniMapIcons_C_OnAcceptQuestDelegate_Event_0) == 0x000008, "Wrong alignment on MiniMapIcons_C_OnAcceptQuestDelegate_Event_0");
static_assert(sizeof(MiniMapIcons_C_OnAcceptQuestDelegate_Event_0) == 0x000068, "Wrong size on MiniMapIcons_C_OnAcceptQuestDelegate_Event_0");
static_assert(offsetof(MiniMapIcons_C_OnAcceptQuestDelegate_Event_0, Result) == 0x000000, "Member 'MiniMapIcons_C_OnAcceptQuestDelegate_Event_0::Result' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnAcceptQuestDelegate_Event_0, ErrorCode) == 0x000001, "Member 'MiniMapIcons_C_OnAcceptQuestDelegate_Event_0::ErrorCode' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnAcceptQuestDelegate_Event_0, RetCode) == 0x000004, "Member 'MiniMapIcons_C_OnAcceptQuestDelegate_Event_0::RetCode' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnAcceptQuestDelegate_Event_0, AcceptedQuestInfo) == 0x000008, "Member 'MiniMapIcons_C_OnAcceptQuestDelegate_Event_0::AcceptedQuestInfo' has a wrong offset!");

// Function MiniMapIcons.MiniMapIcons_C.CustomEvent_1
// 0x0010 (0x0010 - 0x0000)
struct MiniMapIcons_C_CustomEvent_1 final
{
public:
	class UMiniMapIconPartyMember_C*              PartyMember;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsDead;                                            // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MiniMapIcons_C_CustomEvent_1) == 0x000008, "Wrong alignment on MiniMapIcons_C_CustomEvent_1");
static_assert(sizeof(MiniMapIcons_C_CustomEvent_1) == 0x000010, "Wrong size on MiniMapIcons_C_CustomEvent_1");
static_assert(offsetof(MiniMapIcons_C_CustomEvent_1, PartyMember) == 0x000000, "Member 'MiniMapIcons_C_CustomEvent_1::PartyMember' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_CustomEvent_1, IsDead) == 0x000008, "Member 'MiniMapIcons_C_CustomEvent_1::IsDead' has a wrong offset!");

// Function MiniMapIcons.MiniMapIcons_C.UnbindPartyMemberOnSetDead
// 0x0008 (0x0008 - 0x0000)
struct MiniMapIcons_C_UnbindPartyMemberOnSetDead final
{
public:
	class UMiniMapIconPartyMember_C*              PartyMember;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MiniMapIcons_C_UnbindPartyMemberOnSetDead) == 0x000008, "Wrong alignment on MiniMapIcons_C_UnbindPartyMemberOnSetDead");
static_assert(sizeof(MiniMapIcons_C_UnbindPartyMemberOnSetDead) == 0x000008, "Wrong size on MiniMapIcons_C_UnbindPartyMemberOnSetDead");
static_assert(offsetof(MiniMapIcons_C_UnbindPartyMemberOnSetDead, PartyMember) == 0x000000, "Member 'MiniMapIcons_C_UnbindPartyMemberOnSetDead::PartyMember' has a wrong offset!");

// Function MiniMapIcons.MiniMapIcons_C.BindPartyMemberOnSetDead
// 0x0008 (0x0008 - 0x0000)
struct MiniMapIcons_C_BindPartyMemberOnSetDead final
{
public:
	class UMiniMapIconPartyMember_C*              PartyMember;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MiniMapIcons_C_BindPartyMemberOnSetDead) == 0x000008, "Wrong alignment on MiniMapIcons_C_BindPartyMemberOnSetDead");
static_assert(sizeof(MiniMapIcons_C_BindPartyMemberOnSetDead) == 0x000008, "Wrong size on MiniMapIcons_C_BindPartyMemberOnSetDead");
static_assert(offsetof(MiniMapIcons_C_BindPartyMemberOnSetDead, PartyMember) == 0x000000, "Member 'MiniMapIcons_C_BindPartyMemberOnSetDead::PartyMember' has a wrong offset!");

// Function MiniMapIcons.MiniMapIcons_C.CustomEvent_0
// 0x0002 (0x0002 - 0x0000)
struct MiniMapIcons_C_CustomEvent_0 final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBMapErrorCode                               ErrorCode;                                         // 0x0001(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MiniMapIcons_C_CustomEvent_0) == 0x000001, "Wrong alignment on MiniMapIcons_C_CustomEvent_0");
static_assert(sizeof(MiniMapIcons_C_CustomEvent_0) == 0x000002, "Wrong size on MiniMapIcons_C_CustomEvent_0");
static_assert(offsetof(MiniMapIcons_C_CustomEvent_0, Result) == 0x000000, "Member 'MiniMapIcons_C_CustomEvent_0::Result' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_CustomEvent_0, ErrorCode) == 0x000001, "Member 'MiniMapIcons_C_CustomEvent_0::ErrorCode' has a wrong offset!");

// Function MiniMapIcons.MiniMapIcons_C.AddQuestIcon
// 0x0198 (0x0198 - 0x0000)
struct MiniMapIcons_C_AddQuestIcon final
{
public:
	int32                                         InQuestIndex;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CheckDisplayOutOfRange;                            // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7173[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMiniMapIconQuest*                    SameIcon;                                          // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMiniMapIconQuest_C*                    QuestIcon;                                         // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                WorldLocation;                                     // 0x0018(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsNoClip;                                          // 0x0024(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	EQuestIconType                                QuestType;                                         // 0x0025(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EQuestCategory2                               QuestCategory;                                     // 0x0026(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7174[0x1];                                     // 0x0027(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         QuestIndex;                                        // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7175[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FQuestMasterData                       CallFunc_FindQuestMasterData_QuestMasterData;      // 0x0030(0x0118)()
	bool                                          CallFunc_FindQuestMasterData_Exist;                // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0149(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x014A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsQuestDisableShowIcon_ReturnValue;       // 0x014B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7176[0x4];                                     // 0x014C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMiniMapIconQuest*                    CallFunc_IsTypeQuestIcon_ReturnValue;              // 0x0150(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EQuestIconType                                CallFunc_GetQuestIconType_ReturnValue;             // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0159(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x015A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7177[0x5];                                     // 0x015B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UMiniMapIconQuest_C*                    CallFunc_Create_ReturnValue;                       // 0x0160(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0169(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7178[0x2];                                     // 0x016A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetQuestLocation_WorldLocation;           // 0x016C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetQuestLocation_ReturnValue;             // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsCreatedQuestIcon_ReturnValue;           // 0x0179(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x017A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7179[0x1];                                     // 0x017B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetMiniMapQuestIconZOrder_ReturnValue;    // 0x017C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBMiniMapIconBase*                     CallFunc_AddIcon_IconWidget;                       // 0x0180(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDestinationMap_ReturnValue;             // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_717A[0x3];                                     // 0x0189(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x018C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MiniMapIcons_C_AddQuestIcon) == 0x000008, "Wrong alignment on MiniMapIcons_C_AddQuestIcon");
static_assert(sizeof(MiniMapIcons_C_AddQuestIcon) == 0x000198, "Wrong size on MiniMapIcons_C_AddQuestIcon");
static_assert(offsetof(MiniMapIcons_C_AddQuestIcon, InQuestIndex) == 0x000000, "Member 'MiniMapIcons_C_AddQuestIcon::InQuestIndex' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_AddQuestIcon, CheckDisplayOutOfRange) == 0x000004, "Member 'MiniMapIcons_C_AddQuestIcon::CheckDisplayOutOfRange' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_AddQuestIcon, SameIcon) == 0x000008, "Member 'MiniMapIcons_C_AddQuestIcon::SameIcon' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_AddQuestIcon, QuestIcon) == 0x000010, "Member 'MiniMapIcons_C_AddQuestIcon::QuestIcon' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_AddQuestIcon, WorldLocation) == 0x000018, "Member 'MiniMapIcons_C_AddQuestIcon::WorldLocation' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_AddQuestIcon, IsNoClip) == 0x000024, "Member 'MiniMapIcons_C_AddQuestIcon::IsNoClip' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_AddQuestIcon, QuestType) == 0x000025, "Member 'MiniMapIcons_C_AddQuestIcon::QuestType' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_AddQuestIcon, QuestCategory) == 0x000026, "Member 'MiniMapIcons_C_AddQuestIcon::QuestCategory' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_AddQuestIcon, QuestIndex) == 0x000028, "Member 'MiniMapIcons_C_AddQuestIcon::QuestIndex' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_AddQuestIcon, CallFunc_FindQuestMasterData_QuestMasterData) == 0x000030, "Member 'MiniMapIcons_C_AddQuestIcon::CallFunc_FindQuestMasterData_QuestMasterData' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_AddQuestIcon, CallFunc_FindQuestMasterData_Exist) == 0x000148, "Member 'MiniMapIcons_C_AddQuestIcon::CallFunc_FindQuestMasterData_Exist' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_AddQuestIcon, CallFunc_IsValid_ReturnValue) == 0x000149, "Member 'MiniMapIcons_C_AddQuestIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_AddQuestIcon, CallFunc_EqualEqual_NameName_ReturnValue) == 0x00014A, "Member 'MiniMapIcons_C_AddQuestIcon::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_AddQuestIcon, CallFunc_IsQuestDisableShowIcon_ReturnValue) == 0x00014B, "Member 'MiniMapIcons_C_AddQuestIcon::CallFunc_IsQuestDisableShowIcon_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_AddQuestIcon, CallFunc_IsTypeQuestIcon_ReturnValue) == 0x000150, "Member 'MiniMapIcons_C_AddQuestIcon::CallFunc_IsTypeQuestIcon_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_AddQuestIcon, CallFunc_GetQuestIconType_ReturnValue) == 0x000158, "Member 'MiniMapIcons_C_AddQuestIcon::CallFunc_GetQuestIconType_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_AddQuestIcon, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000159, "Member 'MiniMapIcons_C_AddQuestIcon::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_AddQuestIcon, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x00015A, "Member 'MiniMapIcons_C_AddQuestIcon::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_AddQuestIcon, CallFunc_Create_ReturnValue) == 0x000160, "Member 'MiniMapIcons_C_AddQuestIcon::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_AddQuestIcon, CallFunc_BooleanOR_ReturnValue) == 0x000168, "Member 'MiniMapIcons_C_AddQuestIcon::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_AddQuestIcon, CallFunc_BooleanOR_ReturnValue_1) == 0x000169, "Member 'MiniMapIcons_C_AddQuestIcon::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_AddQuestIcon, CallFunc_GetQuestLocation_WorldLocation) == 0x00016C, "Member 'MiniMapIcons_C_AddQuestIcon::CallFunc_GetQuestLocation_WorldLocation' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_AddQuestIcon, CallFunc_GetQuestLocation_ReturnValue) == 0x000178, "Member 'MiniMapIcons_C_AddQuestIcon::CallFunc_GetQuestLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_AddQuestIcon, CallFunc_IsCreatedQuestIcon_ReturnValue) == 0x000179, "Member 'MiniMapIcons_C_AddQuestIcon::CallFunc_IsCreatedQuestIcon_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_AddQuestIcon, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x00017A, "Member 'MiniMapIcons_C_AddQuestIcon::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_AddQuestIcon, CallFunc_GetMiniMapQuestIconZOrder_ReturnValue) == 0x00017C, "Member 'MiniMapIcons_C_AddQuestIcon::CallFunc_GetMiniMapQuestIconZOrder_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_AddQuestIcon, CallFunc_AddIcon_IconWidget) == 0x000180, "Member 'MiniMapIcons_C_AddQuestIcon::CallFunc_AddIcon_IconWidget' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_AddQuestIcon, CallFunc_IsDestinationMap_ReturnValue) == 0x000188, "Member 'MiniMapIcons_C_AddQuestIcon::CallFunc_IsDestinationMap_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_AddQuestIcon, CallFunc_Array_Add_ReturnValue) == 0x00018C, "Member 'MiniMapIcons_C_AddQuestIcon::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_AddQuestIcon, CallFunc_Not_PreBool_ReturnValue) == 0x000190, "Member 'MiniMapIcons_C_AddQuestIcon::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function MiniMapIcons.MiniMapIcons_C.OnCreateQuestIcon
// 0x0158 (0x0158 - 0x0000)
struct MiniMapIcons_C_OnCreateQuestIcon final
{
public:
	EQuestStatus                                  Status;                                            // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_717B[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         QuestIndex;                                        // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBNetworkDataCache*                    NetworkDataCache;                                  // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_717C[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_2;           // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_3;           // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_4;              // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x00BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EQuestStatus                                  CallFunc_GetQuestStatus_QuestStatus;               // 0x00BB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x00BD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x00BE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_717D[0x1];                                     // 0x00BF(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetLatestMainQuest_ReturnValue;           // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_717E[0x3];                                     // 0x00C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_FindAcceptedQuestIndex_ReturnValue;       // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_717F[0x3];                                     // 0x00CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FUnlockedQuestInfo                     CallFunc_Array_Get_Item;                           // 0x00D0(0x0008)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAcceptedQuestInfo                     CallFunc_Array_Get_Item_1;                         // 0x00E0(0x0060)()
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_3;                // 0x0144(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_4;                // 0x0145(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7180[0x2];                                     // 0x0146(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x014C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7181[0x3];                                     // 0x014D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MiniMapIcons_C_OnCreateQuestIcon) == 0x000008, "Wrong alignment on MiniMapIcons_C_OnCreateQuestIcon");
static_assert(sizeof(MiniMapIcons_C_OnCreateQuestIcon) == 0x000158, "Wrong size on MiniMapIcons_C_OnCreateQuestIcon");
static_assert(offsetof(MiniMapIcons_C_OnCreateQuestIcon, Status) == 0x000000, "Member 'MiniMapIcons_C_OnCreateQuestIcon::Status' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateQuestIcon, QuestIndex) == 0x000004, "Member 'MiniMapIcons_C_OnCreateQuestIcon::QuestIndex' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateQuestIcon, NetworkDataCache) == 0x000008, "Member 'MiniMapIcons_C_OnCreateQuestIcon::NetworkDataCache' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateQuestIcon, Temp_int_Array_Index_Variable) == 0x000010, "Member 'MiniMapIcons_C_OnCreateQuestIcon::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateQuestIcon, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'MiniMapIcons_C_OnCreateQuestIcon::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateQuestIcon, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'MiniMapIcons_C_OnCreateQuestIcon::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateQuestIcon, Temp_int_Array_Index_Variable_1) == 0x00001C, "Member 'MiniMapIcons_C_OnCreateQuestIcon::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateQuestIcon, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'MiniMapIcons_C_OnCreateQuestIcon::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateQuestIcon, CallFunc_Conv_IntToString_ReturnValue) == 0x000028, "Member 'MiniMapIcons_C_OnCreateQuestIcon::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateQuestIcon, CallFunc_Concat_StrStr_ReturnValue) == 0x000038, "Member 'MiniMapIcons_C_OnCreateQuestIcon::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateQuestIcon, CallFunc_Conv_IntToString_ReturnValue_1) == 0x000048, "Member 'MiniMapIcons_C_OnCreateQuestIcon::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateQuestIcon, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000058, "Member 'MiniMapIcons_C_OnCreateQuestIcon::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateQuestIcon, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000068, "Member 'MiniMapIcons_C_OnCreateQuestIcon::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateQuestIcon, CallFunc_Conv_IntToString_ReturnValue_2) == 0x000078, "Member 'MiniMapIcons_C_OnCreateQuestIcon::CallFunc_Conv_IntToString_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateQuestIcon, CallFunc_Conv_IntToString_ReturnValue_3) == 0x000088, "Member 'MiniMapIcons_C_OnCreateQuestIcon::CallFunc_Conv_IntToString_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateQuestIcon, CallFunc_Concat_StrStr_ReturnValue_3) == 0x000098, "Member 'MiniMapIcons_C_OnCreateQuestIcon::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateQuestIcon, CallFunc_Concat_StrStr_ReturnValue_4) == 0x0000A8, "Member 'MiniMapIcons_C_OnCreateQuestIcon::CallFunc_Concat_StrStr_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateQuestIcon, CallFunc_Less_IntInt_ReturnValue) == 0x0000B8, "Member 'MiniMapIcons_C_OnCreateQuestIcon::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateQuestIcon, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000B9, "Member 'MiniMapIcons_C_OnCreateQuestIcon::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateQuestIcon, CallFunc_Less_IntInt_ReturnValue_2) == 0x0000BA, "Member 'MiniMapIcons_C_OnCreateQuestIcon::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateQuestIcon, CallFunc_GetQuestStatus_QuestStatus) == 0x0000BB, "Member 'MiniMapIcons_C_OnCreateQuestIcon::CallFunc_GetQuestStatus_QuestStatus' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateQuestIcon, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000BC, "Member 'MiniMapIcons_C_OnCreateQuestIcon::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateQuestIcon, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0000BD, "Member 'MiniMapIcons_C_OnCreateQuestIcon::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateQuestIcon, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x0000BE, "Member 'MiniMapIcons_C_OnCreateQuestIcon::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateQuestIcon, CallFunc_GetLatestMainQuest_ReturnValue) == 0x0000C0, "Member 'MiniMapIcons_C_OnCreateQuestIcon::CallFunc_GetLatestMainQuest_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateQuestIcon, CallFunc_BooleanOR_ReturnValue) == 0x0000C4, "Member 'MiniMapIcons_C_OnCreateQuestIcon::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateQuestIcon, CallFunc_FindAcceptedQuestIndex_ReturnValue) == 0x0000C8, "Member 'MiniMapIcons_C_OnCreateQuestIcon::CallFunc_FindAcceptedQuestIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateQuestIcon, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000CC, "Member 'MiniMapIcons_C_OnCreateQuestIcon::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateQuestIcon, CallFunc_Array_Get_Item) == 0x0000D0, "Member 'MiniMapIcons_C_OnCreateQuestIcon::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateQuestIcon, CallFunc_Array_Length_ReturnValue_1) == 0x0000D8, "Member 'MiniMapIcons_C_OnCreateQuestIcon::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateQuestIcon, Temp_int_Loop_Counter_Variable_1) == 0x0000DC, "Member 'MiniMapIcons_C_OnCreateQuestIcon::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateQuestIcon, CallFunc_Array_Get_Item_1) == 0x0000E0, "Member 'MiniMapIcons_C_OnCreateQuestIcon::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateQuestIcon, CallFunc_Array_Length_ReturnValue_2) == 0x000140, "Member 'MiniMapIcons_C_OnCreateQuestIcon::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateQuestIcon, CallFunc_Less_IntInt_ReturnValue_3) == 0x000144, "Member 'MiniMapIcons_C_OnCreateQuestIcon::CallFunc_Less_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateQuestIcon, CallFunc_Less_IntInt_ReturnValue_4) == 0x000145, "Member 'MiniMapIcons_C_OnCreateQuestIcon::CallFunc_Less_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateQuestIcon, CallFunc_Add_IntInt_ReturnValue_1) == 0x000148, "Member 'MiniMapIcons_C_OnCreateQuestIcon::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateQuestIcon, CallFunc_GetNetworkDataCache_IsValid) == 0x00014C, "Member 'MiniMapIcons_C_OnCreateQuestIcon::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateQuestIcon, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000150, "Member 'MiniMapIcons_C_OnCreateQuestIcon::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");

// Function MiniMapIcons.MiniMapIcons_C.GetPartyMemberIconPriority
// 0x0040 (0x0040 - 0x0000)
struct MiniMapIcons_C_GetPartyMemberIconPriority final
{
public:
	class ASBPlayerState*                         InPlayerState;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OutPriority;                                       // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMiniMapIconZOrder_ReturnValue;         // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7182[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerCharacterParameterComponent*   CallFunc_GetCharacterParameterComponent_ReturnValue; // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMiniMapIconZOrder_ReturnValue_1;       // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7183[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBBattleParamInterface> CallFunc_GetCurrentHitPoint_self_CastInput;        // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_GetCurrentHitPoint_ReturnValue;           // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MiniMapIcons_C_GetPartyMemberIconPriority) == 0x000008, "Wrong alignment on MiniMapIcons_C_GetPartyMemberIconPriority");
static_assert(sizeof(MiniMapIcons_C_GetPartyMemberIconPriority) == 0x000040, "Wrong size on MiniMapIcons_C_GetPartyMemberIconPriority");
static_assert(offsetof(MiniMapIcons_C_GetPartyMemberIconPriority, InPlayerState) == 0x000000, "Member 'MiniMapIcons_C_GetPartyMemberIconPriority::InPlayerState' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_GetPartyMemberIconPriority, OutPriority) == 0x000008, "Member 'MiniMapIcons_C_GetPartyMemberIconPriority::OutPriority' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_GetPartyMemberIconPriority, CallFunc_GetMiniMapIconZOrder_ReturnValue) == 0x00000C, "Member 'MiniMapIcons_C_GetPartyMemberIconPriority::CallFunc_GetMiniMapIconZOrder_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_GetPartyMemberIconPriority, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'MiniMapIcons_C_GetPartyMemberIconPriority::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_GetPartyMemberIconPriority, CallFunc_GetCharacterParameterComponent_ReturnValue) == 0x000018, "Member 'MiniMapIcons_C_GetPartyMemberIconPriority::CallFunc_GetCharacterParameterComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_GetPartyMemberIconPriority, CallFunc_GetMiniMapIconZOrder_ReturnValue_1) == 0x000020, "Member 'MiniMapIcons_C_GetPartyMemberIconPriority::CallFunc_GetMiniMapIconZOrder_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_GetPartyMemberIconPriority, CallFunc_IsValid_ReturnValue_1) == 0x000024, "Member 'MiniMapIcons_C_GetPartyMemberIconPriority::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_GetPartyMemberIconPriority, CallFunc_GetCurrentHitPoint_self_CastInput) == 0x000028, "Member 'MiniMapIcons_C_GetPartyMemberIconPriority::CallFunc_GetCurrentHitPoint_self_CastInput' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_GetPartyMemberIconPriority, CallFunc_GetCurrentHitPoint_ReturnValue) == 0x000038, "Member 'MiniMapIcons_C_GetPartyMemberIconPriority::CallFunc_GetCurrentHitPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_GetPartyMemberIconPriority, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x00003C, "Member 'MiniMapIcons_C_GetPartyMemberIconPriority::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");

// Function MiniMapIcons.MiniMapIcons_C.DebugPrint
// 0x0018 (0x0018 - 0x0000)
struct MiniMapIcons_C_DebugPrint final
{
public:
	class FString                                 InStr;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	float                                         Duration;                                          // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MiniMapIcons_C_DebugPrint) == 0x000008, "Wrong alignment on MiniMapIcons_C_DebugPrint");
static_assert(sizeof(MiniMapIcons_C_DebugPrint) == 0x000018, "Wrong size on MiniMapIcons_C_DebugPrint");
static_assert(offsetof(MiniMapIcons_C_DebugPrint, InStr) == 0x000000, "Member 'MiniMapIcons_C_DebugPrint::InStr' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_DebugPrint, Duration) == 0x000010, "Member 'MiniMapIcons_C_DebugPrint::Duration' has a wrong offset!");

// Function MiniMapIcons.MiniMapIcons_C.OnCreateEngramCannon
// 0x0028 (0x0028 - 0x0000)
struct MiniMapIcons_C_OnCreateEngramCannon final
{
public:
	const class ASBEngramCannon*                  EngramCannon;                                      // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMiniMapIconEngramCannon_C*             CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMiniMapIconZOrder_ReturnValue;         // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7184[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMiniMapIconBase*                     CallFunc_AddIcon_IconWidget;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MiniMapIcons_C_OnCreateEngramCannon) == 0x000008, "Wrong alignment on MiniMapIcons_C_OnCreateEngramCannon");
static_assert(sizeof(MiniMapIcons_C_OnCreateEngramCannon) == 0x000028, "Wrong size on MiniMapIcons_C_OnCreateEngramCannon");
static_assert(offsetof(MiniMapIcons_C_OnCreateEngramCannon, EngramCannon) == 0x000000, "Member 'MiniMapIcons_C_OnCreateEngramCannon::EngramCannon' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateEngramCannon, CallFunc_Create_ReturnValue) == 0x000008, "Member 'MiniMapIcons_C_OnCreateEngramCannon::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateEngramCannon, CallFunc_GetMiniMapIconZOrder_ReturnValue) == 0x000010, "Member 'MiniMapIcons_C_OnCreateEngramCannon::CallFunc_GetMiniMapIconZOrder_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateEngramCannon, CallFunc_AddIcon_IconWidget) == 0x000018, "Member 'MiniMapIcons_C_OnCreateEngramCannon::CallFunc_AddIcon_IconWidget' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateEngramCannon, CallFunc_Array_Add_ReturnValue) == 0x000020, "Member 'MiniMapIcons_C_OnCreateEngramCannon::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function MiniMapIcons.MiniMapIcons_C.OnCreateCampIcon
// 0x0040 (0x0040 - 0x0000)
struct MiniMapIcons_C_OnCreateCampIcon final
{
public:
	struct FVector                                InLocation;                                        // 0x0000(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7185[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           RowNames;                                          // 0x0010(0x0010)(Edit, BlueprintVisible)
	int32                                         CallFunc_GetMiniMapIconZOrder_ReturnValue;         // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7186[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMiniMapIconCamp_C*                     CallFunc_Create_ReturnValue;                       // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBMiniMapIconBase*                     CallFunc_AddIcon_IconWidget;                       // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MiniMapIcons_C_OnCreateCampIcon) == 0x000008, "Wrong alignment on MiniMapIcons_C_OnCreateCampIcon");
static_assert(sizeof(MiniMapIcons_C_OnCreateCampIcon) == 0x000040, "Wrong size on MiniMapIcons_C_OnCreateCampIcon");
static_assert(offsetof(MiniMapIcons_C_OnCreateCampIcon, InLocation) == 0x000000, "Member 'MiniMapIcons_C_OnCreateCampIcon::InLocation' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateCampIcon, RowNames) == 0x000010, "Member 'MiniMapIcons_C_OnCreateCampIcon::RowNames' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateCampIcon, CallFunc_GetMiniMapIconZOrder_ReturnValue) == 0x000020, "Member 'MiniMapIcons_C_OnCreateCampIcon::CallFunc_GetMiniMapIconZOrder_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateCampIcon, CallFunc_Create_ReturnValue) == 0x000028, "Member 'MiniMapIcons_C_OnCreateCampIcon::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateCampIcon, CallFunc_AddIcon_IconWidget) == 0x000030, "Member 'MiniMapIcons_C_OnCreateCampIcon::CallFunc_AddIcon_IconWidget' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateCampIcon, CallFunc_Array_Add_ReturnValue) == 0x000038, "Member 'MiniMapIcons_C_OnCreateCampIcon::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function MiniMapIcons.MiniMapIcons_C.OnCreateFishingIcon
// 0x0028 (0x0028 - 0x0000)
struct MiniMapIcons_C_OnCreateFishingIcon final
{
public:
	struct FVector                                InLocation;                                        // 0x0000(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMiniMapIconZOrder_ReturnValue;         // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMiniMapIconFishing_C*                  CallFunc_Create_ReturnValue;                       // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBMiniMapIconBase*                     CallFunc_AddIcon_IconWidget;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MiniMapIcons_C_OnCreateFishingIcon) == 0x000008, "Wrong alignment on MiniMapIcons_C_OnCreateFishingIcon");
static_assert(sizeof(MiniMapIcons_C_OnCreateFishingIcon) == 0x000028, "Wrong size on MiniMapIcons_C_OnCreateFishingIcon");
static_assert(offsetof(MiniMapIcons_C_OnCreateFishingIcon, InLocation) == 0x000000, "Member 'MiniMapIcons_C_OnCreateFishingIcon::InLocation' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateFishingIcon, CallFunc_GetMiniMapIconZOrder_ReturnValue) == 0x00000C, "Member 'MiniMapIcons_C_OnCreateFishingIcon::CallFunc_GetMiniMapIconZOrder_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateFishingIcon, CallFunc_Create_ReturnValue) == 0x000010, "Member 'MiniMapIcons_C_OnCreateFishingIcon::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateFishingIcon, CallFunc_AddIcon_IconWidget) == 0x000018, "Member 'MiniMapIcons_C_OnCreateFishingIcon::CallFunc_AddIcon_IconWidget' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateFishingIcon, CallFunc_Array_Add_ReturnValue) == 0x000020, "Member 'MiniMapIcons_C_OnCreateFishingIcon::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function MiniMapIcons.MiniMapIcons_C.OnCreateClimbIcon
// 0x00B8 (0x00B8 - 0x0000)
struct MiniMapIcons_C_OnCreateClimbIcon final
{
public:
	const class ASBClimbPoint*                    InClimbPoint;                                      // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0008(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetFloor_ReturnValue;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMiniMapIconZOrder_ReturnValue;         // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7187[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMiniMapWidget*                       CallFunc_GetMiniMapWidget_ReturnValue;             // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMiniMapIconClimb_C*                    CallFunc_Create_ReturnValue;                       // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBMapBGConfigTableRow                 CallFunc_GetBGConfig_ReturnValue;                  // 0x0030(0x0078)(ConstParm)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7188[0x3];                                     // 0x00AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMiniMapIconBase*                     CallFunc_AddIcon_IconWidget;                       // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MiniMapIcons_C_OnCreateClimbIcon) == 0x000008, "Wrong alignment on MiniMapIcons_C_OnCreateClimbIcon");
static_assert(sizeof(MiniMapIcons_C_OnCreateClimbIcon) == 0x0000B8, "Wrong size on MiniMapIcons_C_OnCreateClimbIcon");
static_assert(offsetof(MiniMapIcons_C_OnCreateClimbIcon, InClimbPoint) == 0x000000, "Member 'MiniMapIcons_C_OnCreateClimbIcon::InClimbPoint' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateClimbIcon, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000008, "Member 'MiniMapIcons_C_OnCreateClimbIcon::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateClimbIcon, CallFunc_GetFloor_ReturnValue) == 0x000014, "Member 'MiniMapIcons_C_OnCreateClimbIcon::CallFunc_GetFloor_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateClimbIcon, CallFunc_GetMiniMapIconZOrder_ReturnValue) == 0x000018, "Member 'MiniMapIcons_C_OnCreateClimbIcon::CallFunc_GetMiniMapIconZOrder_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateClimbIcon, CallFunc_GetMiniMapWidget_ReturnValue) == 0x000020, "Member 'MiniMapIcons_C_OnCreateClimbIcon::CallFunc_GetMiniMapWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateClimbIcon, CallFunc_Create_ReturnValue) == 0x000028, "Member 'MiniMapIcons_C_OnCreateClimbIcon::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateClimbIcon, CallFunc_GetBGConfig_ReturnValue) == 0x000030, "Member 'MiniMapIcons_C_OnCreateClimbIcon::CallFunc_GetBGConfig_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateClimbIcon, CallFunc_Array_Add_ReturnValue) == 0x0000A8, "Member 'MiniMapIcons_C_OnCreateClimbIcon::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateClimbIcon, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000AC, "Member 'MiniMapIcons_C_OnCreateClimbIcon::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateClimbIcon, CallFunc_AddIcon_IconWidget) == 0x0000B0, "Member 'MiniMapIcons_C_OnCreateClimbIcon::CallFunc_AddIcon_IconWidget' has a wrong offset!");

// Function MiniMapIcons.MiniMapIcons_C.OnCreatePin
// 0x0090 (0x0090 - 0x0000)
struct MiniMapIcons_C_OnCreatePin final
{
public:
	struct FMapPinInfo                            MapPinInfo;                                        // 0x0000(0x0040)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                InWorldPosition;                                   // 0x0040(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7189[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMiniMapIconPin_C*                      IconPin;                                           // 0x0050(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 PinMapID;                                          // 0x0058(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CurrentLevelName;                                  // 0x0068(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMiniMapIconZOrder_ReturnValue;         // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMiniMapIconPin_C*                      CallFunc_Create_ReturnValue;                       // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBMiniMapIconBase*                     CallFunc_AddIcon_IconWidget;                       // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MiniMapIcons_C_OnCreatePin) == 0x000008, "Wrong alignment on MiniMapIcons_C_OnCreatePin");
static_assert(sizeof(MiniMapIcons_C_OnCreatePin) == 0x000090, "Wrong size on MiniMapIcons_C_OnCreatePin");
static_assert(offsetof(MiniMapIcons_C_OnCreatePin, MapPinInfo) == 0x000000, "Member 'MiniMapIcons_C_OnCreatePin::MapPinInfo' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreatePin, InWorldPosition) == 0x000040, "Member 'MiniMapIcons_C_OnCreatePin::InWorldPosition' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreatePin, IconPin) == 0x000050, "Member 'MiniMapIcons_C_OnCreatePin::IconPin' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreatePin, PinMapID) == 0x000058, "Member 'MiniMapIcons_C_OnCreatePin::PinMapID' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreatePin, CurrentLevelName) == 0x000068, "Member 'MiniMapIcons_C_OnCreatePin::CurrentLevelName' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreatePin, CallFunc_GetMiniMapIconZOrder_ReturnValue) == 0x000078, "Member 'MiniMapIcons_C_OnCreatePin::CallFunc_GetMiniMapIconZOrder_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreatePin, CallFunc_Array_Add_ReturnValue) == 0x00007C, "Member 'MiniMapIcons_C_OnCreatePin::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreatePin, CallFunc_Create_ReturnValue) == 0x000080, "Member 'MiniMapIcons_C_OnCreatePin::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreatePin, CallFunc_AddIcon_IconWidget) == 0x000088, "Member 'MiniMapIcons_C_OnCreatePin::CallFunc_AddIcon_IconWidget' has a wrong offset!");

// Function MiniMapIcons.MiniMapIcons_C.OnCreateWarpPointIcon
// 0x0048 (0x0048 - 0x0000)
struct MiniMapIcons_C_OnCreateWarpPointIcon final
{
public:
	class FString                                 LevelName;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 PortalName;                                        // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UMiniMapIconWarpPoint_C*                IconWarpPoint;                                     // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMiniMapIconWarpPoint_C*                CallFunc_Create_ReturnValue;                       // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMiniMapIconZOrder_ReturnValue;         // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBMiniMapIconBase*                     CallFunc_AddIcon_IconWidget;                       // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MiniMapIcons_C_OnCreateWarpPointIcon) == 0x000008, "Wrong alignment on MiniMapIcons_C_OnCreateWarpPointIcon");
static_assert(sizeof(MiniMapIcons_C_OnCreateWarpPointIcon) == 0x000048, "Wrong size on MiniMapIcons_C_OnCreateWarpPointIcon");
static_assert(offsetof(MiniMapIcons_C_OnCreateWarpPointIcon, LevelName) == 0x000000, "Member 'MiniMapIcons_C_OnCreateWarpPointIcon::LevelName' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateWarpPointIcon, PortalName) == 0x000010, "Member 'MiniMapIcons_C_OnCreateWarpPointIcon::PortalName' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateWarpPointIcon, IconWarpPoint) == 0x000020, "Member 'MiniMapIcons_C_OnCreateWarpPointIcon::IconWarpPoint' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateWarpPointIcon, CallFunc_Conv_StringToName_ReturnValue) == 0x000028, "Member 'MiniMapIcons_C_OnCreateWarpPointIcon::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateWarpPointIcon, CallFunc_Create_ReturnValue) == 0x000030, "Member 'MiniMapIcons_C_OnCreateWarpPointIcon::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateWarpPointIcon, CallFunc_Array_Add_ReturnValue) == 0x000038, "Member 'MiniMapIcons_C_OnCreateWarpPointIcon::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateWarpPointIcon, CallFunc_GetMiniMapIconZOrder_ReturnValue) == 0x00003C, "Member 'MiniMapIcons_C_OnCreateWarpPointIcon::CallFunc_GetMiniMapIconZOrder_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateWarpPointIcon, CallFunc_AddIcon_IconWidget) == 0x000040, "Member 'MiniMapIcons_C_OnCreateWarpPointIcon::CallFunc_AddIcon_IconWidget' has a wrong offset!");

// Function MiniMapIcons.MiniMapIcons_C.OnCreateEnemyGate
// 0x0040 (0x0040 - 0x0000)
struct MiniMapIcons_C_OnCreateEnemyGate final
{
public:
	const class AActor*                           InActor;                                           // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMiniMapIconEnemyGate_C*                CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetObjectName_ReturnValue;                // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMiniMapIconZOrder_ReturnValue;         // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBMiniMapIconBase*                     CallFunc_AddIcon_IconWidget;                       // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MiniMapIcons_C_OnCreateEnemyGate) == 0x000008, "Wrong alignment on MiniMapIcons_C_OnCreateEnemyGate");
static_assert(sizeof(MiniMapIcons_C_OnCreateEnemyGate) == 0x000040, "Wrong size on MiniMapIcons_C_OnCreateEnemyGate");
static_assert(offsetof(MiniMapIcons_C_OnCreateEnemyGate, InActor) == 0x000000, "Member 'MiniMapIcons_C_OnCreateEnemyGate::InActor' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateEnemyGate, CallFunc_Create_ReturnValue) == 0x000008, "Member 'MiniMapIcons_C_OnCreateEnemyGate::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateEnemyGate, CallFunc_GetObjectName_ReturnValue) == 0x000010, "Member 'MiniMapIcons_C_OnCreateEnemyGate::CallFunc_GetObjectName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateEnemyGate, CallFunc_Concat_StrStr_ReturnValue) == 0x000020, "Member 'MiniMapIcons_C_OnCreateEnemyGate::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateEnemyGate, CallFunc_Array_Add_ReturnValue) == 0x000030, "Member 'MiniMapIcons_C_OnCreateEnemyGate::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateEnemyGate, CallFunc_GetMiniMapIconZOrder_ReturnValue) == 0x000034, "Member 'MiniMapIcons_C_OnCreateEnemyGate::CallFunc_GetMiniMapIconZOrder_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateEnemyGate, CallFunc_AddIcon_IconWidget) == 0x000038, "Member 'MiniMapIcons_C_OnCreateEnemyGate::CallFunc_AddIcon_IconWidget' has a wrong offset!");

// Function MiniMapIcons.MiniMapIcons_C.OnCreateCarrys
// 0x0040 (0x0040 - 0x0000)
struct MiniMapIcons_C_OnCreateCarrys final
{
public:
	const class ASBCarry*                         InCarry;                                           // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMiniMapIconCarry_C*                    CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetObjectName_ReturnValue;                // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMiniMapIconZOrder_ReturnValue;         // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBMiniMapIconBase*                     CallFunc_AddIcon_IconWidget;                       // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MiniMapIcons_C_OnCreateCarrys) == 0x000008, "Wrong alignment on MiniMapIcons_C_OnCreateCarrys");
static_assert(sizeof(MiniMapIcons_C_OnCreateCarrys) == 0x000040, "Wrong size on MiniMapIcons_C_OnCreateCarrys");
static_assert(offsetof(MiniMapIcons_C_OnCreateCarrys, InCarry) == 0x000000, "Member 'MiniMapIcons_C_OnCreateCarrys::InCarry' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateCarrys, CallFunc_Create_ReturnValue) == 0x000008, "Member 'MiniMapIcons_C_OnCreateCarrys::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateCarrys, CallFunc_GetObjectName_ReturnValue) == 0x000010, "Member 'MiniMapIcons_C_OnCreateCarrys::CallFunc_GetObjectName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateCarrys, CallFunc_Concat_StrStr_ReturnValue) == 0x000020, "Member 'MiniMapIcons_C_OnCreateCarrys::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateCarrys, CallFunc_Array_Add_ReturnValue) == 0x000030, "Member 'MiniMapIcons_C_OnCreateCarrys::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateCarrys, CallFunc_GetMiniMapIconZOrder_ReturnValue) == 0x000034, "Member 'MiniMapIcons_C_OnCreateCarrys::CallFunc_GetMiniMapIconZOrder_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateCarrys, CallFunc_AddIcon_IconWidget) == 0x000038, "Member 'MiniMapIcons_C_OnCreateCarrys::CallFunc_AddIcon_IconWidget' has a wrong offset!");

// Function MiniMapIcons.MiniMapIcons_C.OnCreateCarryBases
// 0x0040 (0x0040 - 0x0000)
struct MiniMapIcons_C_OnCreateCarryBases final
{
public:
	const class AActor*                           InActor;                                           // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMiniMapIconCarryBase_C*                CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetObjectName_ReturnValue;                // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMiniMapIconZOrder_ReturnValue;         // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBMiniMapIconBase*                     CallFunc_AddIcon_IconWidget;                       // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MiniMapIcons_C_OnCreateCarryBases) == 0x000008, "Wrong alignment on MiniMapIcons_C_OnCreateCarryBases");
static_assert(sizeof(MiniMapIcons_C_OnCreateCarryBases) == 0x000040, "Wrong size on MiniMapIcons_C_OnCreateCarryBases");
static_assert(offsetof(MiniMapIcons_C_OnCreateCarryBases, InActor) == 0x000000, "Member 'MiniMapIcons_C_OnCreateCarryBases::InActor' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateCarryBases, CallFunc_Create_ReturnValue) == 0x000008, "Member 'MiniMapIcons_C_OnCreateCarryBases::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateCarryBases, CallFunc_GetObjectName_ReturnValue) == 0x000010, "Member 'MiniMapIcons_C_OnCreateCarryBases::CallFunc_GetObjectName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateCarryBases, CallFunc_Concat_StrStr_ReturnValue) == 0x000020, "Member 'MiniMapIcons_C_OnCreateCarryBases::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateCarryBases, CallFunc_Array_Add_ReturnValue) == 0x000030, "Member 'MiniMapIcons_C_OnCreateCarryBases::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateCarryBases, CallFunc_GetMiniMapIconZOrder_ReturnValue) == 0x000034, "Member 'MiniMapIcons_C_OnCreateCarryBases::CallFunc_GetMiniMapIconZOrder_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateCarryBases, CallFunc_AddIcon_IconWidget) == 0x000038, "Member 'MiniMapIcons_C_OnCreateCarryBases::CallFunc_AddIcon_IconWidget' has a wrong offset!");

// Function MiniMapIcons.MiniMapIcons_C.OnCreateShortPin
// 0x0028 (0x0028 - 0x0000)
struct MiniMapIcons_C_OnCreateShortPin final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_718A[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMiniMapIconShortPin_C*                 CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_718B[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMiniMapIconZOrder_ReturnValue;         // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBMiniMapIconBase*                     CallFunc_AddIcon_IconWidget;                       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MiniMapIcons_C_OnCreateShortPin) == 0x000008, "Wrong alignment on MiniMapIcons_C_OnCreateShortPin");
static_assert(sizeof(MiniMapIcons_C_OnCreateShortPin) == 0x000028, "Wrong size on MiniMapIcons_C_OnCreateShortPin");
static_assert(offsetof(MiniMapIcons_C_OnCreateShortPin, Temp_int_Variable) == 0x000000, "Member 'MiniMapIcons_C_OnCreateShortPin::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateShortPin, CallFunc_Create_ReturnValue) == 0x000008, "Member 'MiniMapIcons_C_OnCreateShortPin::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateShortPin, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000010, "Member 'MiniMapIcons_C_OnCreateShortPin::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateShortPin, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'MiniMapIcons_C_OnCreateShortPin::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateShortPin, CallFunc_GetMiniMapIconZOrder_ReturnValue) == 0x000018, "Member 'MiniMapIcons_C_OnCreateShortPin::CallFunc_GetMiniMapIconZOrder_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateShortPin, CallFunc_Array_Add_ReturnValue) == 0x00001C, "Member 'MiniMapIcons_C_OnCreateShortPin::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateShortPin, CallFunc_AddIcon_IconWidget) == 0x000020, "Member 'MiniMapIcons_C_OnCreateShortPin::CallFunc_AddIcon_IconWidget' has a wrong offset!");

// Function MiniMapIcons.MiniMapIcons_C.OnCreatePartyMemberIcon
// 0x0128 (0x0128 - 0x0000)
struct MiniMapIcons_C_OnCreatePartyMemberIcon final
{
public:
	TArray<class ASBPlayerState*>                 OutGroupMembers;                                   // 0x0000(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<class USBPartyMemberState*>            OutPartyMembers;                                   // 0x0010(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_718C[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_718D[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_2;           // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_718E[0x4];                                     // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPartyMemberState*                    CallFunc_Array_Get_Item;                           // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_4;               // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocalPlayer_ReturnValue;                // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_718F[0x3];                                     // 0x00AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetPartyMemberIconPriority_OutPriority;   // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7190[0x3];                                     // 0x00B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7191[0x3];                                     // 0x00BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMiniMapIconPartyMember_C*              CallFunc_Create_ReturnValue;                       // 0x00C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerState*                         CallFunc_Array_Get_Item_1;                         // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetPartyMemberIconPriority_OutPriority_1; // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBMiniMapIconBase*                     CallFunc_AddIcon_IconWidget;                       // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMiniMapIconPartyMember_C*              CallFunc_Create_ReturnValue_1;                     // 0x00E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7192[0x3];                                     // 0x00F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBMiniMapIconBase*                     CallFunc_AddIcon_IconWidget_1;                     // 0x0100(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USBPartyMemberState*>            CallFunc_GetPartyMember_OutPartyMembers;           // 0x0108(0x0010)(ReferenceParm)
	TArray<class ASBPlayerState*>                 CallFunc_GetPartyMember_OutGroupMembers;           // 0x0118(0x0010)(ReferenceParm)
};
static_assert(alignof(MiniMapIcons_C_OnCreatePartyMemberIcon) == 0x000008, "Wrong alignment on MiniMapIcons_C_OnCreatePartyMemberIcon");
static_assert(sizeof(MiniMapIcons_C_OnCreatePartyMemberIcon) == 0x000128, "Wrong size on MiniMapIcons_C_OnCreatePartyMemberIcon");
static_assert(offsetof(MiniMapIcons_C_OnCreatePartyMemberIcon, OutGroupMembers) == 0x000000, "Member 'MiniMapIcons_C_OnCreatePartyMemberIcon::OutGroupMembers' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreatePartyMemberIcon, OutPartyMembers) == 0x000010, "Member 'MiniMapIcons_C_OnCreatePartyMemberIcon::OutPartyMembers' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreatePartyMemberIcon, Temp_int_Array_Index_Variable) == 0x000020, "Member 'MiniMapIcons_C_OnCreatePartyMemberIcon::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreatePartyMemberIcon, CallFunc_Array_Length_ReturnValue) == 0x000024, "Member 'MiniMapIcons_C_OnCreatePartyMemberIcon::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreatePartyMemberIcon, CallFunc_Conv_IntToString_ReturnValue) == 0x000028, "Member 'MiniMapIcons_C_OnCreatePartyMemberIcon::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreatePartyMemberIcon, CallFunc_Array_Length_ReturnValue_1) == 0x000038, "Member 'MiniMapIcons_C_OnCreatePartyMemberIcon::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreatePartyMemberIcon, CallFunc_Concat_StrStr_ReturnValue) == 0x000040, "Member 'MiniMapIcons_C_OnCreatePartyMemberIcon::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreatePartyMemberIcon, CallFunc_Conv_IntToString_ReturnValue_1) == 0x000050, "Member 'MiniMapIcons_C_OnCreatePartyMemberIcon::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreatePartyMemberIcon, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000060, "Member 'MiniMapIcons_C_OnCreatePartyMemberIcon::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreatePartyMemberIcon, CallFunc_Array_Length_ReturnValue_2) == 0x000070, "Member 'MiniMapIcons_C_OnCreatePartyMemberIcon::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreatePartyMemberIcon, CallFunc_Conv_IntToString_ReturnValue_2) == 0x000078, "Member 'MiniMapIcons_C_OnCreatePartyMemberIcon::CallFunc_Conv_IntToString_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreatePartyMemberIcon, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000088, "Member 'MiniMapIcons_C_OnCreatePartyMemberIcon::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreatePartyMemberIcon, CallFunc_Array_Length_ReturnValue_3) == 0x000098, "Member 'MiniMapIcons_C_OnCreatePartyMemberIcon::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreatePartyMemberIcon, CallFunc_Array_Get_Item) == 0x0000A0, "Member 'MiniMapIcons_C_OnCreatePartyMemberIcon::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreatePartyMemberIcon, CallFunc_Array_Length_ReturnValue_4) == 0x0000A8, "Member 'MiniMapIcons_C_OnCreatePartyMemberIcon::CallFunc_Array_Length_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreatePartyMemberIcon, CallFunc_IsLocalPlayer_ReturnValue) == 0x0000AC, "Member 'MiniMapIcons_C_OnCreatePartyMemberIcon::CallFunc_IsLocalPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreatePartyMemberIcon, CallFunc_GetPartyMemberIconPriority_OutPriority) == 0x0000B0, "Member 'MiniMapIcons_C_OnCreatePartyMemberIcon::CallFunc_GetPartyMemberIconPriority_OutPriority' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreatePartyMemberIcon, CallFunc_Not_PreBool_ReturnValue) == 0x0000B4, "Member 'MiniMapIcons_C_OnCreatePartyMemberIcon::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreatePartyMemberIcon, Temp_int_Loop_Counter_Variable) == 0x0000B8, "Member 'MiniMapIcons_C_OnCreatePartyMemberIcon::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreatePartyMemberIcon, CallFunc_Less_IntInt_ReturnValue) == 0x0000BC, "Member 'MiniMapIcons_C_OnCreatePartyMemberIcon::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreatePartyMemberIcon, CallFunc_Add_IntInt_ReturnValue) == 0x0000C0, "Member 'MiniMapIcons_C_OnCreatePartyMemberIcon::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreatePartyMemberIcon, Temp_int_Array_Index_Variable_1) == 0x0000C4, "Member 'MiniMapIcons_C_OnCreatePartyMemberIcon::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreatePartyMemberIcon, CallFunc_Create_ReturnValue) == 0x0000C8, "Member 'MiniMapIcons_C_OnCreatePartyMemberIcon::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreatePartyMemberIcon, CallFunc_Array_Get_Item_1) == 0x0000D0, "Member 'MiniMapIcons_C_OnCreatePartyMemberIcon::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreatePartyMemberIcon, CallFunc_GetPartyMemberIconPriority_OutPriority_1) == 0x0000D8, "Member 'MiniMapIcons_C_OnCreatePartyMemberIcon::CallFunc_GetPartyMemberIconPriority_OutPriority_1' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreatePartyMemberIcon, CallFunc_Array_Add_ReturnValue) == 0x0000DC, "Member 'MiniMapIcons_C_OnCreatePartyMemberIcon::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreatePartyMemberIcon, CallFunc_AddIcon_IconWidget) == 0x0000E0, "Member 'MiniMapIcons_C_OnCreatePartyMemberIcon::CallFunc_AddIcon_IconWidget' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreatePartyMemberIcon, CallFunc_Create_ReturnValue_1) == 0x0000E8, "Member 'MiniMapIcons_C_OnCreatePartyMemberIcon::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreatePartyMemberIcon, Temp_int_Loop_Counter_Variable_1) == 0x0000F0, "Member 'MiniMapIcons_C_OnCreatePartyMemberIcon::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreatePartyMemberIcon, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000F4, "Member 'MiniMapIcons_C_OnCreatePartyMemberIcon::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreatePartyMemberIcon, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000F8, "Member 'MiniMapIcons_C_OnCreatePartyMemberIcon::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreatePartyMemberIcon, CallFunc_Array_Add_ReturnValue_1) == 0x0000FC, "Member 'MiniMapIcons_C_OnCreatePartyMemberIcon::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreatePartyMemberIcon, CallFunc_AddIcon_IconWidget_1) == 0x000100, "Member 'MiniMapIcons_C_OnCreatePartyMemberIcon::CallFunc_AddIcon_IconWidget_1' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreatePartyMemberIcon, CallFunc_GetPartyMember_OutPartyMembers) == 0x000108, "Member 'MiniMapIcons_C_OnCreatePartyMemberIcon::CallFunc_GetPartyMember_OutPartyMembers' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreatePartyMemberIcon, CallFunc_GetPartyMember_OutGroupMembers) == 0x000118, "Member 'MiniMapIcons_C_OnCreatePartyMemberIcon::CallFunc_GetPartyMember_OutGroupMembers' has a wrong offset!");

// Function MiniMapIcons.MiniMapIcons_C.OnDeletePartyMemberIcon
// 0x0030 (0x0030 - 0x0000)
struct MiniMapIcons_C_OnDeletePartyMemberIcon final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBMiniMapIconBase*                     CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7193[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMiniMapIconPartyMember_C*              K2Node_DynamicCast_AsMini_Map_Icon_Party_Member;   // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MiniMapIcons_C_OnDeletePartyMemberIcon) == 0x000008, "Wrong alignment on MiniMapIcons_C_OnDeletePartyMemberIcon");
static_assert(sizeof(MiniMapIcons_C_OnDeletePartyMemberIcon) == 0x000030, "Wrong size on MiniMapIcons_C_OnDeletePartyMemberIcon");
static_assert(offsetof(MiniMapIcons_C_OnDeletePartyMemberIcon, Temp_int_Array_Index_Variable) == 0x000000, "Member 'MiniMapIcons_C_OnDeletePartyMemberIcon::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnDeletePartyMemberIcon, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'MiniMapIcons_C_OnDeletePartyMemberIcon::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnDeletePartyMemberIcon, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'MiniMapIcons_C_OnDeletePartyMemberIcon::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnDeletePartyMemberIcon, CallFunc_Array_Length_ReturnValue) == 0x00000C, "Member 'MiniMapIcons_C_OnDeletePartyMemberIcon::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnDeletePartyMemberIcon, CallFunc_Array_Get_Item) == 0x000010, "Member 'MiniMapIcons_C_OnDeletePartyMemberIcon::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnDeletePartyMemberIcon, CallFunc_Less_IntInt_ReturnValue) == 0x000018, "Member 'MiniMapIcons_C_OnDeletePartyMemberIcon::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnDeletePartyMemberIcon, K2Node_DynamicCast_AsMini_Map_Icon_Party_Member) == 0x000020, "Member 'MiniMapIcons_C_OnDeletePartyMemberIcon::K2Node_DynamicCast_AsMini_Map_Icon_Party_Member' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnDeletePartyMemberIcon, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'MiniMapIcons_C_OnDeletePartyMemberIcon::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function MiniMapIcons.MiniMapIcons_C.OnCreateQuestAreaIcon
// 0x0048 (0x0048 - 0x0000)
struct MiniMapIcons_C_OnCreateQuestAreaIcon final
{
public:
	struct FVector                                InLocation;                                        // 0x0000(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InRange;                                           // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              InAreaSize;                                        // 0x0010(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           InColor;                                           // 0x0018(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMiniMapIconQuestArea_C*                QuestAreaIcon;                                     // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMiniMapIconZOrder_ReturnValue;         // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMiniMapIconQuestArea_C*                CallFunc_Create_ReturnValue;                       // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBMiniMapIconBase*                     CallFunc_AddIcon_IconWidget;                       // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MiniMapIcons_C_OnCreateQuestAreaIcon) == 0x000008, "Wrong alignment on MiniMapIcons_C_OnCreateQuestAreaIcon");
static_assert(sizeof(MiniMapIcons_C_OnCreateQuestAreaIcon) == 0x000048, "Wrong size on MiniMapIcons_C_OnCreateQuestAreaIcon");
static_assert(offsetof(MiniMapIcons_C_OnCreateQuestAreaIcon, InLocation) == 0x000000, "Member 'MiniMapIcons_C_OnCreateQuestAreaIcon::InLocation' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateQuestAreaIcon, InRange) == 0x00000C, "Member 'MiniMapIcons_C_OnCreateQuestAreaIcon::InRange' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateQuestAreaIcon, InAreaSize) == 0x000010, "Member 'MiniMapIcons_C_OnCreateQuestAreaIcon::InAreaSize' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateQuestAreaIcon, InColor) == 0x000018, "Member 'MiniMapIcons_C_OnCreateQuestAreaIcon::InColor' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateQuestAreaIcon, QuestAreaIcon) == 0x000028, "Member 'MiniMapIcons_C_OnCreateQuestAreaIcon::QuestAreaIcon' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateQuestAreaIcon, CallFunc_Array_Add_ReturnValue) == 0x000030, "Member 'MiniMapIcons_C_OnCreateQuestAreaIcon::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateQuestAreaIcon, CallFunc_GetMiniMapIconZOrder_ReturnValue) == 0x000034, "Member 'MiniMapIcons_C_OnCreateQuestAreaIcon::CallFunc_GetMiniMapIconZOrder_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateQuestAreaIcon, CallFunc_Create_ReturnValue) == 0x000038, "Member 'MiniMapIcons_C_OnCreateQuestAreaIcon::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateQuestAreaIcon, CallFunc_AddIcon_IconWidget) == 0x000040, "Member 'MiniMapIcons_C_OnCreateQuestAreaIcon::CallFunc_AddIcon_IconWidget' has a wrong offset!");

// Function MiniMapIcons.MiniMapIcons_C.DeleteEnemyGateIcon
// 0x0030 (0x0030 - 0x0000)
struct MiniMapIcons_C_DeleteEnemyGateIcon final
{
public:
	const class AActor*                           InActor;                                           // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7194[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMiniMapIconBase*                     CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RemoveIcon_ReturnValue;                   // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0026(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0027(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MiniMapIcons_C_DeleteEnemyGateIcon) == 0x000008, "Wrong alignment on MiniMapIcons_C_DeleteEnemyGateIcon");
static_assert(sizeof(MiniMapIcons_C_DeleteEnemyGateIcon) == 0x000030, "Wrong size on MiniMapIcons_C_DeleteEnemyGateIcon");
static_assert(offsetof(MiniMapIcons_C_DeleteEnemyGateIcon, InActor) == 0x000000, "Member 'MiniMapIcons_C_DeleteEnemyGateIcon::InActor' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_DeleteEnemyGateIcon, Temp_int_Array_Index_Variable) == 0x000008, "Member 'MiniMapIcons_C_DeleteEnemyGateIcon::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_DeleteEnemyGateIcon, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'MiniMapIcons_C_DeleteEnemyGateIcon::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_DeleteEnemyGateIcon, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'MiniMapIcons_C_DeleteEnemyGateIcon::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_DeleteEnemyGateIcon, Temp_bool_True_if_break_was_hit_Variable) == 0x000014, "Member 'MiniMapIcons_C_DeleteEnemyGateIcon::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_DeleteEnemyGateIcon, CallFunc_Array_Get_Item) == 0x000018, "Member 'MiniMapIcons_C_DeleteEnemyGateIcon::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_DeleteEnemyGateIcon, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'MiniMapIcons_C_DeleteEnemyGateIcon::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_DeleteEnemyGateIcon, CallFunc_RemoveIcon_ReturnValue) == 0x000024, "Member 'MiniMapIcons_C_DeleteEnemyGateIcon::CallFunc_RemoveIcon_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_DeleteEnemyGateIcon, CallFunc_Less_IntInt_ReturnValue) == 0x000025, "Member 'MiniMapIcons_C_DeleteEnemyGateIcon::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_DeleteEnemyGateIcon, CallFunc_Not_PreBool_ReturnValue) == 0x000026, "Member 'MiniMapIcons_C_DeleteEnemyGateIcon::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_DeleteEnemyGateIcon, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000027, "Member 'MiniMapIcons_C_DeleteEnemyGateIcon::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_DeleteEnemyGateIcon, CallFunc_BooleanAND_ReturnValue) == 0x000028, "Member 'MiniMapIcons_C_DeleteEnemyGateIcon::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_DeleteEnemyGateIcon, CallFunc_Array_RemoveItem_ReturnValue) == 0x000029, "Member 'MiniMapIcons_C_DeleteEnemyGateIcon::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");

// Function MiniMapIcons.MiniMapIcons_C.OnCreateFacilityIcon
// 0x0080 (0x0080 - 0x0000)
struct MiniMapIcons_C_OnCreateFacilityIcon final
{
public:
	class FName                                   InProfileId;                                       // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBFacilityType                               InType;                                            // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7195[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBCharacterProfileLocationData        InLocationData;                                    // 0x0010(0x0048)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                InLocation;                                        // 0x0058(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMiniMapNpcIconZOrder_ReturnValue;      // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMiniMapIconFacility_C*                 CallFunc_Create_ReturnValue;                       // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBMiniMapIconBase*                     CallFunc_AddIcon_IconWidget;                       // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MiniMapIcons_C_OnCreateFacilityIcon) == 0x000008, "Wrong alignment on MiniMapIcons_C_OnCreateFacilityIcon");
static_assert(sizeof(MiniMapIcons_C_OnCreateFacilityIcon) == 0x000080, "Wrong size on MiniMapIcons_C_OnCreateFacilityIcon");
static_assert(offsetof(MiniMapIcons_C_OnCreateFacilityIcon, InProfileId) == 0x000000, "Member 'MiniMapIcons_C_OnCreateFacilityIcon::InProfileId' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateFacilityIcon, InType) == 0x000008, "Member 'MiniMapIcons_C_OnCreateFacilityIcon::InType' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateFacilityIcon, InLocationData) == 0x000010, "Member 'MiniMapIcons_C_OnCreateFacilityIcon::InLocationData' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateFacilityIcon, InLocation) == 0x000058, "Member 'MiniMapIcons_C_OnCreateFacilityIcon::InLocation' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateFacilityIcon, CallFunc_GetMiniMapNpcIconZOrder_ReturnValue) == 0x000064, "Member 'MiniMapIcons_C_OnCreateFacilityIcon::CallFunc_GetMiniMapNpcIconZOrder_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateFacilityIcon, CallFunc_Create_ReturnValue) == 0x000068, "Member 'MiniMapIcons_C_OnCreateFacilityIcon::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateFacilityIcon, CallFunc_AddIcon_IconWidget) == 0x000070, "Member 'MiniMapIcons_C_OnCreateFacilityIcon::CallFunc_AddIcon_IconWidget' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateFacilityIcon, CallFunc_Array_Add_ReturnValue) == 0x000078, "Member 'MiniMapIcons_C_OnCreateFacilityIcon::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function MiniMapIcons.MiniMapIcons_C.OnCreateBuffNPCIcon
// 0x0028 (0x0028 - 0x0000)
struct MiniMapIcons_C_OnCreateBuffNPCIcon final
{
public:
	const class ASBFieldActorFreeBuffPoint*       FreeBuffPoint;                                     // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMiniMapIconNPCBuff_C*                  Icon;                                              // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMiniMapIconNPCBuff_C*                  CallFunc_Create_ReturnValue;                       // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMiniMapNpcIconZOrder_ReturnValue;      // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBMiniMapIconBase*                     CallFunc_AddIcon_IconWidget;                       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MiniMapIcons_C_OnCreateBuffNPCIcon) == 0x000008, "Wrong alignment on MiniMapIcons_C_OnCreateBuffNPCIcon");
static_assert(sizeof(MiniMapIcons_C_OnCreateBuffNPCIcon) == 0x000028, "Wrong size on MiniMapIcons_C_OnCreateBuffNPCIcon");
static_assert(offsetof(MiniMapIcons_C_OnCreateBuffNPCIcon, FreeBuffPoint) == 0x000000, "Member 'MiniMapIcons_C_OnCreateBuffNPCIcon::FreeBuffPoint' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateBuffNPCIcon, Icon) == 0x000008, "Member 'MiniMapIcons_C_OnCreateBuffNPCIcon::Icon' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateBuffNPCIcon, CallFunc_Create_ReturnValue) == 0x000010, "Member 'MiniMapIcons_C_OnCreateBuffNPCIcon::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateBuffNPCIcon, CallFunc_Array_Add_ReturnValue) == 0x000018, "Member 'MiniMapIcons_C_OnCreateBuffNPCIcon::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateBuffNPCIcon, CallFunc_GetMiniMapNpcIconZOrder_ReturnValue) == 0x00001C, "Member 'MiniMapIcons_C_OnCreateBuffNPCIcon::CallFunc_GetMiniMapNpcIconZOrder_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateBuffNPCIcon, CallFunc_AddIcon_IconWidget) == 0x000020, "Member 'MiniMapIcons_C_OnCreateBuffNPCIcon::CallFunc_AddIcon_IconWidget' has a wrong offset!");

// Function MiniMapIcons.MiniMapIcons_C.AddInterruptQuestIcon
// 0x0058 (0x0058 - 0x0000)
struct MiniMapIcons_C_AddInterruptQuestIcon final
{
public:
	const class ASBInterruptQuestInstance*        InInstance;                                        // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                InLocation;                                        // 0x0008(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InRange;                                           // 0x0014(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              InAreaSize;                                        // 0x0018(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMiniMapIconQuestArea_C*                QuestAreaIcon;                                     // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBInterruptQuestInstance*              QuestInstance;                                     // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Color;                                             // 0x0030(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMiniMapIconZOrder_ReturnValue;         // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMiniMapIconQuestArea_C*                CallFunc_Create_ReturnValue;                       // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBMiniMapIconBase*                     CallFunc_AddIcon_IconWidget;                       // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MiniMapIcons_C_AddInterruptQuestIcon) == 0x000008, "Wrong alignment on MiniMapIcons_C_AddInterruptQuestIcon");
static_assert(sizeof(MiniMapIcons_C_AddInterruptQuestIcon) == 0x000058, "Wrong size on MiniMapIcons_C_AddInterruptQuestIcon");
static_assert(offsetof(MiniMapIcons_C_AddInterruptQuestIcon, InInstance) == 0x000000, "Member 'MiniMapIcons_C_AddInterruptQuestIcon::InInstance' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_AddInterruptQuestIcon, InLocation) == 0x000008, "Member 'MiniMapIcons_C_AddInterruptQuestIcon::InLocation' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_AddInterruptQuestIcon, InRange) == 0x000014, "Member 'MiniMapIcons_C_AddInterruptQuestIcon::InRange' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_AddInterruptQuestIcon, InAreaSize) == 0x000018, "Member 'MiniMapIcons_C_AddInterruptQuestIcon::InAreaSize' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_AddInterruptQuestIcon, QuestAreaIcon) == 0x000020, "Member 'MiniMapIcons_C_AddInterruptQuestIcon::QuestAreaIcon' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_AddInterruptQuestIcon, QuestInstance) == 0x000028, "Member 'MiniMapIcons_C_AddInterruptQuestIcon::QuestInstance' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_AddInterruptQuestIcon, Color) == 0x000030, "Member 'MiniMapIcons_C_AddInterruptQuestIcon::Color' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_AddInterruptQuestIcon, CallFunc_Array_Add_ReturnValue) == 0x000040, "Member 'MiniMapIcons_C_AddInterruptQuestIcon::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_AddInterruptQuestIcon, CallFunc_GetMiniMapIconZOrder_ReturnValue) == 0x000044, "Member 'MiniMapIcons_C_AddInterruptQuestIcon::CallFunc_GetMiniMapIconZOrder_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_AddInterruptQuestIcon, CallFunc_Create_ReturnValue) == 0x000048, "Member 'MiniMapIcons_C_AddInterruptQuestIcon::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_AddInterruptQuestIcon, CallFunc_AddIcon_IconWidget) == 0x000050, "Member 'MiniMapIcons_C_AddInterruptQuestIcon::CallFunc_AddIcon_IconWidget' has a wrong offset!");

// Function MiniMapIcons.MiniMapIcons_C.OnCreateDxBattleGateBarrier
// 0x0040 (0x0040 - 0x0000)
struct MiniMapIcons_C_OnCreateDxBattleGateBarrier final
{
public:
	const class AActor*                           InActor;                                           // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetObjectName_ReturnValue;                // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UMiniMapIconDxBattleGateBarrier_C*      CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMiniMapIconZOrder_ReturnValue;         // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBMiniMapIconBase*                     CallFunc_AddIcon_IconWidget;                       // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MiniMapIcons_C_OnCreateDxBattleGateBarrier) == 0x000008, "Wrong alignment on MiniMapIcons_C_OnCreateDxBattleGateBarrier");
static_assert(sizeof(MiniMapIcons_C_OnCreateDxBattleGateBarrier) == 0x000040, "Wrong size on MiniMapIcons_C_OnCreateDxBattleGateBarrier");
static_assert(offsetof(MiniMapIcons_C_OnCreateDxBattleGateBarrier, InActor) == 0x000000, "Member 'MiniMapIcons_C_OnCreateDxBattleGateBarrier::InActor' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateDxBattleGateBarrier, CallFunc_GetObjectName_ReturnValue) == 0x000008, "Member 'MiniMapIcons_C_OnCreateDxBattleGateBarrier::CallFunc_GetObjectName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateDxBattleGateBarrier, CallFunc_Create_ReturnValue) == 0x000018, "Member 'MiniMapIcons_C_OnCreateDxBattleGateBarrier::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateDxBattleGateBarrier, CallFunc_Concat_StrStr_ReturnValue) == 0x000020, "Member 'MiniMapIcons_C_OnCreateDxBattleGateBarrier::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateDxBattleGateBarrier, CallFunc_Array_Add_ReturnValue) == 0x000030, "Member 'MiniMapIcons_C_OnCreateDxBattleGateBarrier::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateDxBattleGateBarrier, CallFunc_GetMiniMapIconZOrder_ReturnValue) == 0x000034, "Member 'MiniMapIcons_C_OnCreateDxBattleGateBarrier::CallFunc_GetMiniMapIconZOrder_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateDxBattleGateBarrier, CallFunc_AddIcon_IconWidget) == 0x000038, "Member 'MiniMapIcons_C_OnCreateDxBattleGateBarrier::CallFunc_AddIcon_IconWidget' has a wrong offset!");

// Function MiniMapIcons.MiniMapIcons_C.AddEnemyIcon
// 0x0030 (0x0030 - 0x0000)
struct MiniMapIcons_C_AddEnemyIcon final
{
public:
	class ASBEnemyCharacter*                      InEnemyCharacter;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBMiniMapIconBase*                     ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMiniMapIconZOrder_ReturnValue;         // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7196[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMiniMapIconEnemy_C*                    CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBMiniMapIconBase*                     CallFunc_AddIcon_IconWidget;                       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MiniMapIcons_C_AddEnemyIcon) == 0x000008, "Wrong alignment on MiniMapIcons_C_AddEnemyIcon");
static_assert(sizeof(MiniMapIcons_C_AddEnemyIcon) == 0x000030, "Wrong size on MiniMapIcons_C_AddEnemyIcon");
static_assert(offsetof(MiniMapIcons_C_AddEnemyIcon, InEnemyCharacter) == 0x000000, "Member 'MiniMapIcons_C_AddEnemyIcon::InEnemyCharacter' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_AddEnemyIcon, ReturnValue) == 0x000008, "Member 'MiniMapIcons_C_AddEnemyIcon::ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_AddEnemyIcon, CallFunc_GetMiniMapIconZOrder_ReturnValue) == 0x000010, "Member 'MiniMapIcons_C_AddEnemyIcon::CallFunc_GetMiniMapIconZOrder_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_AddEnemyIcon, CallFunc_Create_ReturnValue) == 0x000018, "Member 'MiniMapIcons_C_AddEnemyIcon::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_AddEnemyIcon, CallFunc_AddIcon_IconWidget) == 0x000020, "Member 'MiniMapIcons_C_AddEnemyIcon::CallFunc_AddIcon_IconWidget' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_AddEnemyIcon, CallFunc_Array_Add_ReturnValue) == 0x000028, "Member 'MiniMapIcons_C_AddEnemyIcon::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function MiniMapIcons.MiniMapIcons_C.AddNamedEnemyIcon
// 0x0040 (0x0040 - 0x0000)
struct MiniMapIcons_C_AddNamedEnemyIcon final
{
public:
	class ASBEnemyCharacter*                      InEnemyCharacter;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBMiniMapIconBase*                     ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMiniMapIconNamedEnemy_C*               Icon;                                              // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMiniMapIconNamedEnemy_C*               CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetEnemyId_ReturnValue;                   // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMiniMapIconZOrder_ReturnValue;         // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBMiniMapIconBase*                     CallFunc_AddIcon_IconWidget;                       // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MiniMapIcons_C_AddNamedEnemyIcon) == 0x000008, "Wrong alignment on MiniMapIcons_C_AddNamedEnemyIcon");
static_assert(sizeof(MiniMapIcons_C_AddNamedEnemyIcon) == 0x000040, "Wrong size on MiniMapIcons_C_AddNamedEnemyIcon");
static_assert(offsetof(MiniMapIcons_C_AddNamedEnemyIcon, InEnemyCharacter) == 0x000000, "Member 'MiniMapIcons_C_AddNamedEnemyIcon::InEnemyCharacter' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_AddNamedEnemyIcon, ReturnValue) == 0x000008, "Member 'MiniMapIcons_C_AddNamedEnemyIcon::ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_AddNamedEnemyIcon, Icon) == 0x000010, "Member 'MiniMapIcons_C_AddNamedEnemyIcon::Icon' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_AddNamedEnemyIcon, CallFunc_Create_ReturnValue) == 0x000018, "Member 'MiniMapIcons_C_AddNamedEnemyIcon::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_AddNamedEnemyIcon, CallFunc_GetEnemyId_ReturnValue) == 0x000020, "Member 'MiniMapIcons_C_AddNamedEnemyIcon::CallFunc_GetEnemyId_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_AddNamedEnemyIcon, CallFunc_GetMiniMapIconZOrder_ReturnValue) == 0x000030, "Member 'MiniMapIcons_C_AddNamedEnemyIcon::CallFunc_GetMiniMapIconZOrder_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_AddNamedEnemyIcon, CallFunc_Array_Add_ReturnValue) == 0x000034, "Member 'MiniMapIcons_C_AddNamedEnemyIcon::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_AddNamedEnemyIcon, CallFunc_AddIcon_IconWidget) == 0x000038, "Member 'MiniMapIcons_C_AddNamedEnemyIcon::CallFunc_AddIcon_IconWidget' has a wrong offset!");

// Function MiniMapIcons.MiniMapIcons_C.AddBuddyIcon
// 0x0030 (0x0030 - 0x0000)
struct MiniMapIcons_C_AddBuddyIcon final
{
public:
	class ASBEnemyCharacter*                      InEnemyCharacter;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBMiniMapIconBase*                     ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMiniMapIconZOrder_ReturnValue;         // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7197[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMiniMapIconBuddy_C*                    CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBMiniMapIconBase*                     CallFunc_AddIcon_IconWidget;                       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MiniMapIcons_C_AddBuddyIcon) == 0x000008, "Wrong alignment on MiniMapIcons_C_AddBuddyIcon");
static_assert(sizeof(MiniMapIcons_C_AddBuddyIcon) == 0x000030, "Wrong size on MiniMapIcons_C_AddBuddyIcon");
static_assert(offsetof(MiniMapIcons_C_AddBuddyIcon, InEnemyCharacter) == 0x000000, "Member 'MiniMapIcons_C_AddBuddyIcon::InEnemyCharacter' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_AddBuddyIcon, ReturnValue) == 0x000008, "Member 'MiniMapIcons_C_AddBuddyIcon::ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_AddBuddyIcon, CallFunc_GetMiniMapIconZOrder_ReturnValue) == 0x000010, "Member 'MiniMapIcons_C_AddBuddyIcon::CallFunc_GetMiniMapIconZOrder_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_AddBuddyIcon, CallFunc_Create_ReturnValue) == 0x000018, "Member 'MiniMapIcons_C_AddBuddyIcon::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_AddBuddyIcon, CallFunc_AddIcon_IconWidget) == 0x000020, "Member 'MiniMapIcons_C_AddBuddyIcon::CallFunc_AddIcon_IconWidget' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_AddBuddyIcon, CallFunc_Array_Add_ReturnValue) == 0x000028, "Member 'MiniMapIcons_C_AddBuddyIcon::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function MiniMapIcons.MiniMapIcons_C.OnCreateRaidIcon
// 0x0098 (0x0098 - 0x0000)
struct MiniMapIcons_C_OnCreateRaidIcon final
{
public:
	struct FSBLocationInfo                        LocationInfo;                                      // 0x0000(0x0050)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                InLocation;                                        // 0x0050(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   TmpLocationId;                                     // 0x005C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7198[0x4];                                     // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDataTableRowHandle                    FieldStatus;                                       // 0x0068(0x0010)(Edit, BlueprintVisible, NoDestructor)
	int32                                         CallFunc_GetMiniMapIconZOrder_ReturnValue;         // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEnableFieldStatus_IsEnable;             // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7199[0x3];                                     // 0x007D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UMiniMapIconRaidPotal_C*                CallFunc_Create_ReturnValue;                       // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBMiniMapIconBase*                     CallFunc_AddIcon_IconWidget;                       // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MiniMapIcons_C_OnCreateRaidIcon) == 0x000008, "Wrong alignment on MiniMapIcons_C_OnCreateRaidIcon");
static_assert(sizeof(MiniMapIcons_C_OnCreateRaidIcon) == 0x000098, "Wrong size on MiniMapIcons_C_OnCreateRaidIcon");
static_assert(offsetof(MiniMapIcons_C_OnCreateRaidIcon, LocationInfo) == 0x000000, "Member 'MiniMapIcons_C_OnCreateRaidIcon::LocationInfo' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateRaidIcon, InLocation) == 0x000050, "Member 'MiniMapIcons_C_OnCreateRaidIcon::InLocation' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateRaidIcon, TmpLocationId) == 0x00005C, "Member 'MiniMapIcons_C_OnCreateRaidIcon::TmpLocationId' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateRaidIcon, FieldStatus) == 0x000068, "Member 'MiniMapIcons_C_OnCreateRaidIcon::FieldStatus' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateRaidIcon, CallFunc_GetMiniMapIconZOrder_ReturnValue) == 0x000078, "Member 'MiniMapIcons_C_OnCreateRaidIcon::CallFunc_GetMiniMapIconZOrder_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateRaidIcon, CallFunc_IsEnableFieldStatus_IsEnable) == 0x00007C, "Member 'MiniMapIcons_C_OnCreateRaidIcon::CallFunc_IsEnableFieldStatus_IsEnable' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateRaidIcon, CallFunc_Create_ReturnValue) == 0x000080, "Member 'MiniMapIcons_C_OnCreateRaidIcon::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateRaidIcon, CallFunc_AddIcon_IconWidget) == 0x000088, "Member 'MiniMapIcons_C_OnCreateRaidIcon::CallFunc_AddIcon_IconWidget' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateRaidIcon, CallFunc_Array_Add_ReturnValue) == 0x000090, "Member 'MiniMapIcons_C_OnCreateRaidIcon::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function MiniMapIcons.MiniMapIcons_C.OnCreateDungeonIcon
// 0x0088 (0x0088 - 0x0000)
struct MiniMapIcons_C_OnCreateDungeonIcon final
{
public:
	struct FSBLocationInfo                        LocationInfo;                                      // 0x0000(0x0050)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                InLocation;                                        // 0x0050(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   TmpLocationId;                                     // 0x005C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMiniMapIconZOrder_ReturnValue;         // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEnableFieldStatus_IsEnable;             // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_719A[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMiniMapIconID_C*                       CallFunc_Create_ReturnValue;                       // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBMiniMapIconBase*                     CallFunc_AddIcon_IconWidget;                       // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MiniMapIcons_C_OnCreateDungeonIcon) == 0x000008, "Wrong alignment on MiniMapIcons_C_OnCreateDungeonIcon");
static_assert(sizeof(MiniMapIcons_C_OnCreateDungeonIcon) == 0x000088, "Wrong size on MiniMapIcons_C_OnCreateDungeonIcon");
static_assert(offsetof(MiniMapIcons_C_OnCreateDungeonIcon, LocationInfo) == 0x000000, "Member 'MiniMapIcons_C_OnCreateDungeonIcon::LocationInfo' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateDungeonIcon, InLocation) == 0x000050, "Member 'MiniMapIcons_C_OnCreateDungeonIcon::InLocation' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateDungeonIcon, TmpLocationId) == 0x00005C, "Member 'MiniMapIcons_C_OnCreateDungeonIcon::TmpLocationId' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateDungeonIcon, CallFunc_GetMiniMapIconZOrder_ReturnValue) == 0x000064, "Member 'MiniMapIcons_C_OnCreateDungeonIcon::CallFunc_GetMiniMapIconZOrder_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateDungeonIcon, CallFunc_IsEnableFieldStatus_IsEnable) == 0x000068, "Member 'MiniMapIcons_C_OnCreateDungeonIcon::CallFunc_IsEnableFieldStatus_IsEnable' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateDungeonIcon, CallFunc_Create_ReturnValue) == 0x000070, "Member 'MiniMapIcons_C_OnCreateDungeonIcon::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateDungeonIcon, CallFunc_AddIcon_IconWidget) == 0x000078, "Member 'MiniMapIcons_C_OnCreateDungeonIcon::CallFunc_AddIcon_IconWidget' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateDungeonIcon, CallFunc_Array_Add_ReturnValue) == 0x000080, "Member 'MiniMapIcons_C_OnCreateDungeonIcon::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function MiniMapIcons.MiniMapIcons_C.OnCreatePublicDungeonIcon
// 0x0088 (0x0088 - 0x0000)
struct MiniMapIcons_C_OnCreatePublicDungeonIcon final
{
public:
	struct FSBLocationInfo                        LocationInfo;                                      // 0x0000(0x0050)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FName                                   RowName;                                           // 0x0050(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                InLocation;                                        // 0x0058(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMiniMapIconZOrder_ReturnValue;         // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEnableFieldStatus_IsEnable;             // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPublicDungeonDirectWarp_IsOpen;         // 0x006A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x006B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_719B[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMiniMapIconID_C*                       CallFunc_Create_ReturnValue;                       // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_719C[0x4];                                     // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMiniMapIconBase*                     CallFunc_AddIcon_IconWidget;                       // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MiniMapIcons_C_OnCreatePublicDungeonIcon) == 0x000008, "Wrong alignment on MiniMapIcons_C_OnCreatePublicDungeonIcon");
static_assert(sizeof(MiniMapIcons_C_OnCreatePublicDungeonIcon) == 0x000088, "Wrong size on MiniMapIcons_C_OnCreatePublicDungeonIcon");
static_assert(offsetof(MiniMapIcons_C_OnCreatePublicDungeonIcon, LocationInfo) == 0x000000, "Member 'MiniMapIcons_C_OnCreatePublicDungeonIcon::LocationInfo' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreatePublicDungeonIcon, RowName) == 0x000050, "Member 'MiniMapIcons_C_OnCreatePublicDungeonIcon::RowName' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreatePublicDungeonIcon, InLocation) == 0x000058, "Member 'MiniMapIcons_C_OnCreatePublicDungeonIcon::InLocation' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreatePublicDungeonIcon, CallFunc_GetMiniMapIconZOrder_ReturnValue) == 0x000064, "Member 'MiniMapIcons_C_OnCreatePublicDungeonIcon::CallFunc_GetMiniMapIconZOrder_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreatePublicDungeonIcon, CallFunc_IsEnableFieldStatus_IsEnable) == 0x000068, "Member 'MiniMapIcons_C_OnCreatePublicDungeonIcon::CallFunc_IsEnableFieldStatus_IsEnable' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreatePublicDungeonIcon, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000069, "Member 'MiniMapIcons_C_OnCreatePublicDungeonIcon::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreatePublicDungeonIcon, CallFunc_IsPublicDungeonDirectWarp_IsOpen) == 0x00006A, "Member 'MiniMapIcons_C_OnCreatePublicDungeonIcon::CallFunc_IsPublicDungeonDirectWarp_IsOpen' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreatePublicDungeonIcon, CallFunc_BooleanOR_ReturnValue) == 0x00006B, "Member 'MiniMapIcons_C_OnCreatePublicDungeonIcon::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreatePublicDungeonIcon, CallFunc_Create_ReturnValue) == 0x000070, "Member 'MiniMapIcons_C_OnCreatePublicDungeonIcon::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreatePublicDungeonIcon, CallFunc_Array_Add_ReturnValue) == 0x000078, "Member 'MiniMapIcons_C_OnCreatePublicDungeonIcon::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreatePublicDungeonIcon, CallFunc_AddIcon_IconWidget) == 0x000080, "Member 'MiniMapIcons_C_OnCreatePublicDungeonIcon::CallFunc_AddIcon_IconWidget' has a wrong offset!");

// Function MiniMapIcons.MiniMapIcons_C.OnCreateDxBattleSupplier
// 0x0040 (0x0040 - 0x0000)
struct MiniMapIcons_C_OnCreateDxBattleSupplier final
{
public:
	const class AActor*                           InActor;                                           // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetObjectName_ReturnValue;                // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UMiniMapIconDxBattle_Supplier_C*        CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMiniMapIconZOrder_ReturnValue;         // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBMiniMapIconBase*                     CallFunc_AddIcon_IconWidget;                       // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MiniMapIcons_C_OnCreateDxBattleSupplier) == 0x000008, "Wrong alignment on MiniMapIcons_C_OnCreateDxBattleSupplier");
static_assert(sizeof(MiniMapIcons_C_OnCreateDxBattleSupplier) == 0x000040, "Wrong size on MiniMapIcons_C_OnCreateDxBattleSupplier");
static_assert(offsetof(MiniMapIcons_C_OnCreateDxBattleSupplier, InActor) == 0x000000, "Member 'MiniMapIcons_C_OnCreateDxBattleSupplier::InActor' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateDxBattleSupplier, CallFunc_GetObjectName_ReturnValue) == 0x000008, "Member 'MiniMapIcons_C_OnCreateDxBattleSupplier::CallFunc_GetObjectName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateDxBattleSupplier, CallFunc_Create_ReturnValue) == 0x000018, "Member 'MiniMapIcons_C_OnCreateDxBattleSupplier::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateDxBattleSupplier, CallFunc_Concat_StrStr_ReturnValue) == 0x000020, "Member 'MiniMapIcons_C_OnCreateDxBattleSupplier::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateDxBattleSupplier, CallFunc_Array_Add_ReturnValue) == 0x000030, "Member 'MiniMapIcons_C_OnCreateDxBattleSupplier::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateDxBattleSupplier, CallFunc_GetMiniMapIconZOrder_ReturnValue) == 0x000034, "Member 'MiniMapIcons_C_OnCreateDxBattleSupplier::CallFunc_GetMiniMapIconZOrder_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateDxBattleSupplier, CallFunc_AddIcon_IconWidget) == 0x000038, "Member 'MiniMapIcons_C_OnCreateDxBattleSupplier::CallFunc_AddIcon_IconWidget' has a wrong offset!");

// Function MiniMapIcons.MiniMapIcons_C.DeleteDxBattleSupplierIcon
// 0x0030 (0x0030 - 0x0000)
struct MiniMapIcons_C_DeleteDxBattleSupplierIcon final
{
public:
	const class AActor*                           InActor;                                           // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_719D[0x2];                                     // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMiniMapIconBase*                     CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_RemoveIcon_ReturnValue;                   // 0x0026(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0027(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MiniMapIcons_C_DeleteDxBattleSupplierIcon) == 0x000008, "Wrong alignment on MiniMapIcons_C_DeleteDxBattleSupplierIcon");
static_assert(sizeof(MiniMapIcons_C_DeleteDxBattleSupplierIcon) == 0x000030, "Wrong size on MiniMapIcons_C_DeleteDxBattleSupplierIcon");
static_assert(offsetof(MiniMapIcons_C_DeleteDxBattleSupplierIcon, InActor) == 0x000000, "Member 'MiniMapIcons_C_DeleteDxBattleSupplierIcon::InActor' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_DeleteDxBattleSupplierIcon, Temp_int_Array_Index_Variable) == 0x000008, "Member 'MiniMapIcons_C_DeleteDxBattleSupplierIcon::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_DeleteDxBattleSupplierIcon, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'MiniMapIcons_C_DeleteDxBattleSupplierIcon::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_DeleteDxBattleSupplierIcon, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'MiniMapIcons_C_DeleteDxBattleSupplierIcon::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_DeleteDxBattleSupplierIcon, Temp_bool_True_if_break_was_hit_Variable) == 0x000014, "Member 'MiniMapIcons_C_DeleteDxBattleSupplierIcon::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_DeleteDxBattleSupplierIcon, CallFunc_Not_PreBool_ReturnValue) == 0x000015, "Member 'MiniMapIcons_C_DeleteDxBattleSupplierIcon::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_DeleteDxBattleSupplierIcon, CallFunc_Array_Get_Item) == 0x000018, "Member 'MiniMapIcons_C_DeleteDxBattleSupplierIcon::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_DeleteDxBattleSupplierIcon, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'MiniMapIcons_C_DeleteDxBattleSupplierIcon::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_DeleteDxBattleSupplierIcon, CallFunc_Array_RemoveItem_ReturnValue) == 0x000024, "Member 'MiniMapIcons_C_DeleteDxBattleSupplierIcon::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_DeleteDxBattleSupplierIcon, CallFunc_Less_IntInt_ReturnValue) == 0x000025, "Member 'MiniMapIcons_C_DeleteDxBattleSupplierIcon::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_DeleteDxBattleSupplierIcon, CallFunc_RemoveIcon_ReturnValue) == 0x000026, "Member 'MiniMapIcons_C_DeleteDxBattleSupplierIcon::CallFunc_RemoveIcon_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_DeleteDxBattleSupplierIcon, CallFunc_BooleanAND_ReturnValue) == 0x000027, "Member 'MiniMapIcons_C_DeleteDxBattleSupplierIcon::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_DeleteDxBattleSupplierIcon, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000028, "Member 'MiniMapIcons_C_DeleteDxBattleSupplierIcon::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function MiniMapIcons.MiniMapIcons_C.AddIcon
// 0x0028 (0x0028 - 0x0000)
struct MiniMapIcons_C_AddIcon final
{
public:
	class USBMiniMapIconBase*                     InIconWidget;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ZOrder;                                            // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_719E[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMiniMapIconBase*                     IconWidget;                                        // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_setZOrder_CheckLog_ReturnValue;           // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_719F[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MiniMapIcons_C_AddIcon) == 0x000008, "Wrong alignment on MiniMapIcons_C_AddIcon");
static_assert(sizeof(MiniMapIcons_C_AddIcon) == 0x000028, "Wrong size on MiniMapIcons_C_AddIcon");
static_assert(offsetof(MiniMapIcons_C_AddIcon, InIconWidget) == 0x000000, "Member 'MiniMapIcons_C_AddIcon::InIconWidget' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_AddIcon, ZOrder) == 0x000008, "Member 'MiniMapIcons_C_AddIcon::ZOrder' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_AddIcon, IconWidget) == 0x000010, "Member 'MiniMapIcons_C_AddIcon::IconWidget' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_AddIcon, CallFunc_setZOrder_CheckLog_ReturnValue) == 0x000018, "Member 'MiniMapIcons_C_AddIcon::CallFunc_setZOrder_CheckLog_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_AddIcon, CallFunc_AddChild_ReturnValue) == 0x000020, "Member 'MiniMapIcons_C_AddIcon::CallFunc_AddChild_ReturnValue' has a wrong offset!");

// Function MiniMapIcons.MiniMapIcons_C.OnCreateQuestChallenge
// 0x0030 (0x0030 - 0x0000)
struct MiniMapIcons_C_OnCreateQuestChallenge final
{
public:
	ESBMiniMapIconType                            IconType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71A0[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                InLocation;                                        // 0x0004(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMiniMapIconZOrder_ReturnValue;         // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71A1[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMiniMapIconChallengeQuest_C*           CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBMiniMapIconBase*                     CallFunc_AddIcon_IconWidget;                       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MiniMapIcons_C_OnCreateQuestChallenge) == 0x000008, "Wrong alignment on MiniMapIcons_C_OnCreateQuestChallenge");
static_assert(sizeof(MiniMapIcons_C_OnCreateQuestChallenge) == 0x000030, "Wrong size on MiniMapIcons_C_OnCreateQuestChallenge");
static_assert(offsetof(MiniMapIcons_C_OnCreateQuestChallenge, IconType) == 0x000000, "Member 'MiniMapIcons_C_OnCreateQuestChallenge::IconType' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateQuestChallenge, InLocation) == 0x000004, "Member 'MiniMapIcons_C_OnCreateQuestChallenge::InLocation' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateQuestChallenge, CallFunc_GetMiniMapIconZOrder_ReturnValue) == 0x000010, "Member 'MiniMapIcons_C_OnCreateQuestChallenge::CallFunc_GetMiniMapIconZOrder_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateQuestChallenge, CallFunc_Create_ReturnValue) == 0x000018, "Member 'MiniMapIcons_C_OnCreateQuestChallenge::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateQuestChallenge, CallFunc_AddIcon_IconWidget) == 0x000020, "Member 'MiniMapIcons_C_OnCreateQuestChallenge::CallFunc_AddIcon_IconWidget' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateQuestChallenge, CallFunc_Array_Add_ReturnValue) == 0x000028, "Member 'MiniMapIcons_C_OnCreateQuestChallenge::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function MiniMapIcons.MiniMapIcons_C.OnCreateQuestNPCIcon
// 0x0030 (0x0030 - 0x0000)
struct MiniMapIcons_C_OnCreateQuestNPCIcon final
{
public:
	int32                                         QuestID;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EQuestIconType                                QuestType;                                         // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EQuestCategory2                               QuestCategory;                                     // 0x0005(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71A2[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Location;                                          // 0x0008(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMiniMapQuestIconZOrder_ReturnValue;    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMiniMapIconQuest_C*                    CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBMiniMapIconBase*                     CallFunc_AddIcon_IconWidget;                       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MiniMapIcons_C_OnCreateQuestNPCIcon) == 0x000008, "Wrong alignment on MiniMapIcons_C_OnCreateQuestNPCIcon");
static_assert(sizeof(MiniMapIcons_C_OnCreateQuestNPCIcon) == 0x000030, "Wrong size on MiniMapIcons_C_OnCreateQuestNPCIcon");
static_assert(offsetof(MiniMapIcons_C_OnCreateQuestNPCIcon, QuestID) == 0x000000, "Member 'MiniMapIcons_C_OnCreateQuestNPCIcon::QuestID' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateQuestNPCIcon, QuestType) == 0x000004, "Member 'MiniMapIcons_C_OnCreateQuestNPCIcon::QuestType' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateQuestNPCIcon, QuestCategory) == 0x000005, "Member 'MiniMapIcons_C_OnCreateQuestNPCIcon::QuestCategory' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateQuestNPCIcon, Location) == 0x000008, "Member 'MiniMapIcons_C_OnCreateQuestNPCIcon::Location' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateQuestNPCIcon, CallFunc_GetMiniMapQuestIconZOrder_ReturnValue) == 0x000014, "Member 'MiniMapIcons_C_OnCreateQuestNPCIcon::CallFunc_GetMiniMapQuestIconZOrder_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateQuestNPCIcon, CallFunc_Create_ReturnValue) == 0x000018, "Member 'MiniMapIcons_C_OnCreateQuestNPCIcon::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateQuestNPCIcon, CallFunc_AddIcon_IconWidget) == 0x000020, "Member 'MiniMapIcons_C_OnCreateQuestNPCIcon::CallFunc_AddIcon_IconWidget' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateQuestNPCIcon, CallFunc_Array_Add_ReturnValue) == 0x000028, "Member 'MiniMapIcons_C_OnCreateQuestNPCIcon::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function MiniMapIcons.MiniMapIcons_C.OnCreateUpdraftIcon
// 0x0028 (0x0028 - 0x0000)
struct MiniMapIcons_C_OnCreateUpdraftIcon final
{
public:
	const class ASBUpdraft*                       InUpdraft;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMiniMapIconZOrder_ReturnValue;         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71A3[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMiniMapIconUpdraft_C*                  CallFunc_Create_ReturnValue;                       // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBMiniMapIconBase*                     CallFunc_AddIcon_IconWidget;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MiniMapIcons_C_OnCreateUpdraftIcon) == 0x000008, "Wrong alignment on MiniMapIcons_C_OnCreateUpdraftIcon");
static_assert(sizeof(MiniMapIcons_C_OnCreateUpdraftIcon) == 0x000028, "Wrong size on MiniMapIcons_C_OnCreateUpdraftIcon");
static_assert(offsetof(MiniMapIcons_C_OnCreateUpdraftIcon, InUpdraft) == 0x000000, "Member 'MiniMapIcons_C_OnCreateUpdraftIcon::InUpdraft' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateUpdraftIcon, CallFunc_GetMiniMapIconZOrder_ReturnValue) == 0x000008, "Member 'MiniMapIcons_C_OnCreateUpdraftIcon::CallFunc_GetMiniMapIconZOrder_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateUpdraftIcon, CallFunc_Create_ReturnValue) == 0x000010, "Member 'MiniMapIcons_C_OnCreateUpdraftIcon::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateUpdraftIcon, CallFunc_AddIcon_IconWidget) == 0x000018, "Member 'MiniMapIcons_C_OnCreateUpdraftIcon::CallFunc_AddIcon_IconWidget' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateUpdraftIcon, CallFunc_Array_Add_ReturnValue) == 0x000020, "Member 'MiniMapIcons_C_OnCreateUpdraftIcon::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function MiniMapIcons.MiniMapIcons_C.OnCreateWarpPointDungeonIcon
// 0x0048 (0x0048 - 0x0000)
struct MiniMapIcons_C_OnCreateWarpPointDungeonIcon final
{
public:
	class FString                                 LevelName;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 PortalName;                                        // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UMiniMapIconWarpPointDungeon_C*         IconWarpPointDungeon;                              // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMiniMapIconWarpPointDungeon_C*         CallFunc_Create_ReturnValue;                       // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMiniMapIconZOrder_ReturnValue;         // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBMiniMapIconBase*                     CallFunc_AddIcon_IconWidget;                       // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MiniMapIcons_C_OnCreateWarpPointDungeonIcon) == 0x000008, "Wrong alignment on MiniMapIcons_C_OnCreateWarpPointDungeonIcon");
static_assert(sizeof(MiniMapIcons_C_OnCreateWarpPointDungeonIcon) == 0x000048, "Wrong size on MiniMapIcons_C_OnCreateWarpPointDungeonIcon");
static_assert(offsetof(MiniMapIcons_C_OnCreateWarpPointDungeonIcon, LevelName) == 0x000000, "Member 'MiniMapIcons_C_OnCreateWarpPointDungeonIcon::LevelName' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateWarpPointDungeonIcon, PortalName) == 0x000010, "Member 'MiniMapIcons_C_OnCreateWarpPointDungeonIcon::PortalName' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateWarpPointDungeonIcon, IconWarpPointDungeon) == 0x000020, "Member 'MiniMapIcons_C_OnCreateWarpPointDungeonIcon::IconWarpPointDungeon' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateWarpPointDungeonIcon, CallFunc_Create_ReturnValue) == 0x000028, "Member 'MiniMapIcons_C_OnCreateWarpPointDungeonIcon::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateWarpPointDungeonIcon, CallFunc_Conv_StringToName_ReturnValue) == 0x000030, "Member 'MiniMapIcons_C_OnCreateWarpPointDungeonIcon::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateWarpPointDungeonIcon, CallFunc_Array_Add_ReturnValue) == 0x000038, "Member 'MiniMapIcons_C_OnCreateWarpPointDungeonIcon::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateWarpPointDungeonIcon, CallFunc_GetMiniMapIconZOrder_ReturnValue) == 0x00003C, "Member 'MiniMapIcons_C_OnCreateWarpPointDungeonIcon::CallFunc_GetMiniMapIconZOrder_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIcons_C_OnCreateWarpPointDungeonIcon, CallFunc_AddIcon_IconWidget) == 0x000040, "Member 'MiniMapIcons_C_OnCreateWarpPointDungeonIcon::CallFunc_AddIcon_IconWidget' has a wrong offset!");

}

