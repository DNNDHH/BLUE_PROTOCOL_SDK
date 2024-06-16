#pragma once

 

// Package: UMG_LiquidMemoryShop

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.OnClose__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct UMG_LiquidMemoryShop_C_OnClose__DelegateSignature final
{
public:
	bool                                          Param_IsLiquidMemoryUsed;                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_LiquidMemoryShop_C_OnClose__DelegateSignature) == 0x000001, "Wrong alignment on UMG_LiquidMemoryShop_C_OnClose__DelegateSignature");
static_assert(sizeof(UMG_LiquidMemoryShop_C_OnClose__DelegateSignature) == 0x000001, "Wrong size on UMG_LiquidMemoryShop_C_OnClose__DelegateSignature");
static_assert(offsetof(UMG_LiquidMemoryShop_C_OnClose__DelegateSignature, Param_IsLiquidMemoryUsed) == 0x000000, "Member 'UMG_LiquidMemoryShop_C_OnClose__DelegateSignature::Param_IsLiquidMemoryUsed' has a wrong offset!");

// Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.ExecuteUbergraph_UMG_LiquidMemoryShop
// 0x0490 (0x0490 - 0x0000)
struct UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UUMG_LiquidMemoryProductListItem_C* InItem)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UUMG_LiquidMemoryProductListItem_C* InItem)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UUMG_LiquidMemoryProductListItem_C* InItem)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0024(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52D6[0x6];                                     // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerLiquidMemoryComponent*         CallFunc_GetPlayerLiquidMemoryComponent_ReturnValue; // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52D7[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 InRetCode, TArray<struct FSBLiquidMemoryInfo>& InUpdatedLiquidMemoryInfos)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x0054(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 InRetCode, TArray<struct FSBLiquidMemoryInfo>& InUpdatedLiquidMemoryInfos)> K2Node_CreateDelegate_OutputDelegate_4;            // 0x0064(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_52D8[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_1;      // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52D9[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerLiquidMemoryComponent*         CallFunc_GetPlayerLiquidMemoryComponent_ReturnValue_1; // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52DA[0x3];                                     // 0x0091(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 InRetCode, TArray<struct FSBLiquidMemoryInfo>& InUpdatedLiquidMemoryInfos)> K2Node_CreateDelegate_OutputDelegate_5;            // 0x0094(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52DB[0x3];                                     // 0x00A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 InRetCode, TArray<struct FSBLiquidMemoryInfo>& InUpdatedLiquidMemoryInfos)> K2Node_CreateDelegate_OutputDelegate_6;            // 0x00B0(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_GetOwnActivatedLiquidMemoryEfficacyValue_ByCategoryAndEfficacyType_OutIsValid; // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52DC[0x3];                                     // 0x00C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetOwnActivatedLiquidMemoryEfficacyValue_ByCategoryAndEfficacyType_ReturnValue; // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_2;      // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52DD[0x7];                                     // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerLiquidMemoryComponent*         CallFunc_GetPlayerLiquidMemoryComponent_ReturnValue_2; // 0x00D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x00E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52DE[0x2];                                     // 0x00E2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52DF[0x3];                                     // 0x00E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue;                  // 0x00F8(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue_1;                // 0x0100(0x0008)(NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsLiquidMemoryUsed;             // 0x010C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x010D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52E0[0x2];                                     // 0x010E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_LiquidMemoryProductListItem_C*     K2Node_CustomEvent_InItem_2;                       // 0x0110(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_LiquidMemoryProductListItem_C*     K2Node_CustomEvent_InItem_1;                       // 0x0118(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_LiquidMemoryProductListItem_C*     K2Node_CustomEvent_InItem;                         // 0x0120(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            K2Node_CustomEvent_InWidget;                       // 0x0128(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCurrUseBottleNum_OutBottleNum;         // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetLiquidMemoryId_OutProductItemIndex;    // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_7;                    // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_1;            // 0x0139(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52E1[0x2];                                     // 0x013A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_8;                    // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52E2[0x3];                                     // 0x0141(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_2;            // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0149(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52E3[0x2];                                     // 0x014A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetMoney_ReturnValue;                     // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0150(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52E4[0x7];                                     // 0x0161(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0168(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0180(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0190(0x0018)()
	EDialogResult                                 K2Node_CustomEvent_Result;                         // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x01A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52E5[0x2];                                     // 0x01AA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate_7;            // 0x01AC(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_GetSystemMessageManager_IsValid;          // 0x01BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52E6[0x3];                                     // 0x01BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBSystemMessageManager*                CallFunc_GetSystemMessageManager_ReturnValue;      // 0x01C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_3;      // 0x01C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_9;                    // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52E7[0x7];                                     // 0x01D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerLiquidMemoryComponent*         CallFunc_GetPlayerLiquidMemoryComponent_ReturnValue_3; // 0x01D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_10;                   // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52E8[0x3];                                     // 0x01E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_InRetCode_1;                    // 0x01E4(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBLiquidMemoryInfo>            K2Node_CustomEvent_InUpdatedLiquidMemoryInfos_1;   // 0x01E8(0x0010)(ConstParm, ReferenceParm)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52E9[0x7];                                     // 0x01F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_2;           // 0x0200(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0210(0x0018)()
	class FText                                   K2Node_CustomEvent_InMessageText;                  // 0x0228(0x0018)()
	int32                                         CallFunc_GetCurrUseBottleNum_OutBottleNum_1;       // 0x0240(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_3;            // 0x0244(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52EA[0x3];                                     // 0x0245(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_InRetCode;                      // 0x0248(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_52EB[0x4];                                     // 0x024C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBLiquidMemoryInfo>            K2Node_CustomEvent_InUpdatedLiquidMemoryInfos;     // 0x0250(0x0010)(ConstParm, ReferenceParm)
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue;              // 0x0260(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0270(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52EC[0x7];                                     // 0x0271(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0278(0x0018)()
	class UUMG_LiquidMemoryActivateListItem_C*    CallFunc_Create_ReturnValue;                       // 0x0290(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue_1;                     // 0x0298(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x029C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52ED[0x3];                                     // 0x029D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_3;           // 0x02A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_4;          // 0x02B0(0x0018)()
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_1;       // 0x02C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x02D0(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x02F8(0x0028)()
	class UBP_Dialog_C*                           CallFunc_Create_ReturnValue_1;                     // 0x0320(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue_2;                     // 0x0328(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x032C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52EE[0x3];                                     // 0x032D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PlaySE_ReturnValue_3;                     // 0x0330(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0334(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52EF[0x3];                                     // 0x0335(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0338(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBLiquidMemoryAccumulateTokenInfo> CallFunc_GetLiquidMemoryAccumulateTokenInfoMaster_ReturnValue; // 0x0340(0x0010)(ConstParm, ReferenceParm)
	class USBToken*                               CallFunc_SpawnObject_ReturnValue;                  // 0x0350(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBTokenStates                         K2Node_CustomEvent_States;                         // 0x0358(0x0010)(ConstParm)
	TDelegate<void(struct FSBTokenStates& States)> K2Node_CreateDelegate_OutputDelegate_8;            // 0x0368(0x0010)(ZeroConstructor, NoDestructor)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_4;      // 0x0378(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_LiquidMemoryId;                 // 0x0380(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsFullCharge;                   // 0x0384(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Request_DeleteExpired_ReturnValue;        // 0x0385(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52F0[0x2];                                     // 0x0386(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0388(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0390(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52F1[0x7];                                     // 0x0391(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0398(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue_4;                     // 0x03A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue_5;                     // 0x03A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue_6;                     // 0x03A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_11;                   // 0x03AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52F2[0x3];                                     // 0x03AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x03B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_12;                   // 0x03B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52F3[0x7];                                     // 0x03B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_LiquidMemoryDetails_C*             K2Node_DynamicCast_AsUMG_Liquid_Memory_Details;    // 0x03C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x03C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52F4[0x7];                                     // 0x03C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWidget*>                        K2Node_MakeArray_Array;                            // 0x03D0(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x03E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x03E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x03E5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_13;                   // 0x03E6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52F5[0x1];                                     // 0x03E7(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 CallFunc_Map_Keys_Keys;                            // 0x03E8(0x0010)(ReferenceParm)
	TArray<int32>                                 CallFunc_IntArraySort_ReturnValue;                 // 0x03F8(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Get_Item;                           // 0x0408(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Map_Find_Value;                           // 0x040C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0410(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52F6[0x3];                                     // 0x0411(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0414(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0418(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0419(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x041A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_52F7[0x5];                                     // 0x041B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0420(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0428(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_52F8[0x4];                                     // 0x042C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_Array_Get_Item_1;                         // 0x0430(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_14;                   // 0x0438(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52F9[0x3];                                     // 0x0439(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x043C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue_1;                 // 0x0440(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_15;                   // 0x0448(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52FA[0x7];                                     // 0x0449(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_LiquidMemoryProductListItem_C*     K2Node_DynamicCast_AsUMG_Liquid_Memory_Product_List_Item; // 0x0450(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0458(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0459(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52FB[0x2];                                     // 0x045A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x045C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue_7;                     // 0x0460(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_9;            // 0x0464(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0474(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0478(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0480(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52FC[0x3];                                     // 0x0481(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0484(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_16;                   // 0x0488(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop) == 0x000008, "Wrong alignment on UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop");
static_assert(sizeof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop) == 0x000490, "Wrong size on UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, EntryPoint) == 0x000000, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::EntryPoint' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, K2Node_CreateDelegate_OutputDelegate_2) == 0x000024, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, Temp_int_Array_Index_Variable) == 0x000034, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_GetSBPlayerController_ReturnValue) == 0x000038, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000040, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_IsValid_ReturnValue) == 0x000041, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_GetPlayerLiquidMemoryComponent_ReturnValue) == 0x000048, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_GetPlayerLiquidMemoryComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_IsValid_ReturnValue_1) == 0x000050, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, K2Node_CreateDelegate_OutputDelegate_3) == 0x000054, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, K2Node_CreateDelegate_OutputDelegate_4) == 0x000064, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_GetSBPlayerController_ReturnValue_1) == 0x000078, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_GetSBPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_IsValid_ReturnValue_2) == 0x000080, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_GetPlayerLiquidMemoryComponent_ReturnValue_1) == 0x000088, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_GetPlayerLiquidMemoryComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_IsValid_ReturnValue_3) == 0x000090, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, K2Node_CreateDelegate_OutputDelegate_5) == 0x000094, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_GetNetworkDataCache_IsValid) == 0x0000A4, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_GetNetworkDataCache_ReturnValue) == 0x0000A8, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, K2Node_CreateDelegate_OutputDelegate_6) == 0x0000B0, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_GetOwnActivatedLiquidMemoryEfficacyValue_ByCategoryAndEfficacyType_OutIsValid) == 0x0000C0, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_GetOwnActivatedLiquidMemoryEfficacyValue_ByCategoryAndEfficacyType_OutIsValid' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_GetOwnActivatedLiquidMemoryEfficacyValue_ByCategoryAndEfficacyType_ReturnValue) == 0x0000C4, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_GetOwnActivatedLiquidMemoryEfficacyValue_ByCategoryAndEfficacyType_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_GetSBPlayerController_ReturnValue_2) == 0x0000C8, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_GetSBPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_IsValid_ReturnValue_4) == 0x0000D0, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_GetPlayerLiquidMemoryComponent_ReturnValue_2) == 0x0000D8, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_GetPlayerLiquidMemoryComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_IsValid_ReturnValue_5) == 0x0000E0, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_IsValid_ReturnValue_6) == 0x0000E1, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_GetChildrenCount_ReturnValue) == 0x0000E4, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_Greater_IntInt_ReturnValue) == 0x0000E8, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_Subtract_IntInt_ReturnValue) == 0x0000EC, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_PlayAnimationForward_ReturnValue) == 0x0000F0, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_K2_SetTimer_ReturnValue) == 0x0000F8, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_K2_SetTimer_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_K2_SetTimer_ReturnValue_1) == 0x000100, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_K2_SetTimer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_PlaySE_ReturnValue) == 0x000108, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, K2Node_CustomEvent_IsLiquidMemoryUsed) == 0x00010C, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::K2Node_CustomEvent_IsLiquidMemoryUsed' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_Not_PreBool_ReturnValue) == 0x00010D, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, K2Node_CustomEvent_InItem_2) == 0x000110, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::K2Node_CustomEvent_InItem_2' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, K2Node_CustomEvent_InItem_1) == 0x000118, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::K2Node_CustomEvent_InItem_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, K2Node_CustomEvent_InItem) == 0x000120, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::K2Node_CustomEvent_InItem' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, K2Node_CustomEvent_InWidget) == 0x000128, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::K2Node_CustomEvent_InWidget' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_GetCurrUseBottleNum_OutBottleNum) == 0x000130, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_GetCurrUseBottleNum_OutBottleNum' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_GetLiquidMemoryId_OutProductItemIndex) == 0x000134, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_GetLiquidMemoryId_OutProductItemIndex' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_IsValid_ReturnValue_7) == 0x000138, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_NotEqual_IntInt_ReturnValue_1) == 0x000139, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_NotEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, Temp_int_Loop_Counter_Variable) == 0x00013C, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_IsValid_ReturnValue_8) == 0x000140, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_IsValid_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_Add_IntInt_ReturnValue) == 0x000144, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_NotEqual_IntInt_ReturnValue_2) == 0x000148, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_NotEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_BooleanOR_ReturnValue) == 0x000149, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_GetMoney_ReturnValue) == 0x00014C, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_GetMoney_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_GetTextFromAsset_ReturnValue) == 0x000150, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000160, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_Conv_StringToText_ReturnValue) == 0x000168, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000180, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000190, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, K2Node_CustomEvent_Result) == 0x0001A8, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0001A9, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, K2Node_CreateDelegate_OutputDelegate_7) == 0x0001AC, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_GetSystemMessageManager_IsValid) == 0x0001BC, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_GetSystemMessageManager_IsValid' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_GetSystemMessageManager_ReturnValue) == 0x0001C0, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_GetSystemMessageManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_GetSBPlayerController_ReturnValue_3) == 0x0001C8, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_GetSBPlayerController_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_IsValid_ReturnValue_9) == 0x0001D0, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_IsValid_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_GetPlayerLiquidMemoryComponent_ReturnValue_3) == 0x0001D8, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_GetPlayerLiquidMemoryComponent_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_IsValid_ReturnValue_10) == 0x0001E0, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_IsValid_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, K2Node_CustomEvent_InRetCode_1) == 0x0001E4, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::K2Node_CustomEvent_InRetCode_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, K2Node_CustomEvent_InUpdatedLiquidMemoryInfos_1) == 0x0001E8, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::K2Node_CustomEvent_InUpdatedLiquidMemoryInfos_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0001F8, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_GetTextFromAsset_ReturnValue_2) == 0x000200, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_GetTextFromAsset_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000210, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, K2Node_CustomEvent_InMessageText) == 0x000228, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::K2Node_CustomEvent_InMessageText' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_GetCurrUseBottleNum_OutBottleNum_1) == 0x000240, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_GetCurrUseBottleNum_OutBottleNum_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_NotEqual_IntInt_ReturnValue_3) == 0x000244, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_NotEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, K2Node_CustomEvent_InRetCode) == 0x000248, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::K2Node_CustomEvent_InRetCode' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, K2Node_CustomEvent_InUpdatedLiquidMemoryInfos) == 0x000250, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::K2Node_CustomEvent_InUpdatedLiquidMemoryInfos' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_GetSBRetMessage_ReturnValue) == 0x000260, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_GetSBRetMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000270, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000278, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_Create_ReturnValue) == 0x000290, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_PlaySE_ReturnValue_1) == 0x000298, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_PlaySE_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x00029C, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_GetTextFromAsset_ReturnValue_3) == 0x0002A0, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_GetTextFromAsset_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_Conv_StringToText_ReturnValue_4) == 0x0002B0, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_Conv_StringToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_PlayAnimationForward_ReturnValue_1) == 0x0002C8, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_PlayAnimationForward_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, K2Node_MakeStruct_SlateColor) == 0x0002D0, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, K2Node_MakeStruct_SlateColor_1) == 0x0002F8, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_Create_ReturnValue_1) == 0x000320, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_PlaySE_ReturnValue_2) == 0x000328, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_PlaySE_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_Greater_IntInt_ReturnValue_1) == 0x00032C, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_PlaySE_ReturnValue_3) == 0x000330, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_PlaySE_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_GetMasterDataManager_IsValid) == 0x000334, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_GetMasterDataManager_ReturnValue) == 0x000338, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_GetLiquidMemoryAccumulateTokenInfoMaster_ReturnValue) == 0x000340, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_GetLiquidMemoryAccumulateTokenInfoMaster_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_SpawnObject_ReturnValue) == 0x000350, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, K2Node_CustomEvent_States) == 0x000358, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::K2Node_CustomEvent_States' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, K2Node_CreateDelegate_OutputDelegate_8) == 0x000368, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_GetSBPlayerController_ReturnValue_4) == 0x000378, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_GetSBPlayerController_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, K2Node_CustomEvent_LiquidMemoryId) == 0x000380, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::K2Node_CustomEvent_LiquidMemoryId' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, K2Node_CustomEvent_IsFullCharge) == 0x000384, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::K2Node_CustomEvent_IsFullCharge' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_Request_DeleteExpired_ReturnValue) == 0x000385, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_Request_DeleteExpired_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_PlayAnimation_ReturnValue) == 0x000388, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, Temp_bool_Variable) == 0x000390, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_PlayAnimation_ReturnValue_1) == 0x000398, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_PlaySE_ReturnValue_4) == 0x0003A0, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_PlaySE_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_PlaySE_ReturnValue_5) == 0x0003A4, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_PlaySE_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_PlaySE_ReturnValue_6) == 0x0003A8, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_PlaySE_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_IsValid_ReturnValue_11) == 0x0003AC, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_IsValid_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_GetChildAt_ReturnValue) == 0x0003B0, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_IsValid_ReturnValue_12) == 0x0003B8, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_IsValid_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, K2Node_DynamicCast_AsUMG_Liquid_Memory_Details) == 0x0003C0, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::K2Node_DynamicCast_AsUMG_Liquid_Memory_Details' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, K2Node_DynamicCast_bSuccess) == 0x0003C8, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, K2Node_MakeArray_Array) == 0x0003D0, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_Array_Length_ReturnValue) == 0x0003E0, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_MakeLiteralByte_ReturnValue) == 0x0003E4, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_Not_PreBool_ReturnValue_1) == 0x0003E5, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_IsValid_ReturnValue_13) == 0x0003E6, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_IsValid_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_Map_Keys_Keys) == 0x0003E8, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_IntArraySort_ReturnValue) == 0x0003F8, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_IntArraySort_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_Array_Get_Item) == 0x000408, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_Map_Find_Value) == 0x00040C, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_Map_Find_ReturnValue) == 0x000410, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_Array_Length_ReturnValue_1) == 0x000414, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000418, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_Less_IntInt_ReturnValue) == 0x000419, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, K2Node_Select_Default) == 0x00041A, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_AddChild_ReturnValue) == 0x000420, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, Temp_int_Array_Index_Variable_1) == 0x000428, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_Array_Get_Item_1) == 0x000430, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_IsValid_ReturnValue_14) == 0x000438, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_IsValid_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, Temp_int_Variable) == 0x00043C, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_GetChildAt_ReturnValue_1) == 0x000440, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_GetChildAt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_IsValid_ReturnValue_15) == 0x000448, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_IsValid_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, K2Node_DynamicCast_AsUMG_Liquid_Memory_Product_List_Item) == 0x000450, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::K2Node_DynamicCast_AsUMG_Liquid_Memory_Product_List_Item' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, K2Node_DynamicCast_bSuccess_1) == 0x000458, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000459, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_Add_IntInt_ReturnValue_1) == 0x00045C, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_PlaySE_ReturnValue_7) == 0x000460, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_PlaySE_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, K2Node_CreateDelegate_OutputDelegate_9) == 0x000464, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, Temp_int_Loop_Counter_Variable_1) == 0x000474, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000478, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_Less_IntInt_ReturnValue_1) == 0x000480, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_Add_IntInt_ReturnValue_2) == 0x000484, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop, CallFunc_IsValid_ReturnValue_16) == 0x000488, "Member 'UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop::CallFunc_IsValid_ReturnValue_16' has a wrong offset!");

// Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.OnPopupTokenList
// 0x0008 (0x0008 - 0x0000)
struct UMG_LiquidMemoryShop_C_OnPopupTokenList final
{
public:
	int32                                         LiquidMemoryId;                                    // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsFullCharge;                                      // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_LiquidMemoryShop_C_OnPopupTokenList) == 0x000004, "Wrong alignment on UMG_LiquidMemoryShop_C_OnPopupTokenList");
static_assert(sizeof(UMG_LiquidMemoryShop_C_OnPopupTokenList) == 0x000008, "Wrong size on UMG_LiquidMemoryShop_C_OnPopupTokenList");
static_assert(offsetof(UMG_LiquidMemoryShop_C_OnPopupTokenList, LiquidMemoryId) == 0x000000, "Member 'UMG_LiquidMemoryShop_C_OnPopupTokenList::LiquidMemoryId' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_OnPopupTokenList, IsFullCharge) == 0x000004, "Member 'UMG_LiquidMemoryShop_C_OnPopupTokenList::IsFullCharge' has a wrong offset!");

// Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.GetTokenList
// 0x0010 (0x0010 - 0x0000)
struct UMG_LiquidMemoryShop_C_GetTokenList final
{
public:
	struct FSBTokenStates                         States;                                            // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(UMG_LiquidMemoryShop_C_GetTokenList) == 0x000008, "Wrong alignment on UMG_LiquidMemoryShop_C_GetTokenList");
static_assert(sizeof(UMG_LiquidMemoryShop_C_GetTokenList) == 0x000010, "Wrong size on UMG_LiquidMemoryShop_C_GetTokenList");
static_assert(offsetof(UMG_LiquidMemoryShop_C_GetTokenList, States) == 0x000000, "Member 'UMG_LiquidMemoryShop_C_GetTokenList::States' has a wrong offset!");

// Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.OnAccumulateLiquidMemory_Event
// 0x0018 (0x0018 - 0x0000)
struct UMG_LiquidMemoryShop_C_OnAccumulateLiquidMemory_Event final
{
public:
	int32                                         InRetCode;                                         // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_52FD[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBLiquidMemoryInfo>            InUpdatedLiquidMemoryInfos;                        // 0x0008(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(UMG_LiquidMemoryShop_C_OnAccumulateLiquidMemory_Event) == 0x000008, "Wrong alignment on UMG_LiquidMemoryShop_C_OnAccumulateLiquidMemory_Event");
static_assert(sizeof(UMG_LiquidMemoryShop_C_OnAccumulateLiquidMemory_Event) == 0x000018, "Wrong size on UMG_LiquidMemoryShop_C_OnAccumulateLiquidMemory_Event");
static_assert(offsetof(UMG_LiquidMemoryShop_C_OnAccumulateLiquidMemory_Event, InRetCode) == 0x000000, "Member 'UMG_LiquidMemoryShop_C_OnAccumulateLiquidMemory_Event::InRetCode' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_OnAccumulateLiquidMemory_Event, InUpdatedLiquidMemoryInfos) == 0x000008, "Member 'UMG_LiquidMemoryShop_C_OnAccumulateLiquidMemory_Event::InUpdatedLiquidMemoryInfos' has a wrong offset!");

// Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.OnUseLiquidMemoryDelegate_����
// 0x0018 (0x0018 - 0x0000)
struct UMG_LiquidMemoryShop_C_OnUseLiquidMemoryDelegate_____ final
{
public:
	int32                                         InRetCode;                                         // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_52FE[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBLiquidMemoryInfo>            InUpdatedLiquidMemoryInfos;                        // 0x0008(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(UMG_LiquidMemoryShop_C_OnUseLiquidMemoryDelegate_____) == 0x000008, "Wrong alignment on UMG_LiquidMemoryShop_C_OnUseLiquidMemoryDelegate_____");
static_assert(sizeof(UMG_LiquidMemoryShop_C_OnUseLiquidMemoryDelegate_____) == 0x000018, "Wrong size on UMG_LiquidMemoryShop_C_OnUseLiquidMemoryDelegate_____");
static_assert(offsetof(UMG_LiquidMemoryShop_C_OnUseLiquidMemoryDelegate_____, InRetCode) == 0x000000, "Member 'UMG_LiquidMemoryShop_C_OnUseLiquidMemoryDelegate_____::InRetCode' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_OnUseLiquidMemoryDelegate_____, InUpdatedLiquidMemoryInfos) == 0x000008, "Member 'UMG_LiquidMemoryShop_C_OnUseLiquidMemoryDelegate_____::InUpdatedLiquidMemoryInfos' has a wrong offset!");

// Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.EndUseLiquidMemoryYesNoDialog_����
// 0x0001 (0x0001 - 0x0000)
struct UMG_LiquidMemoryShop_C_EndUseLiquidMemoryYesNoDialog_____ final
{
public:
	EDialogResult                                 Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_LiquidMemoryShop_C_EndUseLiquidMemoryYesNoDialog_____) == 0x000001, "Wrong alignment on UMG_LiquidMemoryShop_C_EndUseLiquidMemoryYesNoDialog_____");
static_assert(sizeof(UMG_LiquidMemoryShop_C_EndUseLiquidMemoryYesNoDialog_____) == 0x000001, "Wrong size on UMG_LiquidMemoryShop_C_EndUseLiquidMemoryYesNoDialog_____");
static_assert(offsetof(UMG_LiquidMemoryShop_C_EndUseLiquidMemoryYesNoDialog_____, Result) == 0x000000, "Member 'UMG_LiquidMemoryShop_C_EndUseLiquidMemoryYesNoDialog_____::Result' has a wrong offset!");

// Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.OnDetailsCloseAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct UMG_LiquidMemoryShop_C_OnDetailsCloseAnimationFinished final
{
public:
	class UUserWidget*                            InWidget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_LiquidMemoryShop_C_OnDetailsCloseAnimationFinished) == 0x000008, "Wrong alignment on UMG_LiquidMemoryShop_C_OnDetailsCloseAnimationFinished");
static_assert(sizeof(UMG_LiquidMemoryShop_C_OnDetailsCloseAnimationFinished) == 0x000008, "Wrong size on UMG_LiquidMemoryShop_C_OnDetailsCloseAnimationFinished");
static_assert(offsetof(UMG_LiquidMemoryShop_C_OnDetailsCloseAnimationFinished, InWidget) == 0x000000, "Member 'UMG_LiquidMemoryShop_C_OnDetailsCloseAnimationFinished::InWidget' has a wrong offset!");

// Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.OnListItemSelected
// 0x0008 (0x0008 - 0x0000)
struct UMG_LiquidMemoryShop_C_OnListItemSelected final
{
public:
	class UUMG_LiquidMemoryProductListItem_C*     InItem;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_LiquidMemoryShop_C_OnListItemSelected) == 0x000008, "Wrong alignment on UMG_LiquidMemoryShop_C_OnListItemSelected");
static_assert(sizeof(UMG_LiquidMemoryShop_C_OnListItemSelected) == 0x000008, "Wrong size on UMG_LiquidMemoryShop_C_OnListItemSelected");
static_assert(offsetof(UMG_LiquidMemoryShop_C_OnListItemSelected, InItem) == 0x000000, "Member 'UMG_LiquidMemoryShop_C_OnListItemSelected::InItem' has a wrong offset!");

// Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.OnListItemPurchaseNumSubbed
// 0x0008 (0x0008 - 0x0000)
struct UMG_LiquidMemoryShop_C_OnListItemPurchaseNumSubbed final
{
public:
	class UUMG_LiquidMemoryProductListItem_C*     InItem;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_LiquidMemoryShop_C_OnListItemPurchaseNumSubbed) == 0x000008, "Wrong alignment on UMG_LiquidMemoryShop_C_OnListItemPurchaseNumSubbed");
static_assert(sizeof(UMG_LiquidMemoryShop_C_OnListItemPurchaseNumSubbed) == 0x000008, "Wrong size on UMG_LiquidMemoryShop_C_OnListItemPurchaseNumSubbed");
static_assert(offsetof(UMG_LiquidMemoryShop_C_OnListItemPurchaseNumSubbed, InItem) == 0x000000, "Member 'UMG_LiquidMemoryShop_C_OnListItemPurchaseNumSubbed::InItem' has a wrong offset!");

// Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.OnListItemPurchaseNumAdded
// 0x0008 (0x0008 - 0x0000)
struct UMG_LiquidMemoryShop_C_OnListItemPurchaseNumAdded final
{
public:
	class UUMG_LiquidMemoryProductListItem_C*     InItem;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_LiquidMemoryShop_C_OnListItemPurchaseNumAdded) == 0x000008, "Wrong alignment on UMG_LiquidMemoryShop_C_OnListItemPurchaseNumAdded");
static_assert(sizeof(UMG_LiquidMemoryShop_C_OnListItemPurchaseNumAdded) == 0x000008, "Wrong size on UMG_LiquidMemoryShop_C_OnListItemPurchaseNumAdded");
static_assert(offsetof(UMG_LiquidMemoryShop_C_OnListItemPurchaseNumAdded, InItem) == 0x000000, "Member 'UMG_LiquidMemoryShop_C_OnListItemPurchaseNumAdded::InItem' has a wrong offset!");

// Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.DoClose
// 0x0001 (0x0001 - 0x0000)
struct UMG_LiquidMemoryShop_C_DoClose final
{
public:
	bool                                          Param_IsLiquidMemoryUsed;                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_LiquidMemoryShop_C_DoClose) == 0x000001, "Wrong alignment on UMG_LiquidMemoryShop_C_DoClose");
static_assert(sizeof(UMG_LiquidMemoryShop_C_DoClose) == 0x000001, "Wrong size on UMG_LiquidMemoryShop_C_DoClose");
static_assert(offsetof(UMG_LiquidMemoryShop_C_DoClose, Param_IsLiquidMemoryUsed) == 0x000000, "Member 'UMG_LiquidMemoryShop_C_DoClose::Param_IsLiquidMemoryUsed' has a wrong offset!");

// Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.ShowSystemMessage
// 0x0018 (0x0018 - 0x0000)
struct UMG_LiquidMemoryShop_C_ShowSystemMessage final
{
public:
	class FText                                   InMessageText;                                     // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(UMG_LiquidMemoryShop_C_ShowSystemMessage) == 0x000008, "Wrong alignment on UMG_LiquidMemoryShop_C_ShowSystemMessage");
static_assert(sizeof(UMG_LiquidMemoryShop_C_ShowSystemMessage) == 0x000018, "Wrong size on UMG_LiquidMemoryShop_C_ShowSystemMessage");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ShowSystemMessage, InMessageText) == 0x000000, "Member 'UMG_LiquidMemoryShop_C_ShowSystemMessage::InMessageText' has a wrong offset!");

// Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.CreateProductItemList
// 0x00A0 (0x00A0 - 0x0000)
struct UMG_LiquidMemoryShop_C_CreateProductItemList final
{
public:
	class UUMG_LiquidMemoryProductListItem_C*     TmpProductListItem;                                // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52FF[0x2];                                     // 0x0012(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 LiquidMemoryId, bool IsFullCharge)> K2Node_CreateDelegate_OutputDelegate;              // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0030(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UUMG_LiquidMemoryProductListItem_C* InItem)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0040(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UUMG_LiquidMemoryProductListItem_C* InItem)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x0050(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UUMG_LiquidMemoryProductListItem_C* InItem)> K2Node_CreateDelegate_OutputDelegate_4;            // 0x0060(0x0010)(ZeroConstructor, NoDestructor)
	class UUMG_LiquidMemoryProductListItem_C*     CallFunc_Create_ReturnValue;                       // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5300[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBLiquidMemoryMasterData>      CallFunc_BP_GetLiquidMemoryMasterDataArray_ReturnValue; // 0x0088(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_LiquidMemoryShop_C_CreateProductItemList) == 0x000008, "Wrong alignment on UMG_LiquidMemoryShop_C_CreateProductItemList");
static_assert(sizeof(UMG_LiquidMemoryShop_C_CreateProductItemList) == 0x0000A0, "Wrong size on UMG_LiquidMemoryShop_C_CreateProductItemList");
static_assert(offsetof(UMG_LiquidMemoryShop_C_CreateProductItemList, TmpProductListItem) == 0x000000, "Member 'UMG_LiquidMemoryShop_C_CreateProductItemList::TmpProductListItem' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_CreateProductItemList, Temp_int_Variable) == 0x000008, "Member 'UMG_LiquidMemoryShop_C_CreateProductItemList::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_CreateProductItemList, Temp_int_Variable_1) == 0x00000C, "Member 'UMG_LiquidMemoryShop_C_CreateProductItemList::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_CreateProductItemList, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000010, "Member 'UMG_LiquidMemoryShop_C_CreateProductItemList::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_CreateProductItemList, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000011, "Member 'UMG_LiquidMemoryShop_C_CreateProductItemList::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_CreateProductItemList, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'UMG_LiquidMemoryShop_C_CreateProductItemList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_CreateProductItemList, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'UMG_LiquidMemoryShop_C_CreateProductItemList::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_CreateProductItemList, CallFunc_AddChild_ReturnValue) == 0x000028, "Member 'UMG_LiquidMemoryShop_C_CreateProductItemList::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_CreateProductItemList, K2Node_CreateDelegate_OutputDelegate_1) == 0x000030, "Member 'UMG_LiquidMemoryShop_C_CreateProductItemList::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_CreateProductItemList, K2Node_CreateDelegate_OutputDelegate_2) == 0x000040, "Member 'UMG_LiquidMemoryShop_C_CreateProductItemList::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_CreateProductItemList, K2Node_CreateDelegate_OutputDelegate_3) == 0x000050, "Member 'UMG_LiquidMemoryShop_C_CreateProductItemList::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_CreateProductItemList, K2Node_CreateDelegate_OutputDelegate_4) == 0x000060, "Member 'UMG_LiquidMemoryShop_C_CreateProductItemList::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_CreateProductItemList, CallFunc_Create_ReturnValue) == 0x000070, "Member 'UMG_LiquidMemoryShop_C_CreateProductItemList::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_CreateProductItemList, CallFunc_GetMasterDataManager_IsValid) == 0x000078, "Member 'UMG_LiquidMemoryShop_C_CreateProductItemList::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_CreateProductItemList, CallFunc_GetMasterDataManager_ReturnValue) == 0x000080, "Member 'UMG_LiquidMemoryShop_C_CreateProductItemList::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_CreateProductItemList, CallFunc_BP_GetLiquidMemoryMasterDataArray_ReturnValue) == 0x000088, "Member 'UMG_LiquidMemoryShop_C_CreateProductItemList::CallFunc_BP_GetLiquidMemoryMasterDataArray_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_CreateProductItemList, CallFunc_Array_Length_ReturnValue) == 0x000098, "Member 'UMG_LiquidMemoryShop_C_CreateProductItemList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_CreateProductItemList, CallFunc_Subtract_IntInt_ReturnValue) == 0x00009C, "Member 'UMG_LiquidMemoryShop_C_CreateProductItemList::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");

// Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.CreateItemDetails
// 0x0030 (0x0030 - 0x0000)
struct UMG_LiquidMemoryShop_C_CreateItemDetails final
{
public:
	TDelegate<void(class UUserWidget* InWidget)>  K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	class UUMG_LiquidMemoryDetails_C*             CallFunc_Create_ReturnValue;                       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOverlaySlot*                           CallFunc_AddChildToOverlay_ReturnValue;            // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_LiquidMemoryShop_C_CreateItemDetails) == 0x000008, "Wrong alignment on UMG_LiquidMemoryShop_C_CreateItemDetails");
static_assert(sizeof(UMG_LiquidMemoryShop_C_CreateItemDetails) == 0x000030, "Wrong size on UMG_LiquidMemoryShop_C_CreateItemDetails");
static_assert(offsetof(UMG_LiquidMemoryShop_C_CreateItemDetails, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'UMG_LiquidMemoryShop_C_CreateItemDetails::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_CreateItemDetails, K2Node_CreateDelegate_OutputDelegate_1) == 0x000010, "Member 'UMG_LiquidMemoryShop_C_CreateItemDetails::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_CreateItemDetails, CallFunc_Create_ReturnValue) == 0x000020, "Member 'UMG_LiquidMemoryShop_C_CreateItemDetails::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_CreateItemDetails, CallFunc_AddChildToOverlay_ReturnValue) == 0x000028, "Member 'UMG_LiquidMemoryShop_C_CreateItemDetails::CallFunc_AddChildToOverlay_ReturnValue' has a wrong offset!");

// Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.ShowLiquidMemoryDetails
// 0x0028 (0x0028 - 0x0000)
struct UMG_LiquidMemoryShop_C_ShowLiquidMemoryDetails final
{
public:
	int32                                         InLiquidMemoryId;                                  // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InBottleNum;                                       // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5301[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_LiquidMemoryDetails_C*             K2Node_DynamicCast_AsUMG_Liquid_Memory_Details;    // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_LiquidMemoryShop_C_ShowLiquidMemoryDetails) == 0x000008, "Wrong alignment on UMG_LiquidMemoryShop_C_ShowLiquidMemoryDetails");
static_assert(sizeof(UMG_LiquidMemoryShop_C_ShowLiquidMemoryDetails) == 0x000028, "Wrong size on UMG_LiquidMemoryShop_C_ShowLiquidMemoryDetails");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ShowLiquidMemoryDetails, InLiquidMemoryId) == 0x000000, "Member 'UMG_LiquidMemoryShop_C_ShowLiquidMemoryDetails::InLiquidMemoryId' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ShowLiquidMemoryDetails, InBottleNum) == 0x000004, "Member 'UMG_LiquidMemoryShop_C_ShowLiquidMemoryDetails::InBottleNum' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ShowLiquidMemoryDetails, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'UMG_LiquidMemoryShop_C_ShowLiquidMemoryDetails::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ShowLiquidMemoryDetails, CallFunc_GetChildAt_ReturnValue) == 0x000010, "Member 'UMG_LiquidMemoryShop_C_ShowLiquidMemoryDetails::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ShowLiquidMemoryDetails, K2Node_DynamicCast_AsUMG_Liquid_Memory_Details) == 0x000018, "Member 'UMG_LiquidMemoryShop_C_ShowLiquidMemoryDetails::K2Node_DynamicCast_AsUMG_Liquid_Memory_Details' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ShowLiquidMemoryDetails, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'UMG_LiquidMemoryShop_C_ShowLiquidMemoryDetails::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_ShowLiquidMemoryDetails, CallFunc_IsValid_ReturnValue_1) == 0x000021, "Member 'UMG_LiquidMemoryShop_C_ShowLiquidMemoryDetails::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.HideLiquidMemoryDetails
// 0x0020 (0x0020 - 0x0000)
struct UMG_LiquidMemoryShop_C_HideLiquidMemoryDetails final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5302[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_LiquidMemoryDetails_C*             K2Node_DynamicCast_AsUMG_Liquid_Memory_Details;    // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_LiquidMemoryShop_C_HideLiquidMemoryDetails) == 0x000008, "Wrong alignment on UMG_LiquidMemoryShop_C_HideLiquidMemoryDetails");
static_assert(sizeof(UMG_LiquidMemoryShop_C_HideLiquidMemoryDetails) == 0x000020, "Wrong size on UMG_LiquidMemoryShop_C_HideLiquidMemoryDetails");
static_assert(offsetof(UMG_LiquidMemoryShop_C_HideLiquidMemoryDetails, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'UMG_LiquidMemoryShop_C_HideLiquidMemoryDetails::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_HideLiquidMemoryDetails, CallFunc_GetChildAt_ReturnValue) == 0x000008, "Member 'UMG_LiquidMemoryShop_C_HideLiquidMemoryDetails::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_HideLiquidMemoryDetails, K2Node_DynamicCast_AsUMG_Liquid_Memory_Details) == 0x000010, "Member 'UMG_LiquidMemoryShop_C_HideLiquidMemoryDetails::K2Node_DynamicCast_AsUMG_Liquid_Memory_Details' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_HideLiquidMemoryDetails, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'UMG_LiquidMemoryShop_C_HideLiquidMemoryDetails::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_HideLiquidMemoryDetails, CallFunc_IsValid_ReturnValue_1) == 0x000019, "Member 'UMG_LiquidMemoryShop_C_HideLiquidMemoryDetails::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.InitProductItemList
// 0x0258 (0x0258 - 0x0000)
struct UMG_LiquidMemoryShop_C_InitProductItemList final
{
public:
	struct FSBLiquidMemoryInfo                    TmpLiquidMemoryInfo;                               // 0x0000(0x0028)(Edit, BlueprintVisible, NoDestructor)
	bool                                          IsFirstItem;                                       // 0x0028(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5303[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   MasterDataManager;                                 // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 OwnLiquidMemoryIDList;                             // 0x0038(0x0010)(Edit, BlueprintVisible)
	int32                                         TmpUsingBottleNum;                                 // 0x0048(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TmpAccumulatedAmount;                              // 0x004C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TmpBottleAccumulateLimit;                          // 0x0050(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5304[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBLiquidMemoryMasterData              TmpLiquidMemoryMaster;                             // 0x0058(0x0038)(Edit, BlueprintVisible)
	int32                                         TmpLiquidMemoryId;                                 // 0x0090(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5305[0x4];                                     // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_LiquidMemoryProductListItem_C*     TmpProductListItem;                                // 0x0098(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TmpLoopIndex;                                      // 0x00A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5306[0x4];                                     // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    TmpNetworkDataCache;                               // 0x00A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5307[0x3];                                     // 0x00B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetUsingBottleNum_OutPurchaseNum;         // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindLiquidMemoryMaster_IsExists;       // 0x00BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5308[0x3];                                     // 0x00BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBLiquidMemoryMasterData              CallFunc_BP_FindLiquidMemoryMaster_ReturnValue;    // 0x00C0(0x0038)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5309[0x4];                                     // 0x00FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBLiquidMemoryMasterData>      CallFunc_BP_GetLiquidMemoryMasterDataArray_ReturnValue; // 0x0100(0x0010)(ReferenceParm)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_530A[0x7];                                     // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_530B[0x4];                                     // 0x0124(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0128(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UUMG_LiquidMemoryProductListItem_C* InItem)> K2Node_CreateDelegate_OutputDelegate;              // 0x0130(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UUMG_LiquidMemoryProductListItem_C* InItem)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0140(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UUMG_LiquidMemoryProductListItem_C* InItem)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0150(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x0160(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 LiquidMemoryId, bool IsFullCharge)> K2Node_CreateDelegate_OutputDelegate_4;            // 0x0174(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_530C[0x4];                                     // 0x0184(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue_1;                   // 0x0188(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_530D[0x4];                                     // 0x0194(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBLiquidMemoryInfo                    CallFunc_Array_Get_Item;                           // 0x0198(0x0028)(NoDestructor)
	bool                                          CallFunc_ValidLiquidMemoryImprovement_ReturnValue; // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_530E[0x3];                                     // 0x01C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x01C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_530F[0x3];                                     // 0x01C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x01CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x01D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x01D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_LiquidMemoryProductListItem_C*     CallFunc_Create_ReturnValue;                       // 0x01D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5310[0x3];                                     // 0x01E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x01E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x01E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5311[0x4];                                     // 0x01EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBLiquidMemoryMasterData              CallFunc_Array_Get_Item_1;                         // 0x01F0(0x0038)()
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x0228(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x022C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5312[0x3];                                     // 0x022D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBLiquidMemoryInfo>            CallFunc_GetLiquidMemoryInfos_ReturnValue;         // 0x0230(0x0010)(ConstParm, ReferenceParm)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x0240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5313[0x7];                                     // 0x0241(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0248(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_LiquidMemoryProductListItem_C*     CallFunc_Create_ReturnValue_1;                     // 0x0250(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_LiquidMemoryShop_C_InitProductItemList) == 0x000008, "Wrong alignment on UMG_LiquidMemoryShop_C_InitProductItemList");
static_assert(sizeof(UMG_LiquidMemoryShop_C_InitProductItemList) == 0x000258, "Wrong size on UMG_LiquidMemoryShop_C_InitProductItemList");
static_assert(offsetof(UMG_LiquidMemoryShop_C_InitProductItemList, TmpLiquidMemoryInfo) == 0x000000, "Member 'UMG_LiquidMemoryShop_C_InitProductItemList::TmpLiquidMemoryInfo' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_InitProductItemList, IsFirstItem) == 0x000028, "Member 'UMG_LiquidMemoryShop_C_InitProductItemList::IsFirstItem' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_InitProductItemList, MasterDataManager) == 0x000030, "Member 'UMG_LiquidMemoryShop_C_InitProductItemList::MasterDataManager' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_InitProductItemList, OwnLiquidMemoryIDList) == 0x000038, "Member 'UMG_LiquidMemoryShop_C_InitProductItemList::OwnLiquidMemoryIDList' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_InitProductItemList, TmpUsingBottleNum) == 0x000048, "Member 'UMG_LiquidMemoryShop_C_InitProductItemList::TmpUsingBottleNum' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_InitProductItemList, TmpAccumulatedAmount) == 0x00004C, "Member 'UMG_LiquidMemoryShop_C_InitProductItemList::TmpAccumulatedAmount' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_InitProductItemList, TmpBottleAccumulateLimit) == 0x000050, "Member 'UMG_LiquidMemoryShop_C_InitProductItemList::TmpBottleAccumulateLimit' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_InitProductItemList, TmpLiquidMemoryMaster) == 0x000058, "Member 'UMG_LiquidMemoryShop_C_InitProductItemList::TmpLiquidMemoryMaster' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_InitProductItemList, TmpLiquidMemoryId) == 0x000090, "Member 'UMG_LiquidMemoryShop_C_InitProductItemList::TmpLiquidMemoryId' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_InitProductItemList, TmpProductListItem) == 0x000098, "Member 'UMG_LiquidMemoryShop_C_InitProductItemList::TmpProductListItem' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_InitProductItemList, TmpLoopIndex) == 0x0000A0, "Member 'UMG_LiquidMemoryShop_C_InitProductItemList::TmpLoopIndex' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_InitProductItemList, TmpNetworkDataCache) == 0x0000A8, "Member 'UMG_LiquidMemoryShop_C_InitProductItemList::TmpNetworkDataCache' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_InitProductItemList, CallFunc_Divide_IntInt_ReturnValue) == 0x0000B0, "Member 'UMG_LiquidMemoryShop_C_InitProductItemList::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_InitProductItemList, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x0000B4, "Member 'UMG_LiquidMemoryShop_C_InitProductItemList::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_InitProductItemList, CallFunc_GetUsingBottleNum_OutPurchaseNum) == 0x0000B8, "Member 'UMG_LiquidMemoryShop_C_InitProductItemList::CallFunc_GetUsingBottleNum_OutPurchaseNum' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_InitProductItemList, CallFunc_BP_FindLiquidMemoryMaster_IsExists) == 0x0000BC, "Member 'UMG_LiquidMemoryShop_C_InitProductItemList::CallFunc_BP_FindLiquidMemoryMaster_IsExists' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_InitProductItemList, CallFunc_BP_FindLiquidMemoryMaster_ReturnValue) == 0x0000C0, "Member 'UMG_LiquidMemoryShop_C_InitProductItemList::CallFunc_BP_FindLiquidMemoryMaster_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_InitProductItemList, CallFunc_Array_Length_ReturnValue) == 0x0000F8, "Member 'UMG_LiquidMemoryShop_C_InitProductItemList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_InitProductItemList, CallFunc_BP_GetLiquidMemoryMasterDataArray_ReturnValue) == 0x000100, "Member 'UMG_LiquidMemoryShop_C_InitProductItemList::CallFunc_BP_GetLiquidMemoryMasterDataArray_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_InitProductItemList, CallFunc_GetMasterDataManager_IsValid) == 0x000110, "Member 'UMG_LiquidMemoryShop_C_InitProductItemList::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_InitProductItemList, CallFunc_GetMasterDataManager_ReturnValue) == 0x000118, "Member 'UMG_LiquidMemoryShop_C_InitProductItemList::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_InitProductItemList, CallFunc_Array_Length_ReturnValue_1) == 0x000120, "Member 'UMG_LiquidMemoryShop_C_InitProductItemList::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_InitProductItemList, CallFunc_AddChild_ReturnValue) == 0x000128, "Member 'UMG_LiquidMemoryShop_C_InitProductItemList::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_InitProductItemList, K2Node_CreateDelegate_OutputDelegate) == 0x000130, "Member 'UMG_LiquidMemoryShop_C_InitProductItemList::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_InitProductItemList, K2Node_CreateDelegate_OutputDelegate_1) == 0x000140, "Member 'UMG_LiquidMemoryShop_C_InitProductItemList::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_InitProductItemList, K2Node_CreateDelegate_OutputDelegate_2) == 0x000150, "Member 'UMG_LiquidMemoryShop_C_InitProductItemList::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_InitProductItemList, K2Node_CreateDelegate_OutputDelegate_3) == 0x000160, "Member 'UMG_LiquidMemoryShop_C_InitProductItemList::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_InitProductItemList, CallFunc_Array_Add_ReturnValue) == 0x000170, "Member 'UMG_LiquidMemoryShop_C_InitProductItemList::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_InitProductItemList, K2Node_CreateDelegate_OutputDelegate_4) == 0x000174, "Member 'UMG_LiquidMemoryShop_C_InitProductItemList::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_InitProductItemList, CallFunc_AddChild_ReturnValue_1) == 0x000188, "Member 'UMG_LiquidMemoryShop_C_InitProductItemList::CallFunc_AddChild_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_InitProductItemList, Temp_int_Array_Index_Variable) == 0x000190, "Member 'UMG_LiquidMemoryShop_C_InitProductItemList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_InitProductItemList, CallFunc_Array_Get_Item) == 0x000198, "Member 'UMG_LiquidMemoryShop_C_InitProductItemList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_InitProductItemList, CallFunc_ValidLiquidMemoryImprovement_ReturnValue) == 0x0001C0, "Member 'UMG_LiquidMemoryShop_C_InitProductItemList::CallFunc_ValidLiquidMemoryImprovement_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_InitProductItemList, Temp_int_Loop_Counter_Variable) == 0x0001C4, "Member 'UMG_LiquidMemoryShop_C_InitProductItemList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_InitProductItemList, CallFunc_Less_IntInt_ReturnValue) == 0x0001C8, "Member 'UMG_LiquidMemoryShop_C_InitProductItemList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_InitProductItemList, CallFunc_Clamp_ReturnValue) == 0x0001CC, "Member 'UMG_LiquidMemoryShop_C_InitProductItemList::CallFunc_Clamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_InitProductItemList, CallFunc_Add_IntInt_ReturnValue) == 0x0001D0, "Member 'UMG_LiquidMemoryShop_C_InitProductItemList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_InitProductItemList, Temp_int_Loop_Counter_Variable_1) == 0x0001D4, "Member 'UMG_LiquidMemoryShop_C_InitProductItemList::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_InitProductItemList, CallFunc_Create_ReturnValue) == 0x0001D8, "Member 'UMG_LiquidMemoryShop_C_InitProductItemList::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_InitProductItemList, CallFunc_Less_IntInt_ReturnValue_1) == 0x0001E0, "Member 'UMG_LiquidMemoryShop_C_InitProductItemList::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_InitProductItemList, CallFunc_Add_IntInt_ReturnValue_1) == 0x0001E4, "Member 'UMG_LiquidMemoryShop_C_InitProductItemList::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_InitProductItemList, Temp_int_Array_Index_Variable_1) == 0x0001E8, "Member 'UMG_LiquidMemoryShop_C_InitProductItemList::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_InitProductItemList, CallFunc_Array_Get_Item_1) == 0x0001F0, "Member 'UMG_LiquidMemoryShop_C_InitProductItemList::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_InitProductItemList, CallFunc_Array_Find_ReturnValue) == 0x000228, "Member 'UMG_LiquidMemoryShop_C_InitProductItemList::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_InitProductItemList, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00022C, "Member 'UMG_LiquidMemoryShop_C_InitProductItemList::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_InitProductItemList, CallFunc_GetLiquidMemoryInfos_ReturnValue) == 0x000230, "Member 'UMG_LiquidMemoryShop_C_InitProductItemList::CallFunc_GetLiquidMemoryInfos_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_InitProductItemList, CallFunc_GetNetworkDataCache_IsValid) == 0x000240, "Member 'UMG_LiquidMemoryShop_C_InitProductItemList::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_InitProductItemList, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000248, "Member 'UMG_LiquidMemoryShop_C_InitProductItemList::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_InitProductItemList, CallFunc_Create_ReturnValue_1) == 0x000250, "Member 'UMG_LiquidMemoryShop_C_InitProductItemList::CallFunc_Create_ReturnValue_1' has a wrong offset!");

// Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.AddOrMinusLiquidMemoryIdAndLevelToUsingList
// 0x0050 (0x0050 - 0x0000)
struct UMG_LiquidMemoryShop_C_AddOrMinusLiquidMemoryIdAndLevelToUsingList final
{
public:
	class UUMG_LiquidMemoryProductListItem_C*     InItem;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TmpTotalCost;                                      // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TmpUsingBottleNum;                                 // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TmpId;                                             // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetTotalCost_OutPurchasePrice;            // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetUsingBottleNum_OutPurchaseNum;         // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetLiquidMemoryId_OutProductItemIndex;    // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5314[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5315[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Map_Length_ReturnValue;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Map_Remove_ReturnValue;                   // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5316[0x6];                                     // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 CallFunc_Map_Keys_Keys;                            // 0x0038(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_LiquidMemoryShop_C_AddOrMinusLiquidMemoryIdAndLevelToUsingList) == 0x000008, "Wrong alignment on UMG_LiquidMemoryShop_C_AddOrMinusLiquidMemoryIdAndLevelToUsingList");
static_assert(sizeof(UMG_LiquidMemoryShop_C_AddOrMinusLiquidMemoryIdAndLevelToUsingList) == 0x000050, "Wrong size on UMG_LiquidMemoryShop_C_AddOrMinusLiquidMemoryIdAndLevelToUsingList");
static_assert(offsetof(UMG_LiquidMemoryShop_C_AddOrMinusLiquidMemoryIdAndLevelToUsingList, InItem) == 0x000000, "Member 'UMG_LiquidMemoryShop_C_AddOrMinusLiquidMemoryIdAndLevelToUsingList::InItem' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_AddOrMinusLiquidMemoryIdAndLevelToUsingList, TmpTotalCost) == 0x000008, "Member 'UMG_LiquidMemoryShop_C_AddOrMinusLiquidMemoryIdAndLevelToUsingList::TmpTotalCost' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_AddOrMinusLiquidMemoryIdAndLevelToUsingList, TmpUsingBottleNum) == 0x00000C, "Member 'UMG_LiquidMemoryShop_C_AddOrMinusLiquidMemoryIdAndLevelToUsingList::TmpUsingBottleNum' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_AddOrMinusLiquidMemoryIdAndLevelToUsingList, TmpId) == 0x000010, "Member 'UMG_LiquidMemoryShop_C_AddOrMinusLiquidMemoryIdAndLevelToUsingList::TmpId' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_AddOrMinusLiquidMemoryIdAndLevelToUsingList, CallFunc_GetTotalCost_OutPurchasePrice) == 0x000014, "Member 'UMG_LiquidMemoryShop_C_AddOrMinusLiquidMemoryIdAndLevelToUsingList::CallFunc_GetTotalCost_OutPurchasePrice' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_AddOrMinusLiquidMemoryIdAndLevelToUsingList, CallFunc_GetUsingBottleNum_OutPurchaseNum) == 0x000018, "Member 'UMG_LiquidMemoryShop_C_AddOrMinusLiquidMemoryIdAndLevelToUsingList::CallFunc_GetUsingBottleNum_OutPurchaseNum' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_AddOrMinusLiquidMemoryIdAndLevelToUsingList, CallFunc_GetLiquidMemoryId_OutProductItemIndex) == 0x00001C, "Member 'UMG_LiquidMemoryShop_C_AddOrMinusLiquidMemoryIdAndLevelToUsingList::CallFunc_GetLiquidMemoryId_OutProductItemIndex' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_AddOrMinusLiquidMemoryIdAndLevelToUsingList, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'UMG_LiquidMemoryShop_C_AddOrMinusLiquidMemoryIdAndLevelToUsingList::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_AddOrMinusLiquidMemoryIdAndLevelToUsingList, CallFunc_Array_Add_ReturnValue) == 0x000024, "Member 'UMG_LiquidMemoryShop_C_AddOrMinusLiquidMemoryIdAndLevelToUsingList::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_AddOrMinusLiquidMemoryIdAndLevelToUsingList, CallFunc_Greater_IntInt_ReturnValue) == 0x000028, "Member 'UMG_LiquidMemoryShop_C_AddOrMinusLiquidMemoryIdAndLevelToUsingList::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_AddOrMinusLiquidMemoryIdAndLevelToUsingList, CallFunc_Map_Length_ReturnValue) == 0x00002C, "Member 'UMG_LiquidMemoryShop_C_AddOrMinusLiquidMemoryIdAndLevelToUsingList::CallFunc_Map_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_AddOrMinusLiquidMemoryIdAndLevelToUsingList, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000030, "Member 'UMG_LiquidMemoryShop_C_AddOrMinusLiquidMemoryIdAndLevelToUsingList::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_AddOrMinusLiquidMemoryIdAndLevelToUsingList, CallFunc_Map_Remove_ReturnValue) == 0x000031, "Member 'UMG_LiquidMemoryShop_C_AddOrMinusLiquidMemoryIdAndLevelToUsingList::CallFunc_Map_Remove_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_AddOrMinusLiquidMemoryIdAndLevelToUsingList, CallFunc_Map_Keys_Keys) == 0x000038, "Member 'UMG_LiquidMemoryShop_C_AddOrMinusLiquidMemoryIdAndLevelToUsingList::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_AddOrMinusLiquidMemoryIdAndLevelToUsingList, CallFunc_Array_Find_ReturnValue) == 0x000048, "Member 'UMG_LiquidMemoryShop_C_AddOrMinusLiquidMemoryIdAndLevelToUsingList::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_AddOrMinusLiquidMemoryIdAndLevelToUsingList, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x00004C, "Member 'UMG_LiquidMemoryShop_C_AddOrMinusLiquidMemoryIdAndLevelToUsingList::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");

// Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.CalculateTotalCost
// 0x0038 (0x0038 - 0x0000)
struct UMG_LiquidMemoryShop_C_CalculateTotalCost final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5317[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0010(0x0018)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item;                           // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5318[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_LiquidMemoryShop_C_CalculateTotalCost) == 0x000008, "Wrong alignment on UMG_LiquidMemoryShop_C_CalculateTotalCost");
static_assert(sizeof(UMG_LiquidMemoryShop_C_CalculateTotalCost) == 0x000038, "Wrong size on UMG_LiquidMemoryShop_C_CalculateTotalCost");
static_assert(offsetof(UMG_LiquidMemoryShop_C_CalculateTotalCost, Temp_int_Array_Index_Variable) == 0x000000, "Member 'UMG_LiquidMemoryShop_C_CalculateTotalCost::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_CalculateTotalCost, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'UMG_LiquidMemoryShop_C_CalculateTotalCost::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_CalculateTotalCost, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'UMG_LiquidMemoryShop_C_CalculateTotalCost::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_CalculateTotalCost, CallFunc_Conv_IntToText_ReturnValue) == 0x000010, "Member 'UMG_LiquidMemoryShop_C_CalculateTotalCost::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_CalculateTotalCost, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'UMG_LiquidMemoryShop_C_CalculateTotalCost::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_CalculateTotalCost, CallFunc_Array_Get_Item) == 0x00002C, "Member 'UMG_LiquidMemoryShop_C_CalculateTotalCost::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_CalculateTotalCost, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'UMG_LiquidMemoryShop_C_CalculateTotalCost::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_CalculateTotalCost, CallFunc_Add_IntInt_ReturnValue_1) == 0x000034, "Member 'UMG_LiquidMemoryShop_C_CalculateTotalCost::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");

// Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.RandomPlayAnimation
// 0x0018 (0x0018 - 0x0000)
struct UMG_LiquidMemoryShop_C_RandomPlayAnimation final
{
public:
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue;         // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5319[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_LiquidMemoryShop_C_RandomPlayAnimation) == 0x000008, "Wrong alignment on UMG_LiquidMemoryShop_C_RandomPlayAnimation");
static_assert(sizeof(UMG_LiquidMemoryShop_C_RandomPlayAnimation) == 0x000018, "Wrong size on UMG_LiquidMemoryShop_C_RandomPlayAnimation");
static_assert(offsetof(UMG_LiquidMemoryShop_C_RandomPlayAnimation, CallFunc_RandomIntegerInRange_ReturnValue) == 0x000000, "Member 'UMG_LiquidMemoryShop_C_RandomPlayAnimation::CallFunc_RandomIntegerInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_RandomPlayAnimation, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'UMG_LiquidMemoryShop_C_RandomPlayAnimation::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_RandomPlayAnimation, K2Node_SwitchInteger_CmpSuccess) == 0x000010, "Member 'UMG_LiquidMemoryShop_C_RandomPlayAnimation::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");

// Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.RandomPlayAnimation2
// 0x0018 (0x0018 - 0x0000)
struct UMG_LiquidMemoryShop_C_RandomPlayAnimation2 final
{
public:
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue;         // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_531A[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_LiquidMemoryShop_C_RandomPlayAnimation2) == 0x000008, "Wrong alignment on UMG_LiquidMemoryShop_C_RandomPlayAnimation2");
static_assert(sizeof(UMG_LiquidMemoryShop_C_RandomPlayAnimation2) == 0x000018, "Wrong size on UMG_LiquidMemoryShop_C_RandomPlayAnimation2");
static_assert(offsetof(UMG_LiquidMemoryShop_C_RandomPlayAnimation2, CallFunc_RandomIntegerInRange_ReturnValue) == 0x000000, "Member 'UMG_LiquidMemoryShop_C_RandomPlayAnimation2::CallFunc_RandomIntegerInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_RandomPlayAnimation2, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'UMG_LiquidMemoryShop_C_RandomPlayAnimation2::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_RandomPlayAnimation2, K2Node_SwitchInteger_CmpSuccess) == 0x000010, "Member 'UMG_LiquidMemoryShop_C_RandomPlayAnimation2::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");

// Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.CalculateTotalUsingLiquidMemory
// 0x0048 (0x0048 - 0x0000)
struct UMG_LiquidMemoryShop_C_CalculateTotalUsingLiquidMemory final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_531B[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0010(0x0018)()
	TArray<int32>                                 CallFunc_Map_Values_Values;                        // 0x0028(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item;                           // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_531C[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_LiquidMemoryShop_C_CalculateTotalUsingLiquidMemory) == 0x000008, "Wrong alignment on UMG_LiquidMemoryShop_C_CalculateTotalUsingLiquidMemory");
static_assert(sizeof(UMG_LiquidMemoryShop_C_CalculateTotalUsingLiquidMemory) == 0x000048, "Wrong size on UMG_LiquidMemoryShop_C_CalculateTotalUsingLiquidMemory");
static_assert(offsetof(UMG_LiquidMemoryShop_C_CalculateTotalUsingLiquidMemory, Temp_int_Array_Index_Variable) == 0x000000, "Member 'UMG_LiquidMemoryShop_C_CalculateTotalUsingLiquidMemory::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_CalculateTotalUsingLiquidMemory, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'UMG_LiquidMemoryShop_C_CalculateTotalUsingLiquidMemory::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_CalculateTotalUsingLiquidMemory, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'UMG_LiquidMemoryShop_C_CalculateTotalUsingLiquidMemory::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_CalculateTotalUsingLiquidMemory, CallFunc_Conv_IntToText_ReturnValue) == 0x000010, "Member 'UMG_LiquidMemoryShop_C_CalculateTotalUsingLiquidMemory::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_CalculateTotalUsingLiquidMemory, CallFunc_Map_Values_Values) == 0x000028, "Member 'UMG_LiquidMemoryShop_C_CalculateTotalUsingLiquidMemory::CallFunc_Map_Values_Values' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_CalculateTotalUsingLiquidMemory, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'UMG_LiquidMemoryShop_C_CalculateTotalUsingLiquidMemory::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_CalculateTotalUsingLiquidMemory, CallFunc_Array_Get_Item) == 0x00003C, "Member 'UMG_LiquidMemoryShop_C_CalculateTotalUsingLiquidMemory::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_CalculateTotalUsingLiquidMemory, CallFunc_Less_IntInt_ReturnValue) == 0x000040, "Member 'UMG_LiquidMemoryShop_C_CalculateTotalUsingLiquidMemory::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryShop_C_CalculateTotalUsingLiquidMemory, CallFunc_Add_IntInt_ReturnValue_1) == 0x000044, "Member 'UMG_LiquidMemoryShop_C_CalculateTotalUsingLiquidMemory::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");

}

