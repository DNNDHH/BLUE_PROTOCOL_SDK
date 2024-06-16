#pragma once

 

// Package: PlayerCraft

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function PlayerCraft.PlayerCraft_C.OnClose__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct PlayerCraft_C_OnClose__DelegateSignature final
{
public:
	bool                                          IsCrafted;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerCraft_C_OnClose__DelegateSignature) == 0x000001, "Wrong alignment on PlayerCraft_C_OnClose__DelegateSignature");
static_assert(sizeof(PlayerCraft_C_OnClose__DelegateSignature) == 0x000001, "Wrong size on PlayerCraft_C_OnClose__DelegateSignature");
static_assert(offsetof(PlayerCraft_C_OnClose__DelegateSignature, IsCrafted) == 0x000000, "Member 'PlayerCraft_C_OnClose__DelegateSignature::IsCrafted' has a wrong offset!");

// Function PlayerCraft.PlayerCraft_C.OnCloseAll__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct PlayerCraft_C_OnCloseAll__DelegateSignature final
{
public:
	bool                                          IsCrafted;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerCraft_C_OnCloseAll__DelegateSignature) == 0x000001, "Wrong alignment on PlayerCraft_C_OnCloseAll__DelegateSignature");
static_assert(sizeof(PlayerCraft_C_OnCloseAll__DelegateSignature) == 0x000001, "Wrong size on PlayerCraft_C_OnCloseAll__DelegateSignature");
static_assert(offsetof(PlayerCraft_C_OnCloseAll__DelegateSignature, IsCrafted) == 0x000000, "Member 'PlayerCraft_C_OnCloseAll__DelegateSignature::IsCrafted' has a wrong offset!");

