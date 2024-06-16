#pragma once

 

// Package: WholeMapIcons

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function WholeMapIcons.WholeMapIcons_C.ExecuteUbergraph_WholeMapIcons
// 0x0360 (0x0360 - 0x0000)
struct WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A43[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0028(0x0010)(ZeroConstructor, NoDestructor)
	ESBMiniMapIconType                            Temp_byte_Variable;                                // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBMiniMapIconType                            Temp_byte_Variable_1;                              // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A44[0x2];                                     // 0x003A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class USBMapPartyMemberIcon* InPartyMemberIcon, bool IsDead)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x003C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x004C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_4A45[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool Result, ESBMapErrorCode ErrorCode)> K2Node_CreateDelegate_OutputDelegate_5;            // 0x0068(0x0010)(ZeroConstructor, NoDestructor)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A46[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_1;        // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A47[0x3];                                     // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_InRetCode;                      // 0x009C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bInIsExpiredStickerWeapons;     // 0x00A0(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A48[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         K2Node_CustomEvent_InExpiredStickerWeaponUniqueIds; // 0x00A8(0x0010)(ConstParm, ReferenceParm)
	struct FSBExpiredEquipmentData                K2Node_CustomEvent_InDirtyExpiredEquipmentData;    // 0x00B8(0x0130)(ConstParm)
	TDelegate<void(bool bWasSuccessful)>          K2Node_CreateDelegate_OutputDelegate_6;            // 0x01E8(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool Result)>                  K2Node_CreateDelegate_OutputDelegate_7;            // 0x01F8(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_CustomEvent_Result_1;                       // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A49[0x7];                                     // 0x0209(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_2;        // 0x0210(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 InRetCode, bool bInIsExpiredStickerWeapons, TArray<class FString>& InExpiredStickerWeaponUniqueIds, struct FSBExpiredEquipmentData& InDirtyExpiredEquipmentData)> K2Node_CreateDelegate_OutputDelegate_8;            // 0x0218(0x0010)(ZeroConstructor, NoDestructor)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_2;        // 0x0228(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0230(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A4A[0x7];                                     // 0x0231(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerCharacterCommonComponent*      CallFunc_GetPlayerCharacterCommonComponent_ReturnValue; // 0x0238(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_3;        // 0x0240(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bWasSuccessful;                 // 0x0248(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A4B[0x7];                                     // 0x0249(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_3;        // 0x0250(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0258(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A4C[0x7];                                     // 0x0259(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerCharacterCommonComponent*      CallFunc_GetPlayerCharacterCommonComponent_ReturnValue_1; // 0x0260(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Sender;                         // 0x0268(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param;                          // 0x0270(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue;             // 0x0278(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_1;           // 0x0280(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBGameInstance*                        CallFunc_GetSBGameInstance_ReturnValue;            // 0x0288(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBFieldObjectManager*                  CallFunc_GetFieldObjectManager_ReturnValue;        // 0x0290(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBGameInstance*                        CallFunc_GetSBGameInstance_ReturnValue_1;          // 0x0298(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBFieldObjectManager*                  CallFunc_GetFieldObjectManager_ReturnValue_1;      // 0x02A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x02A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue_1;            // 0x02B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_DefaultGameInstance_C*              K2Node_DynamicCast_AsBP_Default_Game_Instance;     // 0x02B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x02C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A4D[0x7];                                     // 0x02C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_DefaultGameInstance_C*              K2Node_DynamicCast_AsBP_Default_Game_Instance_1;   // 0x02C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_5;                     // 0x02D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A4E[0x7];                                     // 0x02D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UIconPartyMember_C*                     K2Node_CustomEvent_PartyMember_1;                  // 0x02D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIconPartyMember_C*                     K2Node_CustomEvent_PartyMember;                    // 0x02E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBMapPartyMemberIcon*                  K2Node_CustomEvent_InPartyMemberIcon;              // 0x02E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsDead;                         // 0x02F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBMiniMapIconType                            K2Node_Select_Default;                             // 0x02F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A4F[0x2];                                     // 0x02F2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetMiniMapIconZOrder_ReturnValue;         // 0x02F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_setZOrder_CheckLog_ReturnValue;           // 0x02F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x02F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A50[0x6];                                     // 0x02FA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0300(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBCharacterData*                       CallFunc_GetCharacterData_ReturnValue;             // 0x0308(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetNetworkDataCache_IsValid_1;            // 0x0310(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A51[0x7];                                     // 0x0311(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue_1;        // 0x0318(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBCharacterData*                       CallFunc_GetCharacterData_ReturnValue_1;           // 0x0320(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_4;        // 0x0328(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Result;                         // 0x0330(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBMapErrorCode                               K2Node_CustomEvent_ErrorCode;                      // 0x0331(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A52[0x6];                                     // 0x0332(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_4;        // 0x0338(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_6;                     // 0x0340(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A53[0x7];                                     // 0x0341(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_5;        // 0x0348(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_5;        // 0x0350(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_7;                     // 0x0358(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons) == 0x000008, "Wrong alignment on WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons");
static_assert(sizeof(WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons) == 0x000360, "Wrong size on WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons");
static_assert(offsetof(WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons, EntryPoint) == 0x000000, "Member 'WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons::EntryPoint' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons, Temp_bool_Variable) == 0x000024, "Member 'WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons, K2Node_CreateDelegate_OutputDelegate_2) == 0x000028, "Member 'WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons, Temp_byte_Variable) == 0x000038, "Member 'WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons, Temp_byte_Variable_1) == 0x000039, "Member 'WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons, K2Node_CreateDelegate_OutputDelegate_3) == 0x00003C, "Member 'WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons, K2Node_CreateDelegate_OutputDelegate_4) == 0x00004C, "Member 'WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons, CallFunc_GetPlayerController_ReturnValue) == 0x000060, "Member 'WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons, K2Node_CreateDelegate_OutputDelegate_5) == 0x000068, "Member 'WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000078, "Member 'WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons, K2Node_DynamicCast_bSuccess) == 0x000080, "Member 'WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons, CallFunc_GetPlayerController_ReturnValue_1) == 0x000088, "Member 'WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons, K2Node_DynamicCast_AsSBPlayer_Controller_1) == 0x000090, "Member 'WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons::K2Node_DynamicCast_AsSBPlayer_Controller_1' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons, K2Node_DynamicCast_bSuccess_1) == 0x000098, "Member 'WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons, K2Node_CustomEvent_InRetCode) == 0x00009C, "Member 'WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons::K2Node_CustomEvent_InRetCode' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons, K2Node_CustomEvent_bInIsExpiredStickerWeapons) == 0x0000A0, "Member 'WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons::K2Node_CustomEvent_bInIsExpiredStickerWeapons' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons, K2Node_CustomEvent_InExpiredStickerWeaponUniqueIds) == 0x0000A8, "Member 'WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons::K2Node_CustomEvent_InExpiredStickerWeaponUniqueIds' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons, K2Node_CustomEvent_InDirtyExpiredEquipmentData) == 0x0000B8, "Member 'WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons::K2Node_CustomEvent_InDirtyExpiredEquipmentData' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons, K2Node_CreateDelegate_OutputDelegate_6) == 0x0001E8, "Member 'WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons, K2Node_CreateDelegate_OutputDelegate_7) == 0x0001F8, "Member 'WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons, K2Node_CustomEvent_Result_1) == 0x000208, "Member 'WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons::K2Node_CustomEvent_Result_1' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons, CallFunc_GetPlayerController_ReturnValue_2) == 0x000210, "Member 'WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons::CallFunc_GetPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons, K2Node_CreateDelegate_OutputDelegate_8) == 0x000218, "Member 'WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons, K2Node_DynamicCast_AsSBPlayer_Controller_2) == 0x000228, "Member 'WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons::K2Node_DynamicCast_AsSBPlayer_Controller_2' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons, K2Node_DynamicCast_bSuccess_2) == 0x000230, "Member 'WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons, CallFunc_GetPlayerCharacterCommonComponent_ReturnValue) == 0x000238, "Member 'WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons::CallFunc_GetPlayerCharacterCommonComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons, CallFunc_GetPlayerController_ReturnValue_3) == 0x000240, "Member 'WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons::CallFunc_GetPlayerController_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons, K2Node_CustomEvent_bWasSuccessful) == 0x000248, "Member 'WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons::K2Node_CustomEvent_bWasSuccessful' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons, K2Node_DynamicCast_AsSBPlayer_Controller_3) == 0x000250, "Member 'WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons::K2Node_DynamicCast_AsSBPlayer_Controller_3' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons, K2Node_DynamicCast_bSuccess_3) == 0x000258, "Member 'WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons, CallFunc_GetPlayerCharacterCommonComponent_ReturnValue_1) == 0x000260, "Member 'WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons::CallFunc_GetPlayerCharacterCommonComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons, K2Node_CustomEvent_Sender) == 0x000268, "Member 'WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons::K2Node_CustomEvent_Sender' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons, K2Node_CustomEvent_Param) == 0x000270, "Member 'WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons::K2Node_CustomEvent_Param' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons, CallFunc_GetEventExecutor_ReturnValue) == 0x000278, "Member 'WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons::CallFunc_GetEventExecutor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons, CallFunc_GetEventExecutor_ReturnValue_1) == 0x000280, "Member 'WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons::CallFunc_GetEventExecutor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons, CallFunc_GetSBGameInstance_ReturnValue) == 0x000288, "Member 'WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons::CallFunc_GetSBGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons, CallFunc_GetFieldObjectManager_ReturnValue) == 0x000290, "Member 'WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons::CallFunc_GetFieldObjectManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons, CallFunc_GetSBGameInstance_ReturnValue_1) == 0x000298, "Member 'WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons::CallFunc_GetSBGameInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons, CallFunc_GetFieldObjectManager_ReturnValue_1) == 0x0002A0, "Member 'WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons::CallFunc_GetFieldObjectManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons, CallFunc_GetGameInstance_ReturnValue) == 0x0002A8, "Member 'WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons, CallFunc_GetGameInstance_ReturnValue_1) == 0x0002B0, "Member 'WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons::CallFunc_GetGameInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons, K2Node_DynamicCast_AsBP_Default_Game_Instance) == 0x0002B8, "Member 'WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons::K2Node_DynamicCast_AsBP_Default_Game_Instance' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons, K2Node_DynamicCast_bSuccess_4) == 0x0002C0, "Member 'WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons, K2Node_DynamicCast_AsBP_Default_Game_Instance_1) == 0x0002C8, "Member 'WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons::K2Node_DynamicCast_AsBP_Default_Game_Instance_1' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons, K2Node_DynamicCast_bSuccess_5) == 0x0002D0, "Member 'WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons, K2Node_CustomEvent_PartyMember_1) == 0x0002D8, "Member 'WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons::K2Node_CustomEvent_PartyMember_1' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons, K2Node_CustomEvent_PartyMember) == 0x0002E0, "Member 'WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons::K2Node_CustomEvent_PartyMember' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons, K2Node_CustomEvent_InPartyMemberIcon) == 0x0002E8, "Member 'WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons::K2Node_CustomEvent_InPartyMemberIcon' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons, K2Node_CustomEvent_IsDead) == 0x0002F0, "Member 'WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons::K2Node_CustomEvent_IsDead' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons, K2Node_Select_Default) == 0x0002F1, "Member 'WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons, CallFunc_GetMiniMapIconZOrder_ReturnValue) == 0x0002F4, "Member 'WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons::CallFunc_GetMiniMapIconZOrder_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons, CallFunc_setZOrder_CheckLog_ReturnValue) == 0x0002F8, "Member 'WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons::CallFunc_setZOrder_CheckLog_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons, CallFunc_GetNetworkDataCache_IsValid) == 0x0002F9, "Member 'WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000300, "Member 'WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons, CallFunc_GetCharacterData_ReturnValue) == 0x000308, "Member 'WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons::CallFunc_GetCharacterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons, CallFunc_GetNetworkDataCache_IsValid_1) == 0x000310, "Member 'WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons::CallFunc_GetNetworkDataCache_IsValid_1' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons, CallFunc_GetNetworkDataCache_ReturnValue_1) == 0x000318, "Member 'WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons::CallFunc_GetNetworkDataCache_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons, CallFunc_GetCharacterData_ReturnValue_1) == 0x000320, "Member 'WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons::CallFunc_GetCharacterData_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons, CallFunc_GetPlayerController_ReturnValue_4) == 0x000328, "Member 'WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons::CallFunc_GetPlayerController_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons, K2Node_CustomEvent_Result) == 0x000330, "Member 'WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons, K2Node_CustomEvent_ErrorCode) == 0x000331, "Member 'WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons::K2Node_CustomEvent_ErrorCode' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons, K2Node_DynamicCast_AsSBPlayer_Controller_4) == 0x000338, "Member 'WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons::K2Node_DynamicCast_AsSBPlayer_Controller_4' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons, K2Node_DynamicCast_bSuccess_6) == 0x000340, "Member 'WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons::K2Node_DynamicCast_bSuccess_6' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons, CallFunc_GetPlayerController_ReturnValue_5) == 0x000348, "Member 'WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons::CallFunc_GetPlayerController_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons, K2Node_DynamicCast_AsSBPlayer_Controller_5) == 0x000350, "Member 'WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons::K2Node_DynamicCast_AsSBPlayer_Controller_5' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons, K2Node_DynamicCast_bSuccess_7) == 0x000358, "Member 'WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons::K2Node_DynamicCast_bSuccess_7' has a wrong offset!");

