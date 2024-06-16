#pragma once

 

// Package: BattleCordeEditForBattleSet

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "InventoryItemData_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "InventoryData_structs.hpp"
#include "Engine_structs.hpp"
#include "E_BattleSetInfoType_structs.hpp"


namespace SDK::Params
{

// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnLeftSideParameterStatusUpdated__DelegateSignature
// 0x0002 (0x0002 - 0x0000)
struct BattleCordeEditForBattleSet_C_OnLeftSideParameterStatusUpdated__DelegateSignature final
{
public:
	E_BattleSetInfoType                           InBattleSetInfoType;                               // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InIncludesClassInfoUpdate;                         // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleCordeEditForBattleSet_C_OnLeftSideParameterStatusUpdated__DelegateSignature) == 0x000001, "Wrong alignment on BattleCordeEditForBattleSet_C_OnLeftSideParameterStatusUpdated__DelegateSignature");
static_assert(sizeof(BattleCordeEditForBattleSet_C_OnLeftSideParameterStatusUpdated__DelegateSignature) == 0x000002, "Wrong size on BattleCordeEditForBattleSet_C_OnLeftSideParameterStatusUpdated__DelegateSignature");
static_assert(offsetof(BattleCordeEditForBattleSet_C_OnLeftSideParameterStatusUpdated__DelegateSignature, InBattleSetInfoType) == 0x000000, "Member 'BattleCordeEditForBattleSet_C_OnLeftSideParameterStatusUpdated__DelegateSignature::InBattleSetInfoType' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_OnLeftSideParameterStatusUpdated__DelegateSignature, InIncludesClassInfoUpdate) == 0x000001, "Member 'BattleCordeEditForBattleSet_C_OnLeftSideParameterStatusUpdated__DelegateSignature::InIncludesClassInfoUpdate' has a wrong offset!");

// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnSetPlayerAvatarRotateActive__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct BattleCordeEditForBattleSet_C_OnSetPlayerAvatarRotateActive__DelegateSignature final
{
public:
	bool                                          InRotateActive;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleCordeEditForBattleSet_C_OnSetPlayerAvatarRotateActive__DelegateSignature) == 0x000001, "Wrong alignment on BattleCordeEditForBattleSet_C_OnSetPlayerAvatarRotateActive__DelegateSignature");
static_assert(sizeof(BattleCordeEditForBattleSet_C_OnSetPlayerAvatarRotateActive__DelegateSignature) == 0x000001, "Wrong size on BattleCordeEditForBattleSet_C_OnSetPlayerAvatarRotateActive__DelegateSignature");
static_assert(offsetof(BattleCordeEditForBattleSet_C_OnSetPlayerAvatarRotateActive__DelegateSignature, InRotateActive) == 0x000000, "Member 'BattleCordeEditForBattleSet_C_OnSetPlayerAvatarRotateActive__DelegateSignature::InRotateActive' has a wrong offset!");

// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnSetLeftSideParameterExpGaugeUpdateStop__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct BattleCordeEditForBattleSet_C_OnSetLeftSideParameterExpGaugeUpdateStop__DelegateSignature final
{
public:
	bool                                          InIsUpdateStop;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleCordeEditForBattleSet_C_OnSetLeftSideParameterExpGaugeUpdateStop__DelegateSignature) == 0x000001, "Wrong alignment on BattleCordeEditForBattleSet_C_OnSetLeftSideParameterExpGaugeUpdateStop__DelegateSignature");
static_assert(sizeof(BattleCordeEditForBattleSet_C_OnSetLeftSideParameterExpGaugeUpdateStop__DelegateSignature) == 0x000001, "Wrong size on BattleCordeEditForBattleSet_C_OnSetLeftSideParameterExpGaugeUpdateStop__DelegateSignature");
static_assert(offsetof(BattleCordeEditForBattleSet_C_OnSetLeftSideParameterExpGaugeUpdateStop__DelegateSignature, InIsUpdateStop) == 0x000000, "Member 'BattleCordeEditForBattleSet_C_OnSetLeftSideParameterExpGaugeUpdateStop__DelegateSignature::InIsUpdateStop' has a wrong offset!");

// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ExecuteUbergraph_BattleCordeEditForBattleSet
// 0x13F8 (0x13F8 - 0x0000)
struct BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5842[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBPlayerPresetEquipItem>       CallFunc_ExcludePlayerPresetEquipItemNotInEquipmentBag_OutPresetEquipItems; // 0x0008(0x0010)(ReferenceParm)
	class ASBPlayerState*                         CallFunc_GetSBPlayerState_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 InRetCode, TArray<struct FOwnItemInfo>& InDirtyItems)> K2Node_CreateDelegate_OutputDelegate;              // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5843[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerStorageComponent*              CallFunc_GetPlayerStorageComponent_ReturnValue;    // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5844[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_InRetCode_2;                    // 0x0044(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FOwnItemInfo>                   K2Node_CustomEvent_InDirtyItems;                   // 0x0048(0x0010)(ConstParm, ReferenceParm)
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue;              // 0x0058(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5845[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0070(0x0018)()
	bool                                          K2Node_CustomEvent_InIsForRename;                  // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_InUnbindEvent;                  // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x008A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5846[0x1];                                     // 0x008B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0090(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x00A0(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(const class FString& PlayerName)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x00B0(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(const class FString& PlayerName)> K2Node_CreateDelegate_OutputDelegate_4;            // 0x00C0(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_5;            // 0x00D0(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_6;            // 0x00E0(0x0010)(ZeroConstructor, NoDestructor)
	class FString                                 K2Node_CustomEvent_PlayerName;                     // 0x00F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0101(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x0102(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5847[0x1];                                     // 0x0103(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5848[0x7];                                     // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlayerPresetEquipList               CallFunc_GetCordeData_OutCordeData;                // 0x0110(0x0018)()
	struct FSBPlayerPresetEquipList               K2Node_SetFieldsInStruct_StructOut;                // 0x0128(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetPlayerPresetEquipListByIndex_ReturnValue; // 0x0141(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5849[0x6];                                     // 0x0142(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate_7;            // 0x0150(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_7;                    // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_8;                    // 0x0161(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_584A[0x6];                                     // 0x0162(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0168(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetUIManager_IsValid;                     // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_584B[0x7];                                     // 0x0179(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue;                 // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0188(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0198(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x01B0(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x01C8(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0208(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0218(0x0018)()
	class FString                                 CallFunc_GetClassNameText_ReturnValue;             // 0x0230(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0240(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0250(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x0260(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0270(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_4;          // 0x0288(0x0018)()
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x02A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_584C[0x7];                                     // 0x02A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x02A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x02B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_2;           // 0x02C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESBConfigSaveDataResult                       CallFunc_SaveGeneralConfigData_ReturnValue;        // 0x02D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_584D[0x7];                                     // 0x02D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_5;          // 0x02D8(0x0018)()
	EYesNoDialogResult                            K2Node_CustomEvent_InYesNoResult_1;                // 0x02F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x02F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_584E[0x6];                                     // 0x02F2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_3;           // 0x02F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_6;          // 0x0308(0x0018)()
	class FString                                 K2Node_CustomEvent_InNewCordeName;                 // 0x0320(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bInIsCordeOverwrite;            // 0x0330(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_584F[0x7];                                     // 0x0331(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_7;          // 0x0338(0x0018)()
	class FString                                 K2Node_CustomEvent_InRenamedCordeName;             // 0x0350(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0360(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_8;          // 0x03A0(0x0018)()
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x03B8(0x0010)(ReferenceParm)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x03C8(0x0040)(HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_4;           // 0x0408(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_2;                          // 0x0418(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_9;          // 0x0428(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x0440(0x0018)()
	EYesNoDialogResult                            K2Node_CustomEvent_InYesNoResult;                  // 0x0458(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0459(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5850[0x6];                                     // 0x045A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_5;           // 0x0460(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_10;         // 0x0470(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue_9;                    // 0x0488(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5851[0x7];                                     // 0x0489(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlayerPresetEquipList               CallFunc_GetCordeData_OutCordeData_1;              // 0x0490(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_11;         // 0x04A8(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue_10;                   // 0x04C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5852[0x7];                                     // 0x04C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_3;            // 0x04C8(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_3;                          // 0x0508(0x0010)(ReferenceParm)
	struct FSBPlayerPresetEquipList               CallFunc_GetCordeData_OutCordeData_2;              // 0x0518(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue_2;                     // 0x0530(0x0018)()
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue_1;       // 0x0548(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ClearPlayerPresetEquipData_ReturnValue;   // 0x0550(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_11;                   // 0x0551(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5853[0x2];                                     // 0x0552(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0554(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue_2;       // 0x0558(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate_8;            // 0x0560(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_12;                   // 0x0570(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5854[0x7];                                     // 0x0571(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_6;           // 0x0578(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_12;         // 0x0588(0x0018)()
	class FString                                 K2Node_CustomEvent_InCordeName;                    // 0x05A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_7;           // 0x05B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_13;         // 0x05C0(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_14;         // 0x05D8(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_4;            // 0x05F0(0x0040)(HasGetValueTypeHash)
	EYesNoDialogResult                            K2Node_CustomEvent_Result_2;                       // 0x0630(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5855[0x7];                                     // 0x0631(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_4;                          // 0x0638(0x0010)(ReferenceParm)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0648(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5856[0x7];                                     // 0x0649(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue_3;                     // 0x0650(0x0018)()
	bool                                          CallFunc_CheckCordeEquipmentsAreUnused_OutIsUnused; // 0x0668(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckCordeEquipmentsAreAllValid_OutIsAllEquipmentValid; // 0x0669(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckCordeEquipmentsAreAllValid_OutIsEquipmentInStorage; // 0x066A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5857[0x5];                                     // 0x066B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_8;           // 0x0670(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void(EYesNoDialogResult Result)>    K2Node_CreateDelegate_OutputDelegate_9;            // 0x0680(0x0010)(ZeroConstructor, NoDestructor)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_9;           // 0x0690(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_15;         // 0x06A0(0x0018)()
	EYesNoDialogResult                            K2Node_CustomEvent_Result_1;                       // 0x06B8(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_2;                    // 0x06B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EYesNoDialogResult                            K2Node_CustomEvent_Result;                         // 0x06BA(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_3;                    // 0x06BB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5858[0x4];                                     // 0x06BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_10;          // 0x06C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_16;         // 0x06D0(0x0018)()
	bool                                          Temp_bool_Variable;                                // 0x06E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5859[0x7];                                     // 0x06E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetEquipmentBag_ReturnValue;              // 0x06F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x06F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetFreeBlockNum_ReturnValue;              // 0x06FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_13;                   // 0x0700(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0701(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_585A[0x6];                                     // 0x0702(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBStorageItemData>             CallFunc_GetCordeEquipmentStorageItemDatas_OutEquipmentStorageItemDatas; // 0x0708(0x0010)(ReferenceParm)
	int32                                         Temp_int_Variable_1;                               // 0x0718(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_585B[0x4];                                     // 0x071C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         CallFunc_GetSBPlayerState_ReturnValue_1;           // 0x0720(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_14;                   // 0x0728(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_585C[0x7];                                     // 0x0729(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerStorageComponent*              CallFunc_GetPlayerStorageComponent_ReturnValue_1;  // 0x0730(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_ConvertStorageNumberEquipmentBagToInt32_ReturnValue; // 0x0738(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_15;                   // 0x073C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_585D[0x3];                                     // 0x073D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 InRetCode, TArray<struct FOwnItemInfo>& InDirtyItems)> K2Node_CreateDelegate_OutputDelegate_10;           // 0x0740(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x0750(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_585E[0x7];                                     // 0x0751(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_Select_Default_1;                           // 0x0758(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_11;          // 0x0768(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_17;         // 0x0778(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_12;          // 0x0790(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_13;          // 0x07A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_18;         // 0x07B0(0x0018)()
	class USBDialog*                              CallFunc_ShowYesNoDialog_ReturnValue;              // 0x07C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x07D0(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x07D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_InIsBlock_1;                    // 0x07D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_585F[0x2];                                     // 0x07DA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_2;                               // 0x07DC(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x07E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_16;                   // 0x07E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5860[0x3];                                     // 0x07E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_2;                           // 0x07EC(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_14;          // 0x07F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_19;         // 0x0800(0x0018)()
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0818(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5861[0x7];                                     // 0x0819(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue_3;       // 0x0820(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_11;           // 0x0828(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_17;                   // 0x0838(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_18;                   // 0x0839(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_19;                   // 0x083A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5862[0x5];                                     // 0x083B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UMyCharaMenu_LeftSideParameters_C*      CallFunc_GetLeftSideParameters_OutLeftSideParameters; // 0x0840(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_20;                   // 0x0848(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsCharaDetailedStatusOpen_OutIsOpen;      // 0x0849(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5863[0x6];                                     // 0x084A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue_4;       // 0x0850(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_21;                   // 0x0858(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5864[0x3];                                     // 0x0859(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_12;           // 0x085C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsHideWindowAnimePlaying_OutIsPlaying;    // 0x086C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x086D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x086E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsHideWindowAnimePlaying_OutIsPlaying_1;  // 0x086F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_3;                // 0x0870(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x0871(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5865[0x2];                                     // 0x0872(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EYesNoDialogResult Result)>    K2Node_CreateDelegate_OutputDelegate_13;           // 0x0874(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_5866[0x4];                                     // 0x0884(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDialog*                              CallFunc_ShowYesNoDialog_ReturnValue_1;            // 0x0888(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_InIsBlock;                      // 0x0890(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5867[0x3];                                     // 0x0891(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_RetCode_2;                      // 0x0894(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue_5;       // 0x0898(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue_1;            // 0x08A0(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_22;                   // 0x08B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5868[0x7];                                     // 0x08B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_20;         // 0x08B8(0x0018)()
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x08D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_23;                   // 0x08D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5869[0x2];                                     // 0x08D2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate_14;           // 0x08D4(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          Temp_bool_Variable_3;                              // 0x08E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_586A[0x3];                                     // 0x08E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate_15;           // 0x08E8(0x0010)(ZeroConstructor, NoDestructor)
	class FString                                 K2Node_Select_Default_3;                           // 0x08F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UBattleCordeListItem_C*                 K2Node_ComponentBoundEvent_InListItem;             // 0x0908(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBattleCordeListItem_C*                 K2Node_ComponentBoundEvent_InSelectedCordeListItem_1; // 0x0910(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_24;                   // 0x0918(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_586B[0x7];                                     // 0x0919(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlayerPresetEquipList               CallFunc_GetCordeData_OutCordeData_3;              // 0x0920(0x0018)()
	class UBattleCordeListItem_C*                 K2Node_ComponentBoundEvent_InSelectedCordeListItem; // 0x0938(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_25;                   // 0x0940(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_26;                   // 0x0941(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_586C[0x2];                                     // 0x0942(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetDefaultEquippedCordeId_OutCordeId;     // 0x0944(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_4;                // 0x0948(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_5;                // 0x0949(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_27;                   // 0x094A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_586D[0x1];                                     // 0x094B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EYesNoDialogResult Result)>    K2Node_CreateDelegate_OutputDelegate_16;           // 0x094C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_586E[0x4];                                     // 0x095C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlayerPresetEquipList               CallFunc_GetCurrEquippedCordeData_OutCordeData;    // 0x0960(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_21;         // 0x0978(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue_28;                   // 0x0990(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_586F[0x3];                                     // 0x0991(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0994(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetIsWeaponLost_OutIsWeaponLost;          // 0x0998(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0999(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_6;                // 0x099A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x099B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_29;                   // 0x099C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x099D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  CallFunc_GetPlayerClassType_ClassType;             // 0x099E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlayerClassChangeable_ReturnValue;      // 0x099F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x09A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5870[0x3];                                     // 0x09A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_RetCode_1;                      // 0x09A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate_17;           // 0x09A8(0x0010)(ZeroConstructor, NoDestructor)
	ESBQuestStatusOnClassChange                   CallFunc_GetQuestStatusOnClassChange_ReturnValue;  // 0x09B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x09B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5871[0x6];                                     // 0x09BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue_6;       // 0x09C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x09C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_30;                   // 0x09C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5872[0x2];                                     // 0x09CA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate_18;           // 0x09CC(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_31;                   // 0x09DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_4;                              // 0x09DD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_5;                              // 0x09DE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5873[0x1];                                     // 0x09DF(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_Select_Default_4;                           // 0x09E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_22;         // 0x09F0(0x0018)()
	class USBOwnItemListContainer*                CallFunc_GetEquipmentBag_ReturnValue_1;            // 0x0A08(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBDialog*                              CallFunc_ShowYesNoDialog_ReturnValue_2;            // 0x0A10(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_32;                   // 0x0A18(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5874[0x7];                                     // 0x0A19(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetCharacterStorage_ReturnValue;          // 0x0A20(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 InventoryIndex, ESBWeaponEquipType WeaponEquipType)> K2Node_CreateDelegate_OutputDelegate_19;           // 0x0A28(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_33;                   // 0x0A38(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5875[0x3];                                     // 0x0A39(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_InventoryIndex;                 // 0x0A3C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBWeaponEquipType                            K2Node_CustomEvent_InWeaponEquipType;              // 0x0A40(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5876[0x3];                                     // 0x0A41(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 InventoryIndex, ESBWeaponEquipType WeaponEquipType)> K2Node_CreateDelegate_OutputDelegate_20;           // 0x0A44(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate_21;           // 0x0A54(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_5877[0x4];                                     // 0x0A64(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue_2;            // 0x0A68(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0A78(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5878[0x7];                                     // 0x0A79(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_23;         // 0x0A80(0x0018)()
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue_7;       // 0x0A98(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_34;                   // 0x0AA0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5879[0x7];                                     // 0x0AA1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue_8;       // 0x0AA8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 InventoryIndex, ESBWeaponEquipType WeaponEquipType)> K2Node_CreateDelegate_OutputDelegate_22;           // 0x0AB0(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_35;                   // 0x0AC0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_587A[0x3];                                     // 0x0AC1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_3;                               // 0x0AC4(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x0AC8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_587B[0x7];                                     // 0x0AC9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue_9;       // 0x0AD0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_36;                   // 0x0AD8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_37;                   // 0x0AD9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_587C[0x6];                                     // 0x0ADA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UBattleCordeListItem_C*                 K2Node_ComponentBoundEvent_InSrcCordeListItem;     // 0x0AE0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBattleCordeListItem_C*                 K2Node_ComponentBoundEvent_InDstCordListItem;      // 0x0AE8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_RetCode;                        // 0x0AF0(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_DstListIndex;                   // 0x0AF4(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_38;                   // 0x0AF8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_587D[0x7];                                     // 0x0AF9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue_3;            // 0x0B00(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_24;         // 0x0B10(0x0018)()
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_1;            // 0x0B28(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_587E[0x7];                                     // 0x0B29(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlayerPresetEquipList               CallFunc_GetCordeData_OutCordeData_4;              // 0x0B30(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue_39;                   // 0x0B48(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_587F[0x3];                                     // 0x0B49(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0B4C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBPlayerPresetEquipList               CallFunc_GetCordeData_OutCordeData_5;              // 0x0B50(0x0018)()
	TDelegate<void(int32 RetCode, int32 DstListIndex)> K2Node_CreateDelegate_OutputDelegate_23;           // 0x0B68(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0B78(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5880[0x4];                                     // 0x0B7C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue_10;      // 0x0B80(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_4;                               // 0x0B88(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_40;                   // 0x0B8C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5881[0x3];                                     // 0x0B8D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_5;                           // 0x0B90(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5882[0x4];                                     // 0x0B94(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_15;          // 0x0B98(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_41;                   // 0x0BA8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5883[0x7];                                     // 0x0BA9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_25;         // 0x0BB0(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue_4;                     // 0x0BC8(0x0018)()
	TDelegate<void(int32 RetCode, int32 DstListIndex)> K2Node_CreateDelegate_OutputDelegate_24;           // 0x0BE0(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 RetCode, int32 DstListIndex)> K2Node_CreateDelegate_OutputDelegate_25;           // 0x0BF0(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_42;                   // 0x0C00(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_43;                   // 0x0C01(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5884[0x6];                                     // 0x0C02(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlayerPresetEquipList               CallFunc_GetCurrEquippedCordeData_OutCordeData_1;  // 0x0C08(0x0018)()
	TDelegate<void(int32 InRetCode, bool bInIsExpiredStickerWeapons, TArray<class FString>& InExpiredStickerWeaponUniqueIds, struct FSBExpiredEquipmentData& InDirtyExpiredEquipmentData)> K2Node_CreateDelegate_OutputDelegate_26;           // 0x0C20(0x0010)(ZeroConstructor, NoDestructor)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_26;         // 0x0C30(0x0018)()
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_27;           // 0x0C48(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_44;                   // 0x0C58(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBClassType                                  CallFunc_GetPlayerClassType_ClassType_1;           // 0x0C59(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_45;                   // 0x0C5A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x0C5B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InRetCode_1;                    // 0x0C5C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bInIsExpiredStickerWeapons;     // 0x0C60(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5885[0x7];                                     // 0x0C61(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         K2Node_CustomEvent_InExpiredStickerWeaponUniqueIds; // 0x0C68(0x0010)(ConstParm, ReferenceParm)
	struct FSBExpiredEquipmentData                K2Node_CustomEvent_InDirtyExpiredEquipmentData;    // 0x0C78(0x0130)(ConstParm)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x0DA8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5886[0x7];                                     // 0x0DA9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_1;      // 0x0DB0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 InRetCode, bool bInIsExpiredStickerWeapons, TArray<class FString>& InExpiredStickerWeaponUniqueIds, struct FSBExpiredEquipmentData& InDirtyExpiredEquipmentData)> K2Node_CreateDelegate_OutputDelegate_28;           // 0x0DB8(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_46;                   // 0x0DC8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5887[0x3];                                     // 0x0DC9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_29;           // 0x0DCC(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_5888[0x4];                                     // 0x0DDC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_2;      // 0x0DE0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_47;                   // 0x0DE8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_4;            // 0x0DE9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5889[0x6];                                     // 0x0DEA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBShowYesNoDialog2Impl*                CallFunc_ShowYesNoDialog2_ReturnValue;             // 0x0DF0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 InRetCode, bool bInIsExpiredStickerWeapons, TArray<class FString>& InExpiredStickerWeaponUniqueIds, struct FSBExpiredEquipmentData& InDirtyExpiredEquipmentData)> K2Node_CreateDelegate_OutputDelegate_30;           // 0x0DF8(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess_4;                    // 0x0E08(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_588A[0x7];                                     // 0x0E09(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         CallFunc_GetSBPlayerState_ReturnValue_2;           // 0x0E10(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_48;                   // 0x0E18(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_588B[0x7];                                     // 0x0E19(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerStorageComponent*              CallFunc_GetPlayerStorageComponent_ReturnValue_2;  // 0x0E20(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_49;                   // 0x0E28(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsThereExpiredEquipment_ReturnValue;      // 0x0E29(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetSystemMessageManager_IsValid;          // 0x0E2A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_588C[0x5];                                     // 0x0E2B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBSystemMessageManager*                CallFunc_GetSystemMessageManager_ReturnValue;      // 0x0E30(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_5;            // 0x0E38(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSystemMessageShowingOrStandby_ReturnValue; // 0x0E39(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_588D[0x2];                                     // 0x0E3A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0E3C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0E40(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0E41(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_588E[0x6];                                     // 0x0E42(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0E48(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ShowExpiredItemNoticeSystemMessage_OutIsMessageShowed; // 0x0E50(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_588F[0x7];                                     // 0x0E51(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBCreationCharacter*                   K2Node_DynamicCast_AsSBCreation_Character;         // 0x0E58(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0E60(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_50;                   // 0x0E61(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetCharaCostumePartsToNakedByDeletedCostumeData_OutIsCharaPartsSettedToNaked; // 0x0E62(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetIsCostumePartsLoading_OutIsCostumePartsLoading; // 0x0E63(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_6;            // 0x0E64(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5890[0x3];                                     // 0x0E65(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         K2Node_CustomEvent_InExpiredWeaponStickerUniqueIds; // 0x0E68(0x0010)(ConstParm, ReferenceParm)
	struct FSBExpiredEquipmentData                K2Node_CustomEvent_InExpiredEquipmentData;         // 0x0E78(0x0130)()
	bool                                          K2Node_CustomEvent_InIsClassChange;                // 0x0FA8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_InIsDisarm;                     // 0x0FA9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckWeaponDecay_OutIsWeaponDecayed;      // 0x0FAA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5891[0x5];                                     // 0x0FAB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UNameSettingDialog_C*                   CallFunc_Create_ReturnValue;                       // 0x0FB0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue_11;      // 0x0FB8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_51;                   // 0x0FC0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5892[0x3];                                     // 0x0FC1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_31;           // 0x0FC4(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_5893[0x4];                                     // 0x0FD4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_3;      // 0x0FD8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_52;                   // 0x0FE0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBClassType                                  CallFunc_GetPlayerClassType_ClassType_2;           // 0x0FE1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_53;                   // 0x0FE2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_7;            // 0x0FE3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_54;                   // 0x0FE4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_8;            // 0x0FE5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5894[0x2];                                     // 0x0FE6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBShowYesNoDialog2Impl*                CallFunc_ShowYesNoDialog2_ReturnValue_1;           // 0x0FE8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetEquipmentBag_ReturnValue_2;            // 0x0FF0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_55;                   // 0x0FF8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetWeaponItemDataByUniqueId_OutIsValid;   // 0x0FF9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5895[0x6];                                     // 0x0FFA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponItemData                      CallFunc_GetWeaponItemDataByUniqueId_OutWeaponItemData; // 0x1000(0x0050)()
	bool                                          CallFunc_IsValid_ReturnValue_56;                   // 0x1050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5896[0x7];                                     // 0x1051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue_12;      // 0x1058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_57;                   // 0x1060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5897[0x7];                                     // 0x1061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlayerPresetEquipList               CallFunc_GetCurrEquippedCordeData_OutCordeData_2;  // 0x1068(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue_58;                   // 0x1080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5898[0x7];                                     // 0x1081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_27;         // 0x1088(0x0018)()
	bool                                          K2Node_ComponentBoundEvent_InIsDataLoadSuccessed;  // 0x10A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5899[0x7];                                     // 0x10A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlayerPresetEquipList               CallFunc_GetCurrEquippedCordeData_OutCordeData_3;  // 0x10A8(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue_59;                   // 0x10C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_589A[0x7];                                     // 0x10C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_28;         // 0x10C8(0x0018)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_9;            // 0x10E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_10;           // 0x10E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_60;                   // 0x10E2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_589B[0x5];                                     // 0x10E3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UMyCharaMenu_LeftSideParameters_C*      CallFunc_GetLeftSideParameters_OutLeftSideParameters_1; // 0x10E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_61;                   // 0x10F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_RequestCordeDataReload_OutRequestSuccessed; // 0x10F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_589C[0x6];                                     // 0x10F2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         CallFunc_GetSBPlayerState_ReturnValue_3;           // 0x10F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckCordeWeaponIsValid_OutIsValid;       // 0x1100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_62;                   // 0x1101(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_589D[0x6];                                     // 0x1102(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerStorageComponent*              CallFunc_GetPlayerStorageComponent_ReturnValue_3;  // 0x1108(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 InRetCode, TArray<struct FOwnItemInfo>& InDirtyItems)> K2Node_CreateDelegate_OutputDelegate_32;           // 0x1110(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_63;                   // 0x1120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_589E[0x7];                                     // 0x1121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBPlayerPresetEquipItem>       K2Node_MakeArray_Array_5;                          // 0x1128(0x0010)(ReferenceParm)
	TArray<struct FSBPlayerPresetEquipItem>       CallFunc_GetPlayerPresetEquipItem_OutParam;        // 0x1138(0x0010)(ReferenceParm)
	bool                                          CallFunc_GetPlayerPresetEquipItem_ReturnValue;     // 0x1148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_6;                              // 0x1149(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_6;                           // 0x114A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_64;                   // 0x114B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_589F[0x4];                                     // 0x114C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMyCharaMenu_LeftSideParameters_C*      CallFunc_GetLeftSideParameters_OutLeftSideParameters_2; // 0x1150(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_65;                   // 0x1158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58A0[0x7];                                     // 0x1159(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBPlayerPresetEquipItem>       K2Node_MakeArray_Array_6;                          // 0x1160(0x0010)(ReferenceParm)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_3;          // 0x1170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58A1[0x7];                                     // 0x1171(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBPlayerPresetEquipItem>       K2Node_MakeArray_Array_7;                          // 0x1178(0x0010)(ReferenceParm)
	bool                                          CallFunc_IsValid_ReturnValue_66;                   // 0x1188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58A2[0x7];                                     // 0x1189(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMyCharaMenu_LeftSideParameters_C*      CallFunc_GetLeftSideParameters_OutLeftSideParameters_3; // 0x1190(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_67;                   // 0x1198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58A3[0x7];                                     // 0x1199(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBPlayerPresetEquipItem>       CallFunc_GetPlayerPresetEquipItem_OutParam_1;      // 0x11A0(0x0010)(ReferenceParm)
	bool                                          CallFunc_GetPlayerPresetEquipItem_ReturnValue_1;   // 0x11B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_2;            // 0x11B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_11;           // 0x11B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_12;           // 0x11B3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckIfTacticalSkillIsActive_OutIsActive; // 0x11B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_7;                // 0x11B5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58A4[0x2];                                     // 0x11B6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PlaySE_ReturnValue_1;                     // 0x11B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_58A5[0x4];                                     // 0x11BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue_13;      // 0x11C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_68;                   // 0x11C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_69;                   // 0x11C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58A6[0x2];                                     // 0x11CA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 InRetCode, bool bInIsExpiredStickerWeapons, TArray<class FString>& InExpiredStickerWeaponUniqueIds, struct FSBExpiredEquipmentData& InDirtyExpiredEquipmentData)> K2Node_CreateDelegate_OutputDelegate_33;           // 0x11CC(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_34;           // 0x11DC(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_58A7[0x4];                                     // 0x11EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_4;      // 0x11F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_13;           // 0x11F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_70;                   // 0x11F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58A8[0x6];                                     // 0x11FA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_5;      // 0x1200(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_14;           // 0x1208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_71;                   // 0x1209(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58A9[0x6];                                     // 0x120A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBShowYesNoDialog2Impl*                CallFunc_ShowYesNoDialog2_ReturnValue_2;           // 0x1210(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_8;                // 0x1218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCharacterEquipsOrSkillsOrCostumesChangeableRetValues CallFunc_IsCharacterEquipsOrSkillsOrCostumesChangeable_ReturnValue; // 0x1219(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x121A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58AA[0x1];                                     // 0x121B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetCordeListEmptySlotId_OutListIndex;     // 0x121C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBPlayerPresetEquipItem>       CallFunc_ExtractCordeEquipItemsInEquipmentBag_OutExtractedCordeEquipItems; // 0x1220(0x0010)(ReferenceParm)
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue_14;      // 0x1230(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_72;                   // 0x1238(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58AB[0x3];                                     // 0x1239(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x123C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetInventoryWeaponNum_ReturnValue;        // 0x1240(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_58AC[0x4];                                     // 0x1244(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_6;      // 0x1248(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x1250(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_73;                   // 0x1251(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58AD[0x2];                                     // 0x1252(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_35;           // 0x1254(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_36;           // 0x1264(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_GetUIManager_IsValid_1;                   // 0x1274(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58AE[0x3];                                     // 0x1275(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue_1;               // 0x1278(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InRetCode;                      // 0x1280(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_58AF[0x4];                                     // 0x1284(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_7;      // 0x1288(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue_4;            // 0x1290(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_74;                   // 0x12A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58B0[0x7];                                     // 0x12A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_29;         // 0x12A8(0x0018)()
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_37;           // 0x12C0(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_75;                   // 0x12D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_15;           // 0x12D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_58B1[0x2];                                     // 0x12D2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_38;           // 0x12D4(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_58B2[0x4];                                     // 0x12E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x12E8(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_76;                   // 0x12F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_77;                   // 0x12F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_7;                              // 0x12F2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPlayerClassChangeable_ReturnValue_1;    // 0x12F3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x12F4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x1300(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TeleportTo_ReturnValue;                   // 0x130C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_8;                              // 0x130D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default_7;                           // 0x130E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_78;                   // 0x130F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_9;                // 0x1310(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58B3[0x7];                                     // 0x1311(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_30;         // 0x1318(0x0018)()
	bool                                          CallFunc_Not_PreBool_ReturnValue_10;               // 0x1330(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_9;                              // 0x1331(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58B4[0x6];                                     // 0x1332(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_31;         // 0x1338(0x0018)()
	ESlateVisibility                              K2Node_Select_Default_8;                           // 0x1350(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_79;                   // 0x1351(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58B5[0x6];                                     // 0x1352(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UMyCharaMenu_LeftSideParameters_C*      CallFunc_GetLeftSideParameters_OutLeftSideParameters_4; // 0x1358(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_80;                   // 0x1360(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsInitialLoadCompleted_ReturnValue;       // 0x1361(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58B6[0x6];                                     // 0x1362(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBPlayerPresetEquipItem>       K2Node_MakeArray_Array_8;                          // 0x1368(0x0010)(ReferenceParm)
	bool                                          CallFunc_IsValid_ReturnValue_81;                   // 0x1378(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58B7[0x3];                                     // 0x1379(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_5;                               // 0x137C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBPlayerPresetEquipItem>       CallFunc_GetPlayerPresetEquipItem_OutParam_2;      // 0x1380(0x0010)(ReferenceParm)
	bool                                          CallFunc_GetPlayerPresetEquipItem_ReturnValue_2;   // 0x1390(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_3;            // 0x1391(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_82;                   // 0x1392(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_83;                   // 0x1393(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetCordeListItemByCordeId_OutIsValid;     // 0x1394(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58B8[0x3];                                     // 0x1395(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UBattleCordeListItem_C*                 CallFunc_GetCordeListItemByCordeId_OutCordeListItem; // 0x1398(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBPlayerPresetEquipList               CallFunc_GetCordeData_OutCordeData_6;              // 0x13A0(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue_84;                   // 0x13B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetCordeListItemByCordeId_OutIsValid_1;   // 0x13B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58B9[0x6];                                     // 0x13BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UBattleCordeListItem_C*                 CallFunc_GetCordeListItemByCordeId_OutCordeListItem_1; // 0x13C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBPlayerPresetEquipList               CallFunc_GetCordeData_OutCordeData_7;              // 0x13C8(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_32;         // 0x13E0(0x0018)()
};
static_assert(alignof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet) == 0x000008, "Wrong alignment on BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet");
static_assert(sizeof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet) == 0x0013F8, "Wrong size on BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, EntryPoint) == 0x000000, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::EntryPoint' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_ExcludePlayerPresetEquipItemNotInEquipmentBag_OutPresetEquipItems) == 0x000008, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_ExcludePlayerPresetEquipItemNotInEquipmentBag_OutPresetEquipItems' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetSBPlayerState_ReturnValue) == 0x000018, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetSBPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_CreateDelegate_OutputDelegate) == 0x000020, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetPlayerStorageComponent_ReturnValue) == 0x000038, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetPlayerStorageComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_1) == 0x000040, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_CustomEvent_InRetCode_2) == 0x000044, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_CustomEvent_InRetCode_2' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_CustomEvent_InDirtyItems) == 0x000048, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_CustomEvent_InDirtyItems' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetSBRetMessage_ReturnValue) == 0x000058, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetSBRetMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000068, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_Conv_StringToText_ReturnValue) == 0x000070, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_CustomEvent_InIsForRename) == 0x000088, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_CustomEvent_InIsForRename' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_CustomEvent_InUnbindEvent) == 0x000089, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_CustomEvent_InUnbindEvent' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_2) == 0x00008A, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_Add_IntInt_ReturnValue) == 0x00008C, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_CreateDelegate_OutputDelegate_1) == 0x000090, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_CreateDelegate_OutputDelegate_2) == 0x0000A0, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_CreateDelegate_OutputDelegate_3) == 0x0000B0, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_CreateDelegate_OutputDelegate_4) == 0x0000C0, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_CreateDelegate_OutputDelegate_5) == 0x0000D0, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_CreateDelegate_OutputDelegate_6) == 0x0000E0, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_CustomEvent_PlayerName) == 0x0000F0, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_CustomEvent_PlayerName' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_3) == 0x000100, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_4) == 0x000101, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_5) == 0x000102, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_PlaySE_ReturnValue) == 0x000104, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_Not_PreBool_ReturnValue) == 0x000108, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetCordeData_OutCordeData) == 0x000110, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetCordeData_OutCordeData' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_SetFieldsInStruct_StructOut) == 0x000128, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_SetFieldsInStruct_StructOut' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_6) == 0x000140, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_SetPlayerPresetEquipListByIndex_ReturnValue) == 0x000141, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_SetPlayerPresetEquipListByIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000148, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_CreateDelegate_OutputDelegate_7) == 0x000150, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_7) == 0x000160, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_8) == 0x000161, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetTextFromAsset_ReturnValue) == 0x000168, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetUIManager_IsValid) == 0x000178, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetUIManager_IsValid' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetUIManager_ReturnValue) == 0x000180, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetUIManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000188, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000198, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0001B0, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_MakeStruct_FormatArgumentData) == 0x0001C8, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_MakeArray_Array) == 0x000208, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_Format_ReturnValue) == 0x000218, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetClassNameText_ReturnValue) == 0x000230, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetClassNameText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_Conv_TextToString_ReturnValue) == 0x000240, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000250, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x000260, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000270, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_Conv_StringToText_ReturnValue_4) == 0x000288, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_Conv_StringToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetConfigSaveManager_IsValid) == 0x0002A0, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetConfigSaveManager_ReturnValue) == 0x0002A8, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetPlayerId_ReturnValue) == 0x0002B0, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetTextFromAsset_ReturnValue_2) == 0x0002C0, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetTextFromAsset_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_SaveGeneralConfigData_ReturnValue) == 0x0002D0, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_SaveGeneralConfigData_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_Conv_StringToText_ReturnValue_5) == 0x0002D8, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_Conv_StringToText_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_CustomEvent_InYesNoResult_1) == 0x0002F0, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_CustomEvent_InYesNoResult_1' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0002F1, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetTextFromAsset_ReturnValue_3) == 0x0002F8, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetTextFromAsset_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_Conv_StringToText_ReturnValue_6) == 0x000308, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_Conv_StringToText_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_CustomEvent_InNewCordeName) == 0x000320, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_CustomEvent_InNewCordeName' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_CustomEvent_bInIsCordeOverwrite) == 0x000330, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_CustomEvent_bInIsCordeOverwrite' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_Conv_StringToText_ReturnValue_7) == 0x000338, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_Conv_StringToText_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_CustomEvent_InRenamedCordeName) == 0x000350, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_CustomEvent_InRenamedCordeName' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_MakeStruct_FormatArgumentData_1) == 0x000360, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_Conv_StringToText_ReturnValue_8) == 0x0003A0, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_Conv_StringToText_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_MakeArray_Array_1) == 0x0003B8, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_MakeStruct_FormatArgumentData_2) == 0x0003C8, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetTextFromAsset_ReturnValue_4) == 0x000408, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetTextFromAsset_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_MakeArray_Array_2) == 0x000418, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_Conv_StringToText_ReturnValue_9) == 0x000428, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_Conv_StringToText_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_Format_ReturnValue_1) == 0x000440, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_CustomEvent_InYesNoResult) == 0x000458, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_CustomEvent_InYesNoResult' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_SwitchEnum_CmpSuccess) == 0x000459, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetTextFromAsset_ReturnValue_5) == 0x000460, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetTextFromAsset_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_Conv_StringToText_ReturnValue_10) == 0x000470, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_Conv_StringToText_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_9) == 0x000488, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetCordeData_OutCordeData_1) == 0x000490, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetCordeData_OutCordeData_1' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_Conv_StringToText_ReturnValue_11) == 0x0004A8, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_Conv_StringToText_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_10) == 0x0004C0, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_MakeStruct_FormatArgumentData_3) == 0x0004C8, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_MakeStruct_FormatArgumentData_3' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_MakeArray_Array_3) == 0x000508, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_MakeArray_Array_3' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetCordeData_OutCordeData_2) == 0x000518, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetCordeData_OutCordeData_2' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_Format_ReturnValue_2) == 0x000530, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_Format_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetSBPlayerCharacter_ReturnValue_1) == 0x000548, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetSBPlayerCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_ClearPlayerPresetEquipData_ReturnValue) == 0x000550, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_ClearPlayerPresetEquipData_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_11) == 0x000551, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, Temp_int_Variable) == 0x000554, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetSBPlayerCharacter_ReturnValue_2) == 0x000558, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetSBPlayerCharacter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_CreateDelegate_OutputDelegate_8) == 0x000560, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_12) == 0x000570, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetTextFromAsset_ReturnValue_6) == 0x000578, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetTextFromAsset_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_Conv_StringToText_ReturnValue_12) == 0x000588, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_Conv_StringToText_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_CustomEvent_InCordeName) == 0x0005A0, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_CustomEvent_InCordeName' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetTextFromAsset_ReturnValue_7) == 0x0005B0, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetTextFromAsset_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_Conv_StringToText_ReturnValue_13) == 0x0005C0, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_Conv_StringToText_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_Conv_StringToText_ReturnValue_14) == 0x0005D8, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_Conv_StringToText_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_MakeStruct_FormatArgumentData_4) == 0x0005F0, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_MakeStruct_FormatArgumentData_4' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_CustomEvent_Result_2) == 0x000630, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_CustomEvent_Result_2' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_MakeArray_Array_4) == 0x000638, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_MakeArray_Array_4' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_SwitchEnum_CmpSuccess_1) == 0x000648, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_Format_ReturnValue_3) == 0x000650, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_Format_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_CheckCordeEquipmentsAreUnused_OutIsUnused) == 0x000668, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_CheckCordeEquipmentsAreUnused_OutIsUnused' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_CheckCordeEquipmentsAreAllValid_OutIsAllEquipmentValid) == 0x000669, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_CheckCordeEquipmentsAreAllValid_OutIsAllEquipmentValid' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_CheckCordeEquipmentsAreAllValid_OutIsEquipmentInStorage) == 0x00066A, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_CheckCordeEquipmentsAreAllValid_OutIsEquipmentInStorage' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetTextFromAsset_ReturnValue_8) == 0x000670, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetTextFromAsset_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_CreateDelegate_OutputDelegate_9) == 0x000680, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetTextFromAsset_ReturnValue_9) == 0x000690, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetTextFromAsset_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_Conv_StringToText_ReturnValue_15) == 0x0006A0, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_Conv_StringToText_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_CustomEvent_Result_1) == 0x0006B8, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_CustomEvent_Result_1' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_SwitchEnum_CmpSuccess_2) == 0x0006B9, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_SwitchEnum_CmpSuccess_2' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_CustomEvent_Result) == 0x0006BA, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_SwitchEnum_CmpSuccess_3) == 0x0006BB, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_SwitchEnum_CmpSuccess_3' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetTextFromAsset_ReturnValue_10) == 0x0006C0, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetTextFromAsset_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_Conv_StringToText_ReturnValue_16) == 0x0006D0, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_Conv_StringToText_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, Temp_bool_Variable) == 0x0006E8, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetEquipmentBag_ReturnValue) == 0x0006F0, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetEquipmentBag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_Select_Default) == 0x0006F8, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetFreeBlockNum_ReturnValue) == 0x0006FC, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetFreeBlockNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_13) == 0x000700, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, Temp_bool_Variable_1) == 0x000701, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetCordeEquipmentStorageItemDatas_OutEquipmentStorageItemDatas) == 0x000708, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetCordeEquipmentStorageItemDatas_OutEquipmentStorageItemDatas' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, Temp_int_Variable_1) == 0x000718, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetSBPlayerState_ReturnValue_1) == 0x000720, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetSBPlayerState_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_14) == 0x000728, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetPlayerStorageComponent_ReturnValue_1) == 0x000730, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetPlayerStorageComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_ConvertStorageNumberEquipmentBagToInt32_ReturnValue) == 0x000738, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_ConvertStorageNumberEquipmentBagToInt32_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_15) == 0x00073C, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_CreateDelegate_OutputDelegate_10) == 0x000740, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_CreateDelegate_OutputDelegate_10' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, Temp_bool_Variable_2) == 0x000750, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_Select_Default_1) == 0x000758, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetTextFromAsset_ReturnValue_11) == 0x000768, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetTextFromAsset_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_Conv_StringToText_ReturnValue_17) == 0x000778, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_Conv_StringToText_ReturnValue_17' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetTextFromAsset_ReturnValue_12) == 0x000790, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetTextFromAsset_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetTextFromAsset_ReturnValue_13) == 0x0007A0, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetTextFromAsset_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_Conv_StringToText_ReturnValue_18) == 0x0007B0, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_Conv_StringToText_ReturnValue_18' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_ShowYesNoDialog_ReturnValue) == 0x0007C8, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_ShowYesNoDialog_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_Event_Animation) == 0x0007D0, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x0007D8, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_CustomEvent_InIsBlock_1) == 0x0007D9, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_CustomEvent_InIsBlock_1' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, Temp_int_Variable_2) == 0x0007DC, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetSBPlayerController_ReturnValue) == 0x0007E0, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_16) == 0x0007E8, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_Select_Default_2) == 0x0007EC, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetTextFromAsset_ReturnValue_14) == 0x0007F0, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetTextFromAsset_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_Conv_StringToText_ReturnValue_19) == 0x000800, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_Conv_StringToText_ReturnValue_19' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_Event_IsDesignTime) == 0x000818, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetSBPlayerCharacter_ReturnValue_3) == 0x000820, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetSBPlayerCharacter_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_CreateDelegate_OutputDelegate_11) == 0x000828, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_CreateDelegate_OutputDelegate_11' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_17) == 0x000838, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_17' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_18) == 0x000839, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_18' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_19) == 0x00083A, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_19' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetLeftSideParameters_OutLeftSideParameters) == 0x000840, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetLeftSideParameters_OutLeftSideParameters' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_20) == 0x000848, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_20' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsCharaDetailedStatusOpen_OutIsOpen) == 0x000849, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsCharaDetailedStatusOpen_OutIsOpen' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetSBPlayerCharacter_ReturnValue_4) == 0x000850, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetSBPlayerCharacter_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_21) == 0x000858, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_21' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_CreateDelegate_OutputDelegate_12) == 0x00085C, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_CreateDelegate_OutputDelegate_12' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsHideWindowAnimePlaying_OutIsPlaying) == 0x00086C, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsHideWindowAnimePlaying_OutIsPlaying' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_Not_PreBool_ReturnValue_1) == 0x00086D, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_Not_PreBool_ReturnValue_2) == 0x00086E, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsHideWindowAnimePlaying_OutIsPlaying_1) == 0x00086F, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsHideWindowAnimePlaying_OutIsPlaying_1' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_Not_PreBool_ReturnValue_3) == 0x000870, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_Not_PreBool_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_EqualEqual_ObjectObject_ReturnValue_1) == 0x000871, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_EqualEqual_ObjectObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_CreateDelegate_OutputDelegate_13) == 0x000874, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_CreateDelegate_OutputDelegate_13' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_ShowYesNoDialog_ReturnValue_1) == 0x000888, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_ShowYesNoDialog_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_CustomEvent_InIsBlock) == 0x000890, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_CustomEvent_InIsBlock' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_CustomEvent_RetCode_2) == 0x000894, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_CustomEvent_RetCode_2' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetSBPlayerCharacter_ReturnValue_5) == 0x000898, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetSBPlayerCharacter_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetSBRetMessage_ReturnValue_1) == 0x0008A0, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetSBRetMessage_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_22) == 0x0008B0, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_22' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_Conv_StringToText_ReturnValue_20) == 0x0008B8, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_Conv_StringToText_ReturnValue_20' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_NotEqual_IntInt_ReturnValue) == 0x0008D0, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_23) == 0x0008D1, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_23' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_CreateDelegate_OutputDelegate_14) == 0x0008D4, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_CreateDelegate_OutputDelegate_14' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, Temp_bool_Variable_3) == 0x0008E4, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_CreateDelegate_OutputDelegate_15) == 0x0008E8, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_CreateDelegate_OutputDelegate_15' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_Select_Default_3) == 0x0008F8, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_ComponentBoundEvent_InListItem) == 0x000908, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_ComponentBoundEvent_InListItem' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_ComponentBoundEvent_InSelectedCordeListItem_1) == 0x000910, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_ComponentBoundEvent_InSelectedCordeListItem_1' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_24) == 0x000918, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_24' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetCordeData_OutCordeData_3) == 0x000920, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetCordeData_OutCordeData_3' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_ComponentBoundEvent_InSelectedCordeListItem) == 0x000938, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_ComponentBoundEvent_InSelectedCordeListItem' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_25) == 0x000940, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_25' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_26) == 0x000941, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_26' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetDefaultEquippedCordeId_OutCordeId) == 0x000944, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetDefaultEquippedCordeId_OutCordeId' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_Not_PreBool_ReturnValue_4) == 0x000948, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_Not_PreBool_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_Not_PreBool_ReturnValue_5) == 0x000949, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_Not_PreBool_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_27) == 0x00094A, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_27' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_CreateDelegate_OutputDelegate_16) == 0x00094C, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_CreateDelegate_OutputDelegate_16' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetCurrEquippedCordeData_OutCordeData) == 0x000960, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetCurrEquippedCordeData_OutCordeData' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_Conv_StringToText_ReturnValue_21) == 0x000978, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_Conv_StringToText_ReturnValue_21' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_28) == 0x000990, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_28' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_Array_Length_ReturnValue) == 0x000994, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetIsWeaponLost_OutIsWeaponLost) == 0x000998, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetIsWeaponLost_OutIsWeaponLost' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000999, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_Not_PreBool_ReturnValue_6) == 0x00099A, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_Not_PreBool_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_Greater_IntInt_ReturnValue) == 0x00099B, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_29) == 0x00099C, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_29' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_MakeLiteralByte_ReturnValue) == 0x00099D, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetPlayerClassType_ClassType) == 0x00099E, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetPlayerClassType_ClassType' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsPlayerClassChangeable_ReturnValue) == 0x00099F, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsPlayerClassChangeable_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0009A0, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_CustomEvent_RetCode_1) == 0x0009A4, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_CustomEvent_RetCode_1' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_CreateDelegate_OutputDelegate_17) == 0x0009A8, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_CreateDelegate_OutputDelegate_17' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetQuestStatusOnClassChange_ReturnValue) == 0x0009B8, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetQuestStatusOnClassChange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x0009B9, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetSBPlayerCharacter_ReturnValue_6) == 0x0009C0, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetSBPlayerCharacter_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x0009C8, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_30) == 0x0009C9, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_30' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_CreateDelegate_OutputDelegate_18) == 0x0009CC, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_CreateDelegate_OutputDelegate_18' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_31) == 0x0009DC, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_31' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, Temp_bool_Variable_4) == 0x0009DD, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, Temp_bool_Variable_5) == 0x0009DE, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_Select_Default_4) == 0x0009E0, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_Conv_StringToText_ReturnValue_22) == 0x0009F0, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_Conv_StringToText_ReturnValue_22' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetEquipmentBag_ReturnValue_1) == 0x000A08, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetEquipmentBag_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_ShowYesNoDialog_ReturnValue_2) == 0x000A10, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_ShowYesNoDialog_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_32) == 0x000A18, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_32' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetCharacterStorage_ReturnValue) == 0x000A20, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetCharacterStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_CreateDelegate_OutputDelegate_19) == 0x000A28, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_CreateDelegate_OutputDelegate_19' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_33) == 0x000A38, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_33' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_CustomEvent_InventoryIndex) == 0x000A3C, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_CustomEvent_InventoryIndex' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_CustomEvent_InWeaponEquipType) == 0x000A40, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_CustomEvent_InWeaponEquipType' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_CreateDelegate_OutputDelegate_20) == 0x000A44, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_CreateDelegate_OutputDelegate_20' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_CreateDelegate_OutputDelegate_21) == 0x000A54, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_CreateDelegate_OutputDelegate_21' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetSBRetMessage_ReturnValue_2) == 0x000A68, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetSBRetMessage_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000A78, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_Conv_StringToText_ReturnValue_23) == 0x000A80, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_Conv_StringToText_ReturnValue_23' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetSBPlayerCharacter_ReturnValue_7) == 0x000A98, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetSBPlayerCharacter_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_34) == 0x000AA0, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_34' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetSBPlayerCharacter_ReturnValue_8) == 0x000AA8, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetSBPlayerCharacter_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_CreateDelegate_OutputDelegate_22) == 0x000AB0, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_CreateDelegate_OutputDelegate_22' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_35) == 0x000AC0, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_35' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, Temp_int_Variable_3) == 0x000AC4, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x000AC8, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetSBPlayerCharacter_ReturnValue_9) == 0x000AD0, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetSBPlayerCharacter_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_36) == 0x000AD8, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_36' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_37) == 0x000AD9, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_37' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_ComponentBoundEvent_InSrcCordeListItem) == 0x000AE0, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_ComponentBoundEvent_InSrcCordeListItem' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_ComponentBoundEvent_InDstCordListItem) == 0x000AE8, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_ComponentBoundEvent_InDstCordListItem' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_CustomEvent_RetCode) == 0x000AF0, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_CustomEvent_RetCode' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_CustomEvent_DstListIndex) == 0x000AF4, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_CustomEvent_DstListIndex' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_38) == 0x000AF8, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_38' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetSBRetMessage_ReturnValue_3) == 0x000B00, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetSBRetMessage_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_Conv_StringToText_ReturnValue_24) == 0x000B10, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_Conv_StringToText_ReturnValue_24' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_NotEqual_IntInt_ReturnValue_1) == 0x000B28, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_NotEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetCordeData_OutCordeData_4) == 0x000B30, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetCordeData_OutCordeData_4' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_39) == 0x000B48, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_39' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_Add_IntInt_ReturnValue_1) == 0x000B4C, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetCordeData_OutCordeData_5) == 0x000B50, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetCordeData_OutCordeData_5' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_CreateDelegate_OutputDelegate_23) == 0x000B68, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_CreateDelegate_OutputDelegate_23' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_Add_IntInt_ReturnValue_2) == 0x000B78, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetSBPlayerCharacter_ReturnValue_10) == 0x000B80, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetSBPlayerCharacter_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, Temp_int_Variable_4) == 0x000B88, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_40) == 0x000B8C, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_40' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_Select_Default_5) == 0x000B90, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetTextFromAsset_ReturnValue_15) == 0x000B98, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetTextFromAsset_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_41) == 0x000BA8, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_41' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_Conv_StringToText_ReturnValue_25) == 0x000BB0, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_Conv_StringToText_ReturnValue_25' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_Format_ReturnValue_4) == 0x000BC8, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_Format_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_CreateDelegate_OutputDelegate_24) == 0x000BE0, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_CreateDelegate_OutputDelegate_24' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_CreateDelegate_OutputDelegate_25) == 0x000BF0, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_CreateDelegate_OutputDelegate_25' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_42) == 0x000C00, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_42' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_43) == 0x000C01, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_43' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetCurrEquippedCordeData_OutCordeData_1) == 0x000C08, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetCurrEquippedCordeData_OutCordeData_1' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_CreateDelegate_OutputDelegate_26) == 0x000C20, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_CreateDelegate_OutputDelegate_26' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_Conv_StringToText_ReturnValue_26) == 0x000C30, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_Conv_StringToText_ReturnValue_26' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_CreateDelegate_OutputDelegate_27) == 0x000C48, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_CreateDelegate_OutputDelegate_27' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_44) == 0x000C58, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_44' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetPlayerClassType_ClassType_1) == 0x000C59, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetPlayerClassType_ClassType_1' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_45) == 0x000C5A, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_45' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x000C5B, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_CustomEvent_InRetCode_1) == 0x000C5C, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_CustomEvent_InRetCode_1' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_CustomEvent_bInIsExpiredStickerWeapons) == 0x000C60, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_CustomEvent_bInIsExpiredStickerWeapons' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_CustomEvent_InExpiredStickerWeaponUniqueIds) == 0x000C68, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_CustomEvent_InExpiredStickerWeaponUniqueIds' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_CustomEvent_InDirtyExpiredEquipmentData) == 0x000C78, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_CustomEvent_InDirtyExpiredEquipmentData' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x000DA8, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetSBPlayerController_ReturnValue_1) == 0x000DB0, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetSBPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_CreateDelegate_OutputDelegate_28) == 0x000DB8, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_CreateDelegate_OutputDelegate_28' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_46) == 0x000DC8, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_46' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_CreateDelegate_OutputDelegate_29) == 0x000DCC, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_CreateDelegate_OutputDelegate_29' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetSBPlayerController_ReturnValue_2) == 0x000DE0, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetSBPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_47) == 0x000DE8, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_47' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_MakeLiteralByte_ReturnValue_4) == 0x000DE9, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_MakeLiteralByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_ShowYesNoDialog2_ReturnValue) == 0x000DF0, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_ShowYesNoDialog2_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_CreateDelegate_OutputDelegate_30) == 0x000DF8, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_CreateDelegate_OutputDelegate_30' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_SwitchEnum_CmpSuccess_4) == 0x000E08, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_SwitchEnum_CmpSuccess_4' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetSBPlayerState_ReturnValue_2) == 0x000E10, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetSBPlayerState_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_48) == 0x000E18, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_48' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetPlayerStorageComponent_ReturnValue_2) == 0x000E20, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetPlayerStorageComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_49) == 0x000E28, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_49' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsThereExpiredEquipment_ReturnValue) == 0x000E29, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsThereExpiredEquipment_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetSystemMessageManager_IsValid) == 0x000E2A, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetSystemMessageManager_IsValid' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetSystemMessageManager_ReturnValue) == 0x000E30, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetSystemMessageManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_MakeLiteralByte_ReturnValue_5) == 0x000E38, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_MakeLiteralByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsSystemMessageShowingOrStandby_ReturnValue) == 0x000E39, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsSystemMessageShowingOrStandby_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_Array_Length_ReturnValue_1) == 0x000E3C, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000E40, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_BooleanOR_ReturnValue) == 0x000E41, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000E48, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_ShowExpiredItemNoticeSystemMessage_OutIsMessageShowed) == 0x000E50, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_ShowExpiredItemNoticeSystemMessage_OutIsMessageShowed' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_DynamicCast_AsSBCreation_Character) == 0x000E58, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_DynamicCast_AsSBCreation_Character' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_DynamicCast_bSuccess) == 0x000E60, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_50) == 0x000E61, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_50' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_SetCharaCostumePartsToNakedByDeletedCostumeData_OutIsCharaPartsSettedToNaked) == 0x000E62, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_SetCharaCostumePartsToNakedByDeletedCostumeData_OutIsCharaPartsSettedToNaked' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetIsCostumePartsLoading_OutIsCostumePartsLoading) == 0x000E63, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetIsCostumePartsLoading_OutIsCostumePartsLoading' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_MakeLiteralByte_ReturnValue_6) == 0x000E64, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_MakeLiteralByte_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_CustomEvent_InExpiredWeaponStickerUniqueIds) == 0x000E68, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_CustomEvent_InExpiredWeaponStickerUniqueIds' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_CustomEvent_InExpiredEquipmentData) == 0x000E78, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_CustomEvent_InExpiredEquipmentData' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_CustomEvent_InIsClassChange) == 0x000FA8, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_CustomEvent_InIsClassChange' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_CustomEvent_InIsDisarm) == 0x000FA9, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_CustomEvent_InIsDisarm' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_CheckWeaponDecay_OutIsWeaponDecayed) == 0x000FAA, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_CheckWeaponDecay_OutIsWeaponDecayed' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_Create_ReturnValue) == 0x000FB0, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetSBPlayerCharacter_ReturnValue_11) == 0x000FB8, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetSBPlayerCharacter_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_51) == 0x000FC0, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_51' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_CreateDelegate_OutputDelegate_31) == 0x000FC4, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_CreateDelegate_OutputDelegate_31' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetSBPlayerController_ReturnValue_3) == 0x000FD8, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetSBPlayerController_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_52) == 0x000FE0, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_52' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetPlayerClassType_ClassType_2) == 0x000FE1, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetPlayerClassType_ClassType_2' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_53) == 0x000FE2, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_53' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_MakeLiteralByte_ReturnValue_7) == 0x000FE3, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_MakeLiteralByte_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_54) == 0x000FE4, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_54' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_MakeLiteralByte_ReturnValue_8) == 0x000FE5, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_MakeLiteralByte_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_ShowYesNoDialog2_ReturnValue_1) == 0x000FE8, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_ShowYesNoDialog2_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetEquipmentBag_ReturnValue_2) == 0x000FF0, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetEquipmentBag_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_55) == 0x000FF8, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_55' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetWeaponItemDataByUniqueId_OutIsValid) == 0x000FF9, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetWeaponItemDataByUniqueId_OutIsValid' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetWeaponItemDataByUniqueId_OutWeaponItemData) == 0x001000, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetWeaponItemDataByUniqueId_OutWeaponItemData' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_56) == 0x001050, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_56' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetSBPlayerCharacter_ReturnValue_12) == 0x001058, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetSBPlayerCharacter_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_57) == 0x001060, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_57' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetCurrEquippedCordeData_OutCordeData_2) == 0x001068, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetCurrEquippedCordeData_OutCordeData_2' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_58) == 0x001080, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_58' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_Conv_StringToText_ReturnValue_27) == 0x001088, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_Conv_StringToText_ReturnValue_27' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_ComponentBoundEvent_InIsDataLoadSuccessed) == 0x0010A0, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_ComponentBoundEvent_InIsDataLoadSuccessed' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetCurrEquippedCordeData_OutCordeData_3) == 0x0010A8, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetCurrEquippedCordeData_OutCordeData_3' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_59) == 0x0010C0, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_59' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_Conv_StringToText_ReturnValue_28) == 0x0010C8, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_Conv_StringToText_ReturnValue_28' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_MakeLiteralByte_ReturnValue_9) == 0x0010E0, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_MakeLiteralByte_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_MakeLiteralByte_ReturnValue_10) == 0x0010E1, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_MakeLiteralByte_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_60) == 0x0010E2, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_60' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetLeftSideParameters_OutLeftSideParameters_1) == 0x0010E8, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetLeftSideParameters_OutLeftSideParameters_1' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_61) == 0x0010F0, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_61' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_RequestCordeDataReload_OutRequestSuccessed) == 0x0010F1, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_RequestCordeDataReload_OutRequestSuccessed' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetSBPlayerState_ReturnValue_3) == 0x0010F8, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetSBPlayerState_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_CheckCordeWeaponIsValid_OutIsValid) == 0x001100, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_CheckCordeWeaponIsValid_OutIsValid' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_62) == 0x001101, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_62' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetPlayerStorageComponent_ReturnValue_3) == 0x001108, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetPlayerStorageComponent_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_CreateDelegate_OutputDelegate_32) == 0x001110, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_CreateDelegate_OutputDelegate_32' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_63) == 0x001120, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_63' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_MakeArray_Array_5) == 0x001128, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_MakeArray_Array_5' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetPlayerPresetEquipItem_OutParam) == 0x001138, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetPlayerPresetEquipItem_OutParam' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetPlayerPresetEquipItem_ReturnValue) == 0x001148, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetPlayerPresetEquipItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, Temp_bool_Variable_6) == 0x001149, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::Temp_bool_Variable_6' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_Select_Default_6) == 0x00114A, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_Select_Default_6' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_64) == 0x00114B, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_64' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetLeftSideParameters_OutLeftSideParameters_2) == 0x001150, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetLeftSideParameters_OutLeftSideParameters_2' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_65) == 0x001158, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_65' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_MakeArray_Array_6) == 0x001160, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_MakeArray_Array_6' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_EqualEqual_IntInt_ReturnValue_3) == 0x001170, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_EqualEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_MakeArray_Array_7) == 0x001178, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_MakeArray_Array_7' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_66) == 0x001188, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_66' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetLeftSideParameters_OutLeftSideParameters_3) == 0x001190, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetLeftSideParameters_OutLeftSideParameters_3' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_67) == 0x001198, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_67' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetPlayerPresetEquipItem_OutParam_1) == 0x0011A0, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetPlayerPresetEquipItem_OutParam_1' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetPlayerPresetEquipItem_ReturnValue_1) == 0x0011B0, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetPlayerPresetEquipItem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_NotEqual_IntInt_ReturnValue_2) == 0x0011B1, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_NotEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_MakeLiteralByte_ReturnValue_11) == 0x0011B2, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_MakeLiteralByte_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_MakeLiteralByte_ReturnValue_12) == 0x0011B3, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_MakeLiteralByte_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_CheckIfTacticalSkillIsActive_OutIsActive) == 0x0011B4, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_CheckIfTacticalSkillIsActive_OutIsActive' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_Not_PreBool_ReturnValue_7) == 0x0011B5, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_Not_PreBool_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_PlaySE_ReturnValue_1) == 0x0011B8, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_PlaySE_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetSBPlayerCharacter_ReturnValue_13) == 0x0011C0, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetSBPlayerCharacter_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_68) == 0x0011C8, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_68' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_69) == 0x0011C9, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_69' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_CreateDelegate_OutputDelegate_33) == 0x0011CC, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_CreateDelegate_OutputDelegate_33' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_CreateDelegate_OutputDelegate_34) == 0x0011DC, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_CreateDelegate_OutputDelegate_34' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetSBPlayerController_ReturnValue_4) == 0x0011F0, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetSBPlayerController_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_MakeLiteralByte_ReturnValue_13) == 0x0011F8, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_MakeLiteralByte_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_70) == 0x0011F9, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_70' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetSBPlayerController_ReturnValue_5) == 0x001200, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetSBPlayerController_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_MakeLiteralByte_ReturnValue_14) == 0x001208, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_MakeLiteralByte_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_71) == 0x001209, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_71' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_ShowYesNoDialog2_ReturnValue_2) == 0x001210, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_ShowYesNoDialog2_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_Not_PreBool_ReturnValue_8) == 0x001218, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_Not_PreBool_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsCharacterEquipsOrSkillsOrCostumesChangeable_ReturnValue) == 0x001219, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsCharacterEquipsOrSkillsOrCostumesChangeable_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x00121A, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetCordeListEmptySlotId_OutListIndex) == 0x00121C, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetCordeListEmptySlotId_OutListIndex' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_ExtractCordeEquipItemsInEquipmentBag_OutExtractedCordeEquipItems) == 0x001220, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_ExtractCordeEquipItemsInEquipmentBag_OutExtractedCordeEquipItems' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetSBPlayerCharacter_ReturnValue_14) == 0x001230, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetSBPlayerCharacter_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_72) == 0x001238, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_72' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_Add_IntInt_ReturnValue_3) == 0x00123C, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetInventoryWeaponNum_ReturnValue) == 0x001240, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetInventoryWeaponNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetSBPlayerController_ReturnValue_6) == 0x001248, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetSBPlayerController_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GreaterEqual_IntInt_ReturnValue_1) == 0x001250, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GreaterEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_73) == 0x001251, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_73' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_CreateDelegate_OutputDelegate_35) == 0x001254, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_CreateDelegate_OutputDelegate_35' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_CreateDelegate_OutputDelegate_36) == 0x001264, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_CreateDelegate_OutputDelegate_36' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetUIManager_IsValid_1) == 0x001274, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetUIManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetUIManager_ReturnValue_1) == 0x001278, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetUIManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_CustomEvent_InRetCode) == 0x001280, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_CustomEvent_InRetCode' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetSBPlayerController_ReturnValue_7) == 0x001288, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetSBPlayerController_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetSBRetMessage_ReturnValue_4) == 0x001290, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetSBRetMessage_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_74) == 0x0012A0, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_74' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_Conv_StringToText_ReturnValue_29) == 0x0012A8, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_Conv_StringToText_ReturnValue_29' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_CreateDelegate_OutputDelegate_37) == 0x0012C0, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_CreateDelegate_OutputDelegate_37' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_75) == 0x0012D0, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_75' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_MakeLiteralByte_ReturnValue_15) == 0x0012D1, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_MakeLiteralByte_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_CreateDelegate_OutputDelegate_38) == 0x0012D4, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_CreateDelegate_OutputDelegate_38' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x0012E8, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_76) == 0x0012F0, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_76' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_77) == 0x0012F1, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_77' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, Temp_bool_Variable_7) == 0x0012F2, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::Temp_bool_Variable_7' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsPlayerClassChangeable_ReturnValue_1) == 0x0012F3, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsPlayerClassChangeable_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_K2_GetActorRotation_ReturnValue) == 0x0012F4, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_K2_GetActorLocation_ReturnValue) == 0x001300, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_TeleportTo_ReturnValue) == 0x00130C, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_TeleportTo_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, Temp_bool_Variable_8) == 0x00130D, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::Temp_bool_Variable_8' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_Select_Default_7) == 0x00130E, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_Select_Default_7' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_78) == 0x00130F, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_78' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_Not_PreBool_ReturnValue_9) == 0x001310, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_Not_PreBool_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_Conv_StringToText_ReturnValue_30) == 0x001318, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_Conv_StringToText_ReturnValue_30' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_Not_PreBool_ReturnValue_10) == 0x001330, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_Not_PreBool_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, Temp_bool_Variable_9) == 0x001331, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::Temp_bool_Variable_9' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_Conv_StringToText_ReturnValue_31) == 0x001338, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_Conv_StringToText_ReturnValue_31' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_Select_Default_8) == 0x001350, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_Select_Default_8' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_79) == 0x001351, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_79' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetLeftSideParameters_OutLeftSideParameters_4) == 0x001358, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetLeftSideParameters_OutLeftSideParameters_4' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_80) == 0x001360, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_80' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsInitialLoadCompleted_ReturnValue) == 0x001361, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsInitialLoadCompleted_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, K2Node_MakeArray_Array_8) == 0x001368, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::K2Node_MakeArray_Array_8' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_81) == 0x001378, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_81' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, Temp_int_Variable_5) == 0x00137C, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::Temp_int_Variable_5' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetPlayerPresetEquipItem_OutParam_2) == 0x001380, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetPlayerPresetEquipItem_OutParam_2' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetPlayerPresetEquipItem_ReturnValue_2) == 0x001390, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetPlayerPresetEquipItem_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_NotEqual_IntInt_ReturnValue_3) == 0x001391, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_NotEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_82) == 0x001392, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_82' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_83) == 0x001393, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_83' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetCordeListItemByCordeId_OutIsValid) == 0x001394, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetCordeListItemByCordeId_OutIsValid' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetCordeListItemByCordeId_OutCordeListItem) == 0x001398, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetCordeListItemByCordeId_OutCordeListItem' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetCordeData_OutCordeData_6) == 0x0013A0, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetCordeData_OutCordeData_6' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_IsValid_ReturnValue_84) == 0x0013B8, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_IsValid_ReturnValue_84' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetCordeListItemByCordeId_OutIsValid_1) == 0x0013B9, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetCordeListItemByCordeId_OutIsValid_1' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetCordeListItemByCordeId_OutCordeListItem_1) == 0x0013C0, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetCordeListItemByCordeId_OutCordeListItem_1' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_GetCordeData_OutCordeData_7) == 0x0013C8, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_GetCordeData_OutCordeData_7' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet, CallFunc_Conv_StringToText_ReturnValue_32) == 0x0013E0, "Member 'BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet::CallFunc_Conv_StringToText_ReturnValue_32' has a wrong offset!");

// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnClassChangeFailure
// 0x0004 (0x0004 - 0x0000)
struct BattleCordeEditForBattleSet_C_OnClassChangeFailure final
{
public:
	int32                                         InRetCode;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleCordeEditForBattleSet_C_OnClassChangeFailure) == 0x000004, "Wrong alignment on BattleCordeEditForBattleSet_C_OnClassChangeFailure");