// Function PlayerCraft.PlayerCraft_C.ExecuteUbergraph_PlayerCraft
// 0x0388 (0x0388 - 0x0000)
struct PlayerCraft_C_ExecuteUbergraph_PlayerCraft final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FCharacterCraftRecepi& Recepi)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool WhiteColor)>              K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A0A[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_Dialog_C*                           CallFunc_Create_ReturnValue;                       // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate_2;            // 0x0030(0x0010)(ZeroConstructor, NoDestructor)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A0B[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 ErrorCode, bool IsCritical, TArray<class FString>& ItemUniqueids, int32 CriticalNum, bool IsFail, int32 TotalAmount, TArray<bool>& Criticals, int32 SaleAmount, int32 SaleProfits)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x0054(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_6A0C[0x4];                                     // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerCraftComponent*                CallFunc_GetCraftComponent_ReturnValue;            // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCharacterCraftRecepi>          CallFunc_GetPlayerRecepi_ReturnValue;              // 0x0070(0x0010)(ReferenceParm)
	class UWidget*                                CallFunc_GetActiveWidget_ReturnValue;              // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A0D[0x3];                                     // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_ErrorCode_1;                    // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsSuccess;                      // 0x0090(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_isCritical_1;                   // 0x0091(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A0E[0x6];                                     // 0x0092(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_ItemUniqueId;                   // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_TotalAmount_1;                  // 0x00A8(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_SaleAmount_1;                   // 0x00AC(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_SaleProfits_1;                  // 0x00B0(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x00B5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x00B6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00B7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue;              // 0x00B8(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00C8(0x0018)()
	bool                                          CallFunc_GetIsCritical_isCritical;                 // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x00E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x00E2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6A0F[0x5];                                     // 0x00E3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_1;        // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A10[0x7];                                     // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerCraftComponent*                CallFunc_GetCraftComponent_ReturnValue_1;          // 0x0100(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A11[0x7];                                     // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EDialogResult                                 K2Node_CustomEvent_Result_1;                       // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6A12[0x7];                                     // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0120(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0130(0x0018)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6A13[0x3];                                     // 0x0149(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 ErrorCode, bool IsSuccess, bool IsCritical, const class FString& ItemUniqueId, int32 TotalAmount, int32 SaleAmount, int32 SaleProfits)> K2Node_CreateDelegate_OutputDelegate_4;            // 0x014C(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x015C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_5;            // 0x0160(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate_6;            // 0x0170(0x0010)(ZeroConstructor, NoDestructor)
	class UBP_Dialog_C*                           CallFunc_Create_ReturnValue_1;                     // 0x0180(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetLastCraftStorage_StorageType;          // 0x0188(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_LockInput;              // 0x018C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x018D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A14[0x2];                                     // 0x018E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetLastCraftStorage_StorageType_1;        // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCraftNum_Num;                          // 0x0194(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetAdventurerRank_ReturnValue;            // 0x0198(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue_1;                     // 0x019C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_ErrorCode;                      // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_isCritical;                     // 0x01A4(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A15[0x3];                                     // 0x01A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         K2Node_CustomEvent_ItemUniqueids;                  // 0x01A8(0x0010)(ConstParm, ReferenceParm)
	int32                                         K2Node_CustomEvent_CriticalNum;                    // 0x01B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_isFail;                         // 0x01BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A16[0x3];                                     // 0x01BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_TotalAmount;                    // 0x01C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6A17[0x4];                                     // 0x01C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<bool>                                  K2Node_CustomEvent_Criticals;                      // 0x01C8(0x0010)(ConstParm, ReferenceParm)
	int32                                         K2Node_CustomEvent_SaleAmount;                     // 0x01D8(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_SaleProfits;                    // 0x01DC(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue_1;            // 0x01E0(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_3;          // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A18[0x7];                                     // 0x01F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x01F8(0x0018)()
	struct FCharacterCraftRecepi                  K2Node_Event_Recepi;                               // 0x0210(0x0008)(NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_7;            // 0x0218(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_FindCraftMasterData_isExists;             // 0x0228(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A19[0x7];                                     // 0x0229(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCraftMasterData                       CallFunc_FindCraftMasterData_ReturnValue;          // 0x0230(0x0088)(ConstParm)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x02B8(0x0028)()
	bool                                          K2Node_CustomEvent_WhiteColor;                     // 0x02E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A1A[0x7];                                     // 0x02E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            CallFunc_GetImpossibleColor_ReturnValue;           // 0x02E8(0x0028)()
	struct FSlateColor                            K2Node_Select_Default;                             // 0x0310(0x0028)()
	bool                                          Temp_bool_Variable_2;                              // 0x0338(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A1B[0x7];                                     // 0x0339(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_Select_Default_1;                           // 0x0340(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0348(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EDialogResult                                 K2Node_CustomEvent_Result;                         // 0x0349(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x034A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6A1C[0x1];                                     // 0x034B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_8;            // 0x034C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_6A1D[0x4];                                     // 0x035C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0360(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0370(0x0018)()
};
static_assert(alignof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft) == 0x000008, "Wrong alignment on PlayerCraft_C_ExecuteUbergraph_PlayerCraft");
static_assert(sizeof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft) == 0x000388, "Wrong size on PlayerCraft_C_ExecuteUbergraph_PlayerCraft");
static_assert(offsetof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft, EntryPoint) == 0x000000, "Member 'PlayerCraft_C_ExecuteUbergraph_PlayerCraft::EntryPoint' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'PlayerCraft_C_ExecuteUbergraph_PlayerCraft::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'PlayerCraft_C_ExecuteUbergraph_PlayerCraft::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft, Temp_bool_Variable) == 0x000024, "Member 'PlayerCraft_C_ExecuteUbergraph_PlayerCraft::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft, CallFunc_Create_ReturnValue) == 0x000028, "Member 'PlayerCraft_C_ExecuteUbergraph_PlayerCraft::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft, K2Node_CreateDelegate_OutputDelegate_2) == 0x000030, "Member 'PlayerCraft_C_ExecuteUbergraph_PlayerCraft::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft, CallFunc_GetPlayerController_ReturnValue) == 0x000040, "Member 'PlayerCraft_C_ExecuteUbergraph_PlayerCraft::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000048, "Member 'PlayerCraft_C_ExecuteUbergraph_PlayerCraft::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'PlayerCraft_C_ExecuteUbergraph_PlayerCraft::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft, K2Node_CreateDelegate_OutputDelegate_3) == 0x000054, "Member 'PlayerCraft_C_ExecuteUbergraph_PlayerCraft::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft, CallFunc_GetCraftComponent_ReturnValue) == 0x000068, "Member 'PlayerCraft_C_ExecuteUbergraph_PlayerCraft::CallFunc_GetCraftComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft, CallFunc_GetPlayerRecepi_ReturnValue) == 0x000070, "Member 'PlayerCraft_C_ExecuteUbergraph_PlayerCraft::CallFunc_GetPlayerRecepi_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft, CallFunc_GetActiveWidget_ReturnValue) == 0x000080, "Member 'PlayerCraft_C_ExecuteUbergraph_PlayerCraft::CallFunc_GetActiveWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000088, "Member 'PlayerCraft_C_ExecuteUbergraph_PlayerCraft::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft, K2Node_CustomEvent_ErrorCode_1) == 0x00008C, "Member 'PlayerCraft_C_ExecuteUbergraph_PlayerCraft::K2Node_CustomEvent_ErrorCode_1' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft, K2Node_CustomEvent_IsSuccess) == 0x000090, "Member 'PlayerCraft_C_ExecuteUbergraph_PlayerCraft::K2Node_CustomEvent_IsSuccess' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft, K2Node_CustomEvent_isCritical_1) == 0x000091, "Member 'PlayerCraft_C_ExecuteUbergraph_PlayerCraft::K2Node_CustomEvent_isCritical_1' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft, K2Node_CustomEvent_ItemUniqueId) == 0x000098, "Member 'PlayerCraft_C_ExecuteUbergraph_PlayerCraft::K2Node_CustomEvent_ItemUniqueId' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft, K2Node_CustomEvent_TotalAmount_1) == 0x0000A8, "Member 'PlayerCraft_C_ExecuteUbergraph_PlayerCraft::K2Node_CustomEvent_TotalAmount_1' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft, K2Node_CustomEvent_SaleAmount_1) == 0x0000AC, "Member 'PlayerCraft_C_ExecuteUbergraph_PlayerCraft::K2Node_CustomEvent_SaleAmount_1' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft, K2Node_CustomEvent_SaleProfits_1) == 0x0000B0, "Member 'PlayerCraft_C_ExecuteUbergraph_PlayerCraft::K2Node_CustomEvent_SaleProfits_1' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000B4, "Member 'PlayerCraft_C_ExecuteUbergraph_PlayerCraft::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x0000B5, "Member 'PlayerCraft_C_ExecuteUbergraph_PlayerCraft::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x0000B6, "Member 'PlayerCraft_C_ExecuteUbergraph_PlayerCraft::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft, CallFunc_BooleanOR_ReturnValue) == 0x0000B7, "Member 'PlayerCraft_C_ExecuteUbergraph_PlayerCraft::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft, CallFunc_GetSBRetMessage_ReturnValue) == 0x0000B8, "Member 'PlayerCraft_C_ExecuteUbergraph_PlayerCraft::CallFunc_GetSBRetMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft, CallFunc_Conv_StringToText_ReturnValue) == 0x0000C8, "Member 'PlayerCraft_C_ExecuteUbergraph_PlayerCraft::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft, CallFunc_GetIsCritical_isCritical) == 0x0000E0, "Member 'PlayerCraft_C_ExecuteUbergraph_PlayerCraft::CallFunc_GetIsCritical_isCritical' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft, Temp_bool_Variable_1) == 0x0000E1, "Member 'PlayerCraft_C_ExecuteUbergraph_PlayerCraft::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft, CallFunc_MakeLiteralByte_ReturnValue) == 0x0000E2, "Member 'PlayerCraft_C_ExecuteUbergraph_PlayerCraft::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft, CallFunc_GetPlayerController_ReturnValue_1) == 0x0000E8, "Member 'PlayerCraft_C_ExecuteUbergraph_PlayerCraft::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft, K2Node_DynamicCast_AsSBPlayer_Controller_1) == 0x0000F0, "Member 'PlayerCraft_C_ExecuteUbergraph_PlayerCraft::K2Node_DynamicCast_AsSBPlayer_Controller_1' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft, K2Node_DynamicCast_bSuccess_1) == 0x0000F8, "Member 'PlayerCraft_C_ExecuteUbergraph_PlayerCraft::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft, CallFunc_GetCraftComponent_ReturnValue_1) == 0x000100, "Member 'PlayerCraft_C_ExecuteUbergraph_PlayerCraft::CallFunc_GetCraftComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft, CallFunc_GetMasterDataManager_IsValid) == 0x000108, "Member 'PlayerCraft_C_ExecuteUbergraph_PlayerCraft::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft, CallFunc_GetMasterDataManager_ReturnValue) == 0x000110, "Member 'PlayerCraft_C_ExecuteUbergraph_PlayerCraft::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft, K2Node_CustomEvent_Result_1) == 0x000118, "Member 'PlayerCraft_C_ExecuteUbergraph_PlayerCraft::K2Node_CustomEvent_Result_1' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft, CallFunc_GetTextFromAsset_ReturnValue) == 0x000120, "Member 'PlayerCraft_C_ExecuteUbergraph_PlayerCraft::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000130, "Member 'PlayerCraft_C_ExecuteUbergraph_PlayerCraft::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000148, "Member 'PlayerCraft_C_ExecuteUbergraph_PlayerCraft::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft, K2Node_CreateDelegate_OutputDelegate_4) == 0x00014C, "Member 'PlayerCraft_C_ExecuteUbergraph_PlayerCraft::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft, CallFunc_PlaySE_ReturnValue) == 0x00015C, "Member 'PlayerCraft_C_ExecuteUbergraph_PlayerCraft::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft, K2Node_CreateDelegate_OutputDelegate_5) == 0x000160, "Member 'PlayerCraft_C_ExecuteUbergraph_PlayerCraft::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft, K2Node_CreateDelegate_OutputDelegate_6) == 0x000170, "Member 'PlayerCraft_C_ExecuteUbergraph_PlayerCraft::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft, CallFunc_Create_ReturnValue_1) == 0x000180, "Member 'PlayerCraft_C_ExecuteUbergraph_PlayerCraft::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft, CallFunc_GetLastCraftStorage_StorageType) == 0x000188, "Member 'PlayerCraft_C_ExecuteUbergraph_PlayerCraft::CallFunc_GetLastCraftStorage_StorageType' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft, K2Node_ComponentBoundEvent_LockInput) == 0x00018C, "Member 'PlayerCraft_C_ExecuteUbergraph_PlayerCraft::K2Node_ComponentBoundEvent_LockInput' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft, CallFunc_Not_PreBool_ReturnValue) == 0x00018D, "Member 'PlayerCraft_C_ExecuteUbergraph_PlayerCraft::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft, CallFunc_GetLastCraftStorage_StorageType_1) == 0x000190, "Member 'PlayerCraft_C_ExecuteUbergraph_PlayerCraft::CallFunc_GetLastCraftStorage_StorageType_1' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft, CallFunc_GetCraftNum_Num) == 0x000194, "Member 'PlayerCraft_C_ExecuteUbergraph_PlayerCraft::CallFunc_GetCraftNum_Num' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft, CallFunc_GetAdventurerRank_ReturnValue) == 0x000198, "Member 'PlayerCraft_C_ExecuteUbergraph_PlayerCraft::CallFunc_GetAdventurerRank_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft, CallFunc_PlaySE_ReturnValue_1) == 0x00019C, "Member 'PlayerCraft_C_ExecuteUbergraph_PlayerCraft::CallFunc_PlaySE_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft, K2Node_CustomEvent_ErrorCode) == 0x0001A0, "Member 'PlayerCraft_C_ExecuteUbergraph_PlayerCraft::K2Node_CustomEvent_ErrorCode' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft, K2Node_CustomEvent_isCritical) == 0x0001A4, "Member 'PlayerCraft_C_ExecuteUbergraph_PlayerCraft::K2Node_CustomEvent_isCritical' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft, K2Node_CustomEvent_ItemUniqueids) == 0x0001A8, "Member 'PlayerCraft_C_ExecuteUbergraph_PlayerCraft::K2Node_CustomEvent_ItemUniqueids' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft, K2Node_CustomEvent_CriticalNum) == 0x0001B8, "Member 'PlayerCraft_C_ExecuteUbergraph_PlayerCraft::K2Node_CustomEvent_CriticalNum' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft, K2Node_CustomEvent_isFail) == 0x0001BC, "Member 'PlayerCraft_C_ExecuteUbergraph_PlayerCraft::K2Node_CustomEvent_isFail' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft, K2Node_CustomEvent_TotalAmount) == 0x0001C0, "Member 'PlayerCraft_C_ExecuteUbergraph_PlayerCraft::K2Node_CustomEvent_TotalAmount' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft, K2Node_CustomEvent_Criticals) == 0x0001C8, "Member 'PlayerCraft_C_ExecuteUbergraph_PlayerCraft::K2Node_CustomEvent_Criticals' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft, K2Node_CustomEvent_SaleAmount) == 0x0001D8, "Member 'PlayerCraft_C_ExecuteUbergraph_PlayerCraft::K2Node_CustomEvent_SaleAmount' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft, K2Node_CustomEvent_SaleProfits) == 0x0001DC, "Member 'PlayerCraft_C_ExecuteUbergraph_PlayerCraft::K2Node_CustomEvent_SaleProfits' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft, CallFunc_GetSBRetMessage_ReturnValue_1) == 0x0001E0, "Member 'PlayerCraft_C_ExecuteUbergraph_PlayerCraft::CallFunc_GetSBRetMessage_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft, CallFunc_EqualEqual_IntInt_ReturnValue_3) == 0x0001F0, "Member 'PlayerCraft_C_ExecuteUbergraph_PlayerCraft::CallFunc_EqualEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0001F8, "Member 'PlayerCraft_C_ExecuteUbergraph_PlayerCraft::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft, K2Node_Event_Recepi) == 0x000210, "Member 'PlayerCraft_C_ExecuteUbergraph_PlayerCraft::K2Node_Event_Recepi' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft, K2Node_CreateDelegate_OutputDelegate_7) == 0x000218, "Member 'PlayerCraft_C_ExecuteUbergraph_PlayerCraft::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft, CallFunc_FindCraftMasterData_isExists) == 0x000228, "Member 'PlayerCraft_C_ExecuteUbergraph_PlayerCraft::CallFunc_FindCraftMasterData_isExists' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft, CallFunc_FindCraftMasterData_ReturnValue) == 0x000230, "Member 'PlayerCraft_C_ExecuteUbergraph_PlayerCraft::CallFunc_FindCraftMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft, K2Node_MakeStruct_SlateColor) == 0x0002B8, "Member 'PlayerCraft_C_ExecuteUbergraph_PlayerCraft::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft, K2Node_CustomEvent_WhiteColor) == 0x0002E0, "Member 'PlayerCraft_C_ExecuteUbergraph_PlayerCraft::K2Node_CustomEvent_WhiteColor' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft, CallFunc_GetImpossibleColor_ReturnValue) == 0x0002E8, "Member 'PlayerCraft_C_ExecuteUbergraph_PlayerCraft::CallFunc_GetImpossibleColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft, K2Node_Select_Default) == 0x000310, "Member 'PlayerCraft_C_ExecuteUbergraph_PlayerCraft::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft, Temp_bool_Variable_2) == 0x000338, "Member 'PlayerCraft_C_ExecuteUbergraph_PlayerCraft::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft, K2Node_Select_Default_1) == 0x000340, "Member 'PlayerCraft_C_ExecuteUbergraph_PlayerCraft::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft, CallFunc_Less_IntInt_ReturnValue) == 0x000348, "Member 'PlayerCraft_C_ExecuteUbergraph_PlayerCraft::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft, K2Node_CustomEvent_Result) == 0x000349, "Member 'PlayerCraft_C_ExecuteUbergraph_PlayerCraft::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft, K2Node_Select_Default_2) == 0x00034A, "Member 'PlayerCraft_C_ExecuteUbergraph_PlayerCraft::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft, K2Node_CreateDelegate_OutputDelegate_8) == 0x00034C, "Member 'PlayerCraft_C_ExecuteUbergraph_PlayerCraft::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000360, "Member 'PlayerCraft_C_ExecuteUbergraph_PlayerCraft::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_ExecuteUbergraph_PlayerCraft, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000370, "Member 'PlayerCraft_C_ExecuteUbergraph_PlayerCraft::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");