// Function WholeMapIcons.WholeMapIcons_C.CustomEvent
// 0x0002 (0x0002 - 0x0000)
struct WholeMapIcons_C_CustomEvent final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBMapErrorCode                               ErrorCode;                                         // 0x0001(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WholeMapIcons_C_CustomEvent) == 0x000001, "Wrong alignment on WholeMapIcons_C_CustomEvent");
static_assert(sizeof(WholeMapIcons_C_CustomEvent) == 0x000002, "Wrong size on WholeMapIcons_C_CustomEvent");
static_assert(offsetof(WholeMapIcons_C_CustomEvent, Result) == 0x000000, "Member 'WholeMapIcons_C_CustomEvent::Result' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_CustomEvent, ErrorCode) == 0x000001, "Member 'WholeMapIcons_C_CustomEvent::ErrorCode' has a wrong offset!");

// Function WholeMapIcons.WholeMapIcons_C.CustomEvent_0
// 0x0010 (0x0010 - 0x0000)
struct WholeMapIcons_C_CustomEvent_0 final
{
public:
	class USBMapPartyMemberIcon*                  InPartyMemberIcon;                                 // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsDead;                                            // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WholeMapIcons_C_CustomEvent_0) == 0x000008, "Wrong alignment on WholeMapIcons_C_CustomEvent_0");
static_assert(sizeof(WholeMapIcons_C_CustomEvent_0) == 0x000010, "Wrong size on WholeMapIcons_C_CustomEvent_0");
static_assert(offsetof(WholeMapIcons_C_CustomEvent_0, InPartyMemberIcon) == 0x000000, "Member 'WholeMapIcons_C_CustomEvent_0::InPartyMemberIcon' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_CustomEvent_0, IsDead) == 0x000008, "Member 'WholeMapIcons_C_CustomEvent_0::IsDead' has a wrong offset!");

// Function WholeMapIcons.WholeMapIcons_C.UnbindPartyMemberOnSetDead
// 0x0008 (0x0008 - 0x0000)
struct WholeMapIcons_C_UnbindPartyMemberOnSetDead final
{
public:
	class UIconPartyMember_C*                     Param_PartyMember;                                 // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WholeMapIcons_C_UnbindPartyMemberOnSetDead) == 0x000008, "Wrong alignment on WholeMapIcons_C_UnbindPartyMemberOnSetDead");
static_assert(sizeof(WholeMapIcons_C_UnbindPartyMemberOnSetDead) == 0x000008, "Wrong size on WholeMapIcons_C_UnbindPartyMemberOnSetDead");
static_assert(offsetof(WholeMapIcons_C_UnbindPartyMemberOnSetDead, Param_PartyMember) == 0x000000, "Member 'WholeMapIcons_C_UnbindPartyMemberOnSetDead::Param_PartyMember' has a wrong offset!");

// Function WholeMapIcons.WholeMapIcons_C.BindPartyMemberOnSetDead
// 0x0008 (0x0008 - 0x0000)
struct WholeMapIcons_C_BindPartyMemberOnSetDead final
{
public:
	class UIconPartyMember_C*                     Param_PartyMember;                                 // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WholeMapIcons_C_BindPartyMemberOnSetDead) == 0x000008, "Wrong alignment on WholeMapIcons_C_BindPartyMemberOnSetDead");
static_assert(sizeof(WholeMapIcons_C_BindPartyMemberOnSetDead) == 0x000008, "Wrong size on WholeMapIcons_C_BindPartyMemberOnSetDead");
static_assert(offsetof(WholeMapIcons_C_BindPartyMemberOnSetDead, Param_PartyMember) == 0x000000, "Member 'WholeMapIcons_C_BindPartyMemberOnSetDead::Param_PartyMember' has a wrong offset!");

// Function WholeMapIcons.WholeMapIcons_C.CustomEvent_2
// 0x0010 (0x0010 - 0x0000)
struct WholeMapIcons_C_CustomEvent_2 final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WholeMapIcons_C_CustomEvent_2) == 0x000008, "Wrong alignment on WholeMapIcons_C_CustomEvent_2");
static_assert(sizeof(WholeMapIcons_C_CustomEvent_2) == 0x000010, "Wrong size on WholeMapIcons_C_CustomEvent_2");
static_assert(offsetof(WholeMapIcons_C_CustomEvent_2, Sender) == 0x000000, "Member 'WholeMapIcons_C_CustomEvent_2::Sender' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_CustomEvent_2, Param) == 0x000008, "Member 'WholeMapIcons_C_CustomEvent_2::Param' has a wrong offset!");

// Function WholeMapIcons.WholeMapIcons_C.OnSaveQuestCheckList
// 0x0001 (0x0001 - 0x0000)
struct WholeMapIcons_C_OnSaveQuestCheckList final
{
public:
	bool                                          bWasSuccessful;                                    // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WholeMapIcons_C_OnSaveQuestCheckList) == 0x000001, "Wrong alignment on WholeMapIcons_C_OnSaveQuestCheckList");
static_assert(sizeof(WholeMapIcons_C_OnSaveQuestCheckList) == 0x000001, "Wrong size on WholeMapIcons_C_OnSaveQuestCheckList");
static_assert(offsetof(WholeMapIcons_C_OnSaveQuestCheckList, bWasSuccessful) == 0x000000, "Member 'WholeMapIcons_C_OnSaveQuestCheckList::bWasSuccessful' has a wrong offset!");

// Function WholeMapIcons.WholeMapIcons_C.OnGetMyCharacterInfo_Event_0
// 0x0001 (0x0001 - 0x0000)
struct WholeMapIcons_C_OnGetMyCharacterInfo_Event_0 final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WholeMapIcons_C_OnGetMyCharacterInfo_Event_0) == 0x000001, "Wrong alignment on WholeMapIcons_C_OnGetMyCharacterInfo_Event_0");
static_assert(sizeof(WholeMapIcons_C_OnGetMyCharacterInfo_Event_0) == 0x000001, "Wrong size on WholeMapIcons_C_OnGetMyCharacterInfo_Event_0");
static_assert(offsetof(WholeMapIcons_C_OnGetMyCharacterInfo_Event_0, Result) == 0x000000, "Member 'WholeMapIcons_C_OnGetMyCharacterInfo_Event_0::Result' has a wrong offset!");

// Function WholeMapIcons.WholeMapIcons_C.OnClassChangeNotify_Event_0
// 0x0148 (0x0148 - 0x0000)
struct WholeMapIcons_C_OnClassChangeNotify_Event_0 final
{
public:
	int32                                         InRetCode;                                         // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInIsExpiredStickerWeapons;                        // 0x0004(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A54[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         InExpiredStickerWeaponUniqueIds;                   // 0x0008(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FSBExpiredEquipmentData                InDirtyExpiredEquipmentData;                       // 0x0018(0x0130)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WholeMapIcons_C_OnClassChangeNotify_Event_0) == 0x000008, "Wrong alignment on WholeMapIcons_C_OnClassChangeNotify_Event_0");
static_assert(sizeof(WholeMapIcons_C_OnClassChangeNotify_Event_0) == 0x000148, "Wrong size on WholeMapIcons_C_OnClassChangeNotify_Event_0");
static_assert(offsetof(WholeMapIcons_C_OnClassChangeNotify_Event_0, InRetCode) == 0x000000, "Member 'WholeMapIcons_C_OnClassChangeNotify_Event_0::InRetCode' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnClassChangeNotify_Event_0, bInIsExpiredStickerWeapons) == 0x000004, "Member 'WholeMapIcons_C_OnClassChangeNotify_Event_0::bInIsExpiredStickerWeapons' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnClassChangeNotify_Event_0, InExpiredStickerWeaponUniqueIds) == 0x000008, "Member 'WholeMapIcons_C_OnClassChangeNotify_Event_0::InExpiredStickerWeaponUniqueIds' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnClassChangeNotify_Event_0, InDirtyExpiredEquipmentData) == 0x000018, "Member 'WholeMapIcons_C_OnClassChangeNotify_Event_0::InDirtyExpiredEquipmentData' has a wrong offset!");

// Function WholeMapIcons.WholeMapIcons_C.AddIcon
// 0x0030 (0x0030 - 0x0000)
struct WholeMapIcons_C_AddIcon final
{
public:
	class UClass*                                 Param_Class;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ZOrder;                                            // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A55[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            IconWidget;                                        // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_setZOrder_CheckLog_ReturnValue;           // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WholeMapIcons_C_AddIcon) == 0x000008, "Wrong alignment on WholeMapIcons_C_AddIcon");
static_assert(sizeof(WholeMapIcons_C_AddIcon) == 0x000030, "Wrong size on WholeMapIcons_C_AddIcon");
static_assert(offsetof(WholeMapIcons_C_AddIcon, Param_Class) == 0x000000, "Member 'WholeMapIcons_C_AddIcon::Param_Class' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_AddIcon, ZOrder) == 0x000008, "Member 'WholeMapIcons_C_AddIcon::ZOrder' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_AddIcon, IconWidget) == 0x000010, "Member 'WholeMapIcons_C_AddIcon::IconWidget' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_AddIcon, CallFunc_Create_ReturnValue) == 0x000018, "Member 'WholeMapIcons_C_AddIcon::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_AddIcon, CallFunc_AddChild_ReturnValue) == 0x000020, "Member 'WholeMapIcons_C_AddIcon::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_AddIcon, CallFunc_setZOrder_CheckLog_ReturnValue) == 0x000028, "Member 'WholeMapIcons_C_AddIcon::CallFunc_setZOrder_CheckLog_ReturnValue' has a wrong offset!");

// Function WholeMapIcons.WholeMapIcons_C.AddQuestIcon
// 0x0190 (0x0190 - 0x0000)
struct WholeMapIcons_C_AddQuestIcon final
{
public:
	int32                                         InQuestIndex;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A56[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMapQuestIcon*                        SameIcon;                                          // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIconQuest_C*                           QuestIcon;                                         // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                WorldLocation;                                     // 0x0018(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EQuestIconType                                QuestType;                                         // 0x0024(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EQuestCategory2                               Category;                                          // 0x0025(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A57[0x2];                                     // 0x0026(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         QuestIndex;                                        // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A58[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FQuestMasterData                       CallFunc_FindQuestMasterData_QuestMasterData;      // 0x0030(0x0118)()
	bool                                          CallFunc_FindQuestMasterData_Exist;                // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0149(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsQuestDisableShowIcon_ReturnValue;       // 0x014A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A59[0x5];                                     // 0x014B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMapQuestIcon*                        CallFunc_IsTypeQuestIcon_ReturnValue;              // 0x0150(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMiniMapQuestIconZOrder_ReturnValue;    // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A5A[0x4];                                     // 0x015C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_AddIcon_IconWidget;                       // 0x0160(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIconQuest_C*                           K2Node_DynamicCast_AsIcon_Quest;                   // 0x0168(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A5B[0x3];                                     // 0x0171(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetQuestLocation_WorldLocation;           // 0x0174(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetQuestLocation_ReturnValue;             // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsCreatedQuestIcon_ReturnValue;           // 0x0181(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A5C[0x2];                                     // 0x0182(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0184(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EQuestIconType                                CallFunc_GetQuestIconType_ReturnValue;             // 0x0189(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDestinationMap_ReturnValue;             // 0x018A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x018B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WholeMapIcons_C_AddQuestIcon) == 0x000008, "Wrong alignment on WholeMapIcons_C_AddQuestIcon");
static_assert(sizeof(WholeMapIcons_C_AddQuestIcon) == 0x000190, "Wrong size on WholeMapIcons_C_AddQuestIcon");
static_assert(offsetof(WholeMapIcons_C_AddQuestIcon, InQuestIndex) == 0x000000, "Member 'WholeMapIcons_C_AddQuestIcon::InQuestIndex' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_AddQuestIcon, SameIcon) == 0x000008, "Member 'WholeMapIcons_C_AddQuestIcon::SameIcon' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_AddQuestIcon, QuestIcon) == 0x000010, "Member 'WholeMapIcons_C_AddQuestIcon::QuestIcon' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_AddQuestIcon, WorldLocation) == 0x000018, "Member 'WholeMapIcons_C_AddQuestIcon::WorldLocation' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_AddQuestIcon, QuestType) == 0x000024, "Member 'WholeMapIcons_C_AddQuestIcon::QuestType' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_AddQuestIcon, Category) == 0x000025, "Member 'WholeMapIcons_C_AddQuestIcon::Category' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_AddQuestIcon, QuestIndex) == 0x000028, "Member 'WholeMapIcons_C_AddQuestIcon::QuestIndex' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_AddQuestIcon, CallFunc_FindQuestMasterData_QuestMasterData) == 0x000030, "Member 'WholeMapIcons_C_AddQuestIcon::CallFunc_FindQuestMasterData_QuestMasterData' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_AddQuestIcon, CallFunc_FindQuestMasterData_Exist) == 0x000148, "Member 'WholeMapIcons_C_AddQuestIcon::CallFunc_FindQuestMasterData_Exist' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_AddQuestIcon, CallFunc_IsValid_ReturnValue) == 0x000149, "Member 'WholeMapIcons_C_AddQuestIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_AddQuestIcon, CallFunc_IsQuestDisableShowIcon_ReturnValue) == 0x00014A, "Member 'WholeMapIcons_C_AddQuestIcon::CallFunc_IsQuestDisableShowIcon_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_AddQuestIcon, CallFunc_IsTypeQuestIcon_ReturnValue) == 0x000150, "Member 'WholeMapIcons_C_AddQuestIcon::CallFunc_IsTypeQuestIcon_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_AddQuestIcon, CallFunc_GetMiniMapQuestIconZOrder_ReturnValue) == 0x000158, "Member 'WholeMapIcons_C_AddQuestIcon::CallFunc_GetMiniMapQuestIconZOrder_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_AddQuestIcon, CallFunc_AddIcon_IconWidget) == 0x000160, "Member 'WholeMapIcons_C_AddQuestIcon::CallFunc_AddIcon_IconWidget' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_AddQuestIcon, K2Node_DynamicCast_AsIcon_Quest) == 0x000168, "Member 'WholeMapIcons_C_AddQuestIcon::K2Node_DynamicCast_AsIcon_Quest' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_AddQuestIcon, K2Node_DynamicCast_bSuccess) == 0x000170, "Member 'WholeMapIcons_C_AddQuestIcon::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_AddQuestIcon, CallFunc_GetQuestLocation_WorldLocation) == 0x000174, "Member 'WholeMapIcons_C_AddQuestIcon::CallFunc_GetQuestLocation_WorldLocation' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_AddQuestIcon, CallFunc_GetQuestLocation_ReturnValue) == 0x000180, "Member 'WholeMapIcons_C_AddQuestIcon::CallFunc_GetQuestLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_AddQuestIcon, CallFunc_IsCreatedQuestIcon_ReturnValue) == 0x000181, "Member 'WholeMapIcons_C_AddQuestIcon::CallFunc_IsCreatedQuestIcon_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_AddQuestIcon, CallFunc_Array_Add_ReturnValue) == 0x000184, "Member 'WholeMapIcons_C_AddQuestIcon::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_AddQuestIcon, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000188, "Member 'WholeMapIcons_C_AddQuestIcon::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_AddQuestIcon, CallFunc_GetQuestIconType_ReturnValue) == 0x000189, "Member 'WholeMapIcons_C_AddQuestIcon::CallFunc_GetQuestIconType_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_AddQuestIcon, CallFunc_IsDestinationMap_ReturnValue) == 0x00018A, "Member 'WholeMapIcons_C_AddQuestIcon::CallFunc_IsDestinationMap_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_AddQuestIcon, CallFunc_Not_PreBool_ReturnValue) == 0x00018B, "Member 'WholeMapIcons_C_AddQuestIcon::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function WholeMapIcons.WholeMapIcons_C.OnCreateShortPin
// 0x0030 (0x0030 - 0x0000)
struct WholeMapIcons_C_OnCreateShortPin final
{
public:
	int32                                         CallFunc_GetMiniMapIconZOrder_ReturnValue;         // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A5D[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_AddIcon_IconWidget;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A5E[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UIconShortPin_C*                        K2Node_DynamicCast_AsIcon_Short_Pin;               // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A5F[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A60[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WholeMapIcons_C_OnCreateShortPin) == 0x000008, "Wrong alignment on WholeMapIcons_C_OnCreateShortPin");
static_assert(sizeof(WholeMapIcons_C_OnCreateShortPin) == 0x000030, "Wrong size on WholeMapIcons_C_OnCreateShortPin");
static_assert(offsetof(WholeMapIcons_C_OnCreateShortPin, CallFunc_GetMiniMapIconZOrder_ReturnValue) == 0x000000, "Member 'WholeMapIcons_C_OnCreateShortPin::CallFunc_GetMiniMapIconZOrder_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateShortPin, CallFunc_AddIcon_IconWidget) == 0x000008, "Member 'WholeMapIcons_C_OnCreateShortPin::CallFunc_AddIcon_IconWidget' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateShortPin, Temp_int_Variable) == 0x000010, "Member 'WholeMapIcons_C_OnCreateShortPin::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateShortPin, K2Node_DynamicCast_AsIcon_Short_Pin) == 0x000018, "Member 'WholeMapIcons_C_OnCreateShortPin::K2Node_DynamicCast_AsIcon_Short_Pin' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateShortPin, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'WholeMapIcons_C_OnCreateShortPin::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateShortPin, CallFunc_Array_Add_ReturnValue) == 0x000024, "Member 'WholeMapIcons_C_OnCreateShortPin::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateShortPin, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000028, "Member 'WholeMapIcons_C_OnCreateShortPin::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateShortPin, CallFunc_Add_IntInt_ReturnValue) == 0x00002C, "Member 'WholeMapIcons_C_OnCreateShortPin::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function WholeMapIcons.WholeMapIcons_C.OnCreateFishingIcon
// 0x0038 (0x0038 - 0x0000)
struct WholeMapIcons_C_OnCreateFishingIcon final
{
public:
	struct FVector                                InLocation;                                        // 0x0000(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A61[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UIconFishing_C*                         IconFishing;                                       // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMiniMapIconZOrder_ReturnValue;         // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A62[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_AddIcon_IconWidget;                       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIconFishing_C*                         K2Node_DynamicCast_AsIcon_Fishing;                 // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A63[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WholeMapIcons_C_OnCreateFishingIcon) == 0x000008, "Wrong alignment on WholeMapIcons_C_OnCreateFishingIcon");
static_assert(sizeof(WholeMapIcons_C_OnCreateFishingIcon) == 0x000038, "Wrong size on WholeMapIcons_C_OnCreateFishingIcon");
static_assert(offsetof(WholeMapIcons_C_OnCreateFishingIcon, InLocation) == 0x000000, "Member 'WholeMapIcons_C_OnCreateFishingIcon::InLocation' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateFishingIcon, IconFishing) == 0x000010, "Member 'WholeMapIcons_C_OnCreateFishingIcon::IconFishing' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateFishingIcon, CallFunc_GetMiniMapIconZOrder_ReturnValue) == 0x000018, "Member 'WholeMapIcons_C_OnCreateFishingIcon::CallFunc_GetMiniMapIconZOrder_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateFishingIcon, CallFunc_AddIcon_IconWidget) == 0x000020, "Member 'WholeMapIcons_C_OnCreateFishingIcon::CallFunc_AddIcon_IconWidget' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateFishingIcon, K2Node_DynamicCast_AsIcon_Fishing) == 0x000028, "Member 'WholeMapIcons_C_OnCreateFishingIcon::K2Node_DynamicCast_AsIcon_Fishing' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateFishingIcon, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'WholeMapIcons_C_OnCreateFishingIcon::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateFishingIcon, CallFunc_Array_Add_ReturnValue) == 0x000034, "Member 'WholeMapIcons_C_OnCreateFishingIcon::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function WholeMapIcons.WholeMapIcons_C.OnCreateCampIcon
// 0x0038 (0x0038 - 0x0000)
struct WholeMapIcons_C_OnCreateCampIcon final
{
public:
	struct FVector                                InLocation;                                        // 0x0000(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A64[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UIconCamp_C*                            IconCamp;                                          // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMiniMapIconZOrder_ReturnValue;         // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A65[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_AddIcon_IconWidget;                       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIconCamp_C*                            K2Node_DynamicCast_AsIcon_Camp;                    // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A66[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WholeMapIcons_C_OnCreateCampIcon) == 0x000008, "Wrong alignment on WholeMapIcons_C_OnCreateCampIcon");
static_assert(sizeof(WholeMapIcons_C_OnCreateCampIcon) == 0x000038, "Wrong size on WholeMapIcons_C_OnCreateCampIcon");
static_assert(offsetof(WholeMapIcons_C_OnCreateCampIcon, InLocation) == 0x000000, "Member 'WholeMapIcons_C_OnCreateCampIcon::InLocation' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateCampIcon, IconCamp) == 0x000010, "Member 'WholeMapIcons_C_OnCreateCampIcon::IconCamp' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateCampIcon, CallFunc_GetMiniMapIconZOrder_ReturnValue) == 0x000018, "Member 'WholeMapIcons_C_OnCreateCampIcon::CallFunc_GetMiniMapIconZOrder_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateCampIcon, CallFunc_AddIcon_IconWidget) == 0x000020, "Member 'WholeMapIcons_C_OnCreateCampIcon::CallFunc_AddIcon_IconWidget' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateCampIcon, K2Node_DynamicCast_AsIcon_Camp) == 0x000028, "Member 'WholeMapIcons_C_OnCreateCampIcon::K2Node_DynamicCast_AsIcon_Camp' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateCampIcon, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'WholeMapIcons_C_OnCreateCampIcon::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateCampIcon, CallFunc_Array_Add_ReturnValue) == 0x000034, "Member 'WholeMapIcons_C_OnCreateCampIcon::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function WholeMapIcons.WholeMapIcons_C.OnCreatePin
// 0x0078 (0x0078 - 0x0000)
struct WholeMapIcons_C_OnCreatePin final
{
public:
	struct FMapPinInfo                            MapPinInfo;                                        // 0x0000(0x0040)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                InWorldPosition;                                   // 0x0040(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A67[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UIconPin_C*                             IconPin;                                           // 0x0050(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMiniMapIconZOrder_ReturnValue;         // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A68[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_AddIcon_IconWidget;                       // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIconPin_C*                             K2Node_DynamicCast_AsIcon_Pin;                     // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A69[0x3];                                     // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WholeMapIcons_C_OnCreatePin) == 0x000008, "Wrong alignment on WholeMapIcons_C_OnCreatePin");
static_assert(sizeof(WholeMapIcons_C_OnCreatePin) == 0x000078, "Wrong size on WholeMapIcons_C_OnCreatePin");
static_assert(offsetof(WholeMapIcons_C_OnCreatePin, MapPinInfo) == 0x000000, "Member 'WholeMapIcons_C_OnCreatePin::MapPinInfo' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreatePin, InWorldPosition) == 0x000040, "Member 'WholeMapIcons_C_OnCreatePin::InWorldPosition' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreatePin, IconPin) == 0x000050, "Member 'WholeMapIcons_C_OnCreatePin::IconPin' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreatePin, CallFunc_GetMiniMapIconZOrder_ReturnValue) == 0x000058, "Member 'WholeMapIcons_C_OnCreatePin::CallFunc_GetMiniMapIconZOrder_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreatePin, CallFunc_AddIcon_IconWidget) == 0x000060, "Member 'WholeMapIcons_C_OnCreatePin::CallFunc_AddIcon_IconWidget' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreatePin, K2Node_DynamicCast_AsIcon_Pin) == 0x000068, "Member 'WholeMapIcons_C_OnCreatePin::K2Node_DynamicCast_AsIcon_Pin' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreatePin, K2Node_DynamicCast_bSuccess) == 0x000070, "Member 'WholeMapIcons_C_OnCreatePin::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreatePin, CallFunc_Array_Add_ReturnValue) == 0x000074, "Member 'WholeMapIcons_C_OnCreatePin::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function WholeMapIcons.WholeMapIcons_C.SetVisiblePinComment
// 0x0038 (0x0038 - 0x0000)
struct WholeMapIcons_C_SetVisiblePinComment final
{
public:
	bool                                          Param_IsVisible;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A6A[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A6B[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMapIcon*                             CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A6C[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UIconPin_C*                             K2Node_DynamicCast_AsIcon_Pin;                     // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WholeMapIcons_C_SetVisiblePinComment) == 0x000008, "Wrong alignment on WholeMapIcons_C_SetVisiblePinComment");
static_assert(sizeof(WholeMapIcons_C_SetVisiblePinComment) == 0x000038, "Wrong size on WholeMapIcons_C_SetVisiblePinComment");
static_assert(offsetof(WholeMapIcons_C_SetVisiblePinComment, Param_IsVisible) == 0x000000, "Member 'WholeMapIcons_C_SetVisiblePinComment::Param_IsVisible' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_SetVisiblePinComment, Temp_int_Array_Index_Variable) == 0x000004, "Member 'WholeMapIcons_C_SetVisiblePinComment::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_SetVisiblePinComment, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'WholeMapIcons_C_SetVisiblePinComment::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_SetVisiblePinComment, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'WholeMapIcons_C_SetVisiblePinComment::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_SetVisiblePinComment, CallFunc_Array_Length_ReturnValue) == 0x000010, "Member 'WholeMapIcons_C_SetVisiblePinComment::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_SetVisiblePinComment, CallFunc_Array_Get_Item) == 0x000018, "Member 'WholeMapIcons_C_SetVisiblePinComment::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_SetVisiblePinComment, CallFunc_Less_IntInt_ReturnValue) == 0x000020, "Member 'WholeMapIcons_C_SetVisiblePinComment::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_SetVisiblePinComment, K2Node_DynamicCast_AsIcon_Pin) == 0x000028, "Member 'WholeMapIcons_C_SetVisiblePinComment::K2Node_DynamicCast_AsIcon_Pin' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_SetVisiblePinComment, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'WholeMapIcons_C_SetVisiblePinComment::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function WholeMapIcons.WholeMapIcons_C.OnCreateWarpPointIcon
// 0x0058 (0x0058 - 0x0000)
struct WholeMapIcons_C_OnCreateWarpPointIcon final
{
public:
	class FString                                 LevelName;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 PortalName;                                        // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UIconWarpPoint_C*                       IconWarpPoint;                                     // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMiniMapIconZOrder_ReturnValue;         // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A6D[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_AddIcon_IconWidget;                       // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A6E[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UIconWarpPoint_C*                       K2Node_DynamicCast_AsIcon_Warp_Point;              // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WholeMapIcons_C_OnCreateWarpPointIcon) == 0x000008, "Wrong alignment on WholeMapIcons_C_OnCreateWarpPointIcon");
static_assert(sizeof(WholeMapIcons_C_OnCreateWarpPointIcon) == 0x000058, "Wrong size on WholeMapIcons_C_OnCreateWarpPointIcon");
static_assert(offsetof(WholeMapIcons_C_OnCreateWarpPointIcon, LevelName) == 0x000000, "Member 'WholeMapIcons_C_OnCreateWarpPointIcon::LevelName' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateWarpPointIcon, PortalName) == 0x000010, "Member 'WholeMapIcons_C_OnCreateWarpPointIcon::PortalName' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateWarpPointIcon, IconWarpPoint) == 0x000020, "Member 'WholeMapIcons_C_OnCreateWarpPointIcon::IconWarpPoint' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateWarpPointIcon, CallFunc_Conv_StringToName_ReturnValue) == 0x000028, "Member 'WholeMapIcons_C_OnCreateWarpPointIcon::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateWarpPointIcon, CallFunc_GetMiniMapIconZOrder_ReturnValue) == 0x000030, "Member 'WholeMapIcons_C_OnCreateWarpPointIcon::CallFunc_GetMiniMapIconZOrder_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateWarpPointIcon, CallFunc_AddIcon_IconWidget) == 0x000038, "Member 'WholeMapIcons_C_OnCreateWarpPointIcon::CallFunc_AddIcon_IconWidget' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateWarpPointIcon, CallFunc_Array_Add_ReturnValue) == 0x000040, "Member 'WholeMapIcons_C_OnCreateWarpPointIcon::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateWarpPointIcon, K2Node_DynamicCast_AsIcon_Warp_Point) == 0x000048, "Member 'WholeMapIcons_C_OnCreateWarpPointIcon::K2Node_DynamicCast_AsIcon_Warp_Point' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateWarpPointIcon, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'WholeMapIcons_C_OnCreateWarpPointIcon::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function WholeMapIcons.WholeMapIcons_C.OnCreateQuestAreaIcon
// 0x0050 (0x0050 - 0x0000)
struct WholeMapIcons_C_OnCreateQuestAreaIcon final
{
public:
	struct FVector                                InLocation;                                        // 0x0000(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InRange;                                           // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              InAreaSize;                                        // 0x0010(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           InColor;                                           // 0x0018(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIconQuestArea_C*                       QuestAreaIcon;                                     // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMiniMapIconZOrder_ReturnValue;         // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A6F[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_AddIcon_IconWidget;                       // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIconQuestArea_C*                       K2Node_DynamicCast_AsIcon_Quest_Area;              // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A70[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WholeMapIcons_C_OnCreateQuestAreaIcon) == 0x000008, "Wrong alignment on WholeMapIcons_C_OnCreateQuestAreaIcon");
static_assert(sizeof(WholeMapIcons_C_OnCreateQuestAreaIcon) == 0x000050, "Wrong size on WholeMapIcons_C_OnCreateQuestAreaIcon");
static_assert(offsetof(WholeMapIcons_C_OnCreateQuestAreaIcon, InLocation) == 0x000000, "Member 'WholeMapIcons_C_OnCreateQuestAreaIcon::InLocation' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateQuestAreaIcon, InRange) == 0x00000C, "Member 'WholeMapIcons_C_OnCreateQuestAreaIcon::InRange' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateQuestAreaIcon, InAreaSize) == 0x000010, "Member 'WholeMapIcons_C_OnCreateQuestAreaIcon::InAreaSize' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateQuestAreaIcon, InColor) == 0x000018, "Member 'WholeMapIcons_C_OnCreateQuestAreaIcon::InColor' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateQuestAreaIcon, QuestAreaIcon) == 0x000028, "Member 'WholeMapIcons_C_OnCreateQuestAreaIcon::QuestAreaIcon' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateQuestAreaIcon, CallFunc_GetMiniMapIconZOrder_ReturnValue) == 0x000030, "Member 'WholeMapIcons_C_OnCreateQuestAreaIcon::CallFunc_GetMiniMapIconZOrder_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateQuestAreaIcon, CallFunc_AddIcon_IconWidget) == 0x000038, "Member 'WholeMapIcons_C_OnCreateQuestAreaIcon::CallFunc_AddIcon_IconWidget' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateQuestAreaIcon, K2Node_DynamicCast_AsIcon_Quest_Area) == 0x000040, "Member 'WholeMapIcons_C_OnCreateQuestAreaIcon::K2Node_DynamicCast_AsIcon_Quest_Area' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateQuestAreaIcon, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'WholeMapIcons_C_OnCreateQuestAreaIcon::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateQuestAreaIcon, CallFunc_Array_Add_ReturnValue) == 0x00004C, "Member 'WholeMapIcons_C_OnCreateQuestAreaIcon::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function WholeMapIcons.WholeMapIcons_C.OnCreateQuestIcon
// 0x00C8 (0x00C8 - 0x0000)
struct WholeMapIcons_C_OnCreateQuestIcon final
{
public:
	EQuestStatus                                  Status;                                            // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A71[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         QuestIndex;                                        // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBNetworkDataCache*                    NetworkDataCache;                                  // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A72[0x1];                                     // 0x0023(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FUnlockedQuestInfo                     CallFunc_Array_Get_Item;                           // 0x0024(0x0008)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EQuestStatus                                  CallFunc_GetQuestStatus_QuestStatus;               // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A73[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetLatestMainQuest_ReturnValue;           // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x003B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_FindAcceptedQuestIndex_ReturnValue;       // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A74[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_3;                // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A75[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAcceptedQuestInfo                     CallFunc_Array_Get_Item_1;                         // 0x0050(0x0060)()
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_4;                // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A76[0x3];                                     // 0x00B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x00BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A77[0x3];                                     // 0x00BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WholeMapIcons_C_OnCreateQuestIcon) == 0x000008, "Wrong alignment on WholeMapIcons_C_OnCreateQuestIcon");
static_assert(sizeof(WholeMapIcons_C_OnCreateQuestIcon) == 0x0000C8, "Wrong size on WholeMapIcons_C_OnCreateQuestIcon");
static_assert(offsetof(WholeMapIcons_C_OnCreateQuestIcon, Status) == 0x000000, "Member 'WholeMapIcons_C_OnCreateQuestIcon::Status' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateQuestIcon, QuestIndex) == 0x000004, "Member 'WholeMapIcons_C_OnCreateQuestIcon::QuestIndex' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateQuestIcon, NetworkDataCache) == 0x000008, "Member 'WholeMapIcons_C_OnCreateQuestIcon::NetworkDataCache' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateQuestIcon, Temp_int_Array_Index_Variable) == 0x000010, "Member 'WholeMapIcons_C_OnCreateQuestIcon::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateQuestIcon, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'WholeMapIcons_C_OnCreateQuestIcon::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateQuestIcon, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'WholeMapIcons_C_OnCreateQuestIcon::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateQuestIcon, Temp_int_Array_Index_Variable_1) == 0x00001C, "Member 'WholeMapIcons_C_OnCreateQuestIcon::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateQuestIcon, CallFunc_Less_IntInt_ReturnValue) == 0x000020, "Member 'WholeMapIcons_C_OnCreateQuestIcon::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateQuestIcon, CallFunc_Less_IntInt_ReturnValue_1) == 0x000021, "Member 'WholeMapIcons_C_OnCreateQuestIcon::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateQuestIcon, CallFunc_Less_IntInt_ReturnValue_2) == 0x000022, "Member 'WholeMapIcons_C_OnCreateQuestIcon::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateQuestIcon, CallFunc_Array_Get_Item) == 0x000024, "Member 'WholeMapIcons_C_OnCreateQuestIcon::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateQuestIcon, CallFunc_Array_Length_ReturnValue) == 0x00002C, "Member 'WholeMapIcons_C_OnCreateQuestIcon::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateQuestIcon, CallFunc_GetQuestStatus_QuestStatus) == 0x000030, "Member 'WholeMapIcons_C_OnCreateQuestIcon::CallFunc_GetQuestStatus_QuestStatus' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateQuestIcon, CallFunc_GetLatestMainQuest_ReturnValue) == 0x000034, "Member 'WholeMapIcons_C_OnCreateQuestIcon::CallFunc_GetLatestMainQuest_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateQuestIcon, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000038, "Member 'WholeMapIcons_C_OnCreateQuestIcon::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateQuestIcon, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000039, "Member 'WholeMapIcons_C_OnCreateQuestIcon::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateQuestIcon, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x00003A, "Member 'WholeMapIcons_C_OnCreateQuestIcon::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateQuestIcon, CallFunc_BooleanOR_ReturnValue) == 0x00003B, "Member 'WholeMapIcons_C_OnCreateQuestIcon::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateQuestIcon, CallFunc_FindAcceptedQuestIndex_ReturnValue) == 0x00003C, "Member 'WholeMapIcons_C_OnCreateQuestIcon::CallFunc_FindAcceptedQuestIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateQuestIcon, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000040, "Member 'WholeMapIcons_C_OnCreateQuestIcon::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateQuestIcon, Temp_int_Loop_Counter_Variable_1) == 0x000044, "Member 'WholeMapIcons_C_OnCreateQuestIcon::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateQuestIcon, CallFunc_Less_IntInt_ReturnValue_3) == 0x000048, "Member 'WholeMapIcons_C_OnCreateQuestIcon::CallFunc_Less_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateQuestIcon, CallFunc_Array_Get_Item_1) == 0x000050, "Member 'WholeMapIcons_C_OnCreateQuestIcon::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateQuestIcon, CallFunc_Array_Length_ReturnValue_1) == 0x0000B0, "Member 'WholeMapIcons_C_OnCreateQuestIcon::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateQuestIcon, CallFunc_Less_IntInt_ReturnValue_4) == 0x0000B4, "Member 'WholeMapIcons_C_OnCreateQuestIcon::CallFunc_Less_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateQuestIcon, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000B8, "Member 'WholeMapIcons_C_OnCreateQuestIcon::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateQuestIcon, CallFunc_GetNetworkDataCache_IsValid) == 0x0000BC, "Member 'WholeMapIcons_C_OnCreateQuestIcon::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateQuestIcon, CallFunc_GetNetworkDataCache_ReturnValue) == 0x0000C0, "Member 'WholeMapIcons_C_OnCreateQuestIcon::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");