static_assert(sizeof(BattleCordeEditForBattleSet_C_OnClassChangeFailure) == 0x000004, "Wrong size on BattleCordeEditForBattleSet_C_OnClassChangeFailure");
static_assert(offsetof(BattleCordeEditForBattleSet_C_OnClassChangeFailure, InRetCode) == 0x000000, "Member 'BattleCordeEditForBattleSet_C_OnClassChangeFailure::InRetCode' has a wrong offset!");

// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_11_OnCordeDataLoaded__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct BattleCordeEditForBattleSet_C_BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_11_OnCordeDataLoaded__DelegateSignature final
{
public:
	bool                                          InIsDataLoadSuccessed;                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleCordeEditForBattleSet_C_BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_11_OnCordeDataLoaded__DelegateSignature) == 0x000001, "Wrong alignment on BattleCordeEditForBattleSet_C_BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_11_OnCordeDataLoaded__DelegateSignature");
static_assert(sizeof(BattleCordeEditForBattleSet_C_BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_11_OnCordeDataLoaded__DelegateSignature) == 0x000001, "Wrong size on BattleCordeEditForBattleSet_C_BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_11_OnCordeDataLoaded__DelegateSignature");
static_assert(offsetof(BattleCordeEditForBattleSet_C_BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_11_OnCordeDataLoaded__DelegateSignature, InIsDataLoadSuccessed) == 0x000000, "Member 'BattleCordeEditForBattleSet_C_BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_11_OnCordeDataLoaded__DelegateSignature::InIsDataLoadSuccessed' has a wrong offset!");

// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ClassChangeResultProc
// 0x0148 (0x0148 - 0x0000)
struct BattleCordeEditForBattleSet_C_ClassChangeResultProc final
{
public:
	TArray<class FString>                         InExpiredWeaponStickerUniqueIds;                   // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FSBExpiredEquipmentData                InExpiredEquipmentData;                            // 0x0010(0x0130)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          InIsClassChange;                                   // 0x0140(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          InIsDisarm;                                        // 0x0141(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleCordeEditForBattleSet_C_ClassChangeResultProc) == 0x000008, "Wrong alignment on BattleCordeEditForBattleSet_C_ClassChangeResultProc");
static_assert(sizeof(BattleCordeEditForBattleSet_C_ClassChangeResultProc) == 0x000148, "Wrong size on BattleCordeEditForBattleSet_C_ClassChangeResultProc");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ClassChangeResultProc, InExpiredWeaponStickerUniqueIds) == 0x000000, "Member 'BattleCordeEditForBattleSet_C_ClassChangeResultProc::InExpiredWeaponStickerUniqueIds' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ClassChangeResultProc, InExpiredEquipmentData) == 0x000010, "Member 'BattleCordeEditForBattleSet_C_ClassChangeResultProc::InExpiredEquipmentData' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ClassChangeResultProc, InIsClassChange) == 0x000140, "Member 'BattleCordeEditForBattleSet_C_ClassChangeResultProc::InIsClassChange' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ClassChangeResultProc, InIsDisarm) == 0x000141, "Member 'BattleCordeEditForBattleSet_C_ClassChangeResultProc::InIsDisarm' has a wrong offset!");

// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnClassChangeNotify
// 0x0148 (0x0148 - 0x0000)
struct BattleCordeEditForBattleSet_C_OnClassChangeNotify final
{
public:
	int32                                         InRetCode;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInIsExpiredStickerWeapons;                        // 0x0004(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58BA[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         InExpiredStickerWeaponUniqueIds;                   // 0x0008(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FSBExpiredEquipmentData                InDirtyExpiredEquipmentData;                       // 0x0018(0x0130)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BattleCordeEditForBattleSet_C_OnClassChangeNotify) == 0x000008, "Wrong alignment on BattleCordeEditForBattleSet_C_OnClassChangeNotify");
static_assert(sizeof(BattleCordeEditForBattleSet_C_OnClassChangeNotify) == 0x000148, "Wrong size on BattleCordeEditForBattleSet_C_OnClassChangeNotify");
static_assert(offsetof(BattleCordeEditForBattleSet_C_OnClassChangeNotify, InRetCode) == 0x000000, "Member 'BattleCordeEditForBattleSet_C_OnClassChangeNotify::InRetCode' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_OnClassChangeNotify, bInIsExpiredStickerWeapons) == 0x000004, "Member 'BattleCordeEditForBattleSet_C_OnClassChangeNotify::bInIsExpiredStickerWeapons' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_OnClassChangeNotify, InExpiredStickerWeaponUniqueIds) == 0x000008, "Member 'BattleCordeEditForBattleSet_C_OnClassChangeNotify::InExpiredStickerWeaponUniqueIds' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_OnClassChangeNotify, InDirtyExpiredEquipmentData) == 0x000018, "Member 'BattleCordeEditForBattleSet_C_OnClassChangeNotify::InDirtyExpiredEquipmentData' has a wrong offset!");

// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnSwapPresetEquipmentList
// 0x0008 (0x0008 - 0x0000)
struct BattleCordeEditForBattleSet_C_OnSwapPresetEquipmentList final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DstListIndex;                                      // 0x0004(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleCordeEditForBattleSet_C_OnSwapPresetEquipmentList) == 0x000004, "Wrong alignment on BattleCordeEditForBattleSet_C_OnSwapPresetEquipmentList");
static_assert(sizeof(BattleCordeEditForBattleSet_C_OnSwapPresetEquipmentList) == 0x000008, "Wrong size on BattleCordeEditForBattleSet_C_OnSwapPresetEquipmentList");
static_assert(offsetof(BattleCordeEditForBattleSet_C_OnSwapPresetEquipmentList, RetCode) == 0x000000, "Member 'BattleCordeEditForBattleSet_C_OnSwapPresetEquipmentList::RetCode' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_OnSwapPresetEquipmentList, DstListIndex) == 0x000004, "Member 'BattleCordeEditForBattleSet_C_OnSwapPresetEquipmentList::DstListIndex' has a wrong offset!");

// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_10_OnCordeReplaceBtnPressed__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct BattleCordeEditForBattleSet_C_BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_10_OnCordeReplaceBtnPressed__DelegateSignature final
{
public:
	class UBattleCordeListItem_C*                 InSrcCordeListItem;                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBattleCordeListItem_C*                 InDstCordListItem;                                 // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleCordeEditForBattleSet_C_BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_10_OnCordeReplaceBtnPressed__DelegateSignature) == 0x000008, "Wrong alignment on BattleCordeEditForBattleSet_C_BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_10_OnCordeReplaceBtnPressed__DelegateSignature");
static_assert(sizeof(BattleCordeEditForBattleSet_C_BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_10_OnCordeReplaceBtnPressed__DelegateSignature) == 0x000010, "Wrong size on BattleCordeEditForBattleSet_C_BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_10_OnCordeReplaceBtnPressed__DelegateSignature");
static_assert(offsetof(BattleCordeEditForBattleSet_C_BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_10_OnCordeReplaceBtnPressed__DelegateSignature, InSrcCordeListItem) == 0x000000, "Member 'BattleCordeEditForBattleSet_C_BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_10_OnCordeReplaceBtnPressed__DelegateSignature::InSrcCordeListItem' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_10_OnCordeReplaceBtnPressed__DelegateSignature, InDstCordListItem) == 0x000008, "Member 'BattleCordeEditForBattleSet_C_BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_10_OnCordeReplaceBtnPressed__DelegateSignature::InDstCordListItem' has a wrong offset!");

// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnSpawnWeapon
// 0x0008 (0x0008 - 0x0000)
struct BattleCordeEditForBattleSet_C_OnSpawnWeapon final
{
public:
	int32                                         InventoryIndex;                                    // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBWeaponEquipType                            InWeaponEquipType;                                 // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleCordeEditForBattleSet_C_OnSpawnWeapon) == 0x000004, "Wrong alignment on BattleCordeEditForBattleSet_C_OnSpawnWeapon");
static_assert(sizeof(BattleCordeEditForBattleSet_C_OnSpawnWeapon) == 0x000008, "Wrong size on BattleCordeEditForBattleSet_C_OnSpawnWeapon");
static_assert(offsetof(BattleCordeEditForBattleSet_C_OnSpawnWeapon, InventoryIndex) == 0x000000, "Member 'BattleCordeEditForBattleSet_C_OnSpawnWeapon::InventoryIndex' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_OnSpawnWeapon, InWeaponEquipType) == 0x000004, "Member 'BattleCordeEditForBattleSet_C_OnSpawnWeapon::InWeaponEquipType' has a wrong offset!");

// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnSaveCharaBattlePresetEquipment
// 0x0004 (0x0004 - 0x0000)
struct BattleCordeEditForBattleSet_C_OnSaveCharaBattlePresetEquipment final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleCordeEditForBattleSet_C_OnSaveCharaBattlePresetEquipment) == 0x000004, "Wrong alignment on BattleCordeEditForBattleSet_C_OnSaveCharaBattlePresetEquipment");
static_assert(sizeof(BattleCordeEditForBattleSet_C_OnSaveCharaBattlePresetEquipment) == 0x000004, "Wrong size on BattleCordeEditForBattleSet_C_OnSaveCharaBattlePresetEquipment");
static_assert(offsetof(BattleCordeEditForBattleSet_C_OnSaveCharaBattlePresetEquipment, RetCode) == 0x000000, "Member 'BattleCordeEditForBattleSet_C_OnSaveCharaBattlePresetEquipment::RetCode' has a wrong offset!");

// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_9_OnCordeRenameBtnPressed__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BattleCordeEditForBattleSet_C_BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_9_OnCordeRenameBtnPressed__DelegateSignature final
{
public:
	class UBattleCordeListItem_C*                 InSelectedCordeListItem;                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleCordeEditForBattleSet_C_BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_9_OnCordeRenameBtnPressed__DelegateSignature) == 0x000008, "Wrong alignment on BattleCordeEditForBattleSet_C_BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_9_OnCordeRenameBtnPressed__DelegateSignature");
static_assert(sizeof(BattleCordeEditForBattleSet_C_BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_9_OnCordeRenameBtnPressed__DelegateSignature) == 0x000008, "Wrong size on BattleCordeEditForBattleSet_C_BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_9_OnCordeRenameBtnPressed__DelegateSignature");
static_assert(offsetof(BattleCordeEditForBattleSet_C_BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_9_OnCordeRenameBtnPressed__DelegateSignature, InSelectedCordeListItem) == 0x000000, "Member 'BattleCordeEditForBattleSet_C_BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_9_OnCordeRenameBtnPressed__DelegateSignature::InSelectedCordeListItem' has a wrong offset!");

// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_8_OnCordeDeleteBtnPressed__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BattleCordeEditForBattleSet_C_BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_8_OnCordeDeleteBtnPressed__DelegateSignature final
{
public:
	class UBattleCordeListItem_C*                 InSelectedCordeListItem;                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleCordeEditForBattleSet_C_BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_8_OnCordeDeleteBtnPressed__DelegateSignature) == 0x000008, "Wrong alignment on BattleCordeEditForBattleSet_C_BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_8_OnCordeDeleteBtnPressed__DelegateSignature");
static_assert(sizeof(BattleCordeEditForBattleSet_C_BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_8_OnCordeDeleteBtnPressed__DelegateSignature) == 0x000008, "Wrong size on BattleCordeEditForBattleSet_C_BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_8_OnCordeDeleteBtnPressed__DelegateSignature");
static_assert(offsetof(BattleCordeEditForBattleSet_C_BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_8_OnCordeDeleteBtnPressed__DelegateSignature, InSelectedCordeListItem) == 0x000000, "Member 'BattleCordeEditForBattleSet_C_BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_8_OnCordeDeleteBtnPressed__DelegateSignature::InSelectedCordeListItem' has a wrong offset!");

// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_5_OnCordeListItemPresssed__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BattleCordeEditForBattleSet_C_BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_5_OnCordeListItemPresssed__DelegateSignature final
{
public:
	class UBattleCordeListItem_C*                 InListItem;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleCordeEditForBattleSet_C_BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_5_OnCordeListItemPresssed__DelegateSignature) == 0x000008, "Wrong alignment on BattleCordeEditForBattleSet_C_BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_5_OnCordeListItemPresssed__DelegateSignature");
static_assert(sizeof(BattleCordeEditForBattleSet_C_BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_5_OnCordeListItemPresssed__DelegateSignature) == 0x000008, "Wrong size on BattleCordeEditForBattleSet_C_BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_5_OnCordeListItemPresssed__DelegateSignature");
static_assert(offsetof(BattleCordeEditForBattleSet_C_BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_5_OnCordeListItemPresssed__DelegateSignature, InListItem) == 0x000000, "Member 'BattleCordeEditForBattleSet_C_BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_5_OnCordeListItemPresssed__DelegateSignature::InListItem' has a wrong offset!");

// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnSavePlayerPresetEquipment
// 0x0004 (0x0004 - 0x0000)
struct BattleCordeEditForBattleSet_C_OnSavePlayerPresetEquipment final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleCordeEditForBattleSet_C_OnSavePlayerPresetEquipment) == 0x000004, "Wrong alignment on BattleCordeEditForBattleSet_C_OnSavePlayerPresetEquipment");
static_assert(sizeof(BattleCordeEditForBattleSet_C_OnSavePlayerPresetEquipment) == 0x000004, "Wrong size on BattleCordeEditForBattleSet_C_OnSavePlayerPresetEquipment");
static_assert(offsetof(BattleCordeEditForBattleSet_C_OnSavePlayerPresetEquipment, RetCode) == 0x000000, "Member 'BattleCordeEditForBattleSet_C_OnSavePlayerPresetEquipment::RetCode' has a wrong offset!");

// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.UIInputBlockFrontRow
// 0x0001 (0x0001 - 0x0000)
struct BattleCordeEditForBattleSet_C_UIInputBlockFrontRow final
{
public:
	bool                                          InIsBlock;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleCordeEditForBattleSet_C_UIInputBlockFrontRow) == 0x000001, "Wrong alignment on BattleCordeEditForBattleSet_C_UIInputBlockFrontRow");
static_assert(sizeof(BattleCordeEditForBattleSet_C_UIInputBlockFrontRow) == 0x000001, "Wrong size on BattleCordeEditForBattleSet_C_UIInputBlockFrontRow");
static_assert(offsetof(BattleCordeEditForBattleSet_C_UIInputBlockFrontRow, InIsBlock) == 0x000000, "Member 'BattleCordeEditForBattleSet_C_UIInputBlockFrontRow::InIsBlock' has a wrong offset!");

// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct BattleCordeEditForBattleSet_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleCordeEditForBattleSet_C_PreConstruct) == 0x000001, "Wrong alignment on BattleCordeEditForBattleSet_C_PreConstruct");
static_assert(sizeof(BattleCordeEditForBattleSet_C_PreConstruct) == 0x000001, "Wrong size on BattleCordeEditForBattleSet_C_PreConstruct");
static_assert(offsetof(BattleCordeEditForBattleSet_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'BattleCordeEditForBattleSet_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.UiInputBlock
// 0x0001 (0x0001 - 0x0000)
struct BattleCordeEditForBattleSet_C_UiInputBlock final
{
public:
	bool                                          InIsBlock;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleCordeEditForBattleSet_C_UiInputBlock) == 0x000001, "Wrong alignment on BattleCordeEditForBattleSet_C_UiInputBlock");
static_assert(sizeof(BattleCordeEditForBattleSet_C_UiInputBlock) == 0x000001, "Wrong size on BattleCordeEditForBattleSet_C_UiInputBlock");
static_assert(offsetof(BattleCordeEditForBattleSet_C_UiInputBlock, InIsBlock) == 0x000000, "Member 'BattleCordeEditForBattleSet_C_UiInputBlock::InIsBlock' has a wrong offset!");

// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct BattleCordeEditForBattleSet_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleCordeEditForBattleSet_C_OnAnimationFinished) == 0x000008, "Wrong alignment on BattleCordeEditForBattleSet_C_OnAnimationFinished");
static_assert(sizeof(BattleCordeEditForBattleSet_C_OnAnimationFinished) == 0x000008, "Wrong size on BattleCordeEditForBattleSet_C_OnAnimationFinished");
static_assert(offsetof(BattleCordeEditForBattleSet_C_OnAnimationFinished, Animation) == 0x000000, "Member 'BattleCordeEditForBattleSet_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.EquipCordeNotAllValidConfirmEnd
// 0x0001 (0x0001 - 0x0000)
struct BattleCordeEditForBattleSet_C_EquipCordeNotAllValidConfirmEnd final
{
public:
	EYesNoDialogResult                            Result;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleCordeEditForBattleSet_C_EquipCordeNotAllValidConfirmEnd) == 0x000001, "Wrong alignment on BattleCordeEditForBattleSet_C_EquipCordeNotAllValidConfirmEnd");
static_assert(sizeof(BattleCordeEditForBattleSet_C_EquipCordeNotAllValidConfirmEnd) == 0x000001, "Wrong size on BattleCordeEditForBattleSet_C_EquipCordeNotAllValidConfirmEnd");
static_assert(offsetof(BattleCordeEditForBattleSet_C_EquipCordeNotAllValidConfirmEnd, Result) == 0x000000, "Member 'BattleCordeEditForBattleSet_C_EquipCordeNotAllValidConfirmEnd::Result' has a wrong offset!");

// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.MoveCordeEquipmentFromStorageComfirmEnd
// 0x0001 (0x0001 - 0x0000)
struct BattleCordeEditForBattleSet_C_MoveCordeEquipmentFromStorageComfirmEnd final
{
public:
	EYesNoDialogResult                            Result;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleCordeEditForBattleSet_C_MoveCordeEquipmentFromStorageComfirmEnd) == 0x000001, "Wrong alignment on BattleCordeEditForBattleSet_C_MoveCordeEquipmentFromStorageComfirmEnd");
static_assert(sizeof(BattleCordeEditForBattleSet_C_MoveCordeEquipmentFromStorageComfirmEnd) == 0x000001, "Wrong size on BattleCordeEditForBattleSet_C_MoveCordeEquipmentFromStorageComfirmEnd");
static_assert(offsetof(BattleCordeEditForBattleSet_C_MoveCordeEquipmentFromStorageComfirmEnd, Result) == 0x000000, "Member 'BattleCordeEditForBattleSet_C_MoveCordeEquipmentFromStorageComfirmEnd::Result' has a wrong offset!");

// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.EquipCordeConfirmEnd
// 0x0001 (0x0001 - 0x0000)
struct BattleCordeEditForBattleSet_C_EquipCordeConfirmEnd final
{
public:
	EYesNoDialogResult                            Result;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleCordeEditForBattleSet_C_EquipCordeConfirmEnd) == 0x000001, "Wrong alignment on BattleCordeEditForBattleSet_C_EquipCordeConfirmEnd");
static_assert(sizeof(BattleCordeEditForBattleSet_C_EquipCordeConfirmEnd) == 0x000001, "Wrong size on BattleCordeEditForBattleSet_C_EquipCordeConfirmEnd");
static_assert(offsetof(BattleCordeEditForBattleSet_C_EquipCordeConfirmEnd, Result) == 0x000000, "Member 'BattleCordeEditForBattleSet_C_EquipCordeConfirmEnd::Result' has a wrong offset!");

// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ShowEquipCordeConfirmMessageDialog
// 0x0010 (0x0010 - 0x0000)
struct BattleCordeEditForBattleSet_C_ShowEquipCordeConfirmMessageDialog final
{
public:
	class FString                                 InCordeName;                                       // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleCordeEditForBattleSet_C_ShowEquipCordeConfirmMessageDialog) == 0x000008, "Wrong alignment on BattleCordeEditForBattleSet_C_ShowEquipCordeConfirmMessageDialog");
static_assert(sizeof(BattleCordeEditForBattleSet_C_ShowEquipCordeConfirmMessageDialog) == 0x000010, "Wrong size on BattleCordeEditForBattleSet_C_ShowEquipCordeConfirmMessageDialog");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ShowEquipCordeConfirmMessageDialog, InCordeName) == 0x000000, "Member 'BattleCordeEditForBattleSet_C_ShowEquipCordeConfirmMessageDialog::InCordeName' has a wrong offset!");

// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.EndCordeDeleteConfirmDialog
// 0x0001 (0x0001 - 0x0000)
struct BattleCordeEditForBattleSet_C_EndCordeDeleteConfirmDialog final
{
public:
	EYesNoDialogResult                            InYesNoResult;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleCordeEditForBattleSet_C_EndCordeDeleteConfirmDialog) == 0x000001, "Wrong alignment on BattleCordeEditForBattleSet_C_EndCordeDeleteConfirmDialog");
static_assert(sizeof(BattleCordeEditForBattleSet_C_EndCordeDeleteConfirmDialog) == 0x000001, "Wrong size on BattleCordeEditForBattleSet_C_EndCordeDeleteConfirmDialog");
static_assert(offsetof(BattleCordeEditForBattleSet_C_EndCordeDeleteConfirmDialog, InYesNoResult) == 0x000000, "Member 'BattleCordeEditForBattleSet_C_EndCordeDeleteConfirmDialog::InYesNoResult' has a wrong offset!");

// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ShowRenameCordeNameSuccessedMessageDialog
// 0x0010 (0x0010 - 0x0000)
struct BattleCordeEditForBattleSet_C_ShowRenameCordeNameSuccessedMessageDialog final
{
public:
	class FString                                 InRenamedCordeName;                                // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleCordeEditForBattleSet_C_ShowRenameCordeNameSuccessedMessageDialog) == 0x000008, "Wrong alignment on BattleCordeEditForBattleSet_C_ShowRenameCordeNameSuccessedMessageDialog");
static_assert(sizeof(BattleCordeEditForBattleSet_C_ShowRenameCordeNameSuccessedMessageDialog) == 0x000010, "Wrong size on BattleCordeEditForBattleSet_C_ShowRenameCordeNameSuccessedMessageDialog");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ShowRenameCordeNameSuccessedMessageDialog, InRenamedCordeName) == 0x000000, "Member 'BattleCordeEditForBattleSet_C_ShowRenameCordeNameSuccessedMessageDialog::InRenamedCordeName' has a wrong offset!");

// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ShowNewCordeRegisterSuccessedMessageDialog
// 0x0018 (0x0018 - 0x0000)
struct BattleCordeEditForBattleSet_C_ShowNewCordeRegisterSuccessedMessageDialog final
{
public:
	class FString                                 InNewCordeName;                                    // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          bInIsCordeOverwrite;                               // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleCordeEditForBattleSet_C_ShowNewCordeRegisterSuccessedMessageDialog) == 0x000008, "Wrong alignment on BattleCordeEditForBattleSet_C_ShowNewCordeRegisterSuccessedMessageDialog");
static_assert(sizeof(BattleCordeEditForBattleSet_C_ShowNewCordeRegisterSuccessedMessageDialog) == 0x000018, "Wrong size on BattleCordeEditForBattleSet_C_ShowNewCordeRegisterSuccessedMessageDialog");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ShowNewCordeRegisterSuccessedMessageDialog, InNewCordeName) == 0x000000, "Member 'BattleCordeEditForBattleSet_C_ShowNewCordeRegisterSuccessedMessageDialog::InNewCordeName' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ShowNewCordeRegisterSuccessedMessageDialog, bInIsCordeOverwrite) == 0x000010, "Member 'BattleCordeEditForBattleSet_C_ShowNewCordeRegisterSuccessedMessageDialog::bInIsCordeOverwrite' has a wrong offset!");

// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.EndUsingUnusedEquipConfirmDialog
// 0x0001 (0x0001 - 0x0000)
struct BattleCordeEditForBattleSet_C_EndUsingUnusedEquipConfirmDialog final
{
public:
	EYesNoDialogResult                            InYesNoResult;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleCordeEditForBattleSet_C_EndUsingUnusedEquipConfirmDialog) == 0x000001, "Wrong alignment on BattleCordeEditForBattleSet_C_EndUsingUnusedEquipConfirmDialog");
static_assert(sizeof(BattleCordeEditForBattleSet_C_EndUsingUnusedEquipConfirmDialog) == 0x000001, "Wrong size on BattleCordeEditForBattleSet_C_EndUsingUnusedEquipConfirmDialog");
static_assert(offsetof(BattleCordeEditForBattleSet_C_EndUsingUnusedEquipConfirmDialog, InYesNoResult) == 0x000000, "Member 'BattleCordeEditForBattleSet_C_EndUsingUnusedEquipConfirmDialog::InYesNoResult' has a wrong offset!");

// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnNameInputDialogNameDecided
// 0x0010 (0x0010 - 0x0000)
struct BattleCordeEditForBattleSet_C_OnNameInputDialogNameDecided final
{
public:
	class FString                                 PlayerName;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleCordeEditForBattleSet_C_OnNameInputDialogNameDecided) == 0x000008, "Wrong alignment on BattleCordeEditForBattleSet_C_OnNameInputDialogNameDecided");
static_assert(sizeof(BattleCordeEditForBattleSet_C_OnNameInputDialogNameDecided) == 0x000010, "Wrong size on BattleCordeEditForBattleSet_C_OnNameInputDialogNameDecided");
static_assert(offsetof(BattleCordeEditForBattleSet_C_OnNameInputDialogNameDecided, PlayerName) == 0x000000, "Member 'BattleCordeEditForBattleSet_C_OnNameInputDialogNameDecided::PlayerName' has a wrong offset!");

// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.SetupNameInputDialogEventBind
// 0x0001 (0x0001 - 0x0000)
struct BattleCordeEditForBattleSet_C_SetupNameInputDialogEventBind final
{
public:
	bool                                          InUnbindEvent;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleCordeEditForBattleSet_C_SetupNameInputDialogEventBind) == 0x000001, "Wrong alignment on BattleCordeEditForBattleSet_C_SetupNameInputDialogEventBind");
static_assert(sizeof(BattleCordeEditForBattleSet_C_SetupNameInputDialogEventBind) == 0x000001, "Wrong size on BattleCordeEditForBattleSet_C_SetupNameInputDialogEventBind");
static_assert(offsetof(BattleCordeEditForBattleSet_C_SetupNameInputDialogEventBind, InUnbindEvent) == 0x000000, "Member 'BattleCordeEditForBattleSet_C_SetupNameInputDialogEventBind::InUnbindEvent' has a wrong offset!");

// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.StartCordeNameInputProc
// 0x0001 (0x0001 - 0x0000)
struct BattleCordeEditForBattleSet_C_StartCordeNameInputProc final
{
public:
	bool                                          InIsForRename;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleCordeEditForBattleSet_C_StartCordeNameInputProc) == 0x000001, "Wrong alignment on BattleCordeEditForBattleSet_C_StartCordeNameInputProc");
static_assert(sizeof(BattleCordeEditForBattleSet_C_StartCordeNameInputProc) == 0x000001, "Wrong size on BattleCordeEditForBattleSet_C_StartCordeNameInputProc");
static_assert(offsetof(BattleCordeEditForBattleSet_C_StartCordeNameInputProc, InIsForRename) == 0x000000, "Member 'BattleCordeEditForBattleSet_C_StartCordeNameInputProc::InIsForRename' has a wrong offset!");

// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnSaveItemStorage
// 0x0018 (0x0018 - 0x0000)
struct BattleCordeEditForBattleSet_C_OnSaveItemStorage final
{
public:
	int32                                         InRetCode;                                         // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_58BB[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FOwnItemInfo>                   InDirtyItems;                                      // 0x0008(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BattleCordeEditForBattleSet_C_OnSaveItemStorage) == 0x000008, "Wrong alignment on BattleCordeEditForBattleSet_C_OnSaveItemStorage");
static_assert(sizeof(BattleCordeEditForBattleSet_C_OnSaveItemStorage) == 0x000018, "Wrong size on BattleCordeEditForBattleSet_C_OnSaveItemStorage");
static_assert(offsetof(BattleCordeEditForBattleSet_C_OnSaveItemStorage, InRetCode) == 0x000000, "Member 'BattleCordeEditForBattleSet_C_OnSaveItemStorage::InRetCode' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_OnSaveItemStorage, InDirtyItems) == 0x000008, "Member 'BattleCordeEditForBattleSet_C_OnSaveItemStorage::InDirtyItems' has a wrong offset!");

// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ShowWindow
// 0x0060 (0x0060 - 0x0000)
struct BattleCordeEditForBattleSet_C_ShowWindow final
{
public:
	ESBClassType                                  InEquipClassType;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InIsStorageMode;                                   // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58BC[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LocalEquipmentTextId;                              // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             LocalCharaEquipType;                               // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RequestCordeDataReload_OutRequestSuccessed; // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58BD[0x2];                                     // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBPlayerPresetEquipList               CallFunc_GetCurrEquippedCordeData_OutCordeData;    // 0x0010(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58BE[0x6];                                     // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UMyCharaMenu_LeftSideParameters_C*      CallFunc_GetLeftSideParameters_OutLeftSideParameters; // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58BF[0x5];                                     // 0x003B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0040(0x0018)()
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleCordeEditForBattleSet_C_ShowWindow) == 0x000008, "Wrong alignment on BattleCordeEditForBattleSet_C_ShowWindow");
static_assert(sizeof(BattleCordeEditForBattleSet_C_ShowWindow) == 0x000060, "Wrong size on BattleCordeEditForBattleSet_C_ShowWindow");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ShowWindow, InEquipClassType) == 0x000000, "Member 'BattleCordeEditForBattleSet_C_ShowWindow::InEquipClassType' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ShowWindow, InIsStorageMode) == 0x000001, "Member 'BattleCordeEditForBattleSet_C_ShowWindow::InIsStorageMode' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ShowWindow, LocalEquipmentTextId) == 0x000004, "Member 'BattleCordeEditForBattleSet_C_ShowWindow::LocalEquipmentTextId' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ShowWindow, LocalCharaEquipType) == 0x000008, "Member 'BattleCordeEditForBattleSet_C_ShowWindow::LocalCharaEquipType' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ShowWindow, CallFunc_RequestCordeDataReload_OutRequestSuccessed) == 0x000009, "Member 'BattleCordeEditForBattleSet_C_ShowWindow::CallFunc_RequestCordeDataReload_OutRequestSuccessed' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ShowWindow, CallFunc_PlaySE_ReturnValue) == 0x00000C, "Member 'BattleCordeEditForBattleSet_C_ShowWindow::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ShowWindow, CallFunc_GetCurrEquippedCordeData_OutCordeData) == 0x000010, "Member 'BattleCordeEditForBattleSet_C_ShowWindow::CallFunc_GetCurrEquippedCordeData_OutCordeData' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ShowWindow, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'BattleCordeEditForBattleSet_C_ShowWindow::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ShowWindow, CallFunc_IsValid_ReturnValue_1) == 0x000029, "Member 'BattleCordeEditForBattleSet_C_ShowWindow::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ShowWindow, CallFunc_GetLeftSideParameters_OutLeftSideParameters) == 0x000030, "Member 'BattleCordeEditForBattleSet_C_ShowWindow::CallFunc_GetLeftSideParameters_OutLeftSideParameters' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ShowWindow, CallFunc_IsValid_ReturnValue_2) == 0x000038, "Member 'BattleCordeEditForBattleSet_C_ShowWindow::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ShowWindow, CallFunc_IsValid_ReturnValue_3) == 0x000039, "Member 'BattleCordeEditForBattleSet_C_ShowWindow::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ShowWindow, CallFunc_IsAnimationPlaying_ReturnValue) == 0x00003A, "Member 'BattleCordeEditForBattleSet_C_ShowWindow::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ShowWindow, CallFunc_Conv_StringToText_ReturnValue) == 0x000040, "Member 'BattleCordeEditForBattleSet_C_ShowWindow::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ShowWindow, CallFunc_PlayAnimation_ReturnValue) == 0x000058, "Member 'BattleCordeEditForBattleSet_C_ShowWindow::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.HideWindow
// 0x0018 (0x0018 - 0x0000)
struct BattleCordeEditForBattleSet_C_HideWindow final
{
public:
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_58C0[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleCordeEditForBattleSet_C_HideWindow) == 0x000008, "Wrong alignment on BattleCordeEditForBattleSet_C_HideWindow");
static_assert(sizeof(BattleCordeEditForBattleSet_C_HideWindow) == 0x000018, "Wrong size on BattleCordeEditForBattleSet_C_HideWindow");
static_assert(offsetof(BattleCordeEditForBattleSet_C_HideWindow, CallFunc_PlaySE_ReturnValue) == 0x000000, "Member 'BattleCordeEditForBattleSet_C_HideWindow::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_HideWindow, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'BattleCordeEditForBattleSet_C_HideWindow::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_HideWindow, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000010, "Member 'BattleCordeEditForBattleSet_C_HideWindow::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");

// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.IsHideWindowAnimePlaying
// 0x0003 (0x0003 - 0x0000)
struct BattleCordeEditForBattleSet_C_IsHideWindowAnimePlaying final
{
public:
	bool                                          OutIsPlaying;                                      // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleCordeEditForBattleSet_C_IsHideWindowAnimePlaying) == 0x000001, "Wrong alignment on BattleCordeEditForBattleSet_C_IsHideWindowAnimePlaying");
static_assert(sizeof(BattleCordeEditForBattleSet_C_IsHideWindowAnimePlaying) == 0x000003, "Wrong size on BattleCordeEditForBattleSet_C_IsHideWindowAnimePlaying");
static_assert(offsetof(BattleCordeEditForBattleSet_C_IsHideWindowAnimePlaying, OutIsPlaying) == 0x000000, "Member 'BattleCordeEditForBattleSet_C_IsHideWindowAnimePlaying::OutIsPlaying' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_IsHideWindowAnimePlaying, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'BattleCordeEditForBattleSet_C_IsHideWindowAnimePlaying::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_IsHideWindowAnimePlaying, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000002, "Member 'BattleCordeEditForBattleSet_C_IsHideWindowAnimePlaying::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");

// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.SetIsCostumePartsLoading
// 0x0001 (0x0001 - 0x0000)
struct BattleCordeEditForBattleSet_C_SetIsCostumePartsLoading final
{
public:
	bool                                          InIsCostumePartsLoading;                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleCordeEditForBattleSet_C_SetIsCostumePartsLoading) == 0x000001, "Wrong alignment on BattleCordeEditForBattleSet_C_SetIsCostumePartsLoading");
static_assert(sizeof(BattleCordeEditForBattleSet_C_SetIsCostumePartsLoading) == 0x000001, "Wrong size on BattleCordeEditForBattleSet_C_SetIsCostumePartsLoading");
static_assert(offsetof(BattleCordeEditForBattleSet_C_SetIsCostumePartsLoading, InIsCostumePartsLoading) == 0x000000, "Member 'BattleCordeEditForBattleSet_C_SetIsCostumePartsLoading::InIsCostumePartsLoading' has a wrong offset!");

// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.GetIsCostumePartsLoading
// 0x0001 (0x0001 - 0x0000)
struct BattleCordeEditForBattleSet_C_GetIsCostumePartsLoading final
{
public:
	bool                                          OutIsCostumePartsLoading;                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleCordeEditForBattleSet_C_GetIsCostumePartsLoading) == 0x000001, "Wrong alignment on BattleCordeEditForBattleSet_C_GetIsCostumePartsLoading");
static_assert(sizeof(BattleCordeEditForBattleSet_C_GetIsCostumePartsLoading) == 0x000001, "Wrong size on BattleCordeEditForBattleSet_C_GetIsCostumePartsLoading");
static_assert(offsetof(BattleCordeEditForBattleSet_C_GetIsCostumePartsLoading, OutIsCostumePartsLoading) == 0x000000, "Member 'BattleCordeEditForBattleSet_C_GetIsCostumePartsLoading::OutIsCostumePartsLoading' has a wrong offset!");

// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.UpdateLeftSideParameterStatus
// 0x0018 (0x0018 - 0x0000)
struct BattleCordeEditForBattleSet_C_UpdateLeftSideParameterStatus final
{
public:
	bool                                          InIncludesClassInfoUpdate;                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58C1[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UMyCharaMenu_LeftSideParameters_C*      CallFunc_GetLeftSideParameters_OutLeftSideParameters; // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleCordeEditForBattleSet_C_UpdateLeftSideParameterStatus) == 0x000008, "Wrong alignment on BattleCordeEditForBattleSet_C_UpdateLeftSideParameterStatus");
static_assert(sizeof(BattleCordeEditForBattleSet_C_UpdateLeftSideParameterStatus) == 0x000018, "Wrong size on BattleCordeEditForBattleSet_C_UpdateLeftSideParameterStatus");
static_assert(offsetof(BattleCordeEditForBattleSet_C_UpdateLeftSideParameterStatus, InIncludesClassInfoUpdate) == 0x000000, "Member 'BattleCordeEditForBattleSet_C_UpdateLeftSideParameterStatus::InIncludesClassInfoUpdate' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_UpdateLeftSideParameterStatus, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'BattleCordeEditForBattleSet_C_UpdateLeftSideParameterStatus::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_UpdateLeftSideParameterStatus, CallFunc_GetLeftSideParameters_OutLeftSideParameters) == 0x000008, "Member 'BattleCordeEditForBattleSet_C_UpdateLeftSideParameterStatus::CallFunc_GetLeftSideParameters_OutLeftSideParameters' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_UpdateLeftSideParameterStatus, CallFunc_IsValid_ReturnValue_1) == 0x000010, "Member 'BattleCordeEditForBattleSet_C_UpdateLeftSideParameterStatus::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.RequestPlayerCharacterCalcEquipStatusDiff
// 0x0048 (0x0048 - 0x0000)
struct BattleCordeEditForBattleSet_C_RequestPlayerCharacterCalcEquipStatusDiff final
{
public:
	int32                                         InCordeId;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_58C2[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     LocalSBPlayerCharacter;                            // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBPlayerPresetEquipItem>       CallFunc_GetPlayerPresetEquipItem_OutParam;        // 0x0010(0x0010)(ReferenceParm)
	bool                                          CallFunc_GetPlayerPresetEquipItem_ReturnValue;     // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58C3[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0024(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_58C4[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleCordeEditForBattleSet_C_RequestPlayerCharacterCalcEquipStatusDiff) == 0x000008, "Wrong alignment on BattleCordeEditForBattleSet_C_RequestPlayerCharacterCalcEquipStatusDiff");
static_assert(sizeof(BattleCordeEditForBattleSet_C_RequestPlayerCharacterCalcEquipStatusDiff) == 0x000048, "Wrong size on BattleCordeEditForBattleSet_C_RequestPlayerCharacterCalcEquipStatusDiff");
static_assert(offsetof(BattleCordeEditForBattleSet_C_RequestPlayerCharacterCalcEquipStatusDiff, InCordeId) == 0x000000, "Member 'BattleCordeEditForBattleSet_C_RequestPlayerCharacterCalcEquipStatusDiff::InCordeId' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_RequestPlayerCharacterCalcEquipStatusDiff, LocalSBPlayerCharacter) == 0x000008, "Member 'BattleCordeEditForBattleSet_C_RequestPlayerCharacterCalcEquipStatusDiff::LocalSBPlayerCharacter' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_RequestPlayerCharacterCalcEquipStatusDiff, CallFunc_GetPlayerPresetEquipItem_OutParam) == 0x000010, "Member 'BattleCordeEditForBattleSet_C_RequestPlayerCharacterCalcEquipStatusDiff::CallFunc_GetPlayerPresetEquipItem_OutParam' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_RequestPlayerCharacterCalcEquipStatusDiff, CallFunc_GetPlayerPresetEquipItem_ReturnValue) == 0x000020, "Member 'BattleCordeEditForBattleSet_C_RequestPlayerCharacterCalcEquipStatusDiff::CallFunc_GetPlayerPresetEquipItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_RequestPlayerCharacterCalcEquipStatusDiff, K2Node_CreateDelegate_OutputDelegate) == 0x000024, "Member 'BattleCordeEditForBattleSet_C_RequestPlayerCharacterCalcEquipStatusDiff::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_RequestPlayerCharacterCalcEquipStatusDiff, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000038, "Member 'BattleCordeEditForBattleSet_C_RequestPlayerCharacterCalcEquipStatusDiff::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_RequestPlayerCharacterCalcEquipStatusDiff, CallFunc_IsValid_ReturnValue) == 0x000040, "Member 'BattleCordeEditForBattleSet_C_RequestPlayerCharacterCalcEquipStatusDiff::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.IsCharaDetailedStatusOpen
// 0x0004 (0x0004 - 0x0000)
struct BattleCordeEditForBattleSet_C_IsCharaDetailedStatusOpen final
{
public:
	bool                                          OutIsOpen;                                         // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleCordeEditForBattleSet_C_IsCharaDetailedStatusOpen) == 0x000001, "Wrong alignment on BattleCordeEditForBattleSet_C_IsCharaDetailedStatusOpen");
static_assert(sizeof(BattleCordeEditForBattleSet_C_IsCharaDetailedStatusOpen) == 0x000004, "Wrong size on BattleCordeEditForBattleSet_C_IsCharaDetailedStatusOpen");
static_assert(offsetof(BattleCordeEditForBattleSet_C_IsCharaDetailedStatusOpen, OutIsOpen) == 0x000000, "Member 'BattleCordeEditForBattleSet_C_IsCharaDetailedStatusOpen::OutIsOpen' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_IsCharaDetailedStatusOpen, CallFunc_GetVisibility_ReturnValue) == 0x000001, "Member 'BattleCordeEditForBattleSet_C_IsCharaDetailedStatusOpen::CallFunc_GetVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_IsCharaDetailedStatusOpen, CallFunc_IsValid_ReturnValue) == 0x000002, "Member 'BattleCordeEditForBattleSet_C_IsCharaDetailedStatusOpen::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_IsCharaDetailedStatusOpen, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000003, "Member 'BattleCordeEditForBattleSet_C_IsCharaDetailedStatusOpen::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.CreateCordeList
// 0x0002 (0x0002 - 0x0000)
struct BattleCordeEditForBattleSet_C_CreateCordeList final
{
public:
	bool                                          InResetSelectedCordeListItem;                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleCordeEditForBattleSet_C_CreateCordeList) == 0x000001, "Wrong alignment on BattleCordeEditForBattleSet_C_CreateCordeList");
static_assert(sizeof(BattleCordeEditForBattleSet_C_CreateCordeList) == 0x000002, "Wrong size on BattleCordeEditForBattleSet_C_CreateCordeList");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CreateCordeList, InResetSelectedCordeListItem) == 0x000000, "Member 'BattleCordeEditForBattleSet_C_CreateCordeList::InResetSelectedCordeListItem' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CreateCordeList, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'BattleCordeEditForBattleSet_C_CreateCordeList::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.GetCordeListEmptySlotId
// 0x0028 (0x0028 - 0x0000)
struct BattleCordeEditForBattleSet_C_GetCordeListEmptySlotId final
{
public:
	int32                                         OutListIndex;                                      // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_58C5[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBPlayerPresetEquipList>       LocalCordeDataList;                                // 0x0008(0x0010)(Edit, BlueprintVisible)
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58C6[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetPresetEquipListBlankDataIndex_ReturnValue; // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleCordeEditForBattleSet_C_GetCordeListEmptySlotId) == 0x000008, "Wrong alignment on BattleCordeEditForBattleSet_C_GetCordeListEmptySlotId");
static_assert(sizeof(BattleCordeEditForBattleSet_C_GetCordeListEmptySlotId) == 0x000028, "Wrong size on BattleCordeEditForBattleSet_C_GetCordeListEmptySlotId");
static_assert(offsetof(BattleCordeEditForBattleSet_C_GetCordeListEmptySlotId, OutListIndex) == 0x000000, "Member 'BattleCordeEditForBattleSet_C_GetCordeListEmptySlotId::OutListIndex' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_GetCordeListEmptySlotId, LocalCordeDataList) == 0x000008, "Member 'BattleCordeEditForBattleSet_C_GetCordeListEmptySlotId::LocalCordeDataList' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_GetCordeListEmptySlotId, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000018, "Member 'BattleCordeEditForBattleSet_C_GetCordeListEmptySlotId::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_GetCordeListEmptySlotId, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'BattleCordeEditForBattleSet_C_GetCordeListEmptySlotId::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_GetCordeListEmptySlotId, CallFunc_GetPresetEquipListBlankDataIndex_ReturnValue) == 0x000024, "Member 'BattleCordeEditForBattleSet_C_GetCordeListEmptySlotId::CallFunc_GetPresetEquipListBlankDataIndex_ReturnValue' has a wrong offset!");

// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.RegisterCorde
// 0x00B0 (0x00B0 - 0x0000)
struct BattleCordeEditForBattleSet_C_RegisterCorde final
{
public:
	int32                                         InCordeListId;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_58C7[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 InCordeName;                                       // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FSBPlayerPresetEquipList               LocalPresetEquipList;                              // 0x0018(0x0018)(Edit, BlueprintVisible)
	TArray<struct FSBPlayerPresetEquipItem>       LocalPresetEquipItems;                             // 0x0030(0x0010)(Edit, BlueprintVisible)
	class ASBPlayerCharacter*                     LocalSBPlayerCharacter;                            // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 LocalCordeName;                                    // 0x0048(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         LocalCordeListId;                                  // 0x0058(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate;              // 0x005C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBClassType                                  CallFunc_GetPlayerClassType_ClassType;             // 0x006D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_58C8[0x2];                                     // 0x006E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBPlayerPresetEquipList               K2Node_MakeStruct_SBPlayerPresetEquipList;         // 0x0078(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58C9[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBPlayerPresetEquipItem>       CallFunc_GetBattlePresetEquipDataFormNowEquipItem_OutItemList; // 0x0098(0x0010)(ReferenceParm)
	bool                                          CallFunc_GetBattlePresetEquipDataFormNowEquipItem_ReturnValue; // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleCordeEditForBattleSet_C_RegisterCorde) == 0x000008, "Wrong alignment on BattleCordeEditForBattleSet_C_RegisterCorde");
static_assert(sizeof(BattleCordeEditForBattleSet_C_RegisterCorde) == 0x0000B0, "Wrong size on BattleCordeEditForBattleSet_C_RegisterCorde");
static_assert(offsetof(BattleCordeEditForBattleSet_C_RegisterCorde, InCordeListId) == 0x000000, "Member 'BattleCordeEditForBattleSet_C_RegisterCorde::InCordeListId' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_RegisterCorde, InCordeName) == 0x000008, "Member 'BattleCordeEditForBattleSet_C_RegisterCorde::InCordeName' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_RegisterCorde, LocalPresetEquipList) == 0x000018, "Member 'BattleCordeEditForBattleSet_C_RegisterCorde::LocalPresetEquipList' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_RegisterCorde, LocalPresetEquipItems) == 0x000030, "Member 'BattleCordeEditForBattleSet_C_RegisterCorde::LocalPresetEquipItems' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_RegisterCorde, LocalSBPlayerCharacter) == 0x000040, "Member 'BattleCordeEditForBattleSet_C_RegisterCorde::LocalSBPlayerCharacter' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_RegisterCorde, LocalCordeName) == 0x000048, "Member 'BattleCordeEditForBattleSet_C_RegisterCorde::LocalCordeName' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_RegisterCorde, LocalCordeListId) == 0x000058, "Member 'BattleCordeEditForBattleSet_C_RegisterCorde::LocalCordeListId' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_RegisterCorde, K2Node_CreateDelegate_OutputDelegate) == 0x00005C, "Member 'BattleCordeEditForBattleSet_C_RegisterCorde::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_RegisterCorde, CallFunc_IsValid_ReturnValue) == 0x00006C, "Member 'BattleCordeEditForBattleSet_C_RegisterCorde::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_RegisterCorde, CallFunc_GetPlayerClassType_ClassType) == 0x00006D, "Member 'BattleCordeEditForBattleSet_C_RegisterCorde::CallFunc_GetPlayerClassType_ClassType' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_RegisterCorde, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000070, "Member 'BattleCordeEditForBattleSet_C_RegisterCorde::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_RegisterCorde, K2Node_MakeStruct_SBPlayerPresetEquipList) == 0x000078, "Member 'BattleCordeEditForBattleSet_C_RegisterCorde::K2Node_MakeStruct_SBPlayerPresetEquipList' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_RegisterCorde, CallFunc_IsValid_ReturnValue_1) == 0x000090, "Member 'BattleCordeEditForBattleSet_C_RegisterCorde::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_RegisterCorde, CallFunc_GetBattlePresetEquipDataFormNowEquipItem_OutItemList) == 0x000098, "Member 'BattleCordeEditForBattleSet_C_RegisterCorde::CallFunc_GetBattlePresetEquipDataFormNowEquipItem_OutItemList' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_RegisterCorde, CallFunc_GetBattlePresetEquipDataFormNowEquipItem_ReturnValue) == 0x0000A8, "Member 'BattleCordeEditForBattleSet_C_RegisterCorde::CallFunc_GetBattlePresetEquipDataFormNowEquipItem_ReturnValue' has a wrong offset!");

// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.SetEquipCordeBtnEnable
// 0x0002 (0x0002 - 0x0000)
struct BattleCordeEditForBattleSet_C_SetEquipCordeBtnEnable final
{
public:
	bool                                          InIsEnabled;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleCordeEditForBattleSet_C_SetEquipCordeBtnEnable) == 0x000001, "Wrong alignment on BattleCordeEditForBattleSet_C_SetEquipCordeBtnEnable");
static_assert(sizeof(BattleCordeEditForBattleSet_C_SetEquipCordeBtnEnable) == 0x000002, "Wrong size on BattleCordeEditForBattleSet_C_SetEquipCordeBtnEnable");
static_assert(offsetof(BattleCordeEditForBattleSet_C_SetEquipCordeBtnEnable, InIsEnabled) == 0x000000, "Member 'BattleCordeEditForBattleSet_C_SetEquipCordeBtnEnable::InIsEnabled' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_SetEquipCordeBtnEnable, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'BattleCordeEditForBattleSet_C_SetEquipCordeBtnEnable::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.SetIsSelectedCordeEquippable
// 0x0006 (0x0006 - 0x0000)
struct BattleCordeEditForBattleSet_C_SetIsSelectedCordeEquippable final
{
public:
	bool                                          InIsEquippable;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalIsEquippable;                                 // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleCordeEditForBattleSet_C_SetIsSelectedCordeEquippable) == 0x000001, "Wrong alignment on BattleCordeEditForBattleSet_C_SetIsSelectedCordeEquippable");
static_assert(sizeof(BattleCordeEditForBattleSet_C_SetIsSelectedCordeEquippable) == 0x000006, "Wrong size on BattleCordeEditForBattleSet_C_SetIsSelectedCordeEquippable");
static_assert(offsetof(BattleCordeEditForBattleSet_C_SetIsSelectedCordeEquippable, InIsEquippable) == 0x000000, "Member 'BattleCordeEditForBattleSet_C_SetIsSelectedCordeEquippable::InIsEquippable' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_SetIsSelectedCordeEquippable, LocalIsEquippable) == 0x000001, "Member 'BattleCordeEditForBattleSet_C_SetIsSelectedCordeEquippable::LocalIsEquippable' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_SetIsSelectedCordeEquippable, Temp_bool_Variable) == 0x000002, "Member 'BattleCordeEditForBattleSet_C_SetIsSelectedCordeEquippable::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_SetIsSelectedCordeEquippable, Temp_byte_Variable) == 0x000003, "Member 'BattleCordeEditForBattleSet_C_SetIsSelectedCordeEquippable::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_SetIsSelectedCordeEquippable, Temp_byte_Variable_1) == 0x000004, "Member 'BattleCordeEditForBattleSet_C_SetIsSelectedCordeEquippable::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_SetIsSelectedCordeEquippable, K2Node_Select_Default) == 0x000005, "Member 'BattleCordeEditForBattleSet_C_SetIsSelectedCordeEquippable::K2Node_Select_Default' has a wrong offset!");

// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.CheckCordeWeaponIsValid
// 0x02B8 (0x02B8 - 0x0000)
struct BattleCordeEditForBattleSet_C_CheckCordeWeaponIsValid final
{
public:
	int32                                         InCordeId;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InIsStorageMode;                                   // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          OutIsValid;                                        // 0x0005(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalIsStorageMode;                                // 0x0006(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58CA[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LocalCordeId;                                      // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_58CB[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 LocalWeaponUniqueId;                               // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetCharacterStorage_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58CC[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetEquipmentBag_ReturnValue;              // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist;         // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58CD[0x6];                                     // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue;       // 0x0040(0x0118)(ConstParm)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist_1;       // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58CE[0x7];                                     // 0x0159(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue_1;     // 0x0160(0x0118)(ConstParm)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0278(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_58CF[0x3];                                     // 0x0279(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x027C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetEquipItemIndexByBattleEquipItem_ReturnValue; // 0x0280(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x0284(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58D0[0x3];                                     // 0x0285(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlayerPresetEquipItem               CallFunc_GetPlayerPresetEquipItemByIndex_OutParam; // 0x0288(0x0028)()
	bool                                          CallFunc_GetPlayerPresetEquipItemByIndex_ReturnValue; // 0x02B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleCordeEditForBattleSet_C_CheckCordeWeaponIsValid) == 0x000008, "Wrong alignment on BattleCordeEditForBattleSet_C_CheckCordeWeaponIsValid");
static_assert(sizeof(BattleCordeEditForBattleSet_C_CheckCordeWeaponIsValid) == 0x0002B8, "Wrong size on BattleCordeEditForBattleSet_C_CheckCordeWeaponIsValid");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeWeaponIsValid, InCordeId) == 0x000000, "Member 'BattleCordeEditForBattleSet_C_CheckCordeWeaponIsValid::InCordeId' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeWeaponIsValid, InIsStorageMode) == 0x000004, "Member 'BattleCordeEditForBattleSet_C_CheckCordeWeaponIsValid::InIsStorageMode' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeWeaponIsValid, OutIsValid) == 0x000005, "Member 'BattleCordeEditForBattleSet_C_CheckCordeWeaponIsValid::OutIsValid' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeWeaponIsValid, LocalIsStorageMode) == 0x000006, "Member 'BattleCordeEditForBattleSet_C_CheckCordeWeaponIsValid::LocalIsStorageMode' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeWeaponIsValid, LocalCordeId) == 0x000008, "Member 'BattleCordeEditForBattleSet_C_CheckCordeWeaponIsValid::LocalCordeId' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeWeaponIsValid, LocalWeaponUniqueId) == 0x000010, "Member 'BattleCordeEditForBattleSet_C_CheckCordeWeaponIsValid::LocalWeaponUniqueId' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeWeaponIsValid, CallFunc_GetCharacterStorage_ReturnValue) == 0x000020, "Member 'BattleCordeEditForBattleSet_C_CheckCordeWeaponIsValid::CallFunc_GetCharacterStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeWeaponIsValid, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'BattleCordeEditForBattleSet_C_CheckCordeWeaponIsValid::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeWeaponIsValid, CallFunc_GetEquipmentBag_ReturnValue) == 0x000030, "Member 'BattleCordeEditForBattleSet_C_CheckCordeWeaponIsValid::CallFunc_GetEquipmentBag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeWeaponIsValid, CallFunc_IsValid_ReturnValue_1) == 0x000038, "Member 'BattleCordeEditForBattleSet_C_CheckCordeWeaponIsValid::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeWeaponIsValid, CallFunc_BP_FindItem_ByUniqueId_bOutExist) == 0x000039, "Member 'BattleCordeEditForBattleSet_C_CheckCordeWeaponIsValid::CallFunc_BP_FindItem_ByUniqueId_bOutExist' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeWeaponIsValid, CallFunc_BP_FindItem_ByUniqueId_ReturnValue) == 0x000040, "Member 'BattleCordeEditForBattleSet_C_CheckCordeWeaponIsValid::CallFunc_BP_FindItem_ByUniqueId_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeWeaponIsValid, CallFunc_BP_FindItem_ByUniqueId_bOutExist_1) == 0x000158, "Member 'BattleCordeEditForBattleSet_C_CheckCordeWeaponIsValid::CallFunc_BP_FindItem_ByUniqueId_bOutExist_1' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeWeaponIsValid, CallFunc_BP_FindItem_ByUniqueId_ReturnValue_1) == 0x000160, "Member 'BattleCordeEditForBattleSet_C_CheckCordeWeaponIsValid::CallFunc_BP_FindItem_ByUniqueId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeWeaponIsValid, CallFunc_MakeLiteralByte_ReturnValue) == 0x000278, "Member 'BattleCordeEditForBattleSet_C_CheckCordeWeaponIsValid::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeWeaponIsValid, CallFunc_Conv_ByteToInt_ReturnValue) == 0x00027C, "Member 'BattleCordeEditForBattleSet_C_CheckCordeWeaponIsValid::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeWeaponIsValid, CallFunc_GetEquipItemIndexByBattleEquipItem_ReturnValue) == 0x000280, "Member 'BattleCordeEditForBattleSet_C_CheckCordeWeaponIsValid::CallFunc_GetEquipItemIndexByBattleEquipItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeWeaponIsValid, CallFunc_NotEqual_StrStr_ReturnValue) == 0x000284, "Member 'BattleCordeEditForBattleSet_C_CheckCordeWeaponIsValid::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeWeaponIsValid, CallFunc_GetPlayerPresetEquipItemByIndex_OutParam) == 0x000288, "Member 'BattleCordeEditForBattleSet_C_CheckCordeWeaponIsValid::CallFunc_GetPlayerPresetEquipItemByIndex_OutParam' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeWeaponIsValid, CallFunc_GetPlayerPresetEquipItemByIndex_ReturnValue) == 0x0002B0, "Member 'BattleCordeEditForBattleSet_C_CheckCordeWeaponIsValid::CallFunc_GetPlayerPresetEquipItemByIndex_ReturnValue' has a wrong offset!");

// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.CheckCordeEquipmentsAreAllValid
// 0x0338 (0x0338 - 0x0000)
struct BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreAllValid final
{
public:
	int32                                         InCordeId;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OutIsAllEquipmentValid;                            // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          OutIsEquipmentInStorage;                           // 0x0005(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58D1[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 LocalUniqueId;                                     // 0x0008(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	ESBPlayerBattlePresetEquipItem                LocalCordeEquipType;                               // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LocalIsEquipItemInStorage;                         // 0x0019(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58D2[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlayerPresetEquipItem               LocalPresetEquipItem;                              // 0x0020(0x0028)(Edit, BlueprintVisible)
	class USBOwnItemListContainer*                LocalCharacterStorage;                             // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                LocalEquipmentBag;                                 // 0x0050(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<ESBPlayerBattlePresetEquipItem>        LocalCordeEquipTypeArray;                          // 0x0058(0x0010)(Edit, BlueprintVisible)
	int32                                         LocalCordeId;                                      // 0x0068(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetEquipItemIndexByBattleEquipItem_ReturnValue; // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist;         // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58D3[0x6];                                     // 0x0082(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue;       // 0x0088(0x0118)(ConstParm)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist_1;       // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58D4[0x7];                                     // 0x01A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue_1;     // 0x01A8(0x0118)(ConstParm)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x02C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58D5[0x7];                                     // 0x02C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<ESBPlayerBattlePresetEquipItem>        K2Node_MakeArray_Array;                            // 0x02C8(0x0010)(ReferenceParm)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x02D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x02D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58D6[0x6];                                     // 0x02DA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetCharacterStorage_ReturnValue;          // 0x02E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x02E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58D7[0x7];                                     // 0x02E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetEquipmentBag_ReturnValue;              // 0x02F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x02F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBPlayerBattlePresetEquipItem                CallFunc_Array_Get_Item;                           // 0x02F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_58D8[0x2];                                     // 0x02FA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x02FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0300(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58D9[0x7];                                     // 0x0301(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlayerPresetEquipItem               CallFunc_GetPlayerPresetEquipItemByIndex_OutParam; // 0x0308(0x0028)()
	bool                                          CallFunc_GetPlayerPresetEquipItemByIndex_ReturnValue; // 0x0330(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreAllValid) == 0x000008, "Wrong alignment on BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreAllValid");
static_assert(sizeof(BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreAllValid) == 0x000338, "Wrong size on BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreAllValid");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreAllValid, InCordeId) == 0x000000, "Member 'BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreAllValid::InCordeId' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreAllValid, OutIsAllEquipmentValid) == 0x000004, "Member 'BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreAllValid::OutIsAllEquipmentValid' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreAllValid, OutIsEquipmentInStorage) == 0x000005, "Member 'BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreAllValid::OutIsEquipmentInStorage' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreAllValid, LocalUniqueId) == 0x000008, "Member 'BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreAllValid::LocalUniqueId' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreAllValid, LocalCordeEquipType) == 0x000018, "Member 'BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreAllValid::LocalCordeEquipType' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreAllValid, LocalIsEquipItemInStorage) == 0x000019, "Member 'BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreAllValid::LocalIsEquipItemInStorage' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreAllValid, LocalPresetEquipItem) == 0x000020, "Member 'BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreAllValid::LocalPresetEquipItem' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreAllValid, LocalCharacterStorage) == 0x000048, "Member 'BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreAllValid::LocalCharacterStorage' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreAllValid, LocalEquipmentBag) == 0x000050, "Member 'BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreAllValid::LocalEquipmentBag' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreAllValid, LocalCordeEquipTypeArray) == 0x000058, "Member 'BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreAllValid::LocalCordeEquipTypeArray' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreAllValid, LocalCordeId) == 0x000068, "Member 'BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreAllValid::LocalCordeId' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreAllValid, Temp_int_Loop_Counter_Variable) == 0x00006C, "Member 'BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreAllValid::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreAllValid, CallFunc_Add_IntInt_ReturnValue) == 0x000070, "Member 'BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreAllValid::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreAllValid, Temp_int_Array_Index_Variable) == 0x000074, "Member 'BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreAllValid::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreAllValid, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000078, "Member 'BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreAllValid::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreAllValid, CallFunc_GetEquipItemIndexByBattleEquipItem_ReturnValue) == 0x00007C, "Member 'BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreAllValid::CallFunc_GetEquipItemIndexByBattleEquipItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreAllValid, CallFunc_Not_PreBool_ReturnValue) == 0x000080, "Member 'BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreAllValid::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreAllValid, CallFunc_BP_FindItem_ByUniqueId_bOutExist) == 0x000081, "Member 'BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreAllValid::CallFunc_BP_FindItem_ByUniqueId_bOutExist' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreAllValid, CallFunc_BP_FindItem_ByUniqueId_ReturnValue) == 0x000088, "Member 'BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreAllValid::CallFunc_BP_FindItem_ByUniqueId_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreAllValid, CallFunc_BP_FindItem_ByUniqueId_bOutExist_1) == 0x0001A0, "Member 'BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreAllValid::CallFunc_BP_FindItem_ByUniqueId_bOutExist_1' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreAllValid, CallFunc_BP_FindItem_ByUniqueId_ReturnValue_1) == 0x0001A8, "Member 'BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreAllValid::CallFunc_BP_FindItem_ByUniqueId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreAllValid, CallFunc_IsValid_ReturnValue) == 0x0002C0, "Member 'BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreAllValid::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreAllValid, K2Node_MakeArray_Array) == 0x0002C8, "Member 'BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreAllValid::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreAllValid, CallFunc_NotEqual_StrStr_ReturnValue) == 0x0002D8, "Member 'BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreAllValid::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreAllValid, CallFunc_IsValid_ReturnValue_1) == 0x0002D9, "Member 'BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreAllValid::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreAllValid, CallFunc_GetCharacterStorage_ReturnValue) == 0x0002E0, "Member 'BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreAllValid::CallFunc_GetCharacterStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreAllValid, CallFunc_IsValid_ReturnValue_2) == 0x0002E8, "Member 'BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreAllValid::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreAllValid, CallFunc_GetEquipmentBag_ReturnValue) == 0x0002F0, "Member 'BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreAllValid::CallFunc_GetEquipmentBag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreAllValid, CallFunc_IsValid_ReturnValue_3) == 0x0002F8, "Member 'BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreAllValid::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreAllValid, CallFunc_Array_Get_Item) == 0x0002F9, "Member 'BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreAllValid::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreAllValid, CallFunc_Array_Length_ReturnValue) == 0x0002FC, "Member 'BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreAllValid::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreAllValid, CallFunc_Less_IntInt_ReturnValue) == 0x000300, "Member 'BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreAllValid::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreAllValid, CallFunc_GetPlayerPresetEquipItemByIndex_OutParam) == 0x000308, "Member 'BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreAllValid::CallFunc_GetPlayerPresetEquipItemByIndex_OutParam' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreAllValid, CallFunc_GetPlayerPresetEquipItemByIndex_ReturnValue) == 0x000330, "Member 'BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreAllValid::CallFunc_GetPlayerPresetEquipItemByIndex_ReturnValue' has a wrong offset!");

// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.CheckCordeEquipmentsAreUnused
// 0x0460 (0x0460 - 0x0000)
struct BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused final
{
public:
	int32                                         InCordeId;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InIsStorageMode;                                   // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          OutIsUnused;                                       // 0x0005(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58DA[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           LocalOwnItemInfo;                                  // 0x0008(0x0118)(Edit, BlueprintVisible)
	struct FSBPlayerPresetEquipItem               LocalPresetEquipItem;                              // 0x0120(0x0028)(Edit, BlueprintVisible)
	class USBOwnItemListContainer*                LocalCharacterStorage;                             // 0x0148(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                LocalEquipmentBag;                                 // 0x0150(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<ESBPlayerBattlePresetEquipItem>        LocalCordeEquipTypeArray;                          // 0x0158(0x0010)(Edit, BlueprintVisible)
	bool                                          LocalIsStorageMode;                                // 0x0168(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58DB[0x3];                                     // 0x0169(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LocalCordeId;                                      // 0x016C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0174(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_58DC[0x4];                                     // 0x017C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<ESBPlayerBattlePresetEquipItem>        K2Node_MakeArray_Array;                            // 0x0180(0x0010)(ReferenceParm)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0191(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBRewardItemType                             CallFunc_ItemTypeToRewardItemType_Out_RewardItemType; // 0x0192(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0193(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist;         // 0x0194(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58DD[0x3];                                     // 0x0195(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue;       // 0x0198(0x0118)(ConstParm)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x02B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58DE[0x7];                                     // 0x02B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x02B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x02C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58DF[0x7];                                     // 0x02C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x02C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsUseCheckDialogActive_ReturnValue;       // 0x02D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BP_GetBPPtExchangeMasterByItemId_IsExists; // 0x02D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58E0[0x2];                                     // 0x02D2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBBPPtExchangeMasterData              CallFunc_BP_GetBPPtExchangeMasterByItemId_ReturnValue; // 0x02D4(0x0018)(NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x02EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x02ED(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x02EE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist_1;       // 0x02EF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue_1;     // 0x02F0(0x0118)(ConstParm)
	class USBOwnItemListContainer*                CallFunc_GetCharacterStorage_ReturnValue;          // 0x0408(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetEquipmentBag_ReturnValue;              // 0x0410(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0418(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0419(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBPlayerBattlePresetEquipItem                CallFunc_Array_Get_Item;                           // 0x041A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_58E1[0x1];                                     // 0x041B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x041C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0420(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0424(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58E2[0x3];                                     // 0x0425(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetEquipItemIndexByBattleEquipItem_ReturnValue; // 0x0428(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_58E3[0x4];                                     // 0x042C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlayerPresetEquipItem               CallFunc_GetPlayerPresetEquipItemByIndex_OutParam; // 0x0430(0x0028)()
	bool                                          CallFunc_GetPlayerPresetEquipItemByIndex_ReturnValue; // 0x0458(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused) == 0x000008, "Wrong alignment on BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused");
static_assert(sizeof(BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused) == 0x000460, "Wrong size on BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused, InCordeId) == 0x000000, "Member 'BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused::InCordeId' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused, InIsStorageMode) == 0x000004, "Member 'BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused::InIsStorageMode' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused, OutIsUnused) == 0x000005, "Member 'BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused::OutIsUnused' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused, LocalOwnItemInfo) == 0x000008, "Member 'BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused::LocalOwnItemInfo' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused, LocalPresetEquipItem) == 0x000120, "Member 'BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused::LocalPresetEquipItem' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused, LocalCharacterStorage) == 0x000148, "Member 'BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused::LocalCharacterStorage' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused, LocalEquipmentBag) == 0x000150, "Member 'BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused::LocalEquipmentBag' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused, LocalCordeEquipTypeArray) == 0x000158, "Member 'BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused::LocalCordeEquipTypeArray' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused, LocalIsStorageMode) == 0x000168, "Member 'BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused::LocalIsStorageMode' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused, LocalCordeId) == 0x00016C, "Member 'BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused::LocalCordeId' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused, Temp_int_Loop_Counter_Variable) == 0x000170, "Member 'BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused, CallFunc_Add_IntInt_ReturnValue) == 0x000174, "Member 'BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused, Temp_int_Array_Index_Variable) == 0x000178, "Member 'BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused, K2Node_MakeArray_Array) == 0x000180, "Member 'BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused, CallFunc_Not_PreBool_ReturnValue) == 0x000190, "Member 'BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused, CallFunc_Not_PreBool_ReturnValue_1) == 0x000191, "Member 'BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused, CallFunc_ItemTypeToRewardItemType_Out_RewardItemType) == 0x000192, "Member 'BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused::CallFunc_ItemTypeToRewardItemType_Out_RewardItemType' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused, CallFunc_IsValid_ReturnValue) == 0x000193, "Member 'BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused, CallFunc_BP_FindItem_ByUniqueId_bOutExist) == 0x000194, "Member 'BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused::CallFunc_BP_FindItem_ByUniqueId_bOutExist' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused, CallFunc_BP_FindItem_ByUniqueId_ReturnValue) == 0x000198, "Member 'BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused::CallFunc_BP_FindItem_ByUniqueId_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused, CallFunc_GetConfigSaveManager_IsValid) == 0x0002B0, "Member 'BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused, CallFunc_GetConfigSaveManager_ReturnValue) == 0x0002B8, "Member 'BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused, CallFunc_GetMasterDataManager_IsValid) == 0x0002C0, "Member 'BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused, CallFunc_GetMasterDataManager_ReturnValue) == 0x0002C8, "Member 'BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused, CallFunc_IsUseCheckDialogActive_ReturnValue) == 0x0002D0, "Member 'BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused::CallFunc_IsUseCheckDialogActive_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused, CallFunc_BP_GetBPPtExchangeMasterByItemId_IsExists) == 0x0002D1, "Member 'BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused::CallFunc_BP_GetBPPtExchangeMasterByItemId_IsExists' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused, CallFunc_BP_GetBPPtExchangeMasterByItemId_ReturnValue) == 0x0002D4, "Member 'BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused::CallFunc_BP_GetBPPtExchangeMasterByItemId_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused, CallFunc_BooleanAND_ReturnValue) == 0x0002EC, "Member 'BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused, CallFunc_BooleanAND_ReturnValue_1) == 0x0002ED, "Member 'BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused, CallFunc_IsValid_ReturnValue_1) == 0x0002EE, "Member 'BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused, CallFunc_BP_FindItem_ByUniqueId_bOutExist_1) == 0x0002EF, "Member 'BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused::CallFunc_BP_FindItem_ByUniqueId_bOutExist_1' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused, CallFunc_BP_FindItem_ByUniqueId_ReturnValue_1) == 0x0002F0, "Member 'BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused::CallFunc_BP_FindItem_ByUniqueId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused, CallFunc_GetCharacterStorage_ReturnValue) == 0x000408, "Member 'BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused::CallFunc_GetCharacterStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused, CallFunc_GetEquipmentBag_ReturnValue) == 0x000410, "Member 'BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused::CallFunc_GetEquipmentBag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused, CallFunc_IsValid_ReturnValue_2) == 0x000418, "Member 'BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused, CallFunc_IsValid_ReturnValue_3) == 0x000419, "Member 'BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused, CallFunc_Array_Get_Item) == 0x00041A, "Member 'BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused, CallFunc_Array_Length_ReturnValue) == 0x00041C, "Member 'BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000420, "Member 'BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused, CallFunc_Less_IntInt_ReturnValue) == 0x000424, "Member 'BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused, CallFunc_GetEquipItemIndexByBattleEquipItem_ReturnValue) == 0x000428, "Member 'BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused::CallFunc_GetEquipItemIndexByBattleEquipItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused, CallFunc_GetPlayerPresetEquipItemByIndex_OutParam) == 0x000430, "Member 'BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused::CallFunc_GetPlayerPresetEquipItemByIndex_OutParam' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused, CallFunc_GetPlayerPresetEquipItemByIndex_ReturnValue) == 0x000458, "Member 'BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused::CallFunc_GetPlayerPresetEquipItemByIndex_ReturnValue' has a wrong offset!");

// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.SetClassChangedJingleVisibility
// 0x0005 (0x0005 - 0x0000)
struct BattleCordeEditForBattleSet_C_SetClassChangedJingleVisibility final
{
public:
	bool                                          InIsVisible;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleCordeEditForBattleSet_C_SetClassChangedJingleVisibility) == 0x000001, "Wrong alignment on BattleCordeEditForBattleSet_C_SetClassChangedJingleVisibility");
static_assert(sizeof(BattleCordeEditForBattleSet_C_SetClassChangedJingleVisibility) == 0x000005, "Wrong size on BattleCordeEditForBattleSet_C_SetClassChangedJingleVisibility");
static_assert(offsetof(BattleCordeEditForBattleSet_C_SetClassChangedJingleVisibility, InIsVisible) == 0x000000, "Member 'BattleCordeEditForBattleSet_C_SetClassChangedJingleVisibility::InIsVisible' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_SetClassChangedJingleVisibility, CallFunc_MakeLiteralByte_ReturnValue) == 0x000001, "Member 'BattleCordeEditForBattleSet_C_SetClassChangedJingleVisibility::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_SetClassChangedJingleVisibility, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000002, "Member 'BattleCordeEditForBattleSet_C_SetClassChangedJingleVisibility::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_SetClassChangedJingleVisibility, Temp_bool_Variable) == 0x000003, "Member 'BattleCordeEditForBattleSet_C_SetClassChangedJingleVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_SetClassChangedJingleVisibility, K2Node_Select_Default) == 0x000004, "Member 'BattleCordeEditForBattleSet_C_SetClassChangedJingleVisibility::K2Node_Select_Default' has a wrong offset!");

// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.SetClassChangeLoadingVisibility
// 0x0005 (0x0005 - 0x0000)
struct BattleCordeEditForBattleSet_C_SetClassChangeLoadingVisibility final
{
public:
	bool                                          InIsVisible;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleCordeEditForBattleSet_C_SetClassChangeLoadingVisibility) == 0x000001, "Wrong alignment on BattleCordeEditForBattleSet_C_SetClassChangeLoadingVisibility");
static_assert(sizeof(BattleCordeEditForBattleSet_C_SetClassChangeLoadingVisibility) == 0x000005, "Wrong size on BattleCordeEditForBattleSet_C_SetClassChangeLoadingVisibility");
static_assert(offsetof(BattleCordeEditForBattleSet_C_SetClassChangeLoadingVisibility, InIsVisible) == 0x000000, "Member 'BattleCordeEditForBattleSet_C_SetClassChangeLoadingVisibility::InIsVisible' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_SetClassChangeLoadingVisibility, CallFunc_MakeLiteralByte_ReturnValue) == 0x000001, "Member 'BattleCordeEditForBattleSet_C_SetClassChangeLoadingVisibility::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_SetClassChangeLoadingVisibility, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000002, "Member 'BattleCordeEditForBattleSet_C_SetClassChangeLoadingVisibility::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_SetClassChangeLoadingVisibility, Temp_bool_Variable) == 0x000003, "Member 'BattleCordeEditForBattleSet_C_SetClassChangeLoadingVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_SetClassChangeLoadingVisibility, K2Node_Select_Default) == 0x000004, "Member 'BattleCordeEditForBattleSet_C_SetClassChangeLoadingVisibility::K2Node_Select_Default' has a wrong offset!");

// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.SetLeftSideParameterExpGaugeUpdateStop
// 0x0018 (0x0018 - 0x0000)
struct BattleCordeEditForBattleSet_C_SetLeftSideParameterExpGaugeUpdateStop final
{
public:
	bool                                          InIsUpdateStop;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58E4[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UMyCharaMenu_LeftSideParameters_C*      CallFunc_GetLeftSideParameters_OutLeftSideParameters; // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleCordeEditForBattleSet_C_SetLeftSideParameterExpGaugeUpdateStop) == 0x000008, "Wrong alignment on BattleCordeEditForBattleSet_C_SetLeftSideParameterExpGaugeUpdateStop");
static_assert(sizeof(BattleCordeEditForBattleSet_C_SetLeftSideParameterExpGaugeUpdateStop) == 0x000018, "Wrong size on BattleCordeEditForBattleSet_C_SetLeftSideParameterExpGaugeUpdateStop");
static_assert(offsetof(BattleCordeEditForBattleSet_C_SetLeftSideParameterExpGaugeUpdateStop, InIsUpdateStop) == 0x000000, "Member 'BattleCordeEditForBattleSet_C_SetLeftSideParameterExpGaugeUpdateStop::InIsUpdateStop' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_SetLeftSideParameterExpGaugeUpdateStop, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'BattleCordeEditForBattleSet_C_SetLeftSideParameterExpGaugeUpdateStop::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_SetLeftSideParameterExpGaugeUpdateStop, CallFunc_GetLeftSideParameters_OutLeftSideParameters) == 0x000008, "Member 'BattleCordeEditForBattleSet_C_SetLeftSideParameterExpGaugeUpdateStop::CallFunc_GetLeftSideParameters_OutLeftSideParameters' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_SetLeftSideParameterExpGaugeUpdateStop, CallFunc_IsValid_ReturnValue_1) == 0x000010, "Member 'BattleCordeEditForBattleSet_C_SetLeftSideParameterExpGaugeUpdateStop::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.RequestCordeDataReload
// 0x0003 (0x0003 - 0x0000)
struct BattleCordeEditForBattleSet_C_RequestCordeDataReload final
{
public:
	bool                                          OutRequestSuccessed;                               // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_RequestLoadCordeData_OutRequestSuccessed; // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleCordeEditForBattleSet_C_RequestCordeDataReload) == 0x000001, "Wrong alignment on BattleCordeEditForBattleSet_C_RequestCordeDataReload");
static_assert(sizeof(BattleCordeEditForBattleSet_C_RequestCordeDataReload) == 0x000003, "Wrong size on BattleCordeEditForBattleSet_C_RequestCordeDataReload");
static_assert(offsetof(BattleCordeEditForBattleSet_C_RequestCordeDataReload, OutRequestSuccessed) == 0x000000, "Member 'BattleCordeEditForBattleSet_C_RequestCordeDataReload::OutRequestSuccessed' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_RequestCordeDataReload, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'BattleCordeEditForBattleSet_C_RequestCordeDataReload::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_RequestCordeDataReload, CallFunc_RequestLoadCordeData_OutRequestSuccessed) == 0x000002, "Member 'BattleCordeEditForBattleSet_C_RequestCordeDataReload::CallFunc_RequestLoadCordeData_OutRequestSuccessed' has a wrong offset!");

// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.UpdateBattleCordeGuide
// 0x0018 (0x0018 - 0x0000)
struct BattleCordeEditForBattleSet_C_UpdateBattleCordeGuide final
{
public:
	bool                                          InIsStorageMode;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalIsStorageMode;                                // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_58E5[0x2];                                     // 0x000E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleCordeEditForBattleSet_C_UpdateBattleCordeGuide) == 0x000004, "Wrong alignment on BattleCordeEditForBattleSet_C_UpdateBattleCordeGuide");
static_assert(sizeof(BattleCordeEditForBattleSet_C_UpdateBattleCordeGuide) == 0x000018, "Wrong size on BattleCordeEditForBattleSet_C_UpdateBattleCordeGuide");
static_assert(offsetof(BattleCordeEditForBattleSet_C_UpdateBattleCordeGuide, InIsStorageMode) == 0x000000, "Member 'BattleCordeEditForBattleSet_C_UpdateBattleCordeGuide::InIsStorageMode' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_UpdateBattleCordeGuide, LocalIsStorageMode) == 0x000001, "Member 'BattleCordeEditForBattleSet_C_UpdateBattleCordeGuide::LocalIsStorageMode' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_UpdateBattleCordeGuide, Temp_bool_Variable) == 0x000002, "Member 'BattleCordeEditForBattleSet_C_UpdateBattleCordeGuide::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_UpdateBattleCordeGuide, Temp_bool_Variable_1) == 0x000003, "Member 'BattleCordeEditForBattleSet_C_UpdateBattleCordeGuide::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_UpdateBattleCordeGuide, Temp_int_Variable) == 0x000004, "Member 'BattleCordeEditForBattleSet_C_UpdateBattleCordeGuide::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_UpdateBattleCordeGuide, Temp_int_Variable_1) == 0x000008, "Member 'BattleCordeEditForBattleSet_C_UpdateBattleCordeGuide::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_UpdateBattleCordeGuide, CallFunc_MakeLiteralByte_ReturnValue) == 0x00000C, "Member 'BattleCordeEditForBattleSet_C_UpdateBattleCordeGuide::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_UpdateBattleCordeGuide, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x00000D, "Member 'BattleCordeEditForBattleSet_C_UpdateBattleCordeGuide::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_UpdateBattleCordeGuide, K2Node_Select_Default) == 0x000010, "Member 'BattleCordeEditForBattleSet_C_UpdateBattleCordeGuide::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_UpdateBattleCordeGuide, K2Node_Select_Default_1) == 0x000014, "Member 'BattleCordeEditForBattleSet_C_UpdateBattleCordeGuide::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_UpdateBattleCordeGuide, CallFunc_IsValid_ReturnValue) == 0x000015, "Member 'BattleCordeEditForBattleSet_C_UpdateBattleCordeGuide::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.GetCordeEquipmentStorageItemDatas
// 0x02F0 (0x02F0 - 0x0000)
struct BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas final
{
public:
	int32                                         InCordeId;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_58E6[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBStorageItemData>             OutEquipmentStorageItemDatas;                      // 0x0008(0x0010)(Parm, OutParm)
	class USBOwnItemListContainer*                LocalCharacterStorage;                             // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBStorageItemData>             LocalStorageItemDatas;                             // 0x0020(0x0010)(Edit, BlueprintVisible)
	TArray<struct FInventoryItemData>             LocalInventoryItemDatas;                           // 0x0030(0x0010)(Edit, BlueprintVisible)
	int32                                         LocalEquipmentInStorageCnt;                        // 0x0040(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalCordeId;                                      // 0x0044(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<ESBPlayerBattlePresetEquipItem>        LocalCordeEquipTypeArray;                          // 0x0048(0x0010)(Edit, BlueprintVisible)
	bool                                          Temp_bool_Variable;                                // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58E7[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue;                   // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_58E8[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetInventory_ReturnValue;                 // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<ESBPlayerBattlePresetEquipItem>        K2Node_MakeArray_Array;                            // 0x0080(0x0010)(ReferenceParm)
	bool                                          Temp_bool_Variable_1;                              // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58E9[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetEquipmentBag_ReturnValue;              // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetCharacterStorage_ReturnValue;          // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBPlayerBattlePresetEquipItem                CallFunc_Array_Get_Item;                           // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_58EA[0x2];                                     // 0x00AA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58EB[0x3];                                     // 0x00B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetEquipItemIndexByBattleEquipItem_ReturnValue; // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_58EC[0x4];                                     // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlayerPresetEquipItem               CallFunc_GetPlayerPresetEquipItemByIndex_OutParam; // 0x00C0(0x0028)()
	bool                                          CallFunc_GetPlayerPresetEquipItemByIndex_ReturnValue; // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist;         // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58ED[0x6];                                     // 0x00EA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue;       // 0x00F0(0x0118)(ConstParm)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58EE[0x7];                                     // 0x0209(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryData                         CallFunc_CreateInventoryData_InventoryData;        // 0x0210(0x0098)(HasGetValueTypeHash)
	bool                                          CallFunc_CreateInventoryData_IsSuccess;            // 0x02A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsInventoryStorageNumber_ReturnValue;     // 0x02A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58EF[0x6];                                     // 0x02AA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStorageItemData                     K2Node_MakeStruct_SBStorageItemData;               // 0x02B0(0x0020)()
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x02D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x02D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58F0[0x3];                                     // 0x02D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                K2Node_Select_Default;                             // 0x02D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                K2Node_Select_Default_1;                           // 0x02E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAddItemOpResult                              CallFunc_QueryAddItem_ReturnValue;                 // 0x02E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x02E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas) == 0x000008, "Wrong alignment on BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas");
static_assert(sizeof(BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas) == 0x0002F0, "Wrong size on BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas");
static_assert(offsetof(BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas, InCordeId) == 0x000000, "Member 'BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas::InCordeId' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas, OutEquipmentStorageItemDatas) == 0x000008, "Member 'BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas::OutEquipmentStorageItemDatas' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas, LocalCharacterStorage) == 0x000018, "Member 'BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas::LocalCharacterStorage' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas, LocalStorageItemDatas) == 0x000020, "Member 'BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas::LocalStorageItemDatas' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas, LocalInventoryItemDatas) == 0x000030, "Member 'BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas::LocalInventoryItemDatas' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas, LocalEquipmentInStorageCnt) == 0x000040, "Member 'BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas::LocalEquipmentInStorageCnt' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas, LocalCordeId) == 0x000044, "Member 'BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas::LocalCordeId' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas, LocalCordeEquipTypeArray) == 0x000048, "Member 'BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas::LocalCordeEquipTypeArray' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas, Temp_bool_Variable) == 0x000058, "Member 'BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas, CallFunc_GetStorage_ReturnValue) == 0x000060, "Member 'BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas::CallFunc_GetStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas, Temp_int_Loop_Counter_Variable) == 0x000068, "Member 'BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas, CallFunc_Add_IntInt_ReturnValue) == 0x00006C, "Member 'BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas, Temp_int_Array_Index_Variable) == 0x000070, "Member 'BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas, CallFunc_GetInventory_ReturnValue) == 0x000078, "Member 'BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas::CallFunc_GetInventory_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas, K2Node_MakeArray_Array) == 0x000080, "Member 'BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas, Temp_bool_Variable_1) == 0x000090, "Member 'BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas, CallFunc_GetEquipmentBag_ReturnValue) == 0x000098, "Member 'BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas::CallFunc_GetEquipmentBag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas, CallFunc_GetCharacterStorage_ReturnValue) == 0x0000A0, "Member 'BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas::CallFunc_GetCharacterStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas, CallFunc_IsValid_ReturnValue) == 0x0000A8, "Member 'BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas, CallFunc_Array_Get_Item) == 0x0000A9, "Member 'BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas, CallFunc_Array_Length_ReturnValue) == 0x0000AC, "Member 'BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas, CallFunc_Conv_ByteToInt_ReturnValue) == 0x0000B0, "Member 'BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas, CallFunc_Less_IntInt_ReturnValue) == 0x0000B4, "Member 'BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas, CallFunc_GetEquipItemIndexByBattleEquipItem_ReturnValue) == 0x0000B8, "Member 'BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas::CallFunc_GetEquipItemIndexByBattleEquipItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas, CallFunc_GetPlayerPresetEquipItemByIndex_OutParam) == 0x0000C0, "Member 'BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas::CallFunc_GetPlayerPresetEquipItemByIndex_OutParam' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas, CallFunc_GetPlayerPresetEquipItemByIndex_ReturnValue) == 0x0000E8, "Member 'BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas::CallFunc_GetPlayerPresetEquipItemByIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas, CallFunc_BP_FindItem_ByUniqueId_bOutExist) == 0x0000E9, "Member 'BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas::CallFunc_BP_FindItem_ByUniqueId_bOutExist' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas, CallFunc_BP_FindItem_ByUniqueId_ReturnValue) == 0x0000F0, "Member 'BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas::CallFunc_BP_FindItem_ByUniqueId_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas, CallFunc_NotEqual_StrStr_ReturnValue) == 0x000208, "Member 'BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas, CallFunc_CreateInventoryData_InventoryData) == 0x000210, "Member 'BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas::CallFunc_CreateInventoryData_InventoryData' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas, CallFunc_CreateInventoryData_IsSuccess) == 0x0002A8, "Member 'BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas::CallFunc_CreateInventoryData_IsSuccess' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas, CallFunc_IsInventoryStorageNumber_ReturnValue) == 0x0002A9, "Member 'BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas::CallFunc_IsInventoryStorageNumber_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas, K2Node_MakeStruct_SBStorageItemData) == 0x0002B0, "Member 'BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas::K2Node_MakeStruct_SBStorageItemData' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas, CallFunc_Array_Add_ReturnValue) == 0x0002D0, "Member 'BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0002D4, "Member 'BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas, K2Node_Select_Default) == 0x0002D8, "Member 'BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas, K2Node_Select_Default_1) == 0x0002E0, "Member 'BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas, CallFunc_QueryAddItem_ReturnValue) == 0x0002E8, "Member 'BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas::CallFunc_QueryAddItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0002E9, "Member 'BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");

// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.CheckIfTacticalSkillIsActive
// 0x0058 (0x0058 - 0x0000)
struct BattleCordeEditForBattleSet_C_CheckIfTacticalSkillIsActive final
{
public:
	bool                                          OutIsActive;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58F1[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<ESkillActionPosition>                  LocalTacticalSkillSAPS;                            // 0x0008(0x0010)(Edit, BlueprintVisible)
	class ASBPlayerCharacter*                     LocalSBPlayerCharacter;                            // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESkillActionPosition                          CallFunc_Array_Get_Item;                           // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_58F2[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58F3[0x2];                                     // 0x0032(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<ESkillActionPosition>                  K2Node_MakeArray_Array;                            // 0x0038(0x0010)(ReferenceParm)
	bool                                          CallFunc_IsSkillActive_ReturnValue;                // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58F4[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleCordeEditForBattleSet_C_CheckIfTacticalSkillIsActive) == 0x000008, "Wrong alignment on BattleCordeEditForBattleSet_C_CheckIfTacticalSkillIsActive");
static_assert(sizeof(BattleCordeEditForBattleSet_C_CheckIfTacticalSkillIsActive) == 0x000058, "Wrong size on BattleCordeEditForBattleSet_C_CheckIfTacticalSkillIsActive");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckIfTacticalSkillIsActive, OutIsActive) == 0x000000, "Member 'BattleCordeEditForBattleSet_C_CheckIfTacticalSkillIsActive::OutIsActive' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckIfTacticalSkillIsActive, LocalTacticalSkillSAPS) == 0x000008, "Member 'BattleCordeEditForBattleSet_C_CheckIfTacticalSkillIsActive::LocalTacticalSkillSAPS' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckIfTacticalSkillIsActive, LocalSBPlayerCharacter) == 0x000018, "Member 'BattleCordeEditForBattleSet_C_CheckIfTacticalSkillIsActive::LocalSBPlayerCharacter' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckIfTacticalSkillIsActive, Temp_int_Array_Index_Variable) == 0x000020, "Member 'BattleCordeEditForBattleSet_C_CheckIfTacticalSkillIsActive::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckIfTacticalSkillIsActive, CallFunc_Array_Get_Item) == 0x000024, "Member 'BattleCordeEditForBattleSet_C_CheckIfTacticalSkillIsActive::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckIfTacticalSkillIsActive, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'BattleCordeEditForBattleSet_C_CheckIfTacticalSkillIsActive::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckIfTacticalSkillIsActive, Temp_int_Loop_Counter_Variable) == 0x00002C, "Member 'BattleCordeEditForBattleSet_C_CheckIfTacticalSkillIsActive::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckIfTacticalSkillIsActive, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'BattleCordeEditForBattleSet_C_CheckIfTacticalSkillIsActive::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckIfTacticalSkillIsActive, CallFunc_Less_IntInt_ReturnValue) == 0x000031, "Member 'BattleCordeEditForBattleSet_C_CheckIfTacticalSkillIsActive::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckIfTacticalSkillIsActive, CallFunc_Add_IntInt_ReturnValue) == 0x000034, "Member 'BattleCordeEditForBattleSet_C_CheckIfTacticalSkillIsActive::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckIfTacticalSkillIsActive, K2Node_MakeArray_Array) == 0x000038, "Member 'BattleCordeEditForBattleSet_C_CheckIfTacticalSkillIsActive::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckIfTacticalSkillIsActive, CallFunc_IsSkillActive_ReturnValue) == 0x000048, "Member 'BattleCordeEditForBattleSet_C_CheckIfTacticalSkillIsActive::CallFunc_IsSkillActive_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_CheckIfTacticalSkillIsActive, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000050, "Member 'BattleCordeEditForBattleSet_C_CheckIfTacticalSkillIsActive::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");

// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ExtractCordeEquipItemsInEquipmentBag
// 0x0250 (0x0250 - 0x0000)
struct BattleCordeEditForBattleSet_C_ExtractCordeEquipItemsInEquipmentBag final
{
public:
	TArray<struct FSBPlayerPresetEquipItem>       InCordeEquipItemList;                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FSBPlayerPresetEquipItem>       OutExtractedCordeEquipItems;                       // 0x0010(0x0010)(Parm, OutParm)
	bool                                          LocalIsExist;                                      // 0x0020(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58F5[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 LocalUniqueId;                                     // 0x0028(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                LocalEquipmentBag;                                 // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBPlayerPresetEquipItem               LocalEquipItem;                                    // 0x0040(0x0028)(Edit, BlueprintVisible)
	TArray<struct FSBPlayerPresetEquipItem>       LocalExtractedEquipItemList;                       // 0x0068(0x0010)(Edit, BlueprintVisible)
	TArray<struct FSBPlayerPresetEquipItem>       LocalRawEquipItemList;                             // 0x0078(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58F6[0x3];                                     // 0x0095(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlayerPresetEquipItem               K2Node_MakeStruct_SBPlayerPresetEquipItem;         // 0x0098(0x0028)()
	class USBOwnItemListContainer*                CallFunc_GetEquipmentBag_ReturnValue;              // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist;         // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58F7[0x7];                                     // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue;       // 0x00D0(0x0118)(ConstParm)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x01E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58F8[0x6];                                     // 0x01EA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlayerPresetEquipItem               K2Node_Select_Default;                             // 0x01F0(0x0028)(ConstParm)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0218(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x021C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBPlayerPresetEquipItem               CallFunc_Array_Get_Item;                           // 0x0220(0x0028)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0248(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x024C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleCordeEditForBattleSet_C_ExtractCordeEquipItemsInEquipmentBag) == 0x000008, "Wrong alignment on BattleCordeEditForBattleSet_C_ExtractCordeEquipItemsInEquipmentBag");
static_assert(sizeof(BattleCordeEditForBattleSet_C_ExtractCordeEquipItemsInEquipmentBag) == 0x000250, "Wrong size on BattleCordeEditForBattleSet_C_ExtractCordeEquipItemsInEquipmentBag");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExtractCordeEquipItemsInEquipmentBag, InCordeEquipItemList) == 0x000000, "Member 'BattleCordeEditForBattleSet_C_ExtractCordeEquipItemsInEquipmentBag::InCordeEquipItemList' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExtractCordeEquipItemsInEquipmentBag, OutExtractedCordeEquipItems) == 0x000010, "Member 'BattleCordeEditForBattleSet_C_ExtractCordeEquipItemsInEquipmentBag::OutExtractedCordeEquipItems' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExtractCordeEquipItemsInEquipmentBag, LocalIsExist) == 0x000020, "Member 'BattleCordeEditForBattleSet_C_ExtractCordeEquipItemsInEquipmentBag::LocalIsExist' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExtractCordeEquipItemsInEquipmentBag, LocalUniqueId) == 0x000028, "Member 'BattleCordeEditForBattleSet_C_ExtractCordeEquipItemsInEquipmentBag::LocalUniqueId' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExtractCordeEquipItemsInEquipmentBag, LocalEquipmentBag) == 0x000038, "Member 'BattleCordeEditForBattleSet_C_ExtractCordeEquipItemsInEquipmentBag::LocalEquipmentBag' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExtractCordeEquipItemsInEquipmentBag, LocalEquipItem) == 0x000040, "Member 'BattleCordeEditForBattleSet_C_ExtractCordeEquipItemsInEquipmentBag::LocalEquipItem' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExtractCordeEquipItemsInEquipmentBag, LocalExtractedEquipItemList) == 0x000068, "Member 'BattleCordeEditForBattleSet_C_ExtractCordeEquipItemsInEquipmentBag::LocalExtractedEquipItemList' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExtractCordeEquipItemsInEquipmentBag, LocalRawEquipItemList) == 0x000078, "Member 'BattleCordeEditForBattleSet_C_ExtractCordeEquipItemsInEquipmentBag::LocalRawEquipItemList' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExtractCordeEquipItemsInEquipmentBag, Temp_int_Loop_Counter_Variable) == 0x000088, "Member 'BattleCordeEditForBattleSet_C_ExtractCordeEquipItemsInEquipmentBag::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExtractCordeEquipItemsInEquipmentBag, CallFunc_Add_IntInt_ReturnValue) == 0x00008C, "Member 'BattleCordeEditForBattleSet_C_ExtractCordeEquipItemsInEquipmentBag::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExtractCordeEquipItemsInEquipmentBag, Temp_int_Array_Index_Variable) == 0x000090, "Member 'BattleCordeEditForBattleSet_C_ExtractCordeEquipItemsInEquipmentBag::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExtractCordeEquipItemsInEquipmentBag, CallFunc_NotEqual_StrStr_ReturnValue) == 0x000094, "Member 'BattleCordeEditForBattleSet_C_ExtractCordeEquipItemsInEquipmentBag::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExtractCordeEquipItemsInEquipmentBag, K2Node_MakeStruct_SBPlayerPresetEquipItem) == 0x000098, "Member 'BattleCordeEditForBattleSet_C_ExtractCordeEquipItemsInEquipmentBag::K2Node_MakeStruct_SBPlayerPresetEquipItem' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExtractCordeEquipItemsInEquipmentBag, CallFunc_GetEquipmentBag_ReturnValue) == 0x0000C0, "Member 'BattleCordeEditForBattleSet_C_ExtractCordeEquipItemsInEquipmentBag::CallFunc_GetEquipmentBag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExtractCordeEquipItemsInEquipmentBag, CallFunc_BP_FindItem_ByUniqueId_bOutExist) == 0x0000C8, "Member 'BattleCordeEditForBattleSet_C_ExtractCordeEquipItemsInEquipmentBag::CallFunc_BP_FindItem_ByUniqueId_bOutExist' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExtractCordeEquipItemsInEquipmentBag, CallFunc_BP_FindItem_ByUniqueId_ReturnValue) == 0x0000D0, "Member 'BattleCordeEditForBattleSet_C_ExtractCordeEquipItemsInEquipmentBag::CallFunc_BP_FindItem_ByUniqueId_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExtractCordeEquipItemsInEquipmentBag, CallFunc_IsValid_ReturnValue) == 0x0001E8, "Member 'BattleCordeEditForBattleSet_C_ExtractCordeEquipItemsInEquipmentBag::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExtractCordeEquipItemsInEquipmentBag, Temp_bool_Variable) == 0x0001E9, "Member 'BattleCordeEditForBattleSet_C_ExtractCordeEquipItemsInEquipmentBag::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExtractCordeEquipItemsInEquipmentBag, K2Node_Select_Default) == 0x0001F0, "Member 'BattleCordeEditForBattleSet_C_ExtractCordeEquipItemsInEquipmentBag::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExtractCordeEquipItemsInEquipmentBag, CallFunc_Array_Add_ReturnValue) == 0x000218, "Member 'BattleCordeEditForBattleSet_C_ExtractCordeEquipItemsInEquipmentBag::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExtractCordeEquipItemsInEquipmentBag, CallFunc_Array_Add_ReturnValue_1) == 0x00021C, "Member 'BattleCordeEditForBattleSet_C_ExtractCordeEquipItemsInEquipmentBag::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExtractCordeEquipItemsInEquipmentBag, CallFunc_Array_Get_Item) == 0x000220, "Member 'BattleCordeEditForBattleSet_C_ExtractCordeEquipItemsInEquipmentBag::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExtractCordeEquipItemsInEquipmentBag, CallFunc_Array_Length_ReturnValue) == 0x000248, "Member 'BattleCordeEditForBattleSet_C_ExtractCordeEquipItemsInEquipmentBag::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_ExtractCordeEquipItemsInEquipmentBag, CallFunc_Less_IntInt_ReturnValue) == 0x00024C, "Member 'BattleCordeEditForBattleSet_C_ExtractCordeEquipItemsInEquipmentBag::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.Update Register Corde Btn Text
// 0x0014 (0x0014 - 0x0000)
struct BattleCordeEditForBattleSet_C_Update_Register_Corde_Btn_Text final
{
public:
	bool                                          bInIsOverwriteMode;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58F9[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58FA[0x2];                                     // 0x000E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleCordeEditForBattleSet_C_Update_Register_Corde_Btn_Text) == 0x000004, "Wrong alignment on BattleCordeEditForBattleSet_C_Update_Register_Corde_Btn_Text");
static_assert(sizeof(BattleCordeEditForBattleSet_C_Update_Register_Corde_Btn_Text) == 0x000014, "Wrong size on BattleCordeEditForBattleSet_C_Update_Register_Corde_Btn_Text");
static_assert(offsetof(BattleCordeEditForBattleSet_C_Update_Register_Corde_Btn_Text, bInIsOverwriteMode) == 0x000000, "Member 'BattleCordeEditForBattleSet_C_Update_Register_Corde_Btn_Text::bInIsOverwriteMode' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_Update_Register_Corde_Btn_Text, Temp_int_Variable) == 0x000004, "Member 'BattleCordeEditForBattleSet_C_Update_Register_Corde_Btn_Text::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_Update_Register_Corde_Btn_Text, Temp_int_Variable_1) == 0x000008, "Member 'BattleCordeEditForBattleSet_C_Update_Register_Corde_Btn_Text::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_Update_Register_Corde_Btn_Text, Temp_bool_Variable) == 0x00000C, "Member 'BattleCordeEditForBattleSet_C_Update_Register_Corde_Btn_Text::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_Update_Register_Corde_Btn_Text, CallFunc_IsValid_ReturnValue) == 0x00000D, "Member 'BattleCordeEditForBattleSet_C_Update_Register_Corde_Btn_Text::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeEditForBattleSet_C_Update_Register_Corde_Btn_Text, K2Node_Select_Default) == 0x000010, "Member 'BattleCordeEditForBattleSet_C_Update_Register_Corde_Btn_Text::K2Node_Select_Default' has a wrong offset!");

}