// Function PlayerCraft.PlayerCraft_C.AdventureBoardError_Event
// 0x0001 (0x0001 - 0x0000)
struct PlayerCraft_C_AdventureBoardError_Event final
{
public:
	EDialogResult                                 Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerCraft_C_AdventureBoardError_Event) == 0x000001, "Wrong alignment on PlayerCraft_C_AdventureBoardError_Event");
static_assert(sizeof(PlayerCraft_C_AdventureBoardError_Event) == 0x000001, "Wrong size on PlayerCraft_C_AdventureBoardError_Event");
static_assert(offsetof(PlayerCraft_C_AdventureBoardError_Event, Result) == 0x000000, "Member 'PlayerCraft_C_AdventureBoardError_Event::Result' has a wrong offset!");

// Function PlayerCraft.PlayerCraft_C.SetColorChangeMoney_����_1
// 0x0001 (0x0001 - 0x0000)
struct PlayerCraft_C_SetColorChangeMoney______1 final
{
public:
	bool                                          WhiteColor;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerCraft_C_SetColorChangeMoney______1) == 0x000001, "Wrong alignment on PlayerCraft_C_SetColorChangeMoney______1");
static_assert(sizeof(PlayerCraft_C_SetColorChangeMoney______1) == 0x000001, "Wrong size on PlayerCraft_C_SetColorChangeMoney______1");
static_assert(offsetof(PlayerCraft_C_SetColorChangeMoney______1, WhiteColor) == 0x000000, "Member 'PlayerCraft_C_SetColorChangeMoney______1::WhiteColor' has a wrong offset!");