// Function WholeMapIcons.WholeMapIcons_C.OnCreateFacilityIcon
// 0x0090 (0x0090 - 0x0000)
struct WholeMapIcons_C_OnCreateFacilityIcon final
{
public:
	class FName                                   InProfileId;                                       // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBFacilityType                               InType;                                            // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A78[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBCharacterProfileLocationData        InLocationData;                                    // 0x0010(0x0048)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                InLocation;                                        // 0x0058(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A79[0x4];                                     // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UIconFacility_C*                        FacilityIcon;                                      // 0x0068(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMiniMapNpcIconZOrder_ReturnValue;      // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A7A[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_AddIcon_IconWidget;                       // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIconFacility_C*                        K2Node_DynamicCast_AsIcon_Facility;                // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A7B[0x3];                                     // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WholeMapIcons_C_OnCreateFacilityIcon) == 0x000008, "Wrong alignment on WholeMapIcons_C_OnCreateFacilityIcon");
static_assert(sizeof(WholeMapIcons_C_OnCreateFacilityIcon) == 0x000090, "Wrong size on WholeMapIcons_C_OnCreateFacilityIcon");
static_assert(offsetof(WholeMapIcons_C_OnCreateFacilityIcon, InProfileId) == 0x000000, "Member 'WholeMapIcons_C_OnCreateFacilityIcon::InProfileId' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateFacilityIcon, InType) == 0x000008, "Member 'WholeMapIcons_C_OnCreateFacilityIcon::InType' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateFacilityIcon, InLocationData) == 0x000010, "Member 'WholeMapIcons_C_OnCreateFacilityIcon::InLocationData' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateFacilityIcon, InLocation) == 0x000058, "Member 'WholeMapIcons_C_OnCreateFacilityIcon::InLocation' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateFacilityIcon, FacilityIcon) == 0x000068, "Member 'WholeMapIcons_C_OnCreateFacilityIcon::FacilityIcon' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateFacilityIcon, CallFunc_GetMiniMapNpcIconZOrder_ReturnValue) == 0x000070, "Member 'WholeMapIcons_C_OnCreateFacilityIcon::CallFunc_GetMiniMapNpcIconZOrder_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateFacilityIcon, CallFunc_AddIcon_IconWidget) == 0x000078, "Member 'WholeMapIcons_C_OnCreateFacilityIcon::CallFunc_AddIcon_IconWidget' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateFacilityIcon, K2Node_DynamicCast_AsIcon_Facility) == 0x000080, "Member 'WholeMapIcons_C_OnCreateFacilityIcon::K2Node_DynamicCast_AsIcon_Facility' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateFacilityIcon, K2Node_DynamicCast_bSuccess) == 0x000088, "Member 'WholeMapIcons_C_OnCreateFacilityIcon::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateFacilityIcon, CallFunc_Array_Add_ReturnValue) == 0x00008C, "Member 'WholeMapIcons_C_OnCreateFacilityIcon::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function WholeMapIcons.WholeMapIcons_C.OnCreatePartyMemberIcon
// 0x00C8 (0x00C8 - 0x0000)
struct WholeMapIcons_C_OnCreatePartyMemberIcon final
{
public:
	class UIconPartyMember_C*                     PartyMemberIcon;                                   // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ASBPlayerState*>                 OutGroupMembers;                                   // 0x0008(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<class USBPartyMemberState*>            OutPartyMembers;                                   // 0x0018(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMiniMapIconZOrder_ReturnValue;         // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            CallFunc_AddIcon_IconWidget;                       // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMiniMapIconZOrder_ReturnValue_1;       // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A7C[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UIconPartyMember_C*                     K2Node_DynamicCast_AsIcon_Party_Member;            // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A7D[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_AddIcon_IconWidget_1;                     // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIconPartyMember_C*                     K2Node_DynamicCast_AsIcon_Party_Member_1;          // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A7E[0x3];                                     // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USBPartyMemberState*>            CallFunc_GetPartyMember_OutPartyMembers;           // 0x0078(0x0010)(ReferenceParm)
	TArray<class ASBPlayerState*>                 CallFunc_GetPartyMember_OutGroupMembers;           // 0x0088(0x0010)(ReferenceParm)
	class USBPartyMemberState*                    CallFunc_Array_Get_Item;                           // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocalPlayer_ReturnValue;                // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A7F[0x2];                                     // 0x00A2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A80[0x3];                                     // 0x00A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerState*                         CallFunc_Array_Get_Item_1;                         // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A81[0x3];                                     // 0x00BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WholeMapIcons_C_OnCreatePartyMemberIcon) == 0x000008, "Wrong alignment on WholeMapIcons_C_OnCreatePartyMemberIcon");
static_assert(sizeof(WholeMapIcons_C_OnCreatePartyMemberIcon) == 0x0000C8, "Wrong size on WholeMapIcons_C_OnCreatePartyMemberIcon");
static_assert(offsetof(WholeMapIcons_C_OnCreatePartyMemberIcon, PartyMemberIcon) == 0x000000, "Member 'WholeMapIcons_C_OnCreatePartyMemberIcon::PartyMemberIcon' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreatePartyMemberIcon, OutGroupMembers) == 0x000008, "Member 'WholeMapIcons_C_OnCreatePartyMemberIcon::OutGroupMembers' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreatePartyMemberIcon, OutPartyMembers) == 0x000018, "Member 'WholeMapIcons_C_OnCreatePartyMemberIcon::OutPartyMembers' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreatePartyMemberIcon, Temp_int_Loop_Counter_Variable) == 0x000028, "Member 'WholeMapIcons_C_OnCreatePartyMemberIcon::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreatePartyMemberIcon, CallFunc_Add_IntInt_ReturnValue) == 0x00002C, "Member 'WholeMapIcons_C_OnCreatePartyMemberIcon::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreatePartyMemberIcon, Temp_int_Array_Index_Variable) == 0x000030, "Member 'WholeMapIcons_C_OnCreatePartyMemberIcon::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreatePartyMemberIcon, CallFunc_GetMiniMapIconZOrder_ReturnValue) == 0x000034, "Member 'WholeMapIcons_C_OnCreatePartyMemberIcon::CallFunc_GetMiniMapIconZOrder_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreatePartyMemberIcon, CallFunc_AddIcon_IconWidget) == 0x000038, "Member 'WholeMapIcons_C_OnCreatePartyMemberIcon::CallFunc_AddIcon_IconWidget' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreatePartyMemberIcon, CallFunc_GetMiniMapIconZOrder_ReturnValue_1) == 0x000040, "Member 'WholeMapIcons_C_OnCreatePartyMemberIcon::CallFunc_GetMiniMapIconZOrder_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreatePartyMemberIcon, K2Node_DynamicCast_AsIcon_Party_Member) == 0x000048, "Member 'WholeMapIcons_C_OnCreatePartyMemberIcon::K2Node_DynamicCast_AsIcon_Party_Member' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreatePartyMemberIcon, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'WholeMapIcons_C_OnCreatePartyMemberIcon::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreatePartyMemberIcon, CallFunc_AddIcon_IconWidget_1) == 0x000058, "Member 'WholeMapIcons_C_OnCreatePartyMemberIcon::CallFunc_AddIcon_IconWidget_1' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreatePartyMemberIcon, K2Node_DynamicCast_AsIcon_Party_Member_1) == 0x000060, "Member 'WholeMapIcons_C_OnCreatePartyMemberIcon::K2Node_DynamicCast_AsIcon_Party_Member_1' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreatePartyMemberIcon, K2Node_DynamicCast_bSuccess_1) == 0x000068, "Member 'WholeMapIcons_C_OnCreatePartyMemberIcon::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreatePartyMemberIcon, CallFunc_Array_Add_ReturnValue) == 0x00006C, "Member 'WholeMapIcons_C_OnCreatePartyMemberIcon::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreatePartyMemberIcon, CallFunc_Array_Add_ReturnValue_1) == 0x000070, "Member 'WholeMapIcons_C_OnCreatePartyMemberIcon::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreatePartyMemberIcon, CallFunc_Array_Length_ReturnValue) == 0x000074, "Member 'WholeMapIcons_C_OnCreatePartyMemberIcon::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreatePartyMemberIcon, CallFunc_GetPartyMember_OutPartyMembers) == 0x000078, "Member 'WholeMapIcons_C_OnCreatePartyMemberIcon::CallFunc_GetPartyMember_OutPartyMembers' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreatePartyMemberIcon, CallFunc_GetPartyMember_OutGroupMembers) == 0x000088, "Member 'WholeMapIcons_C_OnCreatePartyMemberIcon::CallFunc_GetPartyMember_OutGroupMembers' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreatePartyMemberIcon, CallFunc_Array_Get_Item) == 0x000098, "Member 'WholeMapIcons_C_OnCreatePartyMemberIcon::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreatePartyMemberIcon, CallFunc_IsLocalPlayer_ReturnValue) == 0x0000A0, "Member 'WholeMapIcons_C_OnCreatePartyMemberIcon::CallFunc_IsLocalPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreatePartyMemberIcon, CallFunc_Not_PreBool_ReturnValue) == 0x0000A1, "Member 'WholeMapIcons_C_OnCreatePartyMemberIcon::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreatePartyMemberIcon, CallFunc_Array_Length_ReturnValue_1) == 0x0000A4, "Member 'WholeMapIcons_C_OnCreatePartyMemberIcon::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreatePartyMemberIcon, CallFunc_Less_IntInt_ReturnValue) == 0x0000A8, "Member 'WholeMapIcons_C_OnCreatePartyMemberIcon::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreatePartyMemberIcon, Temp_int_Array_Index_Variable_1) == 0x0000AC, "Member 'WholeMapIcons_C_OnCreatePartyMemberIcon::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreatePartyMemberIcon, CallFunc_Array_Get_Item_1) == 0x0000B0, "Member 'WholeMapIcons_C_OnCreatePartyMemberIcon::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreatePartyMemberIcon, Temp_int_Loop_Counter_Variable_1) == 0x0000B8, "Member 'WholeMapIcons_C_OnCreatePartyMemberIcon::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreatePartyMemberIcon, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000BC, "Member 'WholeMapIcons_C_OnCreatePartyMemberIcon::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreatePartyMemberIcon, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000C0, "Member 'WholeMapIcons_C_OnCreatePartyMemberIcon::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");

