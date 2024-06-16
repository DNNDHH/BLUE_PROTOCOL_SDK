#pragma once

 

// Package: CashExchangeShop

#include "Basic.hpp"

#include "ST_ShopIconData_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "RsDialogType_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "RsDialogButtonType_structs.hpp"
#include "UMG_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function CashExchangeShop.CashExchangeShop_C.ExecuteUbergraph_CashExchangeShop
// 0x0580 (0x0580 - 0x0000)
struct CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPurchasePriceCheck_IsOver;              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A99[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7A9A[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0010(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0050(0x0010)(ReferenceParm)
	bool                                          CallFunc_Request_GetCryptocurrency_ReturnValue;    // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_Result_5;                       // 0x0061(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A9B[0x2];                                     // 0x0062(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_RetCode_6;                      // 0x0064(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBCryptoCurrency                      K2Node_CustomEvent_Cryptocurrency;                 // 0x0068(0x0028)(ConstParm, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A9C[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_Payment;                        // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void(const class FString& Payment)> K2Node_CreateDelegate_OutputDelegate;              // 0x00A8(0x0010)(ZeroConstructor, NoDestructor)
	class UPaymentSelect_C*                       CallFunc_Create_ReturnValue;                       // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Result_4;                       // 0x00C0(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A9D[0x3];                                     // 0x00C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_RetCode_5;                      // 0x00C4(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBPurchaseRoPSResponse                K2Node_CustomEvent_ResponseData_2;                 // 0x00C8(0x0030)(ConstParm)
	bool                                          CallFunc_CheckRetryByRetCode_IsRetry;              // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x00F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x00FA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A9E[0x5];                                     // 0x00FB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class URmShopMenu_C*                          K2Node_DynamicCast_AsRm_Shop_Menu;                 // 0x0100(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A9F[0x7];                                     // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0110(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0120(0x0018)()
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x0138(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0148(0x0018)()
	int32                                         CallFunc_GetRoseOrbFree_ReturnValue;               // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetRoseOrbPaid_ReturnValue;               // 0x0164(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Result_3;                       // 0x0168(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7AA0[0x3];                                     // 0x0169(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_RetCode_4;                      // 0x016C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_2;     // 0x0170(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0180(0x0018)()
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_3;     // 0x0198(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x01A8(0x0018)()
	TDelegate<void(bool Result, int32 RetCode, struct FSBPurchaseRoPSResponse& ResponseData)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x01C0(0x0010)(ZeroConstructor, NoDestructor)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x01D0(0x0018)()
	bool                                          K2Node_CustomEvent_Result_2;                       // 0x01E8(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7AA1[0x3];                                     // 0x01E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_RetCode_3;                      // 0x01EC(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBPurchaseRoPSResponse                K2Node_CustomEvent_ResponseData_1;                 // 0x01F0(0x0030)(ConstParm)
	class URmShopMenu_C*                          K2Node_DynamicCast_AsRm_Shop_Menu_1;               // 0x0220(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0228(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0229(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7AA2[0x6];                                     // 0x022A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_4;     // 0x0230(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	EYesNoDialogResult                            K2Node_CustomEvent_Result_6;                       // 0x0240(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7AA3[0x7];                                     // 0x0241(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_4;          // 0x0248(0x0018)()
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0260(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7AA4[0x7];                                     // 0x0261(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_5;     // 0x0268(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_5;          // 0x0278(0x0018)()
	bool                                          K2Node_CustomEvent_Result_1;                       // 0x0290(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7AA5[0x3];                                     // 0x0291(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_RetCode_2;                      // 0x0294(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue;              // 0x0298(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x02A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7AA6[0x7];                                     // 0x02A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_6;          // 0x02B0(0x0018)()
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_6;     // 0x02C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_7;          // 0x02D8(0x0018)()
	bool                                          K2Node_CustomEvent_Result;                         // 0x02F0(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7AA7[0x3];                                     // 0x02F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_RetCode_1;                      // 0x02F4(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBShopItemRoPS>                K2Node_CustomEvent_ResponseData;                   // 0x02F8(0x0010)(ConstParm, ReferenceParm)
	int32                                         K2Node_CustomEvent_PruchasePrice;                  // 0x0308(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_GetRmShopIdMasterByShopTypeId_IsExists; // 0x030C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7AA8[0x3];                                     // 0x030D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBRmShopMasterData                    CallFunc_BP_GetRmShopIdMasterByShopTypeId_ReturnValue; // 0x0310(0x0048)()
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue_1;            // 0x0358(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	ESBRmShopErrorStatus                          CallFunc_IsShopCheckStatusRetCode_ReturnValue;     // 0x0368(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7AA9[0x7];                                     // 0x0369(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_8;          // 0x0370(0x0018)()
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0388(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7AAA[0x3];                                     // 0x0389(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x038C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x039C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x03AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7AAB[0x3];                                     // 0x03AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool Result, int32 RetCode, struct FSBCryptoCurrency& Cryptocurrency)> K2Node_CreateDelegate_OutputDelegate_4;            // 0x03B0(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x03C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x03C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7AAC[0x3];                                     // 0x03C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_GetExpiredTimeRoseOrbFree_ReturnValue;    // 0x03C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_GetExpiredTimeRoseOrbPaid_ReturnValue;    // 0x03D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_GetExpiredTimeRoseOrbFree_ReturnValue_1;  // 0x03D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_GetExpiredTimeRoseOrbPaid_ReturnValue_1;  // 0x03E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_5;            // 0x03E8(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x03F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x03FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7AAD[0x3];                                     // 0x03FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_6;            // 0x0400(0x0010)(ZeroConstructor, NoDestructor)
	class UWBP_RmShopMaintenanceUpdeta_C*         CallFunc_Create_ReturnValue_1;                     // 0x0410(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0418(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_RmShopMaintenanceShop_C*           CallFunc_Create_ReturnValue_2;                     // 0x0420(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_7;            // 0x0428(0x0010)(ZeroConstructor, NoDestructor)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue_1;                   // 0x0438(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_RmShopMaintenanceAll_C*            CallFunc_Create_ReturnValue_3;                     // 0x0440(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool Result, int32 RetCode, TArray<struct FSBShopItemRoPS>& ResponseData, int32 PruchasePrice)> K2Node_CreateDelegate_OutputDelegate_8;            // 0x0448(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_ValidAmazonPay1Click_ReturnValue;         // 0x0458(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7AAE[0x7];                                     // 0x0459(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_CreateURL_OutURL;                         // 0x0460(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_RetCode;                        // 0x0470(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool Result, int32 RetCode)>   K2Node_CreateDelegate_OutputDelegate_9;            // 0x0474(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_7AAF[0x4];                                     // 0x0484(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class URmShopMenu_C*                          K2Node_DynamicCast_AsRm_Shop_Menu_2;               // 0x0488(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0490(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7AB0[0x3];                                     // 0x0491(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool Result, int32 RetCode)>   K2Node_CreateDelegate_OutputDelegate_10;           // 0x0494(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_CustomEvent_Index;                          // 0x04A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue_1;                    // 0x04A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetComponentRef_Ret;                      // 0x04A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7AB1[0x6];                                     // 0x04AA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_SBProductData_C>  K2Node_CustomEvent_Data;                           // 0x04B0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UBP_SBProductItemData_C*                K2Node_ComponentBoundEvent_Data_1;                 // 0x04C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_SBProductItemData_C*                K2Node_ComponentBoundEvent_Data;                   // 0x04C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bTrying;                // 0x04D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7AB2[0x7];                                     // 0x04D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_SBProductData_C>  CallFunc_SetProductData_Data_CastInput;            // 0x04D8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetParentData_bIsValid;                   // 0x04E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7AB3[0x7];                                     // 0x04E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_SBProductData_C>  CallFunc_GetParentData_ParentData;                 // 0x04F0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ERsDialogType                                 K2Node_CustomEvent_DialogType;                     // 0x0500(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ERsDialogButtonType                           K2Node_CustomEvent_ButtonType;                     // 0x0501(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7AB4[0x2];                                     // 0x0502(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool Result, int32 RetCode, struct FSBPurchaseRoPSResponse& ResponseData)> K2Node_CreateDelegate_OutputDelegate_11;           // 0x0504(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0514(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0515(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess_2;                    // 0x0516(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7AB5[0x1];                                     // 0x0517(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool Result, int32 RetCode, struct FSBPurchaseRoPSResponse& ResponseData)> K2Node_CreateDelegate_OutputDelegate_12;           // 0x0518(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsEmpty_ReturnValue_2;                    // 0x0528(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0529(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7AB6[0x2];                                     // 0x052A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_13;           // 0x052C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(EYesNoDialogResult Result)>    K2Node_CreateDelegate_OutputDelegate_14;           // 0x053C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_7AB7[0x4];                                     // 0x054C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDialog*                              CallFunc_ShowYesNoDialog_ReturnValue;              // 0x0550(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0558(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0560(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsStart;                              // 0x0568(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7AB8[0x3];                                     // 0x0569(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_15;           // 0x056C(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop) == 0x000008, "Wrong alignment on CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop");
static_assert(sizeof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop) == 0x000580, "Wrong size on CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, EntryPoint) == 0x000000, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::EntryPoint' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, CallFunc_IsPurchasePriceCheck_IsOver) == 0x000004, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::CallFunc_IsPurchasePriceCheck_IsOver' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, CallFunc_Less_IntInt_ReturnValue) == 0x000005, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, CallFunc_MakeLiteralInt_ReturnValue) == 0x000008, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, K2Node_MakeStruct_FormatArgumentData) == 0x000010, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, K2Node_MakeArray_Array) == 0x000050, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, CallFunc_Request_GetCryptocurrency_ReturnValue) == 0x000060, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::CallFunc_Request_GetCryptocurrency_ReturnValue' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, K2Node_CustomEvent_Result_5) == 0x000061, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::K2Node_CustomEvent_Result_5' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, K2Node_CustomEvent_RetCode_6) == 0x000064, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::K2Node_CustomEvent_RetCode_6' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, K2Node_CustomEvent_Cryptocurrency) == 0x000068, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::K2Node_CustomEvent_Cryptocurrency' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000090, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, K2Node_CustomEvent_Payment) == 0x000098, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::K2Node_CustomEvent_Payment' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, K2Node_CreateDelegate_OutputDelegate) == 0x0000A8, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, CallFunc_Create_ReturnValue) == 0x0000B8, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, K2Node_CustomEvent_Result_4) == 0x0000C0, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::K2Node_CustomEvent_Result_4' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, K2Node_CustomEvent_RetCode_5) == 0x0000C4, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::K2Node_CustomEvent_RetCode_5' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, K2Node_CustomEvent_ResponseData_2) == 0x0000C8, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::K2Node_CustomEvent_ResponseData_2' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, CallFunc_CheckRetryByRetCode_IsRetry) == 0x0000F8, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::CallFunc_CheckRetryByRetCode_IsRetry' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, CallFunc_NotEqual_IntInt_ReturnValue) == 0x0000F9, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, CallFunc_IsEmpty_ReturnValue) == 0x0000FA, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, K2Node_DynamicCast_AsRm_Shop_Menu) == 0x000100, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::K2Node_DynamicCast_AsRm_Shop_Menu' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, K2Node_DynamicCast_bSuccess) == 0x000108, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000110, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, CallFunc_Conv_StringToText_ReturnValue) == 0x000120, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x000138, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000148, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, CallFunc_GetRoseOrbFree_ReturnValue) == 0x000160, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::CallFunc_GetRoseOrbFree_ReturnValue' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, CallFunc_GetRoseOrbPaid_ReturnValue) == 0x000164, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::CallFunc_GetRoseOrbPaid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, K2Node_CustomEvent_Result_3) == 0x000168, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::K2Node_CustomEvent_Result_3' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, K2Node_CustomEvent_RetCode_4) == 0x00016C, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::K2Node_CustomEvent_RetCode_4' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, CallFunc_GetTextFromAssetByName_ReturnValue_2) == 0x000170, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::CallFunc_GetTextFromAssetByName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000180, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, CallFunc_GetTextFromAssetByName_ReturnValue_3) == 0x000198, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::CallFunc_GetTextFromAssetByName_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, CallFunc_Conv_StringToText_ReturnValue_3) == 0x0001A8, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, K2Node_CreateDelegate_OutputDelegate_1) == 0x0001C0, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, CallFunc_Format_ReturnValue) == 0x0001D0, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, K2Node_CustomEvent_Result_2) == 0x0001E8, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::K2Node_CustomEvent_Result_2' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, K2Node_CustomEvent_RetCode_3) == 0x0001EC, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::K2Node_CustomEvent_RetCode_3' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, K2Node_CustomEvent_ResponseData_1) == 0x0001F0, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::K2Node_CustomEvent_ResponseData_1' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, K2Node_DynamicCast_AsRm_Shop_Menu_1) == 0x000220, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::K2Node_DynamicCast_AsRm_Shop_Menu_1' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, K2Node_DynamicCast_bSuccess_1) == 0x000228, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000229, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, CallFunc_GetTextFromAssetByName_ReturnValue_4) == 0x000230, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::CallFunc_GetTextFromAssetByName_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, K2Node_CustomEvent_Result_6) == 0x000240, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::K2Node_CustomEvent_Result_6' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, CallFunc_Conv_StringToText_ReturnValue_4) == 0x000248, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::CallFunc_Conv_StringToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, K2Node_SwitchEnum_CmpSuccess) == 0x000260, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, CallFunc_GetTextFromAssetByName_ReturnValue_5) == 0x000268, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::CallFunc_GetTextFromAssetByName_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, CallFunc_Conv_StringToText_ReturnValue_5) == 0x000278, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::CallFunc_Conv_StringToText_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, K2Node_CustomEvent_Result_1) == 0x000290, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::K2Node_CustomEvent_Result_1' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, K2Node_CustomEvent_RetCode_2) == 0x000294, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::K2Node_CustomEvent_RetCode_2' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, CallFunc_GetSBRetMessage_ReturnValue) == 0x000298, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::CallFunc_GetSBRetMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x0002A8, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, CallFunc_Conv_StringToText_ReturnValue_6) == 0x0002B0, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::CallFunc_Conv_StringToText_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, CallFunc_GetTextFromAssetByName_ReturnValue_6) == 0x0002C8, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::CallFunc_GetTextFromAssetByName_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, CallFunc_Conv_StringToText_ReturnValue_7) == 0x0002D8, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::CallFunc_Conv_StringToText_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, K2Node_CustomEvent_Result) == 0x0002F0, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, K2Node_CustomEvent_RetCode_1) == 0x0002F4, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::K2Node_CustomEvent_RetCode_1' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, K2Node_CustomEvent_ResponseData) == 0x0002F8, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::K2Node_CustomEvent_ResponseData' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, K2Node_CustomEvent_PruchasePrice) == 0x000308, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::K2Node_CustomEvent_PruchasePrice' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, CallFunc_BP_GetRmShopIdMasterByShopTypeId_IsExists) == 0x00030C, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::CallFunc_BP_GetRmShopIdMasterByShopTypeId_IsExists' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, CallFunc_BP_GetRmShopIdMasterByShopTypeId_ReturnValue) == 0x000310, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::CallFunc_BP_GetRmShopIdMasterByShopTypeId_ReturnValue' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, CallFunc_GetSBRetMessage_ReturnValue_1) == 0x000358, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::CallFunc_GetSBRetMessage_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, CallFunc_IsShopCheckStatusRetCode_ReturnValue) == 0x000368, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::CallFunc_IsShopCheckStatusRetCode_ReturnValue' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, CallFunc_Conv_StringToText_ReturnValue_8) == 0x000370, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::CallFunc_Conv_StringToText_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, K2Node_SwitchEnum_CmpSuccess_1) == 0x000388, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, K2Node_CreateDelegate_OutputDelegate_2) == 0x00038C, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, K2Node_CreateDelegate_OutputDelegate_3) == 0x00039C, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, CallFunc_IsValid_ReturnValue) == 0x0003AC, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, K2Node_CreateDelegate_OutputDelegate_4) == 0x0003B0, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, CallFunc_GetChildrenCount_ReturnValue) == 0x0003C0, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x0003C4, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, CallFunc_GetExpiredTimeRoseOrbFree_ReturnValue) == 0x0003C8, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::CallFunc_GetExpiredTimeRoseOrbFree_ReturnValue' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, CallFunc_GetExpiredTimeRoseOrbPaid_ReturnValue) == 0x0003D0, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::CallFunc_GetExpiredTimeRoseOrbPaid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, CallFunc_GetExpiredTimeRoseOrbFree_ReturnValue_1) == 0x0003D8, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::CallFunc_GetExpiredTimeRoseOrbFree_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, CallFunc_GetExpiredTimeRoseOrbPaid_ReturnValue_1) == 0x0003E0, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::CallFunc_GetExpiredTimeRoseOrbPaid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, K2Node_CreateDelegate_OutputDelegate_5) == 0x0003E8, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, CallFunc_PlaySE_ReturnValue) == 0x0003F8, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, CallFunc_IsValid_ReturnValue_1) == 0x0003FC, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, K2Node_CreateDelegate_OutputDelegate_6) == 0x000400, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, CallFunc_Create_ReturnValue_1) == 0x000410, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, CallFunc_AddChild_ReturnValue) == 0x000418, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, CallFunc_Create_ReturnValue_2) == 0x000420, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::CallFunc_Create_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, K2Node_CreateDelegate_OutputDelegate_7) == 0x000428, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, CallFunc_AddChild_ReturnValue_1) == 0x000438, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::CallFunc_AddChild_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, CallFunc_Create_ReturnValue_3) == 0x000440, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::CallFunc_Create_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, K2Node_CreateDelegate_OutputDelegate_8) == 0x000448, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, CallFunc_ValidAmazonPay1Click_ReturnValue) == 0x000458, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::CallFunc_ValidAmazonPay1Click_ReturnValue' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, CallFunc_CreateURL_OutURL) == 0x000460, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::CallFunc_CreateURL_OutURL' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, K2Node_CustomEvent_RetCode) == 0x000470, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::K2Node_CustomEvent_RetCode' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, K2Node_CreateDelegate_OutputDelegate_9) == 0x000474, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, K2Node_DynamicCast_AsRm_Shop_Menu_2) == 0x000488, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::K2Node_DynamicCast_AsRm_Shop_Menu_2' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, K2Node_DynamicCast_bSuccess_2) == 0x000490, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, K2Node_CreateDelegate_OutputDelegate_10) == 0x000494, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::K2Node_CreateDelegate_OutputDelegate_10' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, K2Node_CustomEvent_Index) == 0x0004A4, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::K2Node_CustomEvent_Index' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, CallFunc_IsEmpty_ReturnValue_1) == 0x0004A8, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::CallFunc_IsEmpty_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, CallFunc_GetComponentRef_Ret) == 0x0004A9, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::CallFunc_GetComponentRef_Ret' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, K2Node_CustomEvent_Data) == 0x0004B0, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::K2Node_CustomEvent_Data' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, K2Node_ComponentBoundEvent_Data_1) == 0x0004C0, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::K2Node_ComponentBoundEvent_Data_1' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, K2Node_ComponentBoundEvent_Data) == 0x0004C8, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::K2Node_ComponentBoundEvent_Data' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, K2Node_ComponentBoundEvent_bTrying) == 0x0004D0, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::K2Node_ComponentBoundEvent_bTrying' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, CallFunc_SetProductData_Data_CastInput) == 0x0004D8, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::CallFunc_SetProductData_Data_CastInput' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, CallFunc_GetParentData_bIsValid) == 0x0004E8, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::CallFunc_GetParentData_bIsValid' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, CallFunc_GetParentData_ParentData) == 0x0004F0, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::CallFunc_GetParentData_ParentData' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, K2Node_CustomEvent_DialogType) == 0x000500, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::K2Node_CustomEvent_DialogType' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, K2Node_CustomEvent_ButtonType) == 0x000501, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::K2Node_CustomEvent_ButtonType' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, K2Node_CreateDelegate_OutputDelegate_11) == 0x000504, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::K2Node_CreateDelegate_OutputDelegate_11' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000514, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000515, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, K2Node_SwitchEnum_CmpSuccess_2) == 0x000516, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::K2Node_SwitchEnum_CmpSuccess_2' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, K2Node_CreateDelegate_OutputDelegate_12) == 0x000518, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::K2Node_CreateDelegate_OutputDelegate_12' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, CallFunc_IsEmpty_ReturnValue_2) == 0x000528, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::CallFunc_IsEmpty_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, CallFunc_Not_PreBool_ReturnValue) == 0x000529, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, K2Node_CreateDelegate_OutputDelegate_13) == 0x00052C, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::K2Node_CreateDelegate_OutputDelegate_13' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, K2Node_CreateDelegate_OutputDelegate_14) == 0x00053C, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::K2Node_CreateDelegate_OutputDelegate_14' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, CallFunc_ShowYesNoDialog_ReturnValue) == 0x000550, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::CallFunc_ShowYesNoDialog_ReturnValue' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, CallFunc_PlayAnimation_ReturnValue) == 0x000558, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, CallFunc_PlayAnimation_ReturnValue_1) == 0x000560, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, K2Node_Event_IsStart) == 0x000568, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::K2Node_Event_IsStart' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop, K2Node_CreateDelegate_OutputDelegate_15) == 0x00056C, "Member 'CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop::K2Node_CreateDelegate_OutputDelegate_15' has a wrong offset!");

// Function CashExchangeShop.CashExchangeShop_C.ListenInput
// 0x0001 (0x0001 - 0x0000)
struct CashExchangeShop_C_ListenInput final
{
public:
	bool                                          IsStart;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CashExchangeShop_C_ListenInput) == 0x000001, "Wrong alignment on CashExchangeShop_C_ListenInput");
static_assert(sizeof(CashExchangeShop_C_ListenInput) == 0x000001, "Wrong size on CashExchangeShop_C_ListenInput");
static_assert(offsetof(CashExchangeShop_C_ListenInput, IsStart) == 0x000000, "Member 'CashExchangeShop_C_ListenInput::IsStart' has a wrong offset!");

// Function CashExchangeShop.CashExchangeShop_C.OnDialogButtonClicked_Event
// 0x0002 (0x0002 - 0x0000)
struct CashExchangeShop_C_OnDialogButtonClicked_Event final
{
public:
	ERsDialogType                                 DialogType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ERsDialogButtonType                           ButtonType;                                        // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CashExchangeShop_C_OnDialogButtonClicked_Event) == 0x000001, "Wrong alignment on CashExchangeShop_C_OnDialogButtonClicked_Event");
static_assert(sizeof(CashExchangeShop_C_OnDialogButtonClicked_Event) == 0x000002, "Wrong size on CashExchangeShop_C_OnDialogButtonClicked_Event");
static_assert(offsetof(CashExchangeShop_C_OnDialogButtonClicked_Event, DialogType) == 0x000000, "Member 'CashExchangeShop_C_OnDialogButtonClicked_Event::DialogType' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_OnDialogButtonClicked_Event, ButtonType) == 0x000001, "Member 'CashExchangeShop_C_OnDialogButtonClicked_Event::ButtonType' has a wrong offset!");

// Function CashExchangeShop.CashExchangeShop_C.BndEvt__UMG_ProductItem_K2Node_ComponentBoundEvent_6_OnSelectedItemData__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct CashExchangeShop_C_BndEvt__UMG_ProductItem_K2Node_ComponentBoundEvent_6_OnSelectedItemData__DelegateSignature final
{
public:
	class UBP_SBProductItemData_C*                Data;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bTrying;                                           // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CashExchangeShop_C_BndEvt__UMG_ProductItem_K2Node_ComponentBoundEvent_6_OnSelectedItemData__DelegateSignature) == 0x000008, "Wrong alignment on CashExchangeShop_C_BndEvt__UMG_ProductItem_K2Node_ComponentBoundEvent_6_OnSelectedItemData__DelegateSignature");
static_assert(sizeof(CashExchangeShop_C_BndEvt__UMG_ProductItem_K2Node_ComponentBoundEvent_6_OnSelectedItemData__DelegateSignature) == 0x000010, "Wrong size on CashExchangeShop_C_BndEvt__UMG_ProductItem_K2Node_ComponentBoundEvent_6_OnSelectedItemData__DelegateSignature");
static_assert(offsetof(CashExchangeShop_C_BndEvt__UMG_ProductItem_K2Node_ComponentBoundEvent_6_OnSelectedItemData__DelegateSignature, Data) == 0x000000, "Member 'CashExchangeShop_C_BndEvt__UMG_ProductItem_K2Node_ComponentBoundEvent_6_OnSelectedItemData__DelegateSignature::Data' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_BndEvt__UMG_ProductItem_K2Node_ComponentBoundEvent_6_OnSelectedItemData__DelegateSignature, bTrying) == 0x000008, "Member 'CashExchangeShop_C_BndEvt__UMG_ProductItem_K2Node_ComponentBoundEvent_6_OnSelectedItemData__DelegateSignature::bTrying' has a wrong offset!");

// Function CashExchangeShop.CashExchangeShop_C.BndEvt__UMG_ProductItem_K2Node_ComponentBoundEvent_5_OnItemClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct CashExchangeShop_C_BndEvt__UMG_ProductItem_K2Node_ComponentBoundEvent_5_OnItemClicked__DelegateSignature final
{
public:
	class UBP_SBProductItemData_C*                Data;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CashExchangeShop_C_BndEvt__UMG_ProductItem_K2Node_ComponentBoundEvent_5_OnItemClicked__DelegateSignature) == 0x000008, "Wrong alignment on CashExchangeShop_C_BndEvt__UMG_ProductItem_K2Node_ComponentBoundEvent_5_OnItemClicked__DelegateSignature");
static_assert(sizeof(CashExchangeShop_C_BndEvt__UMG_ProductItem_K2Node_ComponentBoundEvent_5_OnItemClicked__DelegateSignature) == 0x000008, "Wrong size on CashExchangeShop_C_BndEvt__UMG_ProductItem_K2Node_ComponentBoundEvent_5_OnItemClicked__DelegateSignature");
static_assert(offsetof(CashExchangeShop_C_BndEvt__UMG_ProductItem_K2Node_ComponentBoundEvent_5_OnItemClicked__DelegateSignature, Data) == 0x000000, "Member 'CashExchangeShop_C_BndEvt__UMG_ProductItem_K2Node_ComponentBoundEvent_5_OnItemClicked__DelegateSignature::Data' has a wrong offset!");

// Function CashExchangeShop.CashExchangeShop_C.SetProductData
// 0x0010 (0x0010 - 0x0000)
struct CashExchangeShop_C_SetProductData final
{
public:
	TScriptInterface<class IBPI_SBProductData_C>  Data;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CashExchangeShop_C_SetProductData) == 0x000008, "Wrong alignment on CashExchangeShop_C_SetProductData");
static_assert(sizeof(CashExchangeShop_C_SetProductData) == 0x000010, "Wrong size on CashExchangeShop_C_SetProductData");
static_assert(offsetof(CashExchangeShop_C_SetProductData, Data) == 0x000000, "Member 'CashExchangeShop_C_SetProductData::Data' has a wrong offset!");

// Function CashExchangeShop.CashExchangeShop_C.OnListItemSelected
// 0x0004 (0x0004 - 0x0000)
struct CashExchangeShop_C_OnListItemSelected final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CashExchangeShop_C_OnListItemSelected) == 0x000004, "Wrong alignment on CashExchangeShop_C_OnListItemSelected");
static_assert(sizeof(CashExchangeShop_C_OnListItemSelected) == 0x000004, "Wrong size on CashExchangeShop_C_OnListItemSelected");
static_assert(offsetof(CashExchangeShop_C_OnListItemSelected, Param_Index) == 0x000000, "Member 'CashExchangeShop_C_OnListItemSelected::Param_Index' has a wrong offset!");

// Function CashExchangeShop.CashExchangeShop_C.Payment_ErrorHandling
// 0x0004 (0x0004 - 0x0000)
struct CashExchangeShop_C_Payment_ErrorHandling final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CashExchangeShop_C_Payment_ErrorHandling) == 0x000004, "Wrong alignment on CashExchangeShop_C_Payment_ErrorHandling");
static_assert(sizeof(CashExchangeShop_C_Payment_ErrorHandling) == 0x000004, "Wrong size on CashExchangeShop_C_Payment_ErrorHandling");
static_assert(offsetof(CashExchangeShop_C_Payment_ErrorHandling, RetCode) == 0x000000, "Member 'CashExchangeShop_C_Payment_ErrorHandling::RetCode' has a wrong offset!");

// Function CashExchangeShop.CashExchangeShop_C.OnGetShopItems_Event
// 0x0020 (0x0020 - 0x0000)
struct CashExchangeShop_C_OnGetShopItems_Event final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7AB9[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         RetCode;                                           // 0x0004(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBShopItemRoPS>                ResponseData;                                      // 0x0008(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         PruchasePrice;                                     // 0x0018(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CashExchangeShop_C_OnGetShopItems_Event) == 0x000008, "Wrong alignment on CashExchangeShop_C_OnGetShopItems_Event");
static_assert(sizeof(CashExchangeShop_C_OnGetShopItems_Event) == 0x000020, "Wrong size on CashExchangeShop_C_OnGetShopItems_Event");
static_assert(offsetof(CashExchangeShop_C_OnGetShopItems_Event, Result) == 0x000000, "Member 'CashExchangeShop_C_OnGetShopItems_Event::Result' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_OnGetShopItems_Event, RetCode) == 0x000004, "Member 'CashExchangeShop_C_OnGetShopItems_Event::RetCode' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_OnGetShopItems_Event, ResponseData) == 0x000008, "Member 'CashExchangeShop_C_OnGetShopItems_Event::ResponseData' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_OnGetShopItems_Event, PruchasePrice) == 0x000018, "Member 'CashExchangeShop_C_OnGetShopItems_Event::PruchasePrice' has a wrong offset!");

// Function CashExchangeShop.CashExchangeShop_C.OnCancelPurchase_Event
// 0x0008 (0x0008 - 0x0000)
struct CashExchangeShop_C_OnCancelPurchase_Event final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7ABA[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         RetCode;                                           // 0x0004(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CashExchangeShop_C_OnCancelPurchase_Event) == 0x000004, "Wrong alignment on CashExchangeShop_C_OnCancelPurchase_Event");
static_assert(sizeof(CashExchangeShop_C_OnCancelPurchase_Event) == 0x000008, "Wrong size on CashExchangeShop_C_OnCancelPurchase_Event");
static_assert(offsetof(CashExchangeShop_C_OnCancelPurchase_Event, Result) == 0x000000, "Member 'CashExchangeShop_C_OnCancelPurchase_Event::Result' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_OnCancelPurchase_Event, RetCode) == 0x000004, "Member 'CashExchangeShop_C_OnCancelPurchase_Event::RetCode' has a wrong offset!");

// Function CashExchangeShop.CashExchangeShop_C.Payment_Notify
// 0x0038 (0x0038 - 0x0000)
struct CashExchangeShop_C_Payment_Notify final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7ABB[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         RetCode;                                           // 0x0004(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBPurchaseRoPSResponse                ResponseData;                                      // 0x0008(0x0030)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(CashExchangeShop_C_Payment_Notify) == 0x000008, "Wrong alignment on CashExchangeShop_C_Payment_Notify");
static_assert(sizeof(CashExchangeShop_C_Payment_Notify) == 0x000038, "Wrong size on CashExchangeShop_C_Payment_Notify");
static_assert(offsetof(CashExchangeShop_C_Payment_Notify, Result) == 0x000000, "Member 'CashExchangeShop_C_Payment_Notify::Result' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_Payment_Notify, RetCode) == 0x000004, "Member 'CashExchangeShop_C_Payment_Notify::RetCode' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_Payment_Notify, ResponseData) == 0x000008, "Member 'CashExchangeShop_C_Payment_Notify::ResponseData' has a wrong offset!");

// Function CashExchangeShop.CashExchangeShop_C.OnRetryPurchase_Event
// 0x0008 (0x0008 - 0x0000)
struct CashExchangeShop_C_OnRetryPurchase_Event final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7ABC[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         RetCode;                                           // 0x0004(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CashExchangeShop_C_OnRetryPurchase_Event) == 0x000004, "Wrong alignment on CashExchangeShop_C_OnRetryPurchase_Event");
static_assert(sizeof(CashExchangeShop_C_OnRetryPurchase_Event) == 0x000008, "Wrong size on CashExchangeShop_C_OnRetryPurchase_Event");
static_assert(offsetof(CashExchangeShop_C_OnRetryPurchase_Event, Result) == 0x000000, "Member 'CashExchangeShop_C_OnRetryPurchase_Event::Result' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_OnRetryPurchase_Event, RetCode) == 0x000004, "Member 'CashExchangeShop_C_OnRetryPurchase_Event::RetCode' has a wrong offset!");

// Function CashExchangeShop.CashExchangeShop_C.OnPurchaseRoPS_Event
// 0x0038 (0x0038 - 0x0000)
struct CashExchangeShop_C_OnPurchaseRoPS_Event final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7ABD[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         RetCode;                                           // 0x0004(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBPurchaseRoPSResponse                ResponseData;                                      // 0x0008(0x0030)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(CashExchangeShop_C_OnPurchaseRoPS_Event) == 0x000008, "Wrong alignment on CashExchangeShop_C_OnPurchaseRoPS_Event");
static_assert(sizeof(CashExchangeShop_C_OnPurchaseRoPS_Event) == 0x000038, "Wrong size on CashExchangeShop_C_OnPurchaseRoPS_Event");
static_assert(offsetof(CashExchangeShop_C_OnPurchaseRoPS_Event, Result) == 0x000000, "Member 'CashExchangeShop_C_OnPurchaseRoPS_Event::Result' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_OnPurchaseRoPS_Event, RetCode) == 0x000004, "Member 'CashExchangeShop_C_OnPurchaseRoPS_Event::RetCode' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_OnPurchaseRoPS_Event, ResponseData) == 0x000008, "Member 'CashExchangeShop_C_OnPurchaseRoPS_Event::ResponseData' has a wrong offset!");

// Function CashExchangeShop.CashExchangeShop_C.OnPaymentDecide_Event
// 0x0010 (0x0010 - 0x0000)
struct CashExchangeShop_C_OnPaymentDecide_Event final
{
public:
	class FString                                 Payment;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(CashExchangeShop_C_OnPaymentDecide_Event) == 0x000008, "Wrong alignment on CashExchangeShop_C_OnPaymentDecide_Event");
static_assert(sizeof(CashExchangeShop_C_OnPaymentDecide_Event) == 0x000010, "Wrong size on CashExchangeShop_C_OnPaymentDecide_Event");
static_assert(offsetof(CashExchangeShop_C_OnPaymentDecide_Event, Payment) == 0x000000, "Member 'CashExchangeShop_C_OnPaymentDecide_Event::Payment' has a wrong offset!");

// Function CashExchangeShop.CashExchangeShop_C.OnGetCurrency_Event
// 0x0030 (0x0030 - 0x0000)
struct CashExchangeShop_C_OnGetCurrency_Event final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7ABE[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         RetCode;                                           // 0x0004(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBCryptoCurrency                      Cryptocurrency;                                    // 0x0008(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(CashExchangeShop_C_OnGetCurrency_Event) == 0x000008, "Wrong alignment on CashExchangeShop_C_OnGetCurrency_Event");
static_assert(sizeof(CashExchangeShop_C_OnGetCurrency_Event) == 0x000030, "Wrong size on CashExchangeShop_C_OnGetCurrency_Event");
static_assert(offsetof(CashExchangeShop_C_OnGetCurrency_Event, Result) == 0x000000, "Member 'CashExchangeShop_C_OnGetCurrency_Event::Result' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_OnGetCurrency_Event, RetCode) == 0x000004, "Member 'CashExchangeShop_C_OnGetCurrency_Event::RetCode' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_OnGetCurrency_Event, Cryptocurrency) == 0x000008, "Member 'CashExchangeShop_C_OnGetCurrency_Event::Cryptocurrency' has a wrong offset!");

// Function CashExchangeShop.CashExchangeShop_C.OnDialogClose01
// 0x0001 (0x0001 - 0x0000)
struct CashExchangeShop_C_OnDialogClose01 final
{
public:
	EYesNoDialogResult                            Result;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CashExchangeShop_C_OnDialogClose01) == 0x000001, "Wrong alignment on CashExchangeShop_C_OnDialogClose01");
static_assert(sizeof(CashExchangeShop_C_OnDialogClose01) == 0x000001, "Wrong size on CashExchangeShop_C_OnDialogClose01");
static_assert(offsetof(CashExchangeShop_C_OnDialogClose01, Result) == 0x000000, "Member 'CashExchangeShop_C_OnDialogClose01::Result' has a wrong offset!");

// Function CashExchangeShop.CashExchangeShop_C.Initialize
// 0x0098 (0x0098 - 0x0000)
struct CashExchangeShop_C_Initialize final
{
public:
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7ABF[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(ERsDialogType DialogType, ERsDialogButtonType ButtonType)> K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	struct FSBCountryConfigMasterData             CallFunc_BP_GetCountryConfigMasterById_ReturnValue; // 0x0020(0x0048)()
	bool                                          CallFunc_Conv_IntToBool_ReturnValue;               // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7AC0[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class URmShopMenu_C*                          K2Node_DynamicCast_AsRm_Shop_Menu;                 // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid_1;           // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7AC1[0x6];                                     // 0x007A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue_1;       // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0088(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(CashExchangeShop_C_Initialize) == 0x000008, "Wrong alignment on CashExchangeShop_C_Initialize");
static_assert(sizeof(CashExchangeShop_C_Initialize) == 0x000098, "Wrong size on CashExchangeShop_C_Initialize");
static_assert(offsetof(CashExchangeShop_C_Initialize, CallFunc_GetMasterDataManager_IsValid) == 0x000000, "Member 'CashExchangeShop_C_Initialize::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_Initialize, CallFunc_GetMasterDataManager_ReturnValue) == 0x000008, "Member 'CashExchangeShop_C_Initialize::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_Initialize, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'CashExchangeShop_C_Initialize::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_Initialize, CallFunc_BP_GetCountryConfigMasterById_ReturnValue) == 0x000020, "Member 'CashExchangeShop_C_Initialize::CallFunc_BP_GetCountryConfigMasterById_ReturnValue' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_Initialize, CallFunc_Conv_IntToBool_ReturnValue) == 0x000068, "Member 'CashExchangeShop_C_Initialize::CallFunc_Conv_IntToBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_Initialize, K2Node_DynamicCast_AsRm_Shop_Menu) == 0x000070, "Member 'CashExchangeShop_C_Initialize::K2Node_DynamicCast_AsRm_Shop_Menu' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_Initialize, K2Node_DynamicCast_bSuccess) == 0x000078, "Member 'CashExchangeShop_C_Initialize::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_Initialize, CallFunc_GetMasterDataManager_IsValid_1) == 0x000079, "Member 'CashExchangeShop_C_Initialize::CallFunc_GetMasterDataManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_Initialize, CallFunc_GetMasterDataManager_ReturnValue_1) == 0x000080, "Member 'CashExchangeShop_C_Initialize::CallFunc_GetMasterDataManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_Initialize, K2Node_CreateDelegate_OutputDelegate_1) == 0x000088, "Member 'CashExchangeShop_C_Initialize::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");

// Function CashExchangeShop.CashExchangeShop_C.Release
// 0x0030 (0x0030 - 0x0000)
struct CashExchangeShop_C_Release final
{
public:
	TDelegate<void(ERsDialogType DialogType, ERsDialogButtonType ButtonType)> K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool Result, int32 RetCode, struct FSBPurchaseRoPSResponse& ResponseData)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	class URmShopMenu_C*                          K2Node_DynamicCast_AsRm_Shop_Menu;                 // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CashExchangeShop_C_Release) == 0x000008, "Wrong alignment on CashExchangeShop_C_Release");
static_assert(sizeof(CashExchangeShop_C_Release) == 0x000030, "Wrong size on CashExchangeShop_C_Release");
static_assert(offsetof(CashExchangeShop_C_Release, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'CashExchangeShop_C_Release::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_Release, K2Node_CreateDelegate_OutputDelegate_1) == 0x000010, "Member 'CashExchangeShop_C_Release::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_Release, K2Node_DynamicCast_AsRm_Shop_Menu) == 0x000020, "Member 'CashExchangeShop_C_Release::K2Node_DynamicCast_AsRm_Shop_Menu' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_Release, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'CashExchangeShop_C_Release::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function CashExchangeShop.CashExchangeShop_C.GetComponentRef
// 0x0030 (0x0030 - 0x0000)
struct CashExchangeShop_C_GetComponentRef final
{
public:
	bool                                          Ret;                                               // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7AC2[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7AC3[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBCashExchangeShopComponent*           CallFunc_GetCashExchangeShopComponent_ReturnValue; // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBRmShopComponent*                     CallFunc_GetRmShopComponent_ReturnValue;           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CashExchangeShop_C_GetComponentRef) == 0x000008, "Wrong alignment on CashExchangeShop_C_GetComponentRef");
static_assert(sizeof(CashExchangeShop_C_GetComponentRef) == 0x000030, "Wrong size on CashExchangeShop_C_GetComponentRef");
static_assert(offsetof(CashExchangeShop_C_GetComponentRef, Ret) == 0x000000, "Member 'CashExchangeShop_C_GetComponentRef::Ret' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_GetComponentRef, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'CashExchangeShop_C_GetComponentRef::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_GetComponentRef, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000010, "Member 'CashExchangeShop_C_GetComponentRef::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_GetComponentRef, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'CashExchangeShop_C_GetComponentRef::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_GetComponentRef, CallFunc_GetCashExchangeShopComponent_ReturnValue) == 0x000020, "Member 'CashExchangeShop_C_GetComponentRef::CallFunc_GetCashExchangeShopComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_GetComponentRef, CallFunc_GetRmShopComponent_ReturnValue) == 0x000028, "Member 'CashExchangeShop_C_GetComponentRef::CallFunc_GetRmShopComponent_ReturnValue' has a wrong offset!");

// Function CashExchangeShop.CashExchangeShop_C.TryEscTerm
// 0x0002 (0x0002 - 0x0000)
struct CashExchangeShop_C_TryEscTerm final
{
public:
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CashExchangeShop_C_TryEscTerm) == 0x000001, "Wrong alignment on CashExchangeShop_C_TryEscTerm");
static_assert(sizeof(CashExchangeShop_C_TryEscTerm) == 0x000002, "Wrong size on CashExchangeShop_C_TryEscTerm");
static_assert(offsetof(CashExchangeShop_C_TryEscTerm, CallFunc_GetVisibility_ReturnValue) == 0x000000, "Member 'CashExchangeShop_C_TryEscTerm::CallFunc_GetVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_TryEscTerm, K2Node_SwitchEnum_CmpSuccess) == 0x000001, "Member 'CashExchangeShop_C_TryEscTerm::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function CashExchangeShop.CashExchangeShop_C.OpenProductItem
// 0x0028 (0x0028 - 0x0000)
struct CashExchangeShop_C_OpenProductItem final
{
public:
	int32                                         SelectID;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7AC4[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_SBProductData_C*                    CallFunc_SpawnObject_ReturnValue;                  // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_SBProductData_C>  CallFunc_SetProductData_Data_CastInput;            // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CashExchangeShop_C_OpenProductItem) == 0x000008, "Wrong alignment on CashExchangeShop_C_OpenProductItem");
static_assert(sizeof(CashExchangeShop_C_OpenProductItem) == 0x000028, "Wrong size on CashExchangeShop_C_OpenProductItem");
static_assert(offsetof(CashExchangeShop_C_OpenProductItem, SelectID) == 0x000000, "Member 'CashExchangeShop_C_OpenProductItem::SelectID' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_OpenProductItem, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'CashExchangeShop_C_OpenProductItem::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_OpenProductItem, CallFunc_SpawnObject_ReturnValue) == 0x000010, "Member 'CashExchangeShop_C_OpenProductItem::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_OpenProductItem, CallFunc_SetProductData_Data_CastInput) == 0x000018, "Member 'CashExchangeShop_C_OpenProductItem::CallFunc_SetProductData_Data_CastInput' has a wrong offset!");

// Function CashExchangeShop.CashExchangeShop_C.CloseProductItem
// 0x0010 (0x0010 - 0x0000)
struct CashExchangeShop_C_CloseProductItem final
{
public:
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7AC5[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CashExchangeShop_C_CloseProductItem) == 0x000008, "Wrong alignment on CashExchangeShop_C_CloseProductItem");
static_assert(sizeof(CashExchangeShop_C_CloseProductItem) == 0x000010, "Wrong size on CashExchangeShop_C_CloseProductItem");
static_assert(offsetof(CashExchangeShop_C_CloseProductItem, CallFunc_PlaySE_ReturnValue) == 0x000000, "Member 'CashExchangeShop_C_CloseProductItem::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_CloseProductItem, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'CashExchangeShop_C_CloseProductItem::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function CashExchangeShop.CashExchangeShop_C.GetIconTexture
// 0x00C8 (0x00C8 - 0x0000)
struct CashExchangeShop_C_GetIconTexture final
{
public:
	int32                                         ID;                                                // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7AC6[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              Texture;                                           // 0x0008(0x0028)(Parm, OutParm, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_ShopIconData                       CallFunc_GetDataTableRowFromName_OutRow;           // 0x0048(0x0078)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CashExchangeShop_C_GetIconTexture) == 0x000008, "Wrong alignment on CashExchangeShop_C_GetIconTexture");
static_assert(sizeof(CashExchangeShop_C_GetIconTexture) == 0x0000C8, "Wrong size on CashExchangeShop_C_GetIconTexture");
static_assert(offsetof(CashExchangeShop_C_GetIconTexture, ID) == 0x000000, "Member 'CashExchangeShop_C_GetIconTexture::ID' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_GetIconTexture, Texture) == 0x000008, "Member 'CashExchangeShop_C_GetIconTexture::Texture' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_GetIconTexture, CallFunc_Conv_IntToString_ReturnValue) == 0x000030, "Member 'CashExchangeShop_C_GetIconTexture::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_GetIconTexture, CallFunc_Conv_StringToName_ReturnValue) == 0x000040, "Member 'CashExchangeShop_C_GetIconTexture::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_GetIconTexture, CallFunc_GetDataTableRowFromName_OutRow) == 0x000048, "Member 'CashExchangeShop_C_GetIconTexture::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_GetIconTexture, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0000C0, "Member 'CashExchangeShop_C_GetIconTexture::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_GetIconTexture, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x0000C1, "Member 'CashExchangeShop_C_GetIconTexture::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");

// Function CashExchangeShop.CashExchangeShop_C.TryEscVisibility
// 0x0001 (0x0001 - 0x0000)
struct CashExchangeShop_C_TryEscVisibility final
{
public:
	bool                                          IsShow;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CashExchangeShop_C_TryEscVisibility) == 0x000001, "Wrong alignment on CashExchangeShop_C_TryEscVisibility");
static_assert(sizeof(CashExchangeShop_C_TryEscVisibility) == 0x000001, "Wrong size on CashExchangeShop_C_TryEscVisibility");
static_assert(offsetof(CashExchangeShop_C_TryEscVisibility, IsShow) == 0x000000, "Member 'CashExchangeShop_C_TryEscVisibility::IsShow' has a wrong offset!");

// Function CashExchangeShop.CashExchangeShop_C.CheckRetryByRetCode
// 0x0008 (0x0008 - 0x0000)
struct CashExchangeShop_C_CheckRetryByRetCode final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsRetry;                                           // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CashExchangeShop_C_CheckRetryByRetCode) == 0x000004, "Wrong alignment on CashExchangeShop_C_CheckRetryByRetCode");
static_assert(sizeof(CashExchangeShop_C_CheckRetryByRetCode) == 0x000008, "Wrong size on CashExchangeShop_C_CheckRetryByRetCode");
static_assert(offsetof(CashExchangeShop_C_CheckRetryByRetCode, RetCode) == 0x000000, "Member 'CashExchangeShop_C_CheckRetryByRetCode::RetCode' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_CheckRetryByRetCode, IsRetry) == 0x000004, "Member 'CashExchangeShop_C_CheckRetryByRetCode::IsRetry' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_CheckRetryByRetCode, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000005, "Member 'CashExchangeShop_C_CheckRetryByRetCode::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_CheckRetryByRetCode, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000006, "Member 'CashExchangeShop_C_CheckRetryByRetCode::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_CheckRetryByRetCode, CallFunc_BooleanOR_ReturnValue) == 0x000007, "Member 'CashExchangeShop_C_CheckRetryByRetCode::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function CashExchangeShop.CashExchangeShop_C.CreateProductListRemake
// 0x02F8 (0x02F8 - 0x0000)
struct CashExchangeShop_C_CreateProductListRemake final
{
public:
	TArray<struct FSBShopItemRoPS>                GetList;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FSBShopItemRoPS>                L_GetList;                                         // 0x0010(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Variable;                                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBShopItemRoPS                        CallFunc_Array_Get_Item;                           // 0x0038(0x0050)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x008D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7AC7[0x2];                                     // 0x008E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_BP_GetRoSPurchaseShopRibbonByItemId_ReturnValue; // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7AC8[0x3];                                     // 0x0095(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBRoseOrbShopItemMasterData           K2Node_MakeStruct_SBRoseOrbShopItemMasterData;     // 0x0098(0x0060)()
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7AC9[0x4];                                     // 0x00FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBShopItemRoPS                        CallFunc_Array_Get_Item_1;                         // 0x0100(0x0050)()
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0154(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7ACA[0x3];                                     // 0x0155(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBRoseOrbShopItemMasterData           CallFunc_Array_Get_Item_2;                         // 0x0158(0x0060)()
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7ACB[0x3];                                     // 0x01B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_BP_GetRoSPurchaseShopRibbonByItemId_ReturnValue_1; // 0x01BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7ACC[0x7];                                     // 0x01C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBRoseOrbShopItemMasterData           K2Node_MakeStruct_SBRoseOrbShopItemMasterData_1;   // 0x01C8(0x0060)()
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0228(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7ACD[0x3];                                     // 0x0229(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_AddUnique_ReturnValue_1;            // 0x022C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0230(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0234(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBRoseOrbShopItemMasterData           CallFunc_Array_Get_Item_3;                         // 0x0238(0x0060)()
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0298(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7ACE[0x3];                                     // 0x0299(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x029C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x02A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x02A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x02A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7ACF[0x3];                                     // 0x02A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x02AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x02B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7AD0[0x3];                                     // 0x02B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x02B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x02B8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TDelegate<void(int32 Index)>                  K2Node_CreateDelegate_OutputDelegate;              // 0x02C8(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x02D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x02DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7AD1[0x3];                                     // 0x02DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x02E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7AD2[0x4];                                     // 0x02E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFlatShop_Product_L_C*                  CallFunc_Create_ReturnValue;                       // 0x02E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x02F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CashExchangeShop_C_CreateProductListRemake) == 0x000008, "Wrong alignment on CashExchangeShop_C_CreateProductListRemake");
static_assert(sizeof(CashExchangeShop_C_CreateProductListRemake) == 0x0002F8, "Wrong size on CashExchangeShop_C_CreateProductListRemake");
static_assert(offsetof(CashExchangeShop_C_CreateProductListRemake, GetList) == 0x000000, "Member 'CashExchangeShop_C_CreateProductListRemake::GetList' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_CreateProductListRemake, L_GetList) == 0x000010, "Member 'CashExchangeShop_C_CreateProductListRemake::L_GetList' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_CreateProductListRemake, Temp_int_Variable) == 0x000020, "Member 'CashExchangeShop_C_CreateProductListRemake::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_CreateProductListRemake, CallFunc_Add_IntInt_ReturnValue) == 0x000024, "Member 'CashExchangeShop_C_CreateProductListRemake::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_CreateProductListRemake, Temp_int_Array_Index_Variable) == 0x000028, "Member 'CashExchangeShop_C_CreateProductListRemake::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_CreateProductListRemake, Temp_int_Variable_1) == 0x00002C, "Member 'CashExchangeShop_C_CreateProductListRemake::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_CreateProductListRemake, CallFunc_Add_IntInt_ReturnValue_1) == 0x000030, "Member 'CashExchangeShop_C_CreateProductListRemake::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_CreateProductListRemake, Temp_int_Array_Index_Variable_1) == 0x000034, "Member 'CashExchangeShop_C_CreateProductListRemake::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_CreateProductListRemake, CallFunc_Array_Get_Item) == 0x000038, "Member 'CashExchangeShop_C_CreateProductListRemake::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_CreateProductListRemake, CallFunc_Array_Length_ReturnValue) == 0x000088, "Member 'CashExchangeShop_C_CreateProductListRemake::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_CreateProductListRemake, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00008C, "Member 'CashExchangeShop_C_CreateProductListRemake::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_CreateProductListRemake, CallFunc_Greater_IntInt_ReturnValue) == 0x00008D, "Member 'CashExchangeShop_C_CreateProductListRemake::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_CreateProductListRemake, CallFunc_BP_GetRoSPurchaseShopRibbonByItemId_ReturnValue) == 0x000090, "Member 'CashExchangeShop_C_CreateProductListRemake::CallFunc_BP_GetRoSPurchaseShopRibbonByItemId_ReturnValue' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_CreateProductListRemake, CallFunc_BooleanAND_ReturnValue) == 0x000094, "Member 'CashExchangeShop_C_CreateProductListRemake::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_CreateProductListRemake, K2Node_MakeStruct_SBRoseOrbShopItemMasterData) == 0x000098, "Member 'CashExchangeShop_C_CreateProductListRemake::K2Node_MakeStruct_SBRoseOrbShopItemMasterData' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_CreateProductListRemake, CallFunc_Array_AddUnique_ReturnValue) == 0x0000F8, "Member 'CashExchangeShop_C_CreateProductListRemake::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_CreateProductListRemake, CallFunc_Array_Get_Item_1) == 0x000100, "Member 'CashExchangeShop_C_CreateProductListRemake::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_CreateProductListRemake, CallFunc_Array_Length_ReturnValue_1) == 0x000150, "Member 'CashExchangeShop_C_CreateProductListRemake::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_CreateProductListRemake, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000154, "Member 'CashExchangeShop_C_CreateProductListRemake::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_CreateProductListRemake, CallFunc_Array_Get_Item_2) == 0x000158, "Member 'CashExchangeShop_C_CreateProductListRemake::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_CreateProductListRemake, CallFunc_Greater_IntInt_ReturnValue_1) == 0x0001B8, "Member 'CashExchangeShop_C_CreateProductListRemake::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_CreateProductListRemake, CallFunc_BP_GetRoSPurchaseShopRibbonByItemId_ReturnValue_1) == 0x0001BC, "Member 'CashExchangeShop_C_CreateProductListRemake::CallFunc_BP_GetRoSPurchaseShopRibbonByItemId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_CreateProductListRemake, CallFunc_BooleanAND_ReturnValue_1) == 0x0001C0, "Member 'CashExchangeShop_C_CreateProductListRemake::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_CreateProductListRemake, K2Node_MakeStruct_SBRoseOrbShopItemMasterData_1) == 0x0001C8, "Member 'CashExchangeShop_C_CreateProductListRemake::K2Node_MakeStruct_SBRoseOrbShopItemMasterData_1' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_CreateProductListRemake, CallFunc_Not_PreBool_ReturnValue) == 0x000228, "Member 'CashExchangeShop_C_CreateProductListRemake::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_CreateProductListRemake, CallFunc_Array_AddUnique_ReturnValue_1) == 0x00022C, "Member 'CashExchangeShop_C_CreateProductListRemake::CallFunc_Array_AddUnique_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_CreateProductListRemake, CallFunc_Array_Length_ReturnValue_2) == 0x000230, "Member 'CashExchangeShop_C_CreateProductListRemake::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_CreateProductListRemake, CallFunc_Subtract_IntInt_ReturnValue) == 0x000234, "Member 'CashExchangeShop_C_CreateProductListRemake::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_CreateProductListRemake, CallFunc_Array_Get_Item_3) == 0x000238, "Member 'CashExchangeShop_C_CreateProductListRemake::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_CreateProductListRemake, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000298, "Member 'CashExchangeShop_C_CreateProductListRemake::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_CreateProductListRemake, CallFunc_Array_Add_ReturnValue) == 0x00029C, "Member 'CashExchangeShop_C_CreateProductListRemake::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_CreateProductListRemake, Temp_int_Loop_Counter_Variable) == 0x0002A0, "Member 'CashExchangeShop_C_CreateProductListRemake::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_CreateProductListRemake, CallFunc_Array_Length_ReturnValue_3) == 0x0002A4, "Member 'CashExchangeShop_C_CreateProductListRemake::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_CreateProductListRemake, CallFunc_Less_IntInt_ReturnValue) == 0x0002A8, "Member 'CashExchangeShop_C_CreateProductListRemake::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_CreateProductListRemake, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x0002AC, "Member 'CashExchangeShop_C_CreateProductListRemake::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_CreateProductListRemake, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x0002B0, "Member 'CashExchangeShop_C_CreateProductListRemake::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_CreateProductListRemake, CallFunc_Add_IntInt_ReturnValue_2) == 0x0002B4, "Member 'CashExchangeShop_C_CreateProductListRemake::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_CreateProductListRemake, K2Node_MakeStruct_Margin) == 0x0002B8, "Member 'CashExchangeShop_C_CreateProductListRemake::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_CreateProductListRemake, K2Node_CreateDelegate_OutputDelegate) == 0x0002C8, "Member 'CashExchangeShop_C_CreateProductListRemake::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_CreateProductListRemake, Temp_int_Loop_Counter_Variable_1) == 0x0002D8, "Member 'CashExchangeShop_C_CreateProductListRemake::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_CreateProductListRemake, CallFunc_Less_IntInt_ReturnValue_1) == 0x0002DC, "Member 'CashExchangeShop_C_CreateProductListRemake::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_CreateProductListRemake, CallFunc_Add_IntInt_ReturnValue_3) == 0x0002E0, "Member 'CashExchangeShop_C_CreateProductListRemake::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_CreateProductListRemake, CallFunc_Create_ReturnValue) == 0x0002E8, "Member 'CashExchangeShop_C_CreateProductListRemake::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_CreateProductListRemake, CallFunc_AddChild_ReturnValue) == 0x0002F0, "Member 'CashExchangeShop_C_CreateProductListRemake::CallFunc_AddChild_ReturnValue' has a wrong offset!");

// Function CashExchangeShop.CashExchangeShop_C.IsPurchasePriceCheck
// 0x0058 (0x0058 - 0x0000)
struct CashExchangeShop_C_IsPurchasePriceCheck final
{
public:
	bool                                          IsOver;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7AD3[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7AD4[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7AD5[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBPaymentLimitMasterData>      CallFunc_BP_GetPaymentLimitMaster_ReturnValue;     // 0x0020(0x0010)(ReferenceParm)
	struct FSBPaymentLimitMasterData              CallFunc_Array_Get_Item;                           // 0x0030(0x0010)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x004D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x004E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7AD6[0x1];                                     // 0x004F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CashExchangeShop_C_IsPurchasePriceCheck) == 0x000008, "Wrong alignment on CashExchangeShop_C_IsPurchasePriceCheck");
static_assert(sizeof(CashExchangeShop_C_IsPurchasePriceCheck) == 0x000058, "Wrong size on CashExchangeShop_C_IsPurchasePriceCheck");
static_assert(offsetof(CashExchangeShop_C_IsPurchasePriceCheck, IsOver) == 0x000000, "Member 'CashExchangeShop_C_IsPurchasePriceCheck::IsOver' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_IsPurchasePriceCheck, CallFunc_Add_IntInt_ReturnValue) == 0x000004, "Member 'CashExchangeShop_C_IsPurchasePriceCheck::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_IsPurchasePriceCheck, Temp_int_Variable) == 0x000008, "Member 'CashExchangeShop_C_IsPurchasePriceCheck::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_IsPurchasePriceCheck, CallFunc_GetMasterDataManager_IsValid) == 0x00000C, "Member 'CashExchangeShop_C_IsPurchasePriceCheck::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_IsPurchasePriceCheck, CallFunc_GetMasterDataManager_ReturnValue) == 0x000010, "Member 'CashExchangeShop_C_IsPurchasePriceCheck::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_IsPurchasePriceCheck, CallFunc_Less_IntInt_ReturnValue) == 0x000018, "Member 'CashExchangeShop_C_IsPurchasePriceCheck::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_IsPurchasePriceCheck, CallFunc_BP_GetPaymentLimitMaster_ReturnValue) == 0x000020, "Member 'CashExchangeShop_C_IsPurchasePriceCheck::CallFunc_BP_GetPaymentLimitMaster_ReturnValue' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_IsPurchasePriceCheck, CallFunc_Array_Get_Item) == 0x000030, "Member 'CashExchangeShop_C_IsPurchasePriceCheck::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_IsPurchasePriceCheck, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'CashExchangeShop_C_IsPurchasePriceCheck::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_IsPurchasePriceCheck, CallFunc_Subtract_IntInt_ReturnValue) == 0x000044, "Member 'CashExchangeShop_C_IsPurchasePriceCheck::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_IsPurchasePriceCheck, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000048, "Member 'CashExchangeShop_C_IsPurchasePriceCheck::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_IsPurchasePriceCheck, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00004C, "Member 'CashExchangeShop_C_IsPurchasePriceCheck::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_IsPurchasePriceCheck, CallFunc_Less_IntInt_ReturnValue_1) == 0x00004D, "Member 'CashExchangeShop_C_IsPurchasePriceCheck::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_IsPurchasePriceCheck, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x00004E, "Member 'CashExchangeShop_C_IsPurchasePriceCheck::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CashExchangeShop_C_IsPurchasePriceCheck, CallFunc_Add_IntInt_ReturnValue_1) == 0x000050, "Member 'CashExchangeShop_C_IsPurchasePriceCheck::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");

}