// Function PlayerCraft.PlayerCraft_C.OnSelectRecepi
// 0x0008 (0x0008 - 0x0000)
struct PlayerCraft_C_OnSelectRecepi final
{
public:
	struct FCharacterCraftRecepi                  Recepi;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(PlayerCraft_C_OnSelectRecepi) == 0x000004, "Wrong alignment on PlayerCraft_C_OnSelectRecepi");
static_assert(sizeof(PlayerCraft_C_OnSelectRecepi) == 0x000008, "Wrong size on PlayerCraft_C_OnSelectRecepi");
static_assert(offsetof(PlayerCraft_C_OnSelectRecepi, Recepi) == 0x000000, "Member 'PlayerCraft_C_OnSelectRecepi::Recepi' has a wrong offset!");

// Function PlayerCraft.PlayerCraft_C.OnMultiCompl
// 0x0040 (0x0040 - 0x0000)
struct PlayerCraft_C_OnMultiCompl final
{
public:
	int32                                         ErrorCode;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsCritical;                                        // 0x0004(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A1E[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         ItemUniqueids;                                     // 0x0008(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         CriticalNum;                                       // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsFail;                                            // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A1F[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TotalAmount;                                       // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6A20[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<bool>                                  Criticals;                                         // 0x0028(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         Param_SaleAmount;                                  // 0x0038(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_SaleProfits;                                 // 0x003C(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerCraft_C_OnMultiCompl) == 0x000008, "Wrong alignment on PlayerCraft_C_OnMultiCompl");
static_assert(sizeof(PlayerCraft_C_OnMultiCompl) == 0x000040, "Wrong size on PlayerCraft_C_OnMultiCompl");
static_assert(offsetof(PlayerCraft_C_OnMultiCompl, ErrorCode) == 0x000000, "Member 'PlayerCraft_C_OnMultiCompl::ErrorCode' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_OnMultiCompl, IsCritical) == 0x000004, "Member 'PlayerCraft_C_OnMultiCompl::IsCritical' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_OnMultiCompl, ItemUniqueids) == 0x000008, "Member 'PlayerCraft_C_OnMultiCompl::ItemUniqueids' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_OnMultiCompl, CriticalNum) == 0x000018, "Member 'PlayerCraft_C_OnMultiCompl::CriticalNum' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_OnMultiCompl, IsFail) == 0x00001C, "Member 'PlayerCraft_C_OnMultiCompl::IsFail' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_OnMultiCompl, TotalAmount) == 0x000020, "Member 'PlayerCraft_C_OnMultiCompl::TotalAmount' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_OnMultiCompl, Criticals) == 0x000028, "Member 'PlayerCraft_C_OnMultiCompl::Criticals' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_OnMultiCompl, Param_SaleAmount) == 0x000038, "Member 'PlayerCraft_C_OnMultiCompl::Param_SaleAmount' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_OnMultiCompl, Param_SaleProfits) == 0x00003C, "Member 'PlayerCraft_C_OnMultiCompl::Param_SaleProfits' has a wrong offset!");