// Function WholeMapIcons.WholeMapIcons_C.OnDeletePartyMemberIcon
// 0x0030 (0x0030 - 0x0000)
struct WholeMapIcons_C_OnDeletePartyMemberIcon final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBMapIcon*                             CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A82[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UIconPartyMember_C*                     K2Node_DynamicCast_AsIcon_Party_Member;            // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WholeMapIcons_C_OnDeletePartyMemberIcon) == 0x000008, "Wrong alignment on WholeMapIcons_C_OnDeletePartyMemberIcon");
static_assert(sizeof(WholeMapIcons_C_OnDeletePartyMemberIcon) == 0x000030, "Wrong size on WholeMapIcons_C_OnDeletePartyMemberIcon");
static_assert(offsetof(WholeMapIcons_C_OnDeletePartyMemberIcon, Temp_int_Array_Index_Variable) == 0x000000, "Member 'WholeMapIcons_C_OnDeletePartyMemberIcon::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnDeletePartyMemberIcon, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'WholeMapIcons_C_OnDeletePartyMemberIcon::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnDeletePartyMemberIcon, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'WholeMapIcons_C_OnDeletePartyMemberIcon::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnDeletePartyMemberIcon, CallFunc_Array_Length_ReturnValue) == 0x00000C, "Member 'WholeMapIcons_C_OnDeletePartyMemberIcon::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnDeletePartyMemberIcon, CallFunc_Array_Get_Item) == 0x000010, "Member 'WholeMapIcons_C_OnDeletePartyMemberIcon::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnDeletePartyMemberIcon, CallFunc_Less_IntInt_ReturnValue) == 0x000018, "Member 'WholeMapIcons_C_OnDeletePartyMemberIcon::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnDeletePartyMemberIcon, K2Node_DynamicCast_AsIcon_Party_Member) == 0x000020, "Member 'WholeMapIcons_C_OnDeletePartyMemberIcon::K2Node_DynamicCast_AsIcon_Party_Member' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnDeletePartyMemberIcon, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'WholeMapIcons_C_OnDeletePartyMemberIcon::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function WholeMapIcons.WholeMapIcons_C.AddInterruptQuestIcon
// 0x0060 (0x0060 - 0x0000)
struct WholeMapIcons_C_AddInterruptQuestIcon final
{
public:
	const class ASBInterruptQuestInstance*        InInstance;                                        // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                InLocation;                                        // 0x0008(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InRange;                                           // 0x0014(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              InAreaSize;                                        // 0x0018(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIconQuestArea_C*                       QuestAreaIcon;                                     // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBInterruptQuestInstance*              QuestInstance;                                     // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Color;                                             // 0x0030(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMiniMapIconZOrder_ReturnValue;         // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A83[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_AddIcon_IconWidget;                       // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIconQuestArea_C*                       K2Node_DynamicCast_AsIcon_Quest_Area;              // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A84[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WholeMapIcons_C_AddInterruptQuestIcon) == 0x000008, "Wrong alignment on WholeMapIcons_C_AddInterruptQuestIcon");
static_assert(sizeof(WholeMapIcons_C_AddInterruptQuestIcon) == 0x000060, "Wrong size on WholeMapIcons_C_AddInterruptQuestIcon");
static_assert(offsetof(WholeMapIcons_C_AddInterruptQuestIcon, InInstance) == 0x000000, "Member 'WholeMapIcons_C_AddInterruptQuestIcon::InInstance' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_AddInterruptQuestIcon, InLocation) == 0x000008, "Member 'WholeMapIcons_C_AddInterruptQuestIcon::InLocation' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_AddInterruptQuestIcon, InRange) == 0x000014, "Member 'WholeMapIcons_C_AddInterruptQuestIcon::InRange' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_AddInterruptQuestIcon, InAreaSize) == 0x000018, "Member 'WholeMapIcons_C_AddInterruptQuestIcon::InAreaSize' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_AddInterruptQuestIcon, QuestAreaIcon) == 0x000020, "Member 'WholeMapIcons_C_AddInterruptQuestIcon::QuestAreaIcon' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_AddInterruptQuestIcon, QuestInstance) == 0x000028, "Member 'WholeMapIcons_C_AddInterruptQuestIcon::QuestInstance' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_AddInterruptQuestIcon, Color) == 0x000030, "Member 'WholeMapIcons_C_AddInterruptQuestIcon::Color' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_AddInterruptQuestIcon, CallFunc_GetMiniMapIconZOrder_ReturnValue) == 0x000040, "Member 'WholeMapIcons_C_AddInterruptQuestIcon::CallFunc_GetMiniMapIconZOrder_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_AddInterruptQuestIcon, CallFunc_AddIcon_IconWidget) == 0x000048, "Member 'WholeMapIcons_C_AddInterruptQuestIcon::CallFunc_AddIcon_IconWidget' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_AddInterruptQuestIcon, K2Node_DynamicCast_AsIcon_Quest_Area) == 0x000050, "Member 'WholeMapIcons_C_AddInterruptQuestIcon::K2Node_DynamicCast_AsIcon_Quest_Area' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_AddInterruptQuestIcon, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'WholeMapIcons_C_AddInterruptQuestIcon::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_AddInterruptQuestIcon, CallFunc_Array_Add_ReturnValue) == 0x00005C, "Member 'WholeMapIcons_C_AddInterruptQuestIcon::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function WholeMapIcons.WholeMapIcons_C.AddBuddyIcon
// 0x0058 (0x0058 - 0x0000)
struct WholeMapIcons_C_AddBuddyIcon final
{
public:
	class ASBEnemyCharacter*                      InActor;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBMapIcon*                             ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIconBuddy_C*                           BuddyIcon;                                         // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMiniMapIconZOrder_ReturnValue;         // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x001C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            CallFunc_AddIcon_IconWidget;                       // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBWholeMap*                            CallFunc_GetWholeMapWidget_ReturnValue;            // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIconBuddy_C*                           K2Node_DynamicCast_AsIcon_Buddy;                   // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A85[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_CalcWorldToMapPosition_ReturnValue;       // 0x0044(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetEditIconSizeScale_ReturnValue;         // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A86[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WholeMapIcons_C_AddBuddyIcon) == 0x000008, "Wrong alignment on WholeMapIcons_C_AddBuddyIcon");
static_assert(sizeof(WholeMapIcons_C_AddBuddyIcon) == 0x000058, "Wrong size on WholeMapIcons_C_AddBuddyIcon");
static_assert(offsetof(WholeMapIcons_C_AddBuddyIcon, InActor) == 0x000000, "Member 'WholeMapIcons_C_AddBuddyIcon::InActor' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_AddBuddyIcon, ReturnValue) == 0x000008, "Member 'WholeMapIcons_C_AddBuddyIcon::ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_AddBuddyIcon, BuddyIcon) == 0x000010, "Member 'WholeMapIcons_C_AddBuddyIcon::BuddyIcon' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_AddBuddyIcon, CallFunc_GetMiniMapIconZOrder_ReturnValue) == 0x000018, "Member 'WholeMapIcons_C_AddBuddyIcon::CallFunc_GetMiniMapIconZOrder_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_AddBuddyIcon, CallFunc_K2_GetActorLocation_ReturnValue) == 0x00001C, "Member 'WholeMapIcons_C_AddBuddyIcon::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_AddBuddyIcon, CallFunc_AddIcon_IconWidget) == 0x000028, "Member 'WholeMapIcons_C_AddBuddyIcon::CallFunc_AddIcon_IconWidget' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_AddBuddyIcon, CallFunc_GetWholeMapWidget_ReturnValue) == 0x000030, "Member 'WholeMapIcons_C_AddBuddyIcon::CallFunc_GetWholeMapWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_AddBuddyIcon, K2Node_DynamicCast_AsIcon_Buddy) == 0x000038, "Member 'WholeMapIcons_C_AddBuddyIcon::K2Node_DynamicCast_AsIcon_Buddy' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_AddBuddyIcon, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'WholeMapIcons_C_AddBuddyIcon::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_AddBuddyIcon, CallFunc_CalcWorldToMapPosition_ReturnValue) == 0x000044, "Member 'WholeMapIcons_C_AddBuddyIcon::CallFunc_CalcWorldToMapPosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_AddBuddyIcon, CallFunc_GetEditIconSizeScale_ReturnValue) == 0x00004C, "Member 'WholeMapIcons_C_AddBuddyIcon::CallFunc_GetEditIconSizeScale_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_AddBuddyIcon, CallFunc_IsValid_ReturnValue) == 0x000050, "Member 'WholeMapIcons_C_AddBuddyIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_AddBuddyIcon, CallFunc_Array_Add_ReturnValue) == 0x000054, "Member 'WholeMapIcons_C_AddBuddyIcon::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function WholeMapIcons.WholeMapIcons_C.OnCreateRaidIcon
// 0x0090 (0x0090 - 0x0000)
struct WholeMapIcons_C_OnCreateRaidIcon final
{
public:
	struct FSBLocationInfo                        LocationInfo;                                      // 0x0000(0x0050)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                InLocation;                                        // 0x0050(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   TmpLocationId;                                     // 0x005C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A87[0x4];                                     // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UIconRaidPotal_C*                       IconRaidPotal;                                     // 0x0068(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEnableFieldStatus_IsEnable;             // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A88[0x3];                                     // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetMiniMapIconZOrder_ReturnValue;         // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            CallFunc_AddIcon_IconWidget;                       // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIconRaidPotal_C*                       K2Node_DynamicCast_AsIcon_Raid_Potal;              // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A89[0x3];                                     // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WholeMapIcons_C_OnCreateRaidIcon) == 0x000008, "Wrong alignment on WholeMapIcons_C_OnCreateRaidIcon");
static_assert(sizeof(WholeMapIcons_C_OnCreateRaidIcon) == 0x000090, "Wrong size on WholeMapIcons_C_OnCreateRaidIcon");
static_assert(offsetof(WholeMapIcons_C_OnCreateRaidIcon, LocationInfo) == 0x000000, "Member 'WholeMapIcons_C_OnCreateRaidIcon::LocationInfo' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateRaidIcon, InLocation) == 0x000050, "Member 'WholeMapIcons_C_OnCreateRaidIcon::InLocation' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateRaidIcon, TmpLocationId) == 0x00005C, "Member 'WholeMapIcons_C_OnCreateRaidIcon::TmpLocationId' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateRaidIcon, IconRaidPotal) == 0x000068, "Member 'WholeMapIcons_C_OnCreateRaidIcon::IconRaidPotal' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateRaidIcon, CallFunc_IsEnableFieldStatus_IsEnable) == 0x000070, "Member 'WholeMapIcons_C_OnCreateRaidIcon::CallFunc_IsEnableFieldStatus_IsEnable' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateRaidIcon, CallFunc_GetMiniMapIconZOrder_ReturnValue) == 0x000074, "Member 'WholeMapIcons_C_OnCreateRaidIcon::CallFunc_GetMiniMapIconZOrder_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateRaidIcon, CallFunc_AddIcon_IconWidget) == 0x000078, "Member 'WholeMapIcons_C_OnCreateRaidIcon::CallFunc_AddIcon_IconWidget' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateRaidIcon, K2Node_DynamicCast_AsIcon_Raid_Potal) == 0x000080, "Member 'WholeMapIcons_C_OnCreateRaidIcon::K2Node_DynamicCast_AsIcon_Raid_Potal' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateRaidIcon, K2Node_DynamicCast_bSuccess) == 0x000088, "Member 'WholeMapIcons_C_OnCreateRaidIcon::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateRaidIcon, CallFunc_Array_Add_ReturnValue) == 0x00008C, "Member 'WholeMapIcons_C_OnCreateRaidIcon::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function WholeMapIcons.WholeMapIcons_C.OnCreateDungeonIcon
// 0x00A0 (0x00A0 - 0x0000)
struct WholeMapIcons_C_OnCreateDungeonIcon final
{
public:
	struct FSBLocationInfo                        LocationInfo;                                      // 0x0000(0x0050)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                InLocation;                                        // 0x0050(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   TmpLoactionId;                                     // 0x005C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A8A[0x4];                                     // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UIconID_C*                              IconID;                                            // 0x0068(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEnableFieldStatus_IsEnable;             // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A8B[0x3];                                     // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetMiniMapIconZOrder_ReturnValue;         // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_setZOrder_CheckLog_ReturnValue;           // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A8C[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_AddIcon_IconWidget;                       // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A8D[0x4];                                     // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UIconID_C*                              K2Node_DynamicCast_AsIcon_ID;                      // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WholeMapIcons_C_OnCreateDungeonIcon) == 0x000008, "Wrong alignment on WholeMapIcons_C_OnCreateDungeonIcon");
static_assert(sizeof(WholeMapIcons_C_OnCreateDungeonIcon) == 0x0000A0, "Wrong size on WholeMapIcons_C_OnCreateDungeonIcon");
static_assert(offsetof(WholeMapIcons_C_OnCreateDungeonIcon, LocationInfo) == 0x000000, "Member 'WholeMapIcons_C_OnCreateDungeonIcon::LocationInfo' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateDungeonIcon, InLocation) == 0x000050, "Member 'WholeMapIcons_C_OnCreateDungeonIcon::InLocation' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateDungeonIcon, TmpLoactionId) == 0x00005C, "Member 'WholeMapIcons_C_OnCreateDungeonIcon::TmpLoactionId' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateDungeonIcon, IconID) == 0x000068, "Member 'WholeMapIcons_C_OnCreateDungeonIcon::IconID' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateDungeonIcon, CallFunc_IsEnableFieldStatus_IsEnable) == 0x000070, "Member 'WholeMapIcons_C_OnCreateDungeonIcon::CallFunc_IsEnableFieldStatus_IsEnable' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateDungeonIcon, CallFunc_GetMiniMapIconZOrder_ReturnValue) == 0x000074, "Member 'WholeMapIcons_C_OnCreateDungeonIcon::CallFunc_GetMiniMapIconZOrder_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateDungeonIcon, CallFunc_setZOrder_CheckLog_ReturnValue) == 0x000078, "Member 'WholeMapIcons_C_OnCreateDungeonIcon::CallFunc_setZOrder_CheckLog_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateDungeonIcon, CallFunc_AddIcon_IconWidget) == 0x000080, "Member 'WholeMapIcons_C_OnCreateDungeonIcon::CallFunc_AddIcon_IconWidget' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateDungeonIcon, CallFunc_Array_Add_ReturnValue) == 0x000088, "Member 'WholeMapIcons_C_OnCreateDungeonIcon::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateDungeonIcon, K2Node_DynamicCast_AsIcon_ID) == 0x000090, "Member 'WholeMapIcons_C_OnCreateDungeonIcon::K2Node_DynamicCast_AsIcon_ID' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateDungeonIcon, K2Node_DynamicCast_bSuccess) == 0x000098, "Member 'WholeMapIcons_C_OnCreateDungeonIcon::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function WholeMapIcons.WholeMapIcons_C.AddNamedEnemyIcon
// 0x00B0 (0x00B0 - 0x0000)
struct WholeMapIcons_C_AddNamedEnemyIcon final
{
public:
	class ASBEnemyCharacter*                      InActor;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBMapIcon*                             ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIconNamedEnemy_C*                      IconNamedEnemy;                                    // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBEnemyCharacter*                      EnemyCharacter;                                    // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 EnemyId;                                           // 0x0020(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetEnemyId_ReturnValue;                   // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0040(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A8E[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBGameInstance*                        K2Node_DynamicCast_AsSBGame_Instance;              // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A8F[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBActorManager*                        CallFunc_GetActorManager_ReturnValue;              // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBEnemyCharacter*                      CallFunc_GetEnemyForID_ReturnValue;                // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMiniMapIconZOrder_ReturnValue;         // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            CallFunc_AddIcon_IconWidget;                       // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIconNamedEnemy_C*                      K2Node_DynamicCast_AsIcon_Named_Enemy;             // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A90[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBWholeMap*                            CallFunc_GetWholeMapWidget_ReturnValue;            // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_CalcWorldToMapPosition_ReturnValue;       // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetEditIconSizeScale_ReturnValue;         // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WholeMapIcons_C_AddNamedEnemyIcon) == 0x000008, "Wrong alignment on WholeMapIcons_C_AddNamedEnemyIcon");
static_assert(sizeof(WholeMapIcons_C_AddNamedEnemyIcon) == 0x0000B0, "Wrong size on WholeMapIcons_C_AddNamedEnemyIcon");
static_assert(offsetof(WholeMapIcons_C_AddNamedEnemyIcon, InActor) == 0x000000, "Member 'WholeMapIcons_C_AddNamedEnemyIcon::InActor' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_AddNamedEnemyIcon, ReturnValue) == 0x000008, "Member 'WholeMapIcons_C_AddNamedEnemyIcon::ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_AddNamedEnemyIcon, IconNamedEnemy) == 0x000010, "Member 'WholeMapIcons_C_AddNamedEnemyIcon::IconNamedEnemy' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_AddNamedEnemyIcon, EnemyCharacter) == 0x000018, "Member 'WholeMapIcons_C_AddNamedEnemyIcon::EnemyCharacter' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_AddNamedEnemyIcon, EnemyId) == 0x000020, "Member 'WholeMapIcons_C_AddNamedEnemyIcon::EnemyId' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_AddNamedEnemyIcon, CallFunc_GetEnemyId_ReturnValue) == 0x000030, "Member 'WholeMapIcons_C_AddNamedEnemyIcon::CallFunc_GetEnemyId_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_AddNamedEnemyIcon, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000040, "Member 'WholeMapIcons_C_AddNamedEnemyIcon::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_AddNamedEnemyIcon, CallFunc_GetGameInstance_ReturnValue) == 0x000050, "Member 'WholeMapIcons_C_AddNamedEnemyIcon::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_AddNamedEnemyIcon, K2Node_DynamicCast_AsSBGame_Instance) == 0x000058, "Member 'WholeMapIcons_C_AddNamedEnemyIcon::K2Node_DynamicCast_AsSBGame_Instance' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_AddNamedEnemyIcon, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'WholeMapIcons_C_AddNamedEnemyIcon::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_AddNamedEnemyIcon, CallFunc_GetActorManager_ReturnValue) == 0x000068, "Member 'WholeMapIcons_C_AddNamedEnemyIcon::CallFunc_GetActorManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_AddNamedEnemyIcon, CallFunc_GetEnemyForID_ReturnValue) == 0x000070, "Member 'WholeMapIcons_C_AddNamedEnemyIcon::CallFunc_GetEnemyForID_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_AddNamedEnemyIcon, CallFunc_Array_Add_ReturnValue) == 0x000078, "Member 'WholeMapIcons_C_AddNamedEnemyIcon::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_AddNamedEnemyIcon, CallFunc_GetMiniMapIconZOrder_ReturnValue) == 0x00007C, "Member 'WholeMapIcons_C_AddNamedEnemyIcon::CallFunc_GetMiniMapIconZOrder_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_AddNamedEnemyIcon, CallFunc_AddIcon_IconWidget) == 0x000080, "Member 'WholeMapIcons_C_AddNamedEnemyIcon::CallFunc_AddIcon_IconWidget' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_AddNamedEnemyIcon, K2Node_DynamicCast_AsIcon_Named_Enemy) == 0x000088, "Member 'WholeMapIcons_C_AddNamedEnemyIcon::K2Node_DynamicCast_AsIcon_Named_Enemy' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_AddNamedEnemyIcon, K2Node_DynamicCast_bSuccess_1) == 0x000090, "Member 'WholeMapIcons_C_AddNamedEnemyIcon::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_AddNamedEnemyIcon, CallFunc_GetWholeMapWidget_ReturnValue) == 0x000098, "Member 'WholeMapIcons_C_AddNamedEnemyIcon::CallFunc_GetWholeMapWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_AddNamedEnemyIcon, CallFunc_CalcWorldToMapPosition_ReturnValue) == 0x0000A0, "Member 'WholeMapIcons_C_AddNamedEnemyIcon::CallFunc_CalcWorldToMapPosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_AddNamedEnemyIcon, CallFunc_GetEditIconSizeScale_ReturnValue) == 0x0000A8, "Member 'WholeMapIcons_C_AddNamedEnemyIcon::CallFunc_GetEditIconSizeScale_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_AddNamedEnemyIcon, CallFunc_IsValid_ReturnValue) == 0x0000AC, "Member 'WholeMapIcons_C_AddNamedEnemyIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WholeMapIcons.WholeMapIcons_C.OnCreatePublicDungeonIcon
// 0x00A0 (0x00A0 - 0x0000)
struct WholeMapIcons_C_OnCreatePublicDungeonIcon final
{
public:
	struct FSBLocationInfo                        LocationInfo;                                      // 0x0000(0x0050)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FName                                   RowName;                                           // 0x0050(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                InLocation;                                        // 0x0058(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A91[0x4];                                     // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UIconID_C*                              IconID;                                            // 0x0068(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEnableFieldStatus_IsEnable;             // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPublicDungeonDirectWarp_IsOpen;         // 0x0072(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0073(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_GetMiniMapIconZOrder_ReturnValue;         // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_setZOrder_CheckLog_ReturnValue;           // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A92[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_AddIcon_IconWidget;                       // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A93[0x4];                                     // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UIconID_C*                              K2Node_DynamicCast_AsIcon_ID;                      // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WholeMapIcons_C_OnCreatePublicDungeonIcon) == 0x000008, "Wrong alignment on WholeMapIcons_C_OnCreatePublicDungeonIcon");
static_assert(sizeof(WholeMapIcons_C_OnCreatePublicDungeonIcon) == 0x0000A0, "Wrong size on WholeMapIcons_C_OnCreatePublicDungeonIcon");
static_assert(offsetof(WholeMapIcons_C_OnCreatePublicDungeonIcon, LocationInfo) == 0x000000, "Member 'WholeMapIcons_C_OnCreatePublicDungeonIcon::LocationInfo' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreatePublicDungeonIcon, RowName) == 0x000050, "Member 'WholeMapIcons_C_OnCreatePublicDungeonIcon::RowName' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreatePublicDungeonIcon, InLocation) == 0x000058, "Member 'WholeMapIcons_C_OnCreatePublicDungeonIcon::InLocation' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreatePublicDungeonIcon, IconID) == 0x000068, "Member 'WholeMapIcons_C_OnCreatePublicDungeonIcon::IconID' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreatePublicDungeonIcon, CallFunc_IsEnableFieldStatus_IsEnable) == 0x000070, "Member 'WholeMapIcons_C_OnCreatePublicDungeonIcon::CallFunc_IsEnableFieldStatus_IsEnable' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreatePublicDungeonIcon, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000071, "Member 'WholeMapIcons_C_OnCreatePublicDungeonIcon::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreatePublicDungeonIcon, CallFunc_IsPublicDungeonDirectWarp_IsOpen) == 0x000072, "Member 'WholeMapIcons_C_OnCreatePublicDungeonIcon::CallFunc_IsPublicDungeonDirectWarp_IsOpen' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreatePublicDungeonIcon, CallFunc_BooleanOR_ReturnValue) == 0x000073, "Member 'WholeMapIcons_C_OnCreatePublicDungeonIcon::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreatePublicDungeonIcon, CallFunc_GetMiniMapIconZOrder_ReturnValue) == 0x000074, "Member 'WholeMapIcons_C_OnCreatePublicDungeonIcon::CallFunc_GetMiniMapIconZOrder_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreatePublicDungeonIcon, CallFunc_setZOrder_CheckLog_ReturnValue) == 0x000078, "Member 'WholeMapIcons_C_OnCreatePublicDungeonIcon::CallFunc_setZOrder_CheckLog_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreatePublicDungeonIcon, CallFunc_AddIcon_IconWidget) == 0x000080, "Member 'WholeMapIcons_C_OnCreatePublicDungeonIcon::CallFunc_AddIcon_IconWidget' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreatePublicDungeonIcon, CallFunc_Array_Add_ReturnValue) == 0x000088, "Member 'WholeMapIcons_C_OnCreatePublicDungeonIcon::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreatePublicDungeonIcon, K2Node_DynamicCast_AsIcon_ID) == 0x000090, "Member 'WholeMapIcons_C_OnCreatePublicDungeonIcon::K2Node_DynamicCast_AsIcon_ID' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreatePublicDungeonIcon, K2Node_DynamicCast_bSuccess) == 0x000098, "Member 'WholeMapIcons_C_OnCreatePublicDungeonIcon::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function WholeMapIcons.WholeMapIcons_C.OnCreateQuestChallenge
// 0x0038 (0x0038 - 0x0000)
struct WholeMapIcons_C_OnCreateQuestChallenge final
{
public:
	ESBMiniMapIconType                            IconType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A94[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                InLocation;                                        // 0x0004(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIconChallengeQuest_C*                  QuestChallengeIcon;                                // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMiniMapIconZOrder_ReturnValue;         // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A95[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_AddIcon_IconWidget;                       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIconChallengeQuest_C*                  K2Node_DynamicCast_AsIcon_Challenge_Quest;         // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A96[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WholeMapIcons_C_OnCreateQuestChallenge) == 0x000008, "Wrong alignment on WholeMapIcons_C_OnCreateQuestChallenge");
static_assert(sizeof(WholeMapIcons_C_OnCreateQuestChallenge) == 0x000038, "Wrong size on WholeMapIcons_C_OnCreateQuestChallenge");
static_assert(offsetof(WholeMapIcons_C_OnCreateQuestChallenge, IconType) == 0x000000, "Member 'WholeMapIcons_C_OnCreateQuestChallenge::IconType' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateQuestChallenge, InLocation) == 0x000004, "Member 'WholeMapIcons_C_OnCreateQuestChallenge::InLocation' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateQuestChallenge, QuestChallengeIcon) == 0x000010, "Member 'WholeMapIcons_C_OnCreateQuestChallenge::QuestChallengeIcon' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateQuestChallenge, CallFunc_GetMiniMapIconZOrder_ReturnValue) == 0x000018, "Member 'WholeMapIcons_C_OnCreateQuestChallenge::CallFunc_GetMiniMapIconZOrder_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateQuestChallenge, CallFunc_AddIcon_IconWidget) == 0x000020, "Member 'WholeMapIcons_C_OnCreateQuestChallenge::CallFunc_AddIcon_IconWidget' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateQuestChallenge, K2Node_DynamicCast_AsIcon_Challenge_Quest) == 0x000028, "Member 'WholeMapIcons_C_OnCreateQuestChallenge::K2Node_DynamicCast_AsIcon_Challenge_Quest' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateQuestChallenge, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'WholeMapIcons_C_OnCreateQuestChallenge::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateQuestChallenge, CallFunc_Array_Add_ReturnValue) == 0x000034, "Member 'WholeMapIcons_C_OnCreateQuestChallenge::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function WholeMapIcons.WholeMapIcons_C.OnCreateQuestNPCIcon
// 0x0040 (0x0040 - 0x0000)
struct WholeMapIcons_C_OnCreateQuestNPCIcon final
{
public:
	int32                                         QuestID;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EQuestIconType                                QuestType;                                         // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EQuestCategory2                               QuestCategory;                                     // 0x0005(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A97[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Location;                                          // 0x0008(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A98[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UIconQuest_C*                           QuestIcon;                                         // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMiniMapQuestIconZOrder_ReturnValue;    // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A99[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_AddIcon_IconWidget;                       // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIconQuest_C*                           K2Node_DynamicCast_AsIcon_Quest;                   // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A9A[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WholeMapIcons_C_OnCreateQuestNPCIcon) == 0x000008, "Wrong alignment on WholeMapIcons_C_OnCreateQuestNPCIcon");
static_assert(sizeof(WholeMapIcons_C_OnCreateQuestNPCIcon) == 0x000040, "Wrong size on WholeMapIcons_C_OnCreateQuestNPCIcon");
static_assert(offsetof(WholeMapIcons_C_OnCreateQuestNPCIcon, QuestID) == 0x000000, "Member 'WholeMapIcons_C_OnCreateQuestNPCIcon::QuestID' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateQuestNPCIcon, QuestType) == 0x000004, "Member 'WholeMapIcons_C_OnCreateQuestNPCIcon::QuestType' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateQuestNPCIcon, QuestCategory) == 0x000005, "Member 'WholeMapIcons_C_OnCreateQuestNPCIcon::QuestCategory' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateQuestNPCIcon, Location) == 0x000008, "Member 'WholeMapIcons_C_OnCreateQuestNPCIcon::Location' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateQuestNPCIcon, QuestIcon) == 0x000018, "Member 'WholeMapIcons_C_OnCreateQuestNPCIcon::QuestIcon' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateQuestNPCIcon, CallFunc_GetMiniMapQuestIconZOrder_ReturnValue) == 0x000020, "Member 'WholeMapIcons_C_OnCreateQuestNPCIcon::CallFunc_GetMiniMapQuestIconZOrder_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateQuestNPCIcon, CallFunc_AddIcon_IconWidget) == 0x000028, "Member 'WholeMapIcons_C_OnCreateQuestNPCIcon::CallFunc_AddIcon_IconWidget' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateQuestNPCIcon, K2Node_DynamicCast_AsIcon_Quest) == 0x000030, "Member 'WholeMapIcons_C_OnCreateQuestNPCIcon::K2Node_DynamicCast_AsIcon_Quest' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateQuestNPCIcon, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'WholeMapIcons_C_OnCreateQuestNPCIcon::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateQuestNPCIcon, CallFunc_Array_Add_ReturnValue) == 0x00003C, "Member 'WholeMapIcons_C_OnCreateQuestNPCIcon::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function WholeMapIcons.WholeMapIcons_C.OnCreateWarpPointDungeonIcon
// 0x0050 (0x0050 - 0x0000)
struct WholeMapIcons_C_OnCreateWarpPointDungeonIcon final
{
public:
	class FString                                 LevelName;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 PortalName;                                        // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UIconWarpPointDungeon_C*                IconWarpPointDungeon;                              // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMiniMapIconZOrder_ReturnValue;         // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            CallFunc_AddIcon_IconWidget;                       // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIconWarpPointDungeon_C*                K2Node_DynamicCast_AsIcon_Warp_Point_Dungeon;      // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WholeMapIcons_C_OnCreateWarpPointDungeonIcon) == 0x000008, "Wrong alignment on WholeMapIcons_C_OnCreateWarpPointDungeonIcon");
static_assert(sizeof(WholeMapIcons_C_OnCreateWarpPointDungeonIcon) == 0x000050, "Wrong size on WholeMapIcons_C_OnCreateWarpPointDungeonIcon");
static_assert(offsetof(WholeMapIcons_C_OnCreateWarpPointDungeonIcon, LevelName) == 0x000000, "Member 'WholeMapIcons_C_OnCreateWarpPointDungeonIcon::LevelName' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateWarpPointDungeonIcon, PortalName) == 0x000010, "Member 'WholeMapIcons_C_OnCreateWarpPointDungeonIcon::PortalName' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateWarpPointDungeonIcon, IconWarpPointDungeon) == 0x000020, "Member 'WholeMapIcons_C_OnCreateWarpPointDungeonIcon::IconWarpPointDungeon' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateWarpPointDungeonIcon, CallFunc_Conv_StringToName_ReturnValue) == 0x000028, "Member 'WholeMapIcons_C_OnCreateWarpPointDungeonIcon::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateWarpPointDungeonIcon, CallFunc_Array_Add_ReturnValue) == 0x000030, "Member 'WholeMapIcons_C_OnCreateWarpPointDungeonIcon::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateWarpPointDungeonIcon, CallFunc_GetMiniMapIconZOrder_ReturnValue) == 0x000034, "Member 'WholeMapIcons_C_OnCreateWarpPointDungeonIcon::CallFunc_GetMiniMapIconZOrder_ReturnValue' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateWarpPointDungeonIcon, CallFunc_AddIcon_IconWidget) == 0x000038, "Member 'WholeMapIcons_C_OnCreateWarpPointDungeonIcon::CallFunc_AddIcon_IconWidget' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateWarpPointDungeonIcon, K2Node_DynamicCast_AsIcon_Warp_Point_Dungeon) == 0x000040, "Member 'WholeMapIcons_C_OnCreateWarpPointDungeonIcon::K2Node_DynamicCast_AsIcon_Warp_Point_Dungeon' has a wrong offset!");
static_assert(offsetof(WholeMapIcons_C_OnCreateWarpPointDungeonIcon, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'WholeMapIcons_C_OnCreateWarpPointDungeonIcon::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

