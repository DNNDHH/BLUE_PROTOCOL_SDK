#pragma once

 

// Package: PlayerPartyLevelInfo

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.ExecuteUbergraph_PlayerPartyLevelInfo
// 0x00B0 (0x00B0 - 0x0000)
struct PlayerPartyLevelInfo_C_ExecuteUbergraph_PlayerPartyLevelInfo final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_70D7[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCaptureImageMatching_C*                K2Node_CustomEvent_CaptureImage;                   // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetFaceImageURL_ReturnValue;              // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBDownloadImageImpl*                   CallFunc_DownloadImage_ReturnValue;                // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_DefaultGameInstance_C*              K2Node_DynamicCast_AsBP_Default_Game_Instance;     // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_70D8[0x6];                                     // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_DefaultGameInstance_C*              K2Node_DynamicCast_AsBP_Default_Game_Instance_1;   // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bWasSuccessful;                 // 0x0059(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_70D9[0x2];                                     // 0x005A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_RetCode;                        // 0x005C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FBattleMemberLevelSyncInfo>     K2Node_CustomEvent_BattleMemberLevelSyncInfos;     // 0x0060(0x0010)(ConstParm, ReferenceParm)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerConcernedList*                 CallFunc_GetConcernedList_ReturnValue;             // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool bWasSuccessful, int32 RetCode, TArray<struct FBattleMemberLevelSyncInfo>& BattleMemberLevelSyncInfos)> K2Node_CreateDelegate_OutputDelegate;              // 0x0080(0x0010)(ZeroConstructor, NoDestructor)
	class USBPartyGameState*                      CallFunc_GetCurrentParty_OutPartyState;            // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCurrentParty_ReturnValue;              // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_70DA[0x2];                                     // 0x009A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x009C(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(PlayerPartyLevelInfo_C_ExecuteUbergraph_PlayerPartyLevelInfo) == 0x000008, "Wrong alignment on PlayerPartyLevelInfo_C_ExecuteUbergraph_PlayerPartyLevelInfo");
static_assert(sizeof(PlayerPartyLevelInfo_C_ExecuteUbergraph_PlayerPartyLevelInfo) == 0x0000B0, "Wrong size on PlayerPartyLevelInfo_C_ExecuteUbergraph_PlayerPartyLevelInfo");
static_assert(offsetof(PlayerPartyLevelInfo_C_ExecuteUbergraph_PlayerPartyLevelInfo, EntryPoint) == 0x000000, "Member 'PlayerPartyLevelInfo_C_ExecuteUbergraph_PlayerPartyLevelInfo::EntryPoint' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_ExecuteUbergraph_PlayerPartyLevelInfo, K2Node_CustomEvent_CaptureImage) == 0x000008, "Member 'PlayerPartyLevelInfo_C_ExecuteUbergraph_PlayerPartyLevelInfo::K2Node_CustomEvent_CaptureImage' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_ExecuteUbergraph_PlayerPartyLevelInfo, CallFunc_GetCharacterId_ReturnValue) == 0x000010, "Member 'PlayerPartyLevelInfo_C_ExecuteUbergraph_PlayerPartyLevelInfo::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_ExecuteUbergraph_PlayerPartyLevelInfo, CallFunc_GetFaceImageURL_ReturnValue) == 0x000020, "Member 'PlayerPartyLevelInfo_C_ExecuteUbergraph_PlayerPartyLevelInfo::CallFunc_GetFaceImageURL_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_ExecuteUbergraph_PlayerPartyLevelInfo, CallFunc_GetGameInstance_ReturnValue) == 0x000030, "Member 'PlayerPartyLevelInfo_C_ExecuteUbergraph_PlayerPartyLevelInfo::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_ExecuteUbergraph_PlayerPartyLevelInfo, CallFunc_DownloadImage_ReturnValue) == 0x000038, "Member 'PlayerPartyLevelInfo_C_ExecuteUbergraph_PlayerPartyLevelInfo::CallFunc_DownloadImage_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_ExecuteUbergraph_PlayerPartyLevelInfo, K2Node_DynamicCast_AsBP_Default_Game_Instance) == 0x000040, "Member 'PlayerPartyLevelInfo_C_ExecuteUbergraph_PlayerPartyLevelInfo::K2Node_DynamicCast_AsBP_Default_Game_Instance' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_ExecuteUbergraph_PlayerPartyLevelInfo, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'PlayerPartyLevelInfo_C_ExecuteUbergraph_PlayerPartyLevelInfo::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_ExecuteUbergraph_PlayerPartyLevelInfo, CallFunc_IsValid_ReturnValue) == 0x000049, "Member 'PlayerPartyLevelInfo_C_ExecuteUbergraph_PlayerPartyLevelInfo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_ExecuteUbergraph_PlayerPartyLevelInfo, K2Node_DynamicCast_AsBP_Default_Game_Instance_1) == 0x000050, "Member 'PlayerPartyLevelInfo_C_ExecuteUbergraph_PlayerPartyLevelInfo::K2Node_DynamicCast_AsBP_Default_Game_Instance_1' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_ExecuteUbergraph_PlayerPartyLevelInfo, K2Node_DynamicCast_bSuccess_1) == 0x000058, "Member 'PlayerPartyLevelInfo_C_ExecuteUbergraph_PlayerPartyLevelInfo::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_ExecuteUbergraph_PlayerPartyLevelInfo, K2Node_CustomEvent_bWasSuccessful) == 0x000059, "Member 'PlayerPartyLevelInfo_C_ExecuteUbergraph_PlayerPartyLevelInfo::K2Node_CustomEvent_bWasSuccessful' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_ExecuteUbergraph_PlayerPartyLevelInfo, K2Node_CustomEvent_RetCode) == 0x00005C, "Member 'PlayerPartyLevelInfo_C_ExecuteUbergraph_PlayerPartyLevelInfo::K2Node_CustomEvent_RetCode' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_ExecuteUbergraph_PlayerPartyLevelInfo, K2Node_CustomEvent_BattleMemberLevelSyncInfos) == 0x000060, "Member 'PlayerPartyLevelInfo_C_ExecuteUbergraph_PlayerPartyLevelInfo::K2Node_CustomEvent_BattleMemberLevelSyncInfos' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_ExecuteUbergraph_PlayerPartyLevelInfo, CallFunc_GetSBPlayerController_ReturnValue) == 0x000070, "Member 'PlayerPartyLevelInfo_C_ExecuteUbergraph_PlayerPartyLevelInfo::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_ExecuteUbergraph_PlayerPartyLevelInfo, CallFunc_GetConcernedList_ReturnValue) == 0x000078, "Member 'PlayerPartyLevelInfo_C_ExecuteUbergraph_PlayerPartyLevelInfo::CallFunc_GetConcernedList_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_ExecuteUbergraph_PlayerPartyLevelInfo, K2Node_CreateDelegate_OutputDelegate) == 0x000080, "Member 'PlayerPartyLevelInfo_C_ExecuteUbergraph_PlayerPartyLevelInfo::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_ExecuteUbergraph_PlayerPartyLevelInfo, CallFunc_GetCurrentParty_OutPartyState) == 0x000090, "Member 'PlayerPartyLevelInfo_C_ExecuteUbergraph_PlayerPartyLevelInfo::CallFunc_GetCurrentParty_OutPartyState' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_ExecuteUbergraph_PlayerPartyLevelInfo, CallFunc_GetCurrentParty_ReturnValue) == 0x000098, "Member 'PlayerPartyLevelInfo_C_ExecuteUbergraph_PlayerPartyLevelInfo::CallFunc_GetCurrentParty_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_ExecuteUbergraph_PlayerPartyLevelInfo, CallFunc_Not_PreBool_ReturnValue) == 0x000099, "Member 'PlayerPartyLevelInfo_C_ExecuteUbergraph_PlayerPartyLevelInfo::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_ExecuteUbergraph_PlayerPartyLevelInfo, K2Node_CreateDelegate_OutputDelegate_1) == 0x00009C, "Member 'PlayerPartyLevelInfo_C_ExecuteUbergraph_PlayerPartyLevelInfo::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");

// Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.CompleteEvent_OnGetEquipItemsForCharactersDelegate
// 0x0018 (0x0018 - 0x0000)
struct PlayerPartyLevelInfo_C_CompleteEvent_OnGetEquipItemsForCharactersDelegate final
{
public:
	bool                                          bWasSuccessful;                                    // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_70DB[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         RetCode;                                           // 0x0004(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FBattleMemberLevelSyncInfo>     BattleMemberLevelSyncInfos;                        // 0x0008(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PlayerPartyLevelInfo_C_CompleteEvent_OnGetEquipItemsForCharactersDelegate) == 0x000008, "Wrong alignment on PlayerPartyLevelInfo_C_CompleteEvent_OnGetEquipItemsForCharactersDelegate");
static_assert(sizeof(PlayerPartyLevelInfo_C_CompleteEvent_OnGetEquipItemsForCharactersDelegate) == 0x000018, "Wrong size on PlayerPartyLevelInfo_C_CompleteEvent_OnGetEquipItemsForCharactersDelegate");
static_assert(offsetof(PlayerPartyLevelInfo_C_CompleteEvent_OnGetEquipItemsForCharactersDelegate, bWasSuccessful) == 0x000000, "Member 'PlayerPartyLevelInfo_C_CompleteEvent_OnGetEquipItemsForCharactersDelegate::bWasSuccessful' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_CompleteEvent_OnGetEquipItemsForCharactersDelegate, RetCode) == 0x000004, "Member 'PlayerPartyLevelInfo_C_CompleteEvent_OnGetEquipItemsForCharactersDelegate::RetCode' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_CompleteEvent_OnGetEquipItemsForCharactersDelegate, BattleMemberLevelSyncInfos) == 0x000008, "Member 'PlayerPartyLevelInfo_C_CompleteEvent_OnGetEquipItemsForCharactersDelegate::BattleMemberLevelSyncInfos' has a wrong offset!");

// Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.DownloadAndSetFaceImage
// 0x0008 (0x0008 - 0x0000)
struct PlayerPartyLevelInfo_C_DownloadAndSetFaceImage final
{
public:
	class UCaptureImageMatching_C*                CaptureImage;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerPartyLevelInfo_C_DownloadAndSetFaceImage) == 0x000008, "Wrong alignment on PlayerPartyLevelInfo_C_DownloadAndSetFaceImage");
static_assert(sizeof(PlayerPartyLevelInfo_C_DownloadAndSetFaceImage) == 0x000008, "Wrong size on PlayerPartyLevelInfo_C_DownloadAndSetFaceImage");
static_assert(offsetof(PlayerPartyLevelInfo_C_DownloadAndSetFaceImage, CaptureImage) == 0x000000, "Member 'PlayerPartyLevelInfo_C_DownloadAndSetFaceImage::CaptureImage' has a wrong offset!");

// Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.Initialize
// 0x0010 (0x0010 - 0x0000)
struct PlayerPartyLevelInfo_C_Initialize final
{
public:
	class USBPartyGameState*                      CallFunc_GetCurrentParty_OutPartyState;            // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCurrentParty_ReturnValue;              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerPartyLevelInfo_C_Initialize) == 0x000008, "Wrong alignment on PlayerPartyLevelInfo_C_Initialize");
static_assert(sizeof(PlayerPartyLevelInfo_C_Initialize) == 0x000010, "Wrong size on PlayerPartyLevelInfo_C_Initialize");
static_assert(offsetof(PlayerPartyLevelInfo_C_Initialize, CallFunc_GetCurrentParty_OutPartyState) == 0x000000, "Member 'PlayerPartyLevelInfo_C_Initialize::CallFunc_GetCurrentParty_OutPartyState' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_Initialize, CallFunc_GetCurrentParty_ReturnValue) == 0x000008, "Member 'PlayerPartyLevelInfo_C_Initialize::CallFunc_GetCurrentParty_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_Initialize, CallFunc_Not_PreBool_ReturnValue) == 0x000009, "Member 'PlayerPartyLevelInfo_C_Initialize::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.InitializeParty
// 0x01B0 (0x01B0 - 0x0000)
struct PlayerPartyLevelInfo_C_InitializeParty final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_70DC[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USBPartyMemberState*>            Members;                                           // 0x0008(0x0010)(Edit, BlueprintVisible)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_70DD[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPartyMemberState*                    CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetTotalPower_ReturnValue;                // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_70DE[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBOnlinePlayerState>  CallFunc_GetCharacterId_self_CastInput;            // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0058(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0098(0x0018)()
	bool                                          CallFunc_IsLocalPlayer_ReturnValue;                // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_70DF[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x00B8(0x0040)(HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_70E0[0x7];                                     // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0100(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0110(0x0018)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_70E1[0x7];                                     // 0x0129(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0130(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UVerticalBox*>                   K2Node_MakeArray_Array_1;                          // 0x0148(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UVerticalBox*                           CallFunc_Array_Get_Item_1;                         // 0x0158(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UClassIconL_C*>                  K2Node_MakeArray_Array_2;                          // 0x0160(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UClassIconL_C*                          CallFunc_Array_Get_Item_2;                         // 0x0170(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPartyGameState*                      CallFunc_GetCurrentParty_OutPartyState;            // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCurrentParty_ReturnValue;              // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_70E2[0x7];                                     // 0x0181(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USBRuntimeTextBlock*>            K2Node_MakeArray_Array_3;                          // 0x0188(0x0010)(ReferenceParm, ContainsInstancedReference)
	class USBRuntimeTextBlock*                    CallFunc_Array_Get_Item_3;                         // 0x0198(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USBPartyMemberState*>            CallFunc_GetJoinedPartyMembers_PartyMembers;       // 0x01A0(0x0010)(ReferenceParm)
};
static_assert(alignof(PlayerPartyLevelInfo_C_InitializeParty) == 0x000008, "Wrong alignment on PlayerPartyLevelInfo_C_InitializeParty");
static_assert(sizeof(PlayerPartyLevelInfo_C_InitializeParty) == 0x0001B0, "Wrong size on PlayerPartyLevelInfo_C_InitializeParty");
static_assert(offsetof(PlayerPartyLevelInfo_C_InitializeParty, Param_Index) == 0x000000, "Member 'PlayerPartyLevelInfo_C_InitializeParty::Param_Index' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_InitializeParty, Members) == 0x000008, "Member 'PlayerPartyLevelInfo_C_InitializeParty::Members' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_InitializeParty, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'PlayerPartyLevelInfo_C_InitializeParty::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_InitializeParty, Temp_int_Array_Index_Variable) == 0x00001C, "Member 'PlayerPartyLevelInfo_C_InitializeParty::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_InitializeParty, Temp_int_Loop_Counter_Variable) == 0x000020, "Member 'PlayerPartyLevelInfo_C_InitializeParty::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_InitializeParty, CallFunc_Array_Get_Item) == 0x000028, "Member 'PlayerPartyLevelInfo_C_InitializeParty::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_InitializeParty, CallFunc_GetTotalPower_ReturnValue) == 0x000030, "Member 'PlayerPartyLevelInfo_C_InitializeParty::CallFunc_GetTotalPower_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_InitializeParty, CallFunc_GetCharacterId_self_CastInput) == 0x000038, "Member 'PlayerPartyLevelInfo_C_InitializeParty::CallFunc_GetCharacterId_self_CastInput' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_InitializeParty, CallFunc_GetCharacterId_ReturnValue) == 0x000048, "Member 'PlayerPartyLevelInfo_C_InitializeParty::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_InitializeParty, K2Node_MakeStruct_FormatArgumentData) == 0x000058, "Member 'PlayerPartyLevelInfo_C_InitializeParty::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_InitializeParty, CallFunc_Conv_StringToText_ReturnValue) == 0x000098, "Member 'PlayerPartyLevelInfo_C_InitializeParty::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_InitializeParty, CallFunc_IsLocalPlayer_ReturnValue) == 0x0000B0, "Member 'PlayerPartyLevelInfo_C_InitializeParty::CallFunc_IsLocalPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_InitializeParty, K2Node_MakeStruct_FormatArgumentData_1) == 0x0000B8, "Member 'PlayerPartyLevelInfo_C_InitializeParty::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_InitializeParty, CallFunc_Not_PreBool_ReturnValue) == 0x0000F8, "Member 'PlayerPartyLevelInfo_C_InitializeParty::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_InitializeParty, K2Node_MakeArray_Array) == 0x000100, "Member 'PlayerPartyLevelInfo_C_InitializeParty::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_InitializeParty, CallFunc_Format_ReturnValue) == 0x000110, "Member 'PlayerPartyLevelInfo_C_InitializeParty::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_InitializeParty, CallFunc_Less_IntInt_ReturnValue) == 0x000128, "Member 'PlayerPartyLevelInfo_C_InitializeParty::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_InitializeParty, CallFunc_Conv_TextToString_ReturnValue) == 0x000130, "Member 'PlayerPartyLevelInfo_C_InitializeParty::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_InitializeParty, CallFunc_Add_IntInt_ReturnValue) == 0x000140, "Member 'PlayerPartyLevelInfo_C_InitializeParty::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_InitializeParty, CallFunc_Add_IntInt_ReturnValue_1) == 0x000144, "Member 'PlayerPartyLevelInfo_C_InitializeParty::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_InitializeParty, K2Node_MakeArray_Array_1) == 0x000148, "Member 'PlayerPartyLevelInfo_C_InitializeParty::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_InitializeParty, CallFunc_Array_Get_Item_1) == 0x000158, "Member 'PlayerPartyLevelInfo_C_InitializeParty::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_InitializeParty, K2Node_MakeArray_Array_2) == 0x000160, "Member 'PlayerPartyLevelInfo_C_InitializeParty::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_InitializeParty, CallFunc_Array_Get_Item_2) == 0x000170, "Member 'PlayerPartyLevelInfo_C_InitializeParty::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_InitializeParty, CallFunc_GetCurrentParty_OutPartyState) == 0x000178, "Member 'PlayerPartyLevelInfo_C_InitializeParty::CallFunc_GetCurrentParty_OutPartyState' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_InitializeParty, CallFunc_GetCurrentParty_ReturnValue) == 0x000180, "Member 'PlayerPartyLevelInfo_C_InitializeParty::CallFunc_GetCurrentParty_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_InitializeParty, K2Node_MakeArray_Array_3) == 0x000188, "Member 'PlayerPartyLevelInfo_C_InitializeParty::K2Node_MakeArray_Array_3' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_InitializeParty, CallFunc_Array_Get_Item_3) == 0x000198, "Member 'PlayerPartyLevelInfo_C_InitializeParty::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_InitializeParty, CallFunc_GetJoinedPartyMembers_PartyMembers) == 0x0001A0, "Member 'PlayerPartyLevelInfo_C_InitializeParty::CallFunc_GetJoinedPartyMembers_PartyMembers' has a wrong offset!");

// Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.InitializeCommon
// 0x0070 (0x0070 - 0x0000)
struct PlayerPartyLevelInfo_C_InitializeCommon final
{
public:
	int32                                         AdventurerRank;                                    // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         BattleScore;                                       // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_70E3[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0010(0x0018)()
	class USBPartyGameState*                      CallFunc_GetCurrentParty_OutPartyState;            // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCurrentParty_ReturnValue;              // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_70E4[0x2];                                     // 0x0032(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetAdventurerRank_ReturnValue;            // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_70E5[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0040(0x0018)()
	class FText                                   K2Node_Select_Default;                             // 0x0058(0x0018)()
};
static_assert(alignof(PlayerPartyLevelInfo_C_InitializeCommon) == 0x000008, "Wrong alignment on PlayerPartyLevelInfo_C_InitializeCommon");
static_assert(sizeof(PlayerPartyLevelInfo_C_InitializeCommon) == 0x000070, "Wrong size on PlayerPartyLevelInfo_C_InitializeCommon");
static_assert(offsetof(PlayerPartyLevelInfo_C_InitializeCommon, AdventurerRank) == 0x000000, "Member 'PlayerPartyLevelInfo_C_InitializeCommon::AdventurerRank' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_InitializeCommon, BattleScore) == 0x000004, "Member 'PlayerPartyLevelInfo_C_InitializeCommon::BattleScore' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_InitializeCommon, Temp_bool_Variable) == 0x000008, "Member 'PlayerPartyLevelInfo_C_InitializeCommon::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_InitializeCommon, Temp_text_Variable) == 0x000010, "Member 'PlayerPartyLevelInfo_C_InitializeCommon::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_InitializeCommon, CallFunc_GetCurrentParty_OutPartyState) == 0x000028, "Member 'PlayerPartyLevelInfo_C_InitializeCommon::CallFunc_GetCurrentParty_OutPartyState' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_InitializeCommon, CallFunc_GetCurrentParty_ReturnValue) == 0x000030, "Member 'PlayerPartyLevelInfo_C_InitializeCommon::CallFunc_GetCurrentParty_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_InitializeCommon, CallFunc_Not_PreBool_ReturnValue) == 0x000031, "Member 'PlayerPartyLevelInfo_C_InitializeCommon::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_InitializeCommon, CallFunc_GetAdventurerRank_ReturnValue) == 0x000034, "Member 'PlayerPartyLevelInfo_C_InitializeCommon::CallFunc_GetAdventurerRank_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_InitializeCommon, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000038, "Member 'PlayerPartyLevelInfo_C_InitializeCommon::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_InitializeCommon, CallFunc_Conv_IntToText_ReturnValue) == 0x000040, "Member 'PlayerPartyLevelInfo_C_InitializeCommon::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_InitializeCommon, K2Node_Select_Default) == 0x000058, "Member 'PlayerPartyLevelInfo_C_InitializeCommon::K2Node_Select_Default' has a wrong offset!");

// Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.InitializeClassInfo
// 0x0068 (0x0068 - 0x0000)
struct PlayerPartyLevelInfo_C_InitializeClassInfo final
{
public:
	int32                                         MemberIndex;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_70E6[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBRuntimeTextBlock*                    RuntimeText;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClassIconL_C*                          ClassIcon;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCaptureImageMatching_C*                CaptureImage;                                      // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  ClassType;                                         // 0x0020(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_70E7[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ClassLevel;                                        // 0x0024(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_70E8[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPartyGameState*                      CallFunc_GetCurrentParty_OutPartyState;            // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCurrentParty_ReturnValue;              // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_70E9[0x6];                                     // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USBPartyMemberState*>            CallFunc_GetJoinedPartyMembers_PartyMembers;       // 0x0040(0x0010)(ReferenceParm)
	class USBPartyMemberState*                    CallFunc_Array_Get_Item;                           // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  CallFunc_GetClassType_ReturnValue;                 // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_70EA[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetClassLevel_ReturnValue;                // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  CallFunc_GetClassType_ReturnValue_1;               // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_70EB[0x3];                                     // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetClassLevel_ReturnValue_1;              // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerPartyLevelInfo_C_InitializeClassInfo) == 0x000008, "Wrong alignment on PlayerPartyLevelInfo_C_InitializeClassInfo");
static_assert(sizeof(PlayerPartyLevelInfo_C_InitializeClassInfo) == 0x000068, "Wrong size on PlayerPartyLevelInfo_C_InitializeClassInfo");
static_assert(offsetof(PlayerPartyLevelInfo_C_InitializeClassInfo, MemberIndex) == 0x000000, "Member 'PlayerPartyLevelInfo_C_InitializeClassInfo::MemberIndex' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_InitializeClassInfo, RuntimeText) == 0x000008, "Member 'PlayerPartyLevelInfo_C_InitializeClassInfo::RuntimeText' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_InitializeClassInfo, ClassIcon) == 0x000010, "Member 'PlayerPartyLevelInfo_C_InitializeClassInfo::ClassIcon' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_InitializeClassInfo, CaptureImage) == 0x000018, "Member 'PlayerPartyLevelInfo_C_InitializeClassInfo::CaptureImage' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_InitializeClassInfo, ClassType) == 0x000020, "Member 'PlayerPartyLevelInfo_C_InitializeClassInfo::ClassType' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_InitializeClassInfo, ClassLevel) == 0x000024, "Member 'PlayerPartyLevelInfo_C_InitializeClassInfo::ClassLevel' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_InitializeClassInfo, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000028, "Member 'PlayerPartyLevelInfo_C_InitializeClassInfo::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_InitializeClassInfo, CallFunc_GetCurrentParty_OutPartyState) == 0x000030, "Member 'PlayerPartyLevelInfo_C_InitializeClassInfo::CallFunc_GetCurrentParty_OutPartyState' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_InitializeClassInfo, CallFunc_GetCurrentParty_ReturnValue) == 0x000038, "Member 'PlayerPartyLevelInfo_C_InitializeClassInfo::CallFunc_GetCurrentParty_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_InitializeClassInfo, CallFunc_IsValid_ReturnValue) == 0x000039, "Member 'PlayerPartyLevelInfo_C_InitializeClassInfo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_InitializeClassInfo, CallFunc_GetJoinedPartyMembers_PartyMembers) == 0x000040, "Member 'PlayerPartyLevelInfo_C_InitializeClassInfo::CallFunc_GetJoinedPartyMembers_PartyMembers' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_InitializeClassInfo, CallFunc_Array_Get_Item) == 0x000050, "Member 'PlayerPartyLevelInfo_C_InitializeClassInfo::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_InitializeClassInfo, CallFunc_GetClassType_ReturnValue) == 0x000058, "Member 'PlayerPartyLevelInfo_C_InitializeClassInfo::CallFunc_GetClassType_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_InitializeClassInfo, CallFunc_GetClassLevel_ReturnValue) == 0x00005C, "Member 'PlayerPartyLevelInfo_C_InitializeClassInfo::CallFunc_GetClassLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_InitializeClassInfo, CallFunc_GetClassType_ReturnValue_1) == 0x000060, "Member 'PlayerPartyLevelInfo_C_InitializeClassInfo::CallFunc_GetClassType_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_InitializeClassInfo, CallFunc_GetClassLevel_ReturnValue_1) == 0x000064, "Member 'PlayerPartyLevelInfo_C_InitializeClassInfo::CallFunc_GetClassLevel_ReturnValue_1' has a wrong offset!");

// Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.SetLevelSyncValue
// 0x0298 (0x0298 - 0x0000)
struct PlayerPartyLevelInfo_C_SetLevelSyncValue final
{
public:
	int32                                         LevelSyncValue;                                    // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBStackBEnableType                           StackBEnableType;                                  // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_70EC[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMapInfo                             MapInfo;                                           // 0x0008(0x01E0)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          bNeedCorrection;                                   // 0x01E8(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_70ED[0x7];                                     // 0x01E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPartyGameState*                      CallFunc_GetCurrentParty_OutPartyState;            // 0x01F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCurrentParty_ReturnValue;              // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_70EE[0x7];                                     // 0x01F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_BoolToText_ReturnValue;              // 0x0200(0x0018)()
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_70EF[0x7];                                     // 0x0219(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0220(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0260(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0270(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0288(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerPartyLevelInfo_C_SetLevelSyncValue) == 0x000008, "Wrong alignment on PlayerPartyLevelInfo_C_SetLevelSyncValue");
static_assert(sizeof(PlayerPartyLevelInfo_C_SetLevelSyncValue) == 0x000298, "Wrong size on PlayerPartyLevelInfo_C_SetLevelSyncValue");
static_assert(offsetof(PlayerPartyLevelInfo_C_SetLevelSyncValue, LevelSyncValue) == 0x000000, "Member 'PlayerPartyLevelInfo_C_SetLevelSyncValue::LevelSyncValue' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_SetLevelSyncValue, StackBEnableType) == 0x000004, "Member 'PlayerPartyLevelInfo_C_SetLevelSyncValue::StackBEnableType' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_SetLevelSyncValue, MapInfo) == 0x000008, "Member 'PlayerPartyLevelInfo_C_SetLevelSyncValue::MapInfo' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_SetLevelSyncValue, bNeedCorrection) == 0x0001E8, "Member 'PlayerPartyLevelInfo_C_SetLevelSyncValue::bNeedCorrection' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_SetLevelSyncValue, CallFunc_GetCurrentParty_OutPartyState) == 0x0001F0, "Member 'PlayerPartyLevelInfo_C_SetLevelSyncValue::CallFunc_GetCurrentParty_OutPartyState' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_SetLevelSyncValue, CallFunc_GetCurrentParty_ReturnValue) == 0x0001F8, "Member 'PlayerPartyLevelInfo_C_SetLevelSyncValue::CallFunc_GetCurrentParty_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_SetLevelSyncValue, CallFunc_Conv_BoolToText_ReturnValue) == 0x000200, "Member 'PlayerPartyLevelInfo_C_SetLevelSyncValue::CallFunc_Conv_BoolToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_SetLevelSyncValue, CallFunc_Not_PreBool_ReturnValue) == 0x000218, "Member 'PlayerPartyLevelInfo_C_SetLevelSyncValue::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_SetLevelSyncValue, K2Node_MakeStruct_FormatArgumentData) == 0x000220, "Member 'PlayerPartyLevelInfo_C_SetLevelSyncValue::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_SetLevelSyncValue, K2Node_MakeArray_Array) == 0x000260, "Member 'PlayerPartyLevelInfo_C_SetLevelSyncValue::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_SetLevelSyncValue, CallFunc_Format_ReturnValue) == 0x000270, "Member 'PlayerPartyLevelInfo_C_SetLevelSyncValue::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_SetLevelSyncValue, CallFunc_Conv_TextToString_ReturnValue) == 0x000288, "Member 'PlayerPartyLevelInfo_C_SetLevelSyncValue::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");

// Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.SetLevelSyncValuePlayer
// 0x0004 (0x0004 - 0x0000)
struct PlayerPartyLevelInfo_C_SetLevelSyncValuePlayer final
{
public:
	int32                                         LevelSyncValue;                                    // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerPartyLevelInfo_C_SetLevelSyncValuePlayer) == 0x000004, "Wrong alignment on PlayerPartyLevelInfo_C_SetLevelSyncValuePlayer");
static_assert(sizeof(PlayerPartyLevelInfo_C_SetLevelSyncValuePlayer) == 0x000004, "Wrong size on PlayerPartyLevelInfo_C_SetLevelSyncValuePlayer");
static_assert(offsetof(PlayerPartyLevelInfo_C_SetLevelSyncValuePlayer, LevelSyncValue) == 0x000000, "Member 'PlayerPartyLevelInfo_C_SetLevelSyncValuePlayer::LevelSyncValue' has a wrong offset!");

// Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.SetLevelSyncValueParty
// 0x0078 (0x0078 - 0x0000)
struct PlayerPartyLevelInfo_C_SetLevelSyncValueParty final
{
public:
	int32                                         LevelSyncValue;                                    // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Index;                                       // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USBPartyMemberState*>            Members;                                           // 0x0008(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_70F0[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPartyMemberState*                    CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocalPlayer_ReturnValue;                // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_70F1[0x2];                                     // 0x0036(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USBRuntimeTextBlock*>            K2Node_MakeArray_Array;                            // 0x0040(0x0010)(ReferenceParm, ContainsInstancedReference)
	class USBPartyGameState*                      CallFunc_GetCurrentParty_OutPartyState;            // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCurrentParty_ReturnValue;              // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_70F2[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBRuntimeTextBlock*                    CallFunc_Array_Get_Item_1;                         // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USBPartyMemberState*>            CallFunc_GetJoinedPartyMembers_PartyMembers;       // 0x0068(0x0010)(ReferenceParm)
};
static_assert(alignof(PlayerPartyLevelInfo_C_SetLevelSyncValueParty) == 0x000008, "Wrong alignment on PlayerPartyLevelInfo_C_SetLevelSyncValueParty");
static_assert(sizeof(PlayerPartyLevelInfo_C_SetLevelSyncValueParty) == 0x000078, "Wrong size on PlayerPartyLevelInfo_C_SetLevelSyncValueParty");
static_assert(offsetof(PlayerPartyLevelInfo_C_SetLevelSyncValueParty, LevelSyncValue) == 0x000000, "Member 'PlayerPartyLevelInfo_C_SetLevelSyncValueParty::LevelSyncValue' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_SetLevelSyncValueParty, Param_Index) == 0x000004, "Member 'PlayerPartyLevelInfo_C_SetLevelSyncValueParty::Param_Index' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_SetLevelSyncValueParty, Members) == 0x000008, "Member 'PlayerPartyLevelInfo_C_SetLevelSyncValueParty::Members' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_SetLevelSyncValueParty, Temp_int_Loop_Counter_Variable) == 0x000018, "Member 'PlayerPartyLevelInfo_C_SetLevelSyncValueParty::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_SetLevelSyncValueParty, CallFunc_Add_IntInt_ReturnValue) == 0x00001C, "Member 'PlayerPartyLevelInfo_C_SetLevelSyncValueParty::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_SetLevelSyncValueParty, Temp_int_Array_Index_Variable) == 0x000020, "Member 'PlayerPartyLevelInfo_C_SetLevelSyncValueParty::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_SetLevelSyncValueParty, CallFunc_Array_Get_Item) == 0x000028, "Member 'PlayerPartyLevelInfo_C_SetLevelSyncValueParty::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_SetLevelSyncValueParty, CallFunc_Array_Length_ReturnValue) == 0x000030, "Member 'PlayerPartyLevelInfo_C_SetLevelSyncValueParty::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_SetLevelSyncValueParty, CallFunc_IsLocalPlayer_ReturnValue) == 0x000034, "Member 'PlayerPartyLevelInfo_C_SetLevelSyncValueParty::CallFunc_IsLocalPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_SetLevelSyncValueParty, CallFunc_Less_IntInt_ReturnValue) == 0x000035, "Member 'PlayerPartyLevelInfo_C_SetLevelSyncValueParty::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_SetLevelSyncValueParty, Temp_int_Variable) == 0x000038, "Member 'PlayerPartyLevelInfo_C_SetLevelSyncValueParty::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_SetLevelSyncValueParty, CallFunc_Add_IntInt_ReturnValue_1) == 0x00003C, "Member 'PlayerPartyLevelInfo_C_SetLevelSyncValueParty::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_SetLevelSyncValueParty, K2Node_MakeArray_Array) == 0x000040, "Member 'PlayerPartyLevelInfo_C_SetLevelSyncValueParty::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_SetLevelSyncValueParty, CallFunc_GetCurrentParty_OutPartyState) == 0x000050, "Member 'PlayerPartyLevelInfo_C_SetLevelSyncValueParty::CallFunc_GetCurrentParty_OutPartyState' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_SetLevelSyncValueParty, CallFunc_GetCurrentParty_ReturnValue) == 0x000058, "Member 'PlayerPartyLevelInfo_C_SetLevelSyncValueParty::CallFunc_GetCurrentParty_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_SetLevelSyncValueParty, CallFunc_Array_Get_Item_1) == 0x000060, "Member 'PlayerPartyLevelInfo_C_SetLevelSyncValueParty::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_SetLevelSyncValueParty, CallFunc_GetJoinedPartyMembers_PartyMembers) == 0x000068, "Member 'PlayerPartyLevelInfo_C_SetLevelSyncValueParty::CallFunc_GetJoinedPartyMembers_PartyMembers' has a wrong offset!");

// Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.SetLevelSyncValueMe
// 0x0020 (0x0020 - 0x0000)
struct PlayerPartyLevelInfo_C_SetLevelSyncValueMe final
{
public:
	int32                                         LevelSyncValue;                                    // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_70F3[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTextBlock*                             Text;                                              // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_UpdateLevelBySync_OutLevelSyncIsValid;    // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerPartyLevelInfo_C_SetLevelSyncValueMe) == 0x000008, "Wrong alignment on PlayerPartyLevelInfo_C_SetLevelSyncValueMe");
static_assert(sizeof(PlayerPartyLevelInfo_C_SetLevelSyncValueMe) == 0x000020, "Wrong size on PlayerPartyLevelInfo_C_SetLevelSyncValueMe");
static_assert(offsetof(PlayerPartyLevelInfo_C_SetLevelSyncValueMe, LevelSyncValue) == 0x000000, "Member 'PlayerPartyLevelInfo_C_SetLevelSyncValueMe::LevelSyncValue' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_SetLevelSyncValueMe, Text) == 0x000008, "Member 'PlayerPartyLevelInfo_C_SetLevelSyncValueMe::Text' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_SetLevelSyncValueMe, Image) == 0x000010, "Member 'PlayerPartyLevelInfo_C_SetLevelSyncValueMe::Image' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_SetLevelSyncValueMe, Temp_bool_Variable) == 0x000018, "Member 'PlayerPartyLevelInfo_C_SetLevelSyncValueMe::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_SetLevelSyncValueMe, CallFunc_UpdateLevelBySync_OutLevelSyncIsValid) == 0x000019, "Member 'PlayerPartyLevelInfo_C_SetLevelSyncValueMe::CallFunc_UpdateLevelBySync_OutLevelSyncIsValid' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_SetLevelSyncValueMe, Temp_byte_Variable) == 0x00001A, "Member 'PlayerPartyLevelInfo_C_SetLevelSyncValueMe::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_SetLevelSyncValueMe, Temp_byte_Variable_1) == 0x00001B, "Member 'PlayerPartyLevelInfo_C_SetLevelSyncValueMe::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_SetLevelSyncValueMe, K2Node_Select_Default) == 0x00001C, "Member 'PlayerPartyLevelInfo_C_SetLevelSyncValueMe::K2Node_Select_Default' has a wrong offset!");

// Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.SetLevelSyncValueMember
// 0x0018 (0x0018 - 0x0000)
struct PlayerPartyLevelInfo_C_SetLevelSyncValueMember final
{
public:
	int32                                         LevelSyncValue;                                    // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MemberIndex;                                       // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             Text;                                              // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_UpdateLevelBySync_OutLevelSyncIsValid;    // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerPartyLevelInfo_C_SetLevelSyncValueMember) == 0x000008, "Wrong alignment on PlayerPartyLevelInfo_C_SetLevelSyncValueMember");
static_assert(sizeof(PlayerPartyLevelInfo_C_SetLevelSyncValueMember) == 0x000018, "Wrong size on PlayerPartyLevelInfo_C_SetLevelSyncValueMember");
static_assert(offsetof(PlayerPartyLevelInfo_C_SetLevelSyncValueMember, LevelSyncValue) == 0x000000, "Member 'PlayerPartyLevelInfo_C_SetLevelSyncValueMember::LevelSyncValue' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_SetLevelSyncValueMember, MemberIndex) == 0x000004, "Member 'PlayerPartyLevelInfo_C_SetLevelSyncValueMember::MemberIndex' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_SetLevelSyncValueMember, Text) == 0x000008, "Member 'PlayerPartyLevelInfo_C_SetLevelSyncValueMember::Text' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_SetLevelSyncValueMember, CallFunc_UpdateLevelBySync_OutLevelSyncIsValid) == 0x000010, "Member 'PlayerPartyLevelInfo_C_SetLevelSyncValueMember::CallFunc_UpdateLevelBySync_OutLevelSyncIsValid' has a wrong offset!");

// Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.SetLevelText
// 0x0058 (0x0058 - 0x0000)
struct PlayerPartyLevelInfo_C_SetLevelText final
{
public:
	class UTextBlock*                             Text;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Level;                                             // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_70F4[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0040(0x0018)()
};
static_assert(alignof(PlayerPartyLevelInfo_C_SetLevelText) == 0x000008, "Wrong alignment on PlayerPartyLevelInfo_C_SetLevelText");
static_assert(sizeof(PlayerPartyLevelInfo_C_SetLevelText) == 0x000058, "Wrong size on PlayerPartyLevelInfo_C_SetLevelText");
static_assert(offsetof(PlayerPartyLevelInfo_C_SetLevelText, Text) == 0x000000, "Member 'PlayerPartyLevelInfo_C_SetLevelText::Text' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_SetLevelText, Level) == 0x000008, "Member 'PlayerPartyLevelInfo_C_SetLevelText::Level' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_SetLevelText, CallFunc_GetTextFromAsset_ReturnValue) == 0x000010, "Member 'PlayerPartyLevelInfo_C_SetLevelText::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_SetLevelText, CallFunc_Conv_IntToString_ReturnValue) == 0x000020, "Member 'PlayerPartyLevelInfo_C_SetLevelText::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_SetLevelText, CallFunc_Concat_StrStr_ReturnValue) == 0x000030, "Member 'PlayerPartyLevelInfo_C_SetLevelText::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_SetLevelText, CallFunc_Conv_StringToText_ReturnValue) == 0x000040, "Member 'PlayerPartyLevelInfo_C_SetLevelText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.UpdateLevelBySync
// 0x0020 (0x0020 - 0x0000)
struct PlayerPartyLevelInfo_C_UpdateLevelBySync final
{
public:
	int32                                         LevelSyncValue;                                    // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MemberIndex;                                       // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             Text;                                              // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OutLevelSyncIsValid;                               // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LevelSyncIsValid;                                  // 0x0011(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetLevelSyncInfo_OutLevelSyncIsValid;     // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_70F5[0x1];                                     // 0x0013(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetLevelSyncInfo_OutClassLevel;           // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_70F6[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerPartyLevelInfo_C_UpdateLevelBySync) == 0x000008, "Wrong alignment on PlayerPartyLevelInfo_C_UpdateLevelBySync");
static_assert(sizeof(PlayerPartyLevelInfo_C_UpdateLevelBySync) == 0x000020, "Wrong size on PlayerPartyLevelInfo_C_UpdateLevelBySync");
static_assert(offsetof(PlayerPartyLevelInfo_C_UpdateLevelBySync, LevelSyncValue) == 0x000000, "Member 'PlayerPartyLevelInfo_C_UpdateLevelBySync::LevelSyncValue' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_UpdateLevelBySync, MemberIndex) == 0x000004, "Member 'PlayerPartyLevelInfo_C_UpdateLevelBySync::MemberIndex' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_UpdateLevelBySync, Text) == 0x000008, "Member 'PlayerPartyLevelInfo_C_UpdateLevelBySync::Text' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_UpdateLevelBySync, OutLevelSyncIsValid) == 0x000010, "Member 'PlayerPartyLevelInfo_C_UpdateLevelBySync::OutLevelSyncIsValid' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_UpdateLevelBySync, LevelSyncIsValid) == 0x000011, "Member 'PlayerPartyLevelInfo_C_UpdateLevelBySync::LevelSyncIsValid' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_UpdateLevelBySync, CallFunc_GetLevelSyncInfo_OutLevelSyncIsValid) == 0x000012, "Member 'PlayerPartyLevelInfo_C_UpdateLevelBySync::CallFunc_GetLevelSyncInfo_OutLevelSyncIsValid' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_UpdateLevelBySync, CallFunc_GetLevelSyncInfo_OutClassLevel) == 0x000014, "Member 'PlayerPartyLevelInfo_C_UpdateLevelBySync::CallFunc_GetLevelSyncInfo_OutClassLevel' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_UpdateLevelBySync, Temp_bool_Variable) == 0x000018, "Member 'PlayerPartyLevelInfo_C_UpdateLevelBySync::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_UpdateLevelBySync, K2Node_Select_Default) == 0x00001C, "Member 'PlayerPartyLevelInfo_C_UpdateLevelBySync::K2Node_Select_Default' has a wrong offset!");

// Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.GetLevelSyncInfo
// 0x0050 (0x0050 - 0x0000)
struct PlayerPartyLevelInfo_C_GetLevelSyncInfo final
{
public:
	int32                                         LevelSyncValue;                                    // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MemberIndex;                                       // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OutLevelSyncIsValid;                               // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_70F7[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         OutClassLevel;                                     // 0x000C(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ClassLevel;                                        // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_70F8[0x2];                                     // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPartyGameState*                      CallFunc_GetCurrentParty_OutPartyState;            // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCurrentParty_ReturnValue;              // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_70F9[0x6];                                     // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USBPartyMemberState*>            CallFunc_GetJoinedPartyMembers_PartyMembers;       // 0x0028(0x0010)(ReferenceParm)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_70FA[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPartyMemberState*                    CallFunc_Array_Get_Item;                           // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetClassLevel_ReturnValue;                // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetClassLevel_ReturnValue_1;              // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerPartyLevelInfo_C_GetLevelSyncInfo) == 0x000008, "Wrong alignment on PlayerPartyLevelInfo_C_GetLevelSyncInfo");
static_assert(sizeof(PlayerPartyLevelInfo_C_GetLevelSyncInfo) == 0x000050, "Wrong size on PlayerPartyLevelInfo_C_GetLevelSyncInfo");
static_assert(offsetof(PlayerPartyLevelInfo_C_GetLevelSyncInfo, LevelSyncValue) == 0x000000, "Member 'PlayerPartyLevelInfo_C_GetLevelSyncInfo::LevelSyncValue' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_GetLevelSyncInfo, MemberIndex) == 0x000004, "Member 'PlayerPartyLevelInfo_C_GetLevelSyncInfo::MemberIndex' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_GetLevelSyncInfo, OutLevelSyncIsValid) == 0x000008, "Member 'PlayerPartyLevelInfo_C_GetLevelSyncInfo::OutLevelSyncIsValid' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_GetLevelSyncInfo, OutClassLevel) == 0x00000C, "Member 'PlayerPartyLevelInfo_C_GetLevelSyncInfo::OutClassLevel' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_GetLevelSyncInfo, ClassLevel) == 0x000010, "Member 'PlayerPartyLevelInfo_C_GetLevelSyncInfo::ClassLevel' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_GetLevelSyncInfo, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000014, "Member 'PlayerPartyLevelInfo_C_GetLevelSyncInfo::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_GetLevelSyncInfo, CallFunc_Greater_IntInt_ReturnValue) == 0x000015, "Member 'PlayerPartyLevelInfo_C_GetLevelSyncInfo::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_GetLevelSyncInfo, CallFunc_GetCurrentParty_OutPartyState) == 0x000018, "Member 'PlayerPartyLevelInfo_C_GetLevelSyncInfo::CallFunc_GetCurrentParty_OutPartyState' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_GetLevelSyncInfo, CallFunc_GetCurrentParty_ReturnValue) == 0x000020, "Member 'PlayerPartyLevelInfo_C_GetLevelSyncInfo::CallFunc_GetCurrentParty_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_GetLevelSyncInfo, CallFunc_Less_IntInt_ReturnValue) == 0x000021, "Member 'PlayerPartyLevelInfo_C_GetLevelSyncInfo::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_GetLevelSyncInfo, CallFunc_GetJoinedPartyMembers_PartyMembers) == 0x000028, "Member 'PlayerPartyLevelInfo_C_GetLevelSyncInfo::CallFunc_GetJoinedPartyMembers_PartyMembers' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_GetLevelSyncInfo, CallFunc_BooleanAND_ReturnValue) == 0x000038, "Member 'PlayerPartyLevelInfo_C_GetLevelSyncInfo::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_GetLevelSyncInfo, CallFunc_Array_Get_Item) == 0x000040, "Member 'PlayerPartyLevelInfo_C_GetLevelSyncInfo::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_GetLevelSyncInfo, CallFunc_GetClassLevel_ReturnValue) == 0x000048, "Member 'PlayerPartyLevelInfo_C_GetLevelSyncInfo::CallFunc_GetClassLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_GetLevelSyncInfo, CallFunc_GetClassLevel_ReturnValue_1) == 0x00004C, "Member 'PlayerPartyLevelInfo_C_GetLevelSyncInfo::CallFunc_GetClassLevel_ReturnValue_1' has a wrong offset!");

// Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.SetTextColorBySync
// 0x0090 (0x0090 - 0x0000)
struct PlayerPartyLevelInfo_C_SetTextColorBySync final
{
public:
	bool                                          SyncIsValid;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_70FB[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTextBlock*                             Text;                                              // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_70FC[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0018(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0040(0x0028)()
	struct FSlateColor                            K2Node_Select_Default;                             // 0x0068(0x0028)()
};
static_assert(alignof(PlayerPartyLevelInfo_C_SetTextColorBySync) == 0x000008, "Wrong alignment on PlayerPartyLevelInfo_C_SetTextColorBySync");
static_assert(sizeof(PlayerPartyLevelInfo_C_SetTextColorBySync) == 0x000090, "Wrong size on PlayerPartyLevelInfo_C_SetTextColorBySync");
static_assert(offsetof(PlayerPartyLevelInfo_C_SetTextColorBySync, SyncIsValid) == 0x000000, "Member 'PlayerPartyLevelInfo_C_SetTextColorBySync::SyncIsValid' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_SetTextColorBySync, Text) == 0x000008, "Member 'PlayerPartyLevelInfo_C_SetTextColorBySync::Text' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_SetTextColorBySync, Temp_bool_Variable) == 0x000010, "Member 'PlayerPartyLevelInfo_C_SetTextColorBySync::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_SetTextColorBySync, K2Node_MakeStruct_SlateColor) == 0x000018, "Member 'PlayerPartyLevelInfo_C_SetTextColorBySync::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_SetTextColorBySync, K2Node_MakeStruct_SlateColor_1) == 0x000040, "Member 'PlayerPartyLevelInfo_C_SetTextColorBySync::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_SetTextColorBySync, K2Node_Select_Default) == 0x000068, "Member 'PlayerPartyLevelInfo_C_SetTextColorBySync::K2Node_Select_Default' has a wrong offset!");

// Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.SetBattleScore
// 0x0008 (0x0008 - 0x0000)
struct PlayerPartyLevelInfo_C_SetBattleScore final
{
public:
	int32                                         LevelSyncTarget;                                   // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBStackBEnableType                           StackBEnableType;                                  // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsPlayerMode;                                      // 0x0005(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerPartyLevelInfo_C_SetBattleScore) == 0x000004, "Wrong alignment on PlayerPartyLevelInfo_C_SetBattleScore");
static_assert(sizeof(PlayerPartyLevelInfo_C_SetBattleScore) == 0x000008, "Wrong size on PlayerPartyLevelInfo_C_SetBattleScore");
static_assert(offsetof(PlayerPartyLevelInfo_C_SetBattleScore, LevelSyncTarget) == 0x000000, "Member 'PlayerPartyLevelInfo_C_SetBattleScore::LevelSyncTarget' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_SetBattleScore, StackBEnableType) == 0x000004, "Member 'PlayerPartyLevelInfo_C_SetBattleScore::StackBEnableType' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_SetBattleScore, IsPlayerMode) == 0x000005, "Member 'PlayerPartyLevelInfo_C_SetBattleScore::IsPlayerMode' has a wrong offset!");

// Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.Set Battle Score Core
// 0x0228 (0x0228 - 0x0000)
struct PlayerPartyLevelInfo_C_Set_Battle_Score_Core final
{
public:
	int32                                         LevelSyncTarget;                                   // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBStackBEnableType                           StackBEnableType;                                  // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsPlayerMode;                                      // 0x0005(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_70FD[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         BS_Level_StackB_Sync;                              // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Min_Total_Power_In_Party;                          // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPartyMemberState*                    Target_Member;                                     // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Sync;                                              // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_70FE[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         BS_StackB_Sync;                                    // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         BS_Level_Sync;                                     // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         BS_Normal;                                         // 0x0024(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_70FF[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBStackBEnableType                           Temp_byte_Variable;                                // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7100[0x3];                                     // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0048(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0060(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0078(0x0040)(HasGetValueTypeHash)
	int32                                         CallFunc_GetTotalPowerBySelectStackBType_ReturnValue; // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetTotalPower_ReturnValue;                // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetTotalPowerByOtherChara_ReturnValue;    // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetTotalPowerByOtherChara_ReturnValue_1;  // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPartyGameState*                      CallFunc_GetCurrentParty_OutPartyState;            // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCurrentParty_ReturnValue;              // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7101[0x3];                                     // 0x00D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetTotalPower_ReturnValue_1;              // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7102[0x7];                                     // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USBPartyMemberState*>            CallFunc_GetJoinedPartyMembers_PartyMembers;       // 0x00E0(0x0010)(ReferenceParm)
	class USBPartyMemberState*                    CallFunc_Array_Get_Item;                           // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x00F8(0x0040)(HasGetValueTypeHash)
	int32                                         CallFunc_GetTotalPowerByOtherChara_ReturnValue_2;  // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x013C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7103[0x3];                                     // 0x013D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Min_ReturnValue;                          // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7104[0x7];                                     // 0x0149(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x0150(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_3;            // 0x0190(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x01D0(0x0010)(ReferenceParm)
	int32                                         K2Node_Select_Default;                             // 0x01E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7105[0x4];                                     // 0x01E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x01E8(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0200(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UTextBlock*                             K2Node_Select_Default_1;                           // 0x0210(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0219(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x021A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7106[0x1];                                     // 0x021B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetTotalPowerBySelectStackBType_ReturnValue_1; // 0x021C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7107[0x3];                                     // 0x0221(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetTotalPower_ReturnValue_2;              // 0x0224(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerPartyLevelInfo_C_Set_Battle_Score_Core) == 0x000008, "Wrong alignment on PlayerPartyLevelInfo_C_Set_Battle_Score_Core");
static_assert(sizeof(PlayerPartyLevelInfo_C_Set_Battle_Score_Core) == 0x000228, "Wrong size on PlayerPartyLevelInfo_C_Set_Battle_Score_Core");
static_assert(offsetof(PlayerPartyLevelInfo_C_Set_Battle_Score_Core, LevelSyncTarget) == 0x000000, "Member 'PlayerPartyLevelInfo_C_Set_Battle_Score_Core::LevelSyncTarget' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_Set_Battle_Score_Core, StackBEnableType) == 0x000004, "Member 'PlayerPartyLevelInfo_C_Set_Battle_Score_Core::StackBEnableType' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_Set_Battle_Score_Core, IsPlayerMode) == 0x000005, "Member 'PlayerPartyLevelInfo_C_Set_Battle_Score_Core::IsPlayerMode' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_Set_Battle_Score_Core, BS_Level_StackB_Sync) == 0x000008, "Member 'PlayerPartyLevelInfo_C_Set_Battle_Score_Core::BS_Level_StackB_Sync' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_Set_Battle_Score_Core, Min_Total_Power_In_Party) == 0x00000C, "Member 'PlayerPartyLevelInfo_C_Set_Battle_Score_Core::Min_Total_Power_In_Party' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_Set_Battle_Score_Core, Target_Member) == 0x000010, "Member 'PlayerPartyLevelInfo_C_Set_Battle_Score_Core::Target_Member' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_Set_Battle_Score_Core, Sync) == 0x000018, "Member 'PlayerPartyLevelInfo_C_Set_Battle_Score_Core::Sync' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_Set_Battle_Score_Core, BS_StackB_Sync) == 0x00001C, "Member 'PlayerPartyLevelInfo_C_Set_Battle_Score_Core::BS_StackB_Sync' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_Set_Battle_Score_Core, BS_Level_Sync) == 0x000020, "Member 'PlayerPartyLevelInfo_C_Set_Battle_Score_Core::BS_Level_Sync' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_Set_Battle_Score_Core, BS_Normal) == 0x000024, "Member 'PlayerPartyLevelInfo_C_Set_Battle_Score_Core::BS_Normal' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_Set_Battle_Score_Core, Temp_int_Variable) == 0x000028, "Member 'PlayerPartyLevelInfo_C_Set_Battle_Score_Core::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_Set_Battle_Score_Core, Temp_int_Variable_1) == 0x00002C, "Member 'PlayerPartyLevelInfo_C_Set_Battle_Score_Core::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_Set_Battle_Score_Core, Temp_int_Variable_2) == 0x000030, "Member 'PlayerPartyLevelInfo_C_Set_Battle_Score_Core::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_Set_Battle_Score_Core, Temp_bool_Variable) == 0x000034, "Member 'PlayerPartyLevelInfo_C_Set_Battle_Score_Core::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_Set_Battle_Score_Core, Temp_int_Array_Index_Variable) == 0x000038, "Member 'PlayerPartyLevelInfo_C_Set_Battle_Score_Core::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_Set_Battle_Score_Core, Temp_int_Loop_Counter_Variable) == 0x00003C, "Member 'PlayerPartyLevelInfo_C_Set_Battle_Score_Core::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_Set_Battle_Score_Core, CallFunc_Add_IntInt_ReturnValue) == 0x000040, "Member 'PlayerPartyLevelInfo_C_Set_Battle_Score_Core::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_Set_Battle_Score_Core, Temp_byte_Variable) == 0x000044, "Member 'PlayerPartyLevelInfo_C_Set_Battle_Score_Core::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_Set_Battle_Score_Core, CallFunc_Conv_IntToText_ReturnValue) == 0x000048, "Member 'PlayerPartyLevelInfo_C_Set_Battle_Score_Core::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_Set_Battle_Score_Core, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000060, "Member 'PlayerPartyLevelInfo_C_Set_Battle_Score_Core::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_Set_Battle_Score_Core, K2Node_MakeStruct_FormatArgumentData) == 0x000078, "Member 'PlayerPartyLevelInfo_C_Set_Battle_Score_Core::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_Set_Battle_Score_Core, CallFunc_GetTotalPowerBySelectStackBType_ReturnValue) == 0x0000B8, "Member 'PlayerPartyLevelInfo_C_Set_Battle_Score_Core::CallFunc_GetTotalPowerBySelectStackBType_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_Set_Battle_Score_Core, CallFunc_GetTotalPower_ReturnValue) == 0x0000BC, "Member 'PlayerPartyLevelInfo_C_Set_Battle_Score_Core::CallFunc_GetTotalPower_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_Set_Battle_Score_Core, CallFunc_GetTotalPowerByOtherChara_ReturnValue) == 0x0000C0, "Member 'PlayerPartyLevelInfo_C_Set_Battle_Score_Core::CallFunc_GetTotalPowerByOtherChara_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_Set_Battle_Score_Core, CallFunc_GetTotalPowerByOtherChara_ReturnValue_1) == 0x0000C4, "Member 'PlayerPartyLevelInfo_C_Set_Battle_Score_Core::CallFunc_GetTotalPowerByOtherChara_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_Set_Battle_Score_Core, CallFunc_GetCurrentParty_OutPartyState) == 0x0000C8, "Member 'PlayerPartyLevelInfo_C_Set_Battle_Score_Core::CallFunc_GetCurrentParty_OutPartyState' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_Set_Battle_Score_Core, CallFunc_GetCurrentParty_ReturnValue) == 0x0000D0, "Member 'PlayerPartyLevelInfo_C_Set_Battle_Score_Core::CallFunc_GetCurrentParty_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_Set_Battle_Score_Core, CallFunc_GetTotalPower_ReturnValue_1) == 0x0000D4, "Member 'PlayerPartyLevelInfo_C_Set_Battle_Score_Core::CallFunc_GetTotalPower_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_Set_Battle_Score_Core, CallFunc_Not_PreBool_ReturnValue) == 0x0000D8, "Member 'PlayerPartyLevelInfo_C_Set_Battle_Score_Core::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_Set_Battle_Score_Core, CallFunc_GetJoinedPartyMembers_PartyMembers) == 0x0000E0, "Member 'PlayerPartyLevelInfo_C_Set_Battle_Score_Core::CallFunc_GetJoinedPartyMembers_PartyMembers' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_Set_Battle_Score_Core, CallFunc_Array_Get_Item) == 0x0000F0, "Member 'PlayerPartyLevelInfo_C_Set_Battle_Score_Core::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_Set_Battle_Score_Core, K2Node_MakeStruct_FormatArgumentData_1) == 0x0000F8, "Member 'PlayerPartyLevelInfo_C_Set_Battle_Score_Core::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_Set_Battle_Score_Core, CallFunc_GetTotalPowerByOtherChara_ReturnValue_2) == 0x000138, "Member 'PlayerPartyLevelInfo_C_Set_Battle_Score_Core::CallFunc_GetTotalPowerByOtherChara_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_Set_Battle_Score_Core, CallFunc_Less_IntInt_ReturnValue) == 0x00013C, "Member 'PlayerPartyLevelInfo_C_Set_Battle_Score_Core::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_Set_Battle_Score_Core, CallFunc_Min_ReturnValue) == 0x000140, "Member 'PlayerPartyLevelInfo_C_Set_Battle_Score_Core::CallFunc_Min_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_Set_Battle_Score_Core, CallFunc_Array_Length_ReturnValue) == 0x000144, "Member 'PlayerPartyLevelInfo_C_Set_Battle_Score_Core::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_Set_Battle_Score_Core, CallFunc_Less_IntInt_ReturnValue_1) == 0x000148, "Member 'PlayerPartyLevelInfo_C_Set_Battle_Score_Core::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_Set_Battle_Score_Core, K2Node_MakeStruct_FormatArgumentData_2) == 0x000150, "Member 'PlayerPartyLevelInfo_C_Set_Battle_Score_Core::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_Set_Battle_Score_Core, K2Node_MakeStruct_FormatArgumentData_3) == 0x000190, "Member 'PlayerPartyLevelInfo_C_Set_Battle_Score_Core::K2Node_MakeStruct_FormatArgumentData_3' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_Set_Battle_Score_Core, K2Node_MakeArray_Array) == 0x0001D0, "Member 'PlayerPartyLevelInfo_C_Set_Battle_Score_Core::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_Set_Battle_Score_Core, K2Node_Select_Default) == 0x0001E0, "Member 'PlayerPartyLevelInfo_C_Set_Battle_Score_Core::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_Set_Battle_Score_Core, CallFunc_Format_ReturnValue) == 0x0001E8, "Member 'PlayerPartyLevelInfo_C_Set_Battle_Score_Core::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_Set_Battle_Score_Core, CallFunc_Conv_TextToString_ReturnValue) == 0x000200, "Member 'PlayerPartyLevelInfo_C_Set_Battle_Score_Core::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_Set_Battle_Score_Core, K2Node_Select_Default_1) == 0x000210, "Member 'PlayerPartyLevelInfo_C_Set_Battle_Score_Core::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_Set_Battle_Score_Core, CallFunc_Greater_IntInt_ReturnValue) == 0x000218, "Member 'PlayerPartyLevelInfo_C_Set_Battle_Score_Core::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_Set_Battle_Score_Core, CallFunc_BooleanAND_ReturnValue) == 0x000219, "Member 'PlayerPartyLevelInfo_C_Set_Battle_Score_Core::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_Set_Battle_Score_Core, CallFunc_Greater_IntInt_ReturnValue_1) == 0x00021A, "Member 'PlayerPartyLevelInfo_C_Set_Battle_Score_Core::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_Set_Battle_Score_Core, CallFunc_GetTotalPowerBySelectStackBType_ReturnValue_1) == 0x00021C, "Member 'PlayerPartyLevelInfo_C_Set_Battle_Score_Core::CallFunc_GetTotalPowerBySelectStackBType_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_Set_Battle_Score_Core, CallFunc_BooleanAND_ReturnValue_1) == 0x000220, "Member 'PlayerPartyLevelInfo_C_Set_Battle_Score_Core::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_Set_Battle_Score_Core, CallFunc_GetTotalPower_ReturnValue_2) == 0x000224, "Member 'PlayerPartyLevelInfo_C_Set_Battle_Score_Core::CallFunc_GetTotalPower_ReturnValue_2' has a wrong offset!");

// Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.UpdateEquipItemsForCharacters
// 0x00F8 (0x00F8 - 0x0000)
struct PlayerPartyLevelInfo_C_UpdateEquipItemsForCharacters final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7108[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPartyGameState*                      CallFunc_GetCurrentParty_OutPartyState;            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCurrentParty_ReturnValue;              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7109[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class USBPartyMemberState*>            CallFunc_GetJoinedPartyMembers_PartyMembers;       // 0x0030(0x0010)(ReferenceParm)
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class USBPartyMemberState*                    CallFunc_Array_Get_Item;                           // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBattleMemberInfoSend                  K2Node_MakeStruct_BattleMemberInfoSend;            // 0x0058(0x0020)()
	class USBPartyMemberStateGeneral*             K2Node_DynamicCast_AsSBParty_Member_State_General; // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_710A[0x3];                                     // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ISBOnlinePlayerState>  CallFunc_GetPlayerIdString_self_CastInput;         // 0x0088(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FString                                 CallFunc_GetPlayerIdString_ReturnValue;            // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TScriptInterface<class ISBOnlinePlayerState>  CallFunc_GetCharacterId_self_CastInput;            // 0x00A8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FString                                 CallFunc_GetCharacterId_ReturnValue_1;             // 0x00B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_710B[0x4];                                     // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FBattleMemberInfoSend                  K2Node_MakeStruct_BattleMemberInfoSend_1;          // 0x00D0(0x0020)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_710C[0x3];                                     // 0x00F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_AddUnique_ReturnValue_1;            // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerPartyLevelInfo_C_UpdateEquipItemsForCharacters) == 0x000008, "Wrong alignment on PlayerPartyLevelInfo_C_UpdateEquipItemsForCharacters");
static_assert(sizeof(PlayerPartyLevelInfo_C_UpdateEquipItemsForCharacters) == 0x0000F8, "Wrong size on PlayerPartyLevelInfo_C_UpdateEquipItemsForCharacters");
static_assert(offsetof(PlayerPartyLevelInfo_C_UpdateEquipItemsForCharacters, Temp_int_Array_Index_Variable) == 0x000000, "Member 'PlayerPartyLevelInfo_C_UpdateEquipItemsForCharacters::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_UpdateEquipItemsForCharacters, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'PlayerPartyLevelInfo_C_UpdateEquipItemsForCharacters::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_UpdateEquipItemsForCharacters, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'PlayerPartyLevelInfo_C_UpdateEquipItemsForCharacters::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_UpdateEquipItemsForCharacters, CallFunc_GetCurrentParty_OutPartyState) == 0x000010, "Member 'PlayerPartyLevelInfo_C_UpdateEquipItemsForCharacters::CallFunc_GetCurrentParty_OutPartyState' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_UpdateEquipItemsForCharacters, CallFunc_GetCurrentParty_ReturnValue) == 0x000018, "Member 'PlayerPartyLevelInfo_C_UpdateEquipItemsForCharacters::CallFunc_GetCurrentParty_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_UpdateEquipItemsForCharacters, CallFunc_GetCharacterId_ReturnValue) == 0x000020, "Member 'PlayerPartyLevelInfo_C_UpdateEquipItemsForCharacters::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_UpdateEquipItemsForCharacters, CallFunc_GetJoinedPartyMembers_PartyMembers) == 0x000030, "Member 'PlayerPartyLevelInfo_C_UpdateEquipItemsForCharacters::CallFunc_GetJoinedPartyMembers_PartyMembers' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_UpdateEquipItemsForCharacters, CallFunc_GetPlayerId_ReturnValue) == 0x000040, "Member 'PlayerPartyLevelInfo_C_UpdateEquipItemsForCharacters::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_UpdateEquipItemsForCharacters, CallFunc_Array_Get_Item) == 0x000050, "Member 'PlayerPartyLevelInfo_C_UpdateEquipItemsForCharacters::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_UpdateEquipItemsForCharacters, K2Node_MakeStruct_BattleMemberInfoSend) == 0x000058, "Member 'PlayerPartyLevelInfo_C_UpdateEquipItemsForCharacters::K2Node_MakeStruct_BattleMemberInfoSend' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_UpdateEquipItemsForCharacters, K2Node_DynamicCast_AsSBParty_Member_State_General) == 0x000078, "Member 'PlayerPartyLevelInfo_C_UpdateEquipItemsForCharacters::K2Node_DynamicCast_AsSBParty_Member_State_General' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_UpdateEquipItemsForCharacters, K2Node_DynamicCast_bSuccess) == 0x000080, "Member 'PlayerPartyLevelInfo_C_UpdateEquipItemsForCharacters::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_UpdateEquipItemsForCharacters, CallFunc_Array_AddUnique_ReturnValue) == 0x000084, "Member 'PlayerPartyLevelInfo_C_UpdateEquipItemsForCharacters::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_UpdateEquipItemsForCharacters, CallFunc_GetPlayerIdString_self_CastInput) == 0x000088, "Member 'PlayerPartyLevelInfo_C_UpdateEquipItemsForCharacters::CallFunc_GetPlayerIdString_self_CastInput' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_UpdateEquipItemsForCharacters, CallFunc_GetPlayerIdString_ReturnValue) == 0x000098, "Member 'PlayerPartyLevelInfo_C_UpdateEquipItemsForCharacters::CallFunc_GetPlayerIdString_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_UpdateEquipItemsForCharacters, CallFunc_GetCharacterId_self_CastInput) == 0x0000A8, "Member 'PlayerPartyLevelInfo_C_UpdateEquipItemsForCharacters::CallFunc_GetCharacterId_self_CastInput' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_UpdateEquipItemsForCharacters, CallFunc_GetCharacterId_ReturnValue_1) == 0x0000B8, "Member 'PlayerPartyLevelInfo_C_UpdateEquipItemsForCharacters::CallFunc_GetCharacterId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_UpdateEquipItemsForCharacters, CallFunc_Array_Length_ReturnValue) == 0x0000C8, "Member 'PlayerPartyLevelInfo_C_UpdateEquipItemsForCharacters::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_UpdateEquipItemsForCharacters, K2Node_MakeStruct_BattleMemberInfoSend_1) == 0x0000D0, "Member 'PlayerPartyLevelInfo_C_UpdateEquipItemsForCharacters::K2Node_MakeStruct_BattleMemberInfoSend_1' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_UpdateEquipItemsForCharacters, CallFunc_Less_IntInt_ReturnValue) == 0x0000F0, "Member 'PlayerPartyLevelInfo_C_UpdateEquipItemsForCharacters::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_UpdateEquipItemsForCharacters, CallFunc_Array_AddUnique_ReturnValue_1) == 0x0000F4, "Member 'PlayerPartyLevelInfo_C_UpdateEquipItemsForCharacters::CallFunc_Array_AddUnique_ReturnValue_1' has a wrong offset!");

// Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.RequestGetEquipItemsForCharacters
// 0x0028 (0x0028 - 0x0000)
struct PlayerPartyLevelInfo_C_RequestGetEquipItemsForCharacters final
{
public:
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_710D[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool bWasSuccessful, int32 RetCode, TArray<struct FBattleMemberLevelSyncInfo>& BattleMemberLevelSyncInfos)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_710E[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerConcernedList*                 CallFunc_GetConcernedList_ReturnValue;             // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerPartyLevelInfo_C_RequestGetEquipItemsForCharacters) == 0x000008, "Wrong alignment on PlayerPartyLevelInfo_C_RequestGetEquipItemsForCharacters");
static_assert(sizeof(PlayerPartyLevelInfo_C_RequestGetEquipItemsForCharacters) == 0x000028, "Wrong size on PlayerPartyLevelInfo_C_RequestGetEquipItemsForCharacters");
static_assert(offsetof(PlayerPartyLevelInfo_C_RequestGetEquipItemsForCharacters, CallFunc_Not_PreBool_ReturnValue) == 0x000000, "Member 'PlayerPartyLevelInfo_C_RequestGetEquipItemsForCharacters::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_RequestGetEquipItemsForCharacters, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'PlayerPartyLevelInfo_C_RequestGetEquipItemsForCharacters::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_RequestGetEquipItemsForCharacters, CallFunc_GetSBPlayerController_ReturnValue) == 0x000018, "Member 'PlayerPartyLevelInfo_C_RequestGetEquipItemsForCharacters::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPartyLevelInfo_C_RequestGetEquipItemsForCharacters, CallFunc_GetConcernedList_ReturnValue) == 0x000020, "Member 'PlayerPartyLevelInfo_C_RequestGetEquipItemsForCharacters::CallFunc_GetConcernedList_ReturnValue' has a wrong offset!");

}