// Function PlayerCraft.PlayerCraft_C.BndEvt__PlayerCraft_CraftList_K2Node_ComponentBoundEvent_1_SetCancelLock__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct PlayerCraft_C_BndEvt__PlayerCraft_CraftList_K2Node_ComponentBoundEvent_1_SetCancelLock__DelegateSignature final
{
public:
	bool                                          Param_LockInput;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerCraft_C_BndEvt__PlayerCraft_CraftList_K2Node_ComponentBoundEvent_1_SetCancelLock__DelegateSignature) == 0x000001, "Wrong alignment on PlayerCraft_C_BndEvt__PlayerCraft_CraftList_K2Node_ComponentBoundEvent_1_SetCancelLock__DelegateSignature");
static_assert(sizeof(PlayerCraft_C_BndEvt__PlayerCraft_CraftList_K2Node_ComponentBoundEvent_1_SetCancelLock__DelegateSignature) == 0x000001, "Wrong size on PlayerCraft_C_BndEvt__PlayerCraft_CraftList_K2Node_ComponentBoundEvent_1_SetCancelLock__DelegateSignature");
static_assert(offsetof(PlayerCraft_C_BndEvt__PlayerCraft_CraftList_K2Node_ComponentBoundEvent_1_SetCancelLock__DelegateSignature, Param_LockInput) == 0x000000, "Member 'PlayerCraft_C_BndEvt__PlayerCraft_CraftList_K2Node_ComponentBoundEvent_1_SetCancelLock__DelegateSignature::Param_LockInput' has a wrong offset!");

// Function PlayerCraft.PlayerCraft_C.OnSelect
// 0x0001 (0x0001 - 0x0000)
struct PlayerCraft_C_OnSelect final
{
public:
	EDialogResult                                 Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerCraft_C_OnSelect) == 0x000001, "Wrong alignment on PlayerCraft_C_OnSelect");
static_assert(sizeof(PlayerCraft_C_OnSelect) == 0x000001, "Wrong size on PlayerCraft_C_OnSelect");
static_assert(offsetof(PlayerCraft_C_OnSelect, Result) == 0x000000, "Member 'PlayerCraft_C_OnSelect::Result' has a wrong offset!");

// Function PlayerCraft.PlayerCraft_C.OnComplete
// 0x0028 (0x0028 - 0x0000)
struct PlayerCraft_C_OnComplete final
{
public:
	int32                                         ErrorCode;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsSuccess;                                         // 0x0004(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsCritical;                                        // 0x0005(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A21[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ItemUniqueId;                                      // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         TotalAmount;                                       // 0x0018(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_SaleAmount;                                  // 0x001C(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_SaleProfits;                                 // 0x0020(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerCraft_C_OnComplete) == 0x000008, "Wrong alignment on PlayerCraft_C_OnComplete");
static_assert(sizeof(PlayerCraft_C_OnComplete) == 0x000028, "Wrong size on PlayerCraft_C_OnComplete");
static_assert(offsetof(PlayerCraft_C_OnComplete, ErrorCode) == 0x000000, "Member 'PlayerCraft_C_OnComplete::ErrorCode' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_OnComplete, IsSuccess) == 0x000004, "Member 'PlayerCraft_C_OnComplete::IsSuccess' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_OnComplete, IsCritical) == 0x000005, "Member 'PlayerCraft_C_OnComplete::IsCritical' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_OnComplete, ItemUniqueId) == 0x000008, "Member 'PlayerCraft_C_OnComplete::ItemUniqueId' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_OnComplete, TotalAmount) == 0x000018, "Member 'PlayerCraft_C_OnComplete::TotalAmount' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_OnComplete, Param_SaleAmount) == 0x00001C, "Member 'PlayerCraft_C_OnComplete::Param_SaleAmount' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_OnComplete, Param_SaleProfits) == 0x000020, "Member 'PlayerCraft_C_OnComplete::Param_SaleProfits' has a wrong offset!");

// Function PlayerCraft.PlayerCraft_C.UpdateTimeoutVisible
// 0x01A8 (0x01A8 - 0x0000)
struct PlayerCraft_C_UpdateTimeoutVisible final
{
public:
	bool                                          ItemTermOff;                                       // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEventTermActive_ReturnValue;            // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ContainsTimeoutRecepiMaterial_ReturnValue; // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanNOR_ReturnValue;                   // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6A22[0x1];                                     // 0x000B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetAdventurerRank_ReturnValue;            // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindWeaponMaster_bIsValid;                // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A23[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponMasterData                    CallFunc_FindWeaponMaster_WeaponMaster;            // 0x0018(0x00B0)()
	bool                                          CallFunc_FindItemMaster_bIsValid;                  // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A24[0x7];                                     // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_FindItemMaster_ItemMaster;                // 0x00D0(0x00D0)()
	bool                                          CallFunc_IsEventTermActive_ReturnValue_1;          // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEmpty_ReturnValue_1;                    // 0x01A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEventTermActive_ReturnValue_2;          // 0x01A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanNOR_ReturnValue_1;                 // 0x01A3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEmpty_ReturnValue_2;                    // 0x01A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanNOR_ReturnValue_2;                 // 0x01A5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerCraft_C_UpdateTimeoutVisible) == 0x000008, "Wrong alignment on PlayerCraft_C_UpdateTimeoutVisible");
static_assert(sizeof(PlayerCraft_C_UpdateTimeoutVisible) == 0x0001A8, "Wrong size on PlayerCraft_C_UpdateTimeoutVisible");
static_assert(offsetof(PlayerCraft_C_UpdateTimeoutVisible, ItemTermOff) == 0x000000, "Member 'PlayerCraft_C_UpdateTimeoutVisible::ItemTermOff' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_UpdateTimeoutVisible, Temp_bool_Variable) == 0x000001, "Member 'PlayerCraft_C_UpdateTimeoutVisible::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_UpdateTimeoutVisible, CallFunc_MakeLiteralByte_ReturnValue) == 0x000002, "Member 'PlayerCraft_C_UpdateTimeoutVisible::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_UpdateTimeoutVisible, CallFunc_IsEventTermActive_ReturnValue) == 0x000003, "Member 'PlayerCraft_C_UpdateTimeoutVisible::CallFunc_IsEventTermActive_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_UpdateTimeoutVisible, CallFunc_IsEmpty_ReturnValue) == 0x000004, "Member 'PlayerCraft_C_UpdateTimeoutVisible::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_UpdateTimeoutVisible, CallFunc_ContainsTimeoutRecepiMaterial_ReturnValue) == 0x000005, "Member 'PlayerCraft_C_UpdateTimeoutVisible::CallFunc_ContainsTimeoutRecepiMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_UpdateTimeoutVisible, CallFunc_BooleanNOR_ReturnValue) == 0x000006, "Member 'PlayerCraft_C_UpdateTimeoutVisible::CallFunc_BooleanNOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_UpdateTimeoutVisible, CallFunc_BooleanOR_ReturnValue) == 0x000007, "Member 'PlayerCraft_C_UpdateTimeoutVisible::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_UpdateTimeoutVisible, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000008, "Member 'PlayerCraft_C_UpdateTimeoutVisible::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_UpdateTimeoutVisible, CallFunc_BooleanOR_ReturnValue_1) == 0x000009, "Member 'PlayerCraft_C_UpdateTimeoutVisible::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_UpdateTimeoutVisible, K2Node_Select_Default) == 0x00000A, "Member 'PlayerCraft_C_UpdateTimeoutVisible::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_UpdateTimeoutVisible, CallFunc_GetAdventurerRank_ReturnValue) == 0x00000C, "Member 'PlayerCraft_C_UpdateTimeoutVisible::CallFunc_GetAdventurerRank_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_UpdateTimeoutVisible, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000010, "Member 'PlayerCraft_C_UpdateTimeoutVisible::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_UpdateTimeoutVisible, CallFunc_FindWeaponMaster_bIsValid) == 0x000011, "Member 'PlayerCraft_C_UpdateTimeoutVisible::CallFunc_FindWeaponMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_UpdateTimeoutVisible, CallFunc_FindWeaponMaster_WeaponMaster) == 0x000018, "Member 'PlayerCraft_C_UpdateTimeoutVisible::CallFunc_FindWeaponMaster_WeaponMaster' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_UpdateTimeoutVisible, CallFunc_FindItemMaster_bIsValid) == 0x0000C8, "Member 'PlayerCraft_C_UpdateTimeoutVisible::CallFunc_FindItemMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_UpdateTimeoutVisible, CallFunc_FindItemMaster_ItemMaster) == 0x0000D0, "Member 'PlayerCraft_C_UpdateTimeoutVisible::CallFunc_FindItemMaster_ItemMaster' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_UpdateTimeoutVisible, CallFunc_IsEventTermActive_ReturnValue_1) == 0x0001A0, "Member 'PlayerCraft_C_UpdateTimeoutVisible::CallFunc_IsEventTermActive_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_UpdateTimeoutVisible, CallFunc_IsEmpty_ReturnValue_1) == 0x0001A1, "Member 'PlayerCraft_C_UpdateTimeoutVisible::CallFunc_IsEmpty_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_UpdateTimeoutVisible, CallFunc_IsEventTermActive_ReturnValue_2) == 0x0001A2, "Member 'PlayerCraft_C_UpdateTimeoutVisible::CallFunc_IsEventTermActive_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_UpdateTimeoutVisible, CallFunc_BooleanNOR_ReturnValue_1) == 0x0001A3, "Member 'PlayerCraft_C_UpdateTimeoutVisible::CallFunc_BooleanNOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_UpdateTimeoutVisible, CallFunc_IsEmpty_ReturnValue_2) == 0x0001A4, "Member 'PlayerCraft_C_UpdateTimeoutVisible::CallFunc_IsEmpty_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerCraft_C_UpdateTimeoutVisible, CallFunc_BooleanNOR_ReturnValue_2) == 0x0001A5, "Member 'PlayerCraft_C_UpdateTimeoutVisible::CallFunc_BooleanNOR_ReturnValue_2' has a wrong offset!");

}

