#pragma once

 

// Package: RmShopMenu

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "RsDialogPaymentType_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "ESBCashExchangeType_structs.hpp"
#include "RsDialogCurrencyPaidType_structs.hpp"
#include "RsDialogType_structs.hpp"
#include "RsDialogProductTitleType_structs.hpp"
#include "RsDialogButtonType_structs.hpp"


namespace SDK::Params
{

// Function RmShopMenu.RmShopMenu_C.OnCommandMenuVisible__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct RmShopMenu_C_OnCommandMenuVisible__DelegateSignature final
{
public:
	bool                                          Param_IsVisible;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(RmShopMenu_C_OnCommandMenuVisible__DelegateSignature) == 0x000001, "Wrong alignment on RmShopMenu_C_OnCommandMenuVisible__DelegateSignature");
static_assert(sizeof(RmShopMenu_C_OnCommandMenuVisible__DelegateSignature) == 0x000001, "Wrong size on RmShopMenu_C_OnCommandMenuVisible__DelegateSignature");
static_assert(offsetof(RmShopMenu_C_OnCommandMenuVisible__DelegateSignature, Param_IsVisible) == 0x000000, "Member 'RmShopMenu_C_OnCommandMenuVisible__DelegateSignature::Param_IsVisible' has a wrong offset!");

// Function RmShopMenu.RmShopMenu_C.OnDialogButtonClicked__DelegateSignature
// 0x0002 (0x0002 - 0x0000)
struct RmShopMenu_C_OnDialogButtonClicked__DelegateSignature final
{
public:
	ERsDialogType                                 DialogType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ERsDialogButtonType                           ButtonType;                                        // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RmShopMenu_C_OnDialogButtonClicked__DelegateSignature) == 0x000001, "Wrong alignment on RmShopMenu_C_OnDialogButtonClicked__DelegateSignature");
static_assert(sizeof(RmShopMenu_C_OnDialogButtonClicked__DelegateSignature) == 0x000002, "Wrong size on RmShopMenu_C_OnDialogButtonClicked__DelegateSignature");
static_assert(offsetof(RmShopMenu_C_OnDialogButtonClicked__DelegateSignature, DialogType) == 0x000000, "Member 'RmShopMenu_C_OnDialogButtonClicked__DelegateSignature::DialogType' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_OnDialogButtonClicked__DelegateSignature, ButtonType) == 0x000001, "Member 'RmShopMenu_C_OnDialogButtonClicked__DelegateSignature::ButtonType' has a wrong offset!");

// Function RmShopMenu.RmShopMenu_C.OnDialogUseCoupon__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct RmShopMenu_C_OnDialogUseCoupon__DelegateSignature final
{
public:
	class FString                                 CouponCode;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(RmShopMenu_C_OnDialogUseCoupon__DelegateSignature) == 0x000008, "Wrong alignment on RmShopMenu_C_OnDialogUseCoupon__DelegateSignature");
static_assert(sizeof(RmShopMenu_C_OnDialogUseCoupon__DelegateSignature) == 0x000010, "Wrong size on RmShopMenu_C_OnDialogUseCoupon__DelegateSignature");
static_assert(offsetof(RmShopMenu_C_OnDialogUseCoupon__DelegateSignature, CouponCode) == 0x000000, "Member 'RmShopMenu_C_OnDialogUseCoupon__DelegateSignature::CouponCode' has a wrong offset!");

// Function RmShopMenu.RmShopMenu_C.ExecuteUbergraph_RmShopMenu
// 0x0680 (0x0680 - 0x0000)
struct RmShopMenu_C_ExecuteUbergraph_RmShopMenu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8BA6[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UObject>                    K2Node_CustomEvent_Loaded;                         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                 Temp_class_Variable;                               // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 K2Node_ClassDynamicCast_AsSBRm_Shop_Menu_Child_Base; // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8BA7[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBRmShopMenuChildBase*                 CallFunc_Create_ReturnValue;                       // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0033(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x0036(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_4;                              // 0x0037(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0038(0x0010)(ZeroConstructor, NoDestructor)
	ESBRmShopMenuType                             Temp_byte_Variable_5;                              // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8BA8[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x004C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool Result, int32 RetCode, struct FSBCryptoCurrency& Cryptocurrency)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x005C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_8BA9[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_RsDialogManager_C*                  CallFunc_Create_ReturnValue_1;                     // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_RmShopMaintenanceAll_C*            CallFunc_Create_ReturnValue_2;                     // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x0080(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(ESBRmShopErrorStatus Result, int32 RetCode)> K2Node_CreateDelegate_OutputDelegate_4;            // 0x0090(0x0010)(ZeroConstructor, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_6;                              // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8BAA[0x3];                                     // 0x00A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_ErrorCode;                      // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_ShowMsgStoreLetter;             // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ERsDialogCurrencyPaidType                     K2Node_CustomEvent_PaidType;                       // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8BAB[0x6];                                     // 0x00AA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_CustomEvent_EffectDescription;              // 0x00B0(0x0018)()
	ERsDialogProductTitleType                     K2Node_CustomEvent_ProductTitleType;               // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8BAC[0x3];                                     // 0x00C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_ItemSetId;                      // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_CustomEvent_ProductName;                    // 0x00D0(0x0018)()
	int32                                         K2Node_CustomEvent_RankFrom;                       // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_RankTo;                         // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_ShowPurchaseNum;                // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8BAD[0x3];                                     // 0x00F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_PurchaseNum;                    // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ERsDialogPaymentType                          K2Node_CustomEvent_PaymentType;                    // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8BAE[0x3];                                     // 0x00F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_PurchasePrice;                  // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_PaidOnly;                       // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_IsAchieve;                      // 0x0101(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8BAF[0x6];                                     // 0x0102(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_Text;                           // 0x0108(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Rate_1;                         // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Free;                           // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Paid;                           // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8BB0[0x4];                                     // 0x0124(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              K2Node_CustomEvent_FreeExpired;                    // 0x0128(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              K2Node_CustomEvent_PaidExpired;                    // 0x0130(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_BP;                             // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_SP;                             // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Rate;                           // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Year_3;                         // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Month_3;                        // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Result_4;                       // 0x014C(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8BB1[0x3];                                     // 0x014D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_RetCode_4;                      // 0x0150(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_4;                              // 0x0154(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8BB2[0x3];                                     // 0x0155(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue;              // 0x0158(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8BB3[0x7];                                     // 0x0169(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0170(0x0018)()
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_7;                              // 0x0189(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8BB4[0x6];                                     // 0x018A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0190(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x01A0(0x0018)()
	ESlateVisibility                              Temp_byte_Variable_8;                              // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_5;                              // 0x01B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBHistoryType                                K2Node_CustomEvent_Type_5;                         // 0x01BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8BB5[0x1];                                     // 0x01BB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_Year_2;                         // 0x01BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Month_2;                        // 0x01C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Count_1;                        // 0x01C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_9;                              // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_10;                             // 0x01C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8BB6[0x6];                                     // 0x01CA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Temp_class_Variable_1;                             // 0x01D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 K2Node_ClassDynamicCast_AsSBRm_Shop_Menu_Child_Base_1; // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess_1;                // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8BB7[0x7];                                     // 0x01E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBRmShopMenuChildBase*                 CallFunc_Create_ReturnValue_3;                     // 0x01E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Result_3;                       // 0x01F0(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8BB8[0x3];                                     // 0x01F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_RetCode_3;                      // 0x01F4(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBCashHistory>                 K2Node_CustomEvent_HistoryData;                    // 0x01F8(0x0010)(ConstParm, ReferenceParm)
	ESlateVisibility                              Temp_byte_Variable_11;                             // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8BB9[0x7];                                     // 0x0209(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue_1;            // 0x0210(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0220(0x0018)()
	ESlateVisibility                              Temp_byte_Variable_12;                             // 0x0238(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBHistoryType                                K2Node_CustomEvent_Type_4;                         // 0x0239(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Result_2;                       // 0x023A(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8BBA[0x1];                                     // 0x023B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_RetCode_2;                      // 0x023C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBHistoryExpired                      K2Node_CustomEvent_HistoryExpired;                 // 0x0240(0x0028)(ConstParm, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_13;                             // 0x0268(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8BBB[0x7];                                     // 0x0269(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue_2;            // 0x0270(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0280(0x0018)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0298(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0299(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_14;                             // 0x029A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_15;                             // 0x029B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_16;                             // 0x029C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_17;                             // 0x029D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8BBC[0x2];                                     // 0x029E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UHistoryWindow_C*                       CallFunc_GetBpHistory_Widget;                      // 0x02A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHistoryWindow_C*                       CallFunc_GetBpHistory_Widget_1;                    // 0x02A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHistoryWindow_C*                       CallFunc_GetBpHistory_Widget_2;                    // 0x02B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHistoryWindow_C*                       CallFunc_GetBpHistory_Widget_3;                    // 0x02B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCashExchangeType                           K2Node_CustomEvent_Type_3;                         // 0x02C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8BBD[0x7];                                     // 0x02C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetOutSiteURL_URL;                        // 0x02C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESBRmShopMenuType                             K2Node_CustomEvent_ShopType_6;                     // 0x02D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsReload;                       // 0x02D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x02DA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x02DB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x02DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBRmShopMenuType                             K2Node_CustomEvent_ShopType_5;                     // 0x02DD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRmShopMenuType                             Temp_byte_Variable_18;                             // 0x02DE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x02DF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TSubclassOf<class UObject>                    K2Node_CustomEvent_Loaded_1;                       // 0x02E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x02E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_19;                             // 0x02E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x02EA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8BBE[0x5];                                     // 0x02EB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftClassPtr<class UClass>                   CallFunc_Map_Find_Value;                           // 0x02F0(0x0028)(HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0318(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_20;                             // 0x0319(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_21;                             // 0x031A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8BBF[0x1];                                     // 0x031B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_ComponentBoundEvent_Year;                   // 0x031C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_Month;                  // 0x0320(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_22;                             // 0x0324(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBHistoryType                                K2Node_CustomEvent_Type_2;                         // 0x0325(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;                // 0x0326(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0327(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_23;                             // 0x0328(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRmShopMenuType                             K2Node_CustomEvent_ShopType_4;                     // 0x0329(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_24;                             // 0x032A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRmShopMenuType                             K2Node_CustomEvent_ShopType_3;                     // 0x032B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8BC0[0x4];                                     // 0x032C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0330(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRmShopMenuType                             K2Node_CustomEvent_ShopType_2;                     // 0x0338(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRmShopMenuType                             K2Node_CustomEvent_ShopType_1;                     // 0x0339(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRmShopMenuType                             K2Node_CustomEvent_ShopType;                       // 0x033A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsShow;                               // 0x033B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x033C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8BC1[0x3];                                     // 0x033D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0340(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_25;                             // 0x0344(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_26;                             // 0x0345(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_27;                             // 0x0346(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0347(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_PlaySE_ReturnValue_1;                     // 0x0348(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x034C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x034D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRmShopMenuType                             K2Node_CustomEvent_ExtraType;                      // 0x034E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_28;                             // 0x034F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0350(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBRmShopMenuType                             Temp_byte_Variable_29;                             // 0x0351(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8BC2[0x2];                                     // 0x0352(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool Result, int32 RetCode, struct FSBHistoryExpired& HistoryExpired)> K2Node_CreateDelegate_OutputDelegate_5;            // 0x0354(0x0010)(ZeroConstructor, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_3;                           // 0x0364(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8BC3[0x3];                                     // 0x0365(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue_1;                   // 0x0368(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_30;                             // 0x0370(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_31;                             // 0x0371(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_32;                             // 0x0372(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_33;                             // 0x0373(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x0374(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_3;          // 0x0375(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_4;          // 0x0376(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_5;          // 0x0377(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_4;                           // 0x0378(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_5;                           // 0x0379(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_34;                             // 0x037A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRmShopMenuType                             K2Node_CustomEvent_NextShop;                       // 0x037B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_35;                             // 0x037C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x037D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_36;                             // 0x037E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBHistoryType                                K2Node_CustomEvent_Type_1;                         // 0x037F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Year_1;                         // 0x0380(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Month_1;                        // 0x0384(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Count;                          // 0x0388(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBHistoryType                                K2Node_CustomEvent_Type;                           // 0x038C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8BC4[0x3];                                     // 0x038D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UHistoryWindow_C*                       CallFunc_GetBpHistory_Widget_4;                    // 0x0390(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0398(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8BC5[0x7];                                     // 0x0399(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x03A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool Result, int32 RetCode, TArray<struct FSBCashHistory>& HistoryData)> K2Node_CreateDelegate_OutputDelegate_6;            // 0x03A8(0x0010)(ZeroConstructor, NoDestructor)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x03B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x03C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_4;          // 0x03D0(0x0018)()
	ESlateVisibility                              Temp_byte_Variable_37;                             // 0x03E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8BC6[0x7];                                     // 0x03E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBShowYesNoDialog2Impl*                CallFunc_ShowYesNoDialog2_ReturnValue;             // 0x03F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x03F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetComponentRef_Ret;                      // 0x03F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8BC7[0x2];                                     // 0x03FA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool Result, int32 RetCode)>   K2Node_CreateDelegate_OutputDelegate_7;            // 0x03FC(0x0010)(ZeroConstructor, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_38;                             // 0x040C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_39;                             // 0x040D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8BC8[0x2];                                     // 0x040E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class URmShopMenu_MenuItem_C*                 K2Node_Select_Default_6;                           // 0x0410(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRmShopMenuType                             Temp_byte_Variable_40;                             // 0x0418(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_7;                           // 0x0419(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_8;                           // 0x041A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8BC9[0x1];                                     // 0x041B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_8;            // 0x041C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_CustomEvent_Result_1;                       // 0x042C(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8BCA[0x3];                                     // 0x042D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_RetCode_1;                      // 0x0430(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8BCB[0x4];                                     // 0x0434(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBCryptoCurrency                      K2Node_CustomEvent_Cryptocurrency;                 // 0x0438(0x0028)(ConstParm, NoDestructor)
	bool                                          CallFunc_Request_GetCryptocurrency_ReturnValue;    // 0x0460(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8BCC[0x7];                                     // 0x0461(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue_3;            // 0x0468(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_5;          // 0x0478(0x0018)()
	ESlateVisibility                              Temp_byte_Variable_41;                             // 0x0490(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_42;                             // 0x0491(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_43;                             // 0x0492(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_44;                             // 0x0493(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_45;                             // 0x0494(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_46;                             // 0x0495(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_47;                             // 0x0496(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ERsDialogType                                 K2Node_CustomEvent_DialogType;                     // 0x0497(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ERsDialogButtonType                           K2Node_CustomEvent_ButtonType;                     // 0x0498(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8BCD[0x3];                                     // 0x0499(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(ERsDialogType RsDialogType, ERsDialogButtonType ClickedButtonType)> K2Node_CreateDelegate_OutputDelegate_9;            // 0x049C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool Result, int32 RetCode, struct FSBCryptoCurrency& Cryptocurrency)> K2Node_CreateDelegate_OutputDelegate_10;           // 0x04AC(0x0010)(ZeroConstructor, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_48;                             // 0x04BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_49;                             // 0x04BD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8BCE[0x2];                                     // 0x04BE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_CouponCode;                     // 0x04C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void(const class FString& CouponCode)> K2Node_CreateDelegate_OutputDelegate_11;           // 0x04D0(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_PlaySE_ReturnValue_2;                     // 0x04E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8BCF[0x4];                                     // 0x04E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerSeasonPassComponent*           CallFunc_GetSeasonPassComponent_ReturnValue;       // 0x04E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetPoint_ReturnValue;                     // 0x04F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_50;                             // 0x04F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8BD0[0x3];                                     // 0x04F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_Year;                           // 0x04F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Month;                          // 0x04FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0500(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(TSubclassOf<class UObject> Loaded)> K2Node_CreateDelegate_OutputDelegate_12;           // 0x0508(0x0010)(ZeroConstructor, NoDestructor)
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State;               // 0x0518(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0520(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBRmShopMenuType                             Temp_byte_Variable_51;                             // 0x0521(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8BD1[0x2];                                     // 0x0522(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetBirthdayCertCount_ReturnValue;         // 0x0524(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetBirthday_ReturnValue;                  // 0x0528(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_9;                           // 0x052C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8BD2[0x3];                                     // 0x052D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x0530(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_10;                          // 0x0534(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8BD3[0x3];                                     // 0x0535(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x0538(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x053C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x053D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x053E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8BD4[0x1];                                     // 0x053F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0540(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBCountryConfigMasterData             CallFunc_BP_GetCountryConfigMasterById_ReturnValue; // 0x0548(0x0048)()
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_13;           // 0x0590(0x0010)(ZeroConstructor, NoDestructor)
	struct FSBCountryConfigMasterData             K2Node_MakeStruct_SBCountryConfigMasterData;       // 0x05A0(0x0048)()
	TDelegate<void(TSubclassOf<class UObject> Loaded)> K2Node_CreateDelegate_OutputDelegate_14;           // 0x05E8(0x0010)(ZeroConstructor, NoDestructor)
	class UUIBlocker_C*                           CallFunc_Create_ReturnValue_4;                     // 0x05F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0600(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBRmShopErrorStatus                          K2Node_CustomEvent_Result;                         // 0x0601(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8BD5[0x2];                                     // 0x0602(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_RetCode;                        // 0x0604(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue_4;            // 0x0608(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_2;                    // 0x0618(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8BD6[0x7];                                     // 0x0619(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_6;          // 0x0620(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x0638(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8BD7[0x3];                                     // 0x0639(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_15;           // 0x063C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_8BD8[0x4];                                     // 0x064C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Sender;                         // 0x0650(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param;                          // 0x0658(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerSeasonPassComponent*           CallFunc_GetSeasonPassComponent_ReturnValue_1;     // 0x0660(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue;             // 0x0668(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetPoint_ReturnValue_1;                   // 0x0670(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x0674(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMaintenanceAll_ReturnValue;            // 0x0675(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBRmShopMenuType                             Temp_byte_Variable_52;                             // 0x0676(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8BD9[0x1];                                     // 0x0677(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class URmShopMenu_MenuItem_C*                 K2Node_Select_Default_11;                          // 0x0678(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu) == 0x000008, "Wrong alignment on RmShopMenu_C_ExecuteUbergraph_RmShopMenu");
static_assert(sizeof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu) == 0x000680, "Wrong size on RmShopMenu_C_ExecuteUbergraph_RmShopMenu");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, EntryPoint) == 0x000000, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, Temp_byte_Variable) == 0x000004, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CustomEvent_Loaded) == 0x000008, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, Temp_class_Variable) == 0x000010, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::Temp_class_Variable' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_ClassDynamicCast_AsSBRm_Shop_Menu_Child_Base) == 0x000018, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_ClassDynamicCast_AsSBRm_Shop_Menu_Child_Base' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_ClassDynamicCast_bSuccess) == 0x000020, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_ClassDynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, CallFunc_Create_ReturnValue) == 0x000028, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, Temp_bool_Variable) == 0x000030, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, Temp_byte_Variable_1) == 0x000031, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, Temp_bool_Variable_1) == 0x000032, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, Temp_byte_Variable_2) == 0x000033, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, Temp_bool_Variable_2) == 0x000034, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, Temp_byte_Variable_3) == 0x000035, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, Temp_bool_Variable_3) == 0x000036, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, Temp_byte_Variable_4) == 0x000037, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CreateDelegate_OutputDelegate) == 0x000038, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, Temp_byte_Variable_5) == 0x000048, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CreateDelegate_OutputDelegate_1) == 0x00004C, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CreateDelegate_OutputDelegate_2) == 0x00005C, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, CallFunc_Create_ReturnValue_1) == 0x000070, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, CallFunc_Create_ReturnValue_2) == 0x000078, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::CallFunc_Create_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CreateDelegate_OutputDelegate_3) == 0x000080, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CreateDelegate_OutputDelegate_4) == 0x000090, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, Temp_byte_Variable_6) == 0x0000A0, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CustomEvent_ErrorCode) == 0x0000A4, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CustomEvent_ErrorCode' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CustomEvent_ShowMsgStoreLetter) == 0x0000A8, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CustomEvent_ShowMsgStoreLetter' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CustomEvent_PaidType) == 0x0000A9, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CustomEvent_PaidType' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CustomEvent_EffectDescription) == 0x0000B0, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CustomEvent_EffectDescription' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CustomEvent_ProductTitleType) == 0x0000C8, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CustomEvent_ProductTitleType' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CustomEvent_ItemSetId) == 0x0000CC, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CustomEvent_ItemSetId' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CustomEvent_ProductName) == 0x0000D0, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CustomEvent_ProductName' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CustomEvent_RankFrom) == 0x0000E8, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CustomEvent_RankFrom' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CustomEvent_RankTo) == 0x0000EC, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CustomEvent_RankTo' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CustomEvent_ShowPurchaseNum) == 0x0000F0, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CustomEvent_ShowPurchaseNum' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CustomEvent_PurchaseNum) == 0x0000F4, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CustomEvent_PurchaseNum' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CustomEvent_PaymentType) == 0x0000F8, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CustomEvent_PaymentType' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CustomEvent_PurchasePrice) == 0x0000FC, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CustomEvent_PurchasePrice' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CustomEvent_PaidOnly) == 0x000100, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CustomEvent_PaidOnly' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CustomEvent_IsAchieve) == 0x000101, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CustomEvent_IsAchieve' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CustomEvent_Text) == 0x000108, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CustomEvent_Text' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CustomEvent_Rate_1) == 0x000118, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CustomEvent_Rate_1' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CustomEvent_Free) == 0x00011C, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CustomEvent_Free' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CustomEvent_Paid) == 0x000120, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CustomEvent_Paid' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CustomEvent_FreeExpired) == 0x000128, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CustomEvent_FreeExpired' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CustomEvent_PaidExpired) == 0x000130, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CustomEvent_PaidExpired' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CustomEvent_BP) == 0x000138, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CustomEvent_BP' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CustomEvent_SP) == 0x00013C, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CustomEvent_SP' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CustomEvent_Rate) == 0x000140, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CustomEvent_Rate' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CustomEvent_Year_3) == 0x000144, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CustomEvent_Year_3' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CustomEvent_Month_3) == 0x000148, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CustomEvent_Month_3' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CustomEvent_Result_4) == 0x00014C, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CustomEvent_Result_4' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CustomEvent_RetCode_4) == 0x000150, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CustomEvent_RetCode_4' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, Temp_bool_Variable_4) == 0x000154, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, CallFunc_GetSBRetMessage_ReturnValue) == 0x000158, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::CallFunc_GetSBRetMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000168, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, CallFunc_Conv_StringToText_ReturnValue) == 0x000170, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, CallFunc_BooleanAND_ReturnValue) == 0x000188, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, Temp_byte_Variable_7) == 0x000189, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000190, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0001A0, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, Temp_byte_Variable_8) == 0x0001B8, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::Temp_byte_Variable_8' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, Temp_bool_Variable_5) == 0x0001B9, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CustomEvent_Type_5) == 0x0001BA, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CustomEvent_Type_5' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CustomEvent_Year_2) == 0x0001BC, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CustomEvent_Year_2' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CustomEvent_Month_2) == 0x0001C0, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CustomEvent_Month_2' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CustomEvent_Count_1) == 0x0001C4, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CustomEvent_Count_1' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, Temp_byte_Variable_9) == 0x0001C8, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::Temp_byte_Variable_9' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, Temp_byte_Variable_10) == 0x0001C9, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::Temp_byte_Variable_10' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, Temp_class_Variable_1) == 0x0001D0, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::Temp_class_Variable_1' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_ClassDynamicCast_AsSBRm_Shop_Menu_Child_Base_1) == 0x0001D8, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_ClassDynamicCast_AsSBRm_Shop_Menu_Child_Base_1' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_ClassDynamicCast_bSuccess_1) == 0x0001E0, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_ClassDynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, CallFunc_Create_ReturnValue_3) == 0x0001E8, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::CallFunc_Create_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CustomEvent_Result_3) == 0x0001F0, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CustomEvent_Result_3' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CustomEvent_RetCode_3) == 0x0001F4, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CustomEvent_RetCode_3' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CustomEvent_HistoryData) == 0x0001F8, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CustomEvent_HistoryData' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, Temp_byte_Variable_11) == 0x000208, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::Temp_byte_Variable_11' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, CallFunc_GetSBRetMessage_ReturnValue_1) == 0x000210, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::CallFunc_GetSBRetMessage_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000220, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, Temp_byte_Variable_12) == 0x000238, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::Temp_byte_Variable_12' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CustomEvent_Type_4) == 0x000239, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CustomEvent_Type_4' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CustomEvent_Result_2) == 0x00023A, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CustomEvent_Result_2' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CustomEvent_RetCode_2) == 0x00023C, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CustomEvent_RetCode_2' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CustomEvent_HistoryExpired) == 0x000240, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CustomEvent_HistoryExpired' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, Temp_byte_Variable_13) == 0x000268, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::Temp_byte_Variable_13' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, CallFunc_GetSBRetMessage_ReturnValue_2) == 0x000270, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::CallFunc_GetSBRetMessage_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000280, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000298, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, CallFunc_BooleanAND_ReturnValue_1) == 0x000299, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, Temp_byte_Variable_14) == 0x00029A, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::Temp_byte_Variable_14' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, Temp_byte_Variable_15) == 0x00029B, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::Temp_byte_Variable_15' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, Temp_byte_Variable_16) == 0x00029C, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::Temp_byte_Variable_16' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, Temp_byte_Variable_17) == 0x00029D, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::Temp_byte_Variable_17' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, CallFunc_GetBpHistory_Widget) == 0x0002A0, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::CallFunc_GetBpHistory_Widget' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, CallFunc_GetBpHistory_Widget_1) == 0x0002A8, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::CallFunc_GetBpHistory_Widget_1' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, CallFunc_GetBpHistory_Widget_2) == 0x0002B0, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::CallFunc_GetBpHistory_Widget_2' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, CallFunc_GetBpHistory_Widget_3) == 0x0002B8, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::CallFunc_GetBpHistory_Widget_3' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CustomEvent_Type_3) == 0x0002C0, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CustomEvent_Type_3' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, CallFunc_GetOutSiteURL_URL) == 0x0002C8, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::CallFunc_GetOutSiteURL_URL' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CustomEvent_ShopType_6) == 0x0002D8, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CustomEvent_ShopType_6' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CustomEvent_IsReload) == 0x0002D9, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CustomEvent_IsReload' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x0002DA, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, CallFunc_IsValid_ReturnValue) == 0x0002DB, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, CallFunc_BooleanOR_ReturnValue) == 0x0002DC, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CustomEvent_ShopType_5) == 0x0002DD, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CustomEvent_ShopType_5' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, Temp_byte_Variable_18) == 0x0002DE, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::Temp_byte_Variable_18' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, CallFunc_IsValid_ReturnValue_1) == 0x0002DF, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CustomEvent_Loaded_1) == 0x0002E0, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CustomEvent_Loaded_1' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, CallFunc_MakeLiteralByte_ReturnValue) == 0x0002E8, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, Temp_byte_Variable_19) == 0x0002E9, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::Temp_byte_Variable_19' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x0002EA, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, CallFunc_Map_Find_Value) == 0x0002F0, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, CallFunc_Map_Find_ReturnValue) == 0x000318, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, Temp_byte_Variable_20) == 0x000319, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::Temp_byte_Variable_20' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, Temp_byte_Variable_21) == 0x00031A, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::Temp_byte_Variable_21' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_ComponentBoundEvent_Year) == 0x00031C, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_ComponentBoundEvent_Year' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_ComponentBoundEvent_Month) == 0x000320, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_ComponentBoundEvent_Month' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, Temp_byte_Variable_22) == 0x000324, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::Temp_byte_Variable_22' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CustomEvent_Type_2) == 0x000325, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CustomEvent_Type_2' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, CallFunc_GetVisibility_ReturnValue) == 0x000326, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::CallFunc_GetVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_SwitchEnum_CmpSuccess) == 0x000327, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, Temp_byte_Variable_23) == 0x000328, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::Temp_byte_Variable_23' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CustomEvent_ShopType_4) == 0x000329, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CustomEvent_ShopType_4' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, Temp_byte_Variable_24) == 0x00032A, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::Temp_byte_Variable_24' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CustomEvent_ShopType_3) == 0x00032B, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CustomEvent_ShopType_3' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, CallFunc_AddChild_ReturnValue) == 0x000330, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CustomEvent_ShopType_2) == 0x000338, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CustomEvent_ShopType_2' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CustomEvent_ShopType_1) == 0x000339, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CustomEvent_ShopType_1' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CustomEvent_ShopType) == 0x00033A, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CustomEvent_ShopType' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_Event_IsShow) == 0x00033B, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_Event_IsShow' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_Select_Default) == 0x00033C, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, CallFunc_PlaySE_ReturnValue) == 0x000340, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, Temp_byte_Variable_25) == 0x000344, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::Temp_byte_Variable_25' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, Temp_byte_Variable_26) == 0x000345, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::Temp_byte_Variable_26' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, Temp_byte_Variable_27) == 0x000346, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::Temp_byte_Variable_27' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, CallFunc_Greater_IntInt_ReturnValue) == 0x000347, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, CallFunc_PlaySE_ReturnValue_1) == 0x000348, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::CallFunc_PlaySE_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_Select_Default_1) == 0x00034C, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_Select_Default_2) == 0x00034D, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CustomEvent_ExtraType) == 0x00034E, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CustomEvent_ExtraType' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, Temp_byte_Variable_28) == 0x00034F, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::Temp_byte_Variable_28' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000350, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, Temp_byte_Variable_29) == 0x000351, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::Temp_byte_Variable_29' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CreateDelegate_OutputDelegate_5) == 0x000354, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_Select_Default_3) == 0x000364, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, CallFunc_AddChild_ReturnValue_1) == 0x000368, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::CallFunc_AddChild_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, Temp_byte_Variable_30) == 0x000370, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::Temp_byte_Variable_30' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, Temp_byte_Variable_31) == 0x000371, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::Temp_byte_Variable_31' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, Temp_byte_Variable_32) == 0x000372, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::Temp_byte_Variable_32' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, Temp_byte_Variable_33) == 0x000373, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::Temp_byte_Variable_33' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x000374, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, CallFunc_EqualEqual_IntInt_ReturnValue_3) == 0x000375, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::CallFunc_EqualEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, CallFunc_EqualEqual_IntInt_ReturnValue_4) == 0x000376, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::CallFunc_EqualEqual_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, CallFunc_EqualEqual_IntInt_ReturnValue_5) == 0x000377, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::CallFunc_EqualEqual_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_Select_Default_4) == 0x000378, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_Select_Default_5) == 0x000379, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, Temp_byte_Variable_34) == 0x00037A, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::Temp_byte_Variable_34' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CustomEvent_NextShop) == 0x00037B, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CustomEvent_NextShop' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, Temp_byte_Variable_35) == 0x00037C, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::Temp_byte_Variable_35' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x00037D, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, Temp_byte_Variable_36) == 0x00037E, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::Temp_byte_Variable_36' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CustomEvent_Type_1) == 0x00037F, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CustomEvent_Type_1' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CustomEvent_Year_1) == 0x000380, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CustomEvent_Year_1' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CustomEvent_Month_1) == 0x000384, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CustomEvent_Month_1' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CustomEvent_Count) == 0x000388, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CustomEvent_Count' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CustomEvent_Type) == 0x00038C, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CustomEvent_Type' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, CallFunc_GetBpHistory_Widget_4) == 0x000390, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::CallFunc_GetBpHistory_Widget_4' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, CallFunc_IsValid_ReturnValue_2) == 0x000398, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, CallFunc_PlayAnimation_ReturnValue) == 0x0003A0, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CreateDelegate_OutputDelegate_6) == 0x0003A8, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, CallFunc_PlayAnimation_ReturnValue_1) == 0x0003B8, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x0003C0, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, CallFunc_Conv_StringToText_ReturnValue_4) == 0x0003D0, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::CallFunc_Conv_StringToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, Temp_byte_Variable_37) == 0x0003E8, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::Temp_byte_Variable_37' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, CallFunc_ShowYesNoDialog2_ReturnValue) == 0x0003F0, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::CallFunc_ShowYesNoDialog2_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_SwitchEnum_CmpSuccess_1) == 0x0003F8, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, CallFunc_GetComponentRef_Ret) == 0x0003F9, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::CallFunc_GetComponentRef_Ret' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CreateDelegate_OutputDelegate_7) == 0x0003FC, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, Temp_byte_Variable_38) == 0x00040C, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::Temp_byte_Variable_38' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, Temp_byte_Variable_39) == 0x00040D, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::Temp_byte_Variable_39' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_Select_Default_6) == 0x000410, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_Select_Default_6' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, Temp_byte_Variable_40) == 0x000418, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::Temp_byte_Variable_40' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_Select_Default_7) == 0x000419, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_Select_Default_7' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_Select_Default_8) == 0x00041A, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_Select_Default_8' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CreateDelegate_OutputDelegate_8) == 0x00041C, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CustomEvent_Result_1) == 0x00042C, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CustomEvent_Result_1' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CustomEvent_RetCode_1) == 0x000430, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CustomEvent_RetCode_1' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CustomEvent_Cryptocurrency) == 0x000438, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CustomEvent_Cryptocurrency' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, CallFunc_Request_GetCryptocurrency_ReturnValue) == 0x000460, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::CallFunc_Request_GetCryptocurrency_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, CallFunc_GetSBRetMessage_ReturnValue_3) == 0x000468, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::CallFunc_GetSBRetMessage_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, CallFunc_Conv_StringToText_ReturnValue_5) == 0x000478, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::CallFunc_Conv_StringToText_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, Temp_byte_Variable_41) == 0x000490, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::Temp_byte_Variable_41' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, Temp_byte_Variable_42) == 0x000491, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::Temp_byte_Variable_42' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, Temp_byte_Variable_43) == 0x000492, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::Temp_byte_Variable_43' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, Temp_byte_Variable_44) == 0x000493, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::Temp_byte_Variable_44' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, Temp_byte_Variable_45) == 0x000494, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::Temp_byte_Variable_45' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, Temp_byte_Variable_46) == 0x000495, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::Temp_byte_Variable_46' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, Temp_byte_Variable_47) == 0x000496, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::Temp_byte_Variable_47' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CustomEvent_DialogType) == 0x000497, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CustomEvent_DialogType' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CustomEvent_ButtonType) == 0x000498, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CustomEvent_ButtonType' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CreateDelegate_OutputDelegate_9) == 0x00049C, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CreateDelegate_OutputDelegate_10) == 0x0004AC, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CreateDelegate_OutputDelegate_10' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, Temp_byte_Variable_48) == 0x0004BC, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::Temp_byte_Variable_48' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, Temp_byte_Variable_49) == 0x0004BD, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::Temp_byte_Variable_49' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CustomEvent_CouponCode) == 0x0004C0, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CustomEvent_CouponCode' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CreateDelegate_OutputDelegate_11) == 0x0004D0, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CreateDelegate_OutputDelegate_11' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, CallFunc_PlaySE_ReturnValue_2) == 0x0004E0, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::CallFunc_PlaySE_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, CallFunc_GetSeasonPassComponent_ReturnValue) == 0x0004E8, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::CallFunc_GetSeasonPassComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, CallFunc_GetPoint_ReturnValue) == 0x0004F0, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::CallFunc_GetPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, Temp_byte_Variable_50) == 0x0004F4, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::Temp_byte_Variable_50' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CustomEvent_Year) == 0x0004F8, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CustomEvent_Year' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CustomEvent_Month) == 0x0004FC, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CustomEvent_Month' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, CallFunc_GetPlayerController_ReturnValue) == 0x000500, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CreateDelegate_OutputDelegate_12) == 0x000508, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CreateDelegate_OutputDelegate_12' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_DynamicCast_AsSBPlayer_State) == 0x000518, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_DynamicCast_AsSBPlayer_State' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_DynamicCast_bSuccess) == 0x000520, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, Temp_byte_Variable_51) == 0x000521, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::Temp_byte_Variable_51' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, CallFunc_GetBirthdayCertCount_ReturnValue) == 0x000524, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::CallFunc_GetBirthdayCertCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, CallFunc_GetBirthday_ReturnValue) == 0x000528, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::CallFunc_GetBirthday_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_Select_Default_9) == 0x00052C, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_Select_Default_9' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, CallFunc_Percent_IntInt_ReturnValue) == 0x000530, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_Select_Default_10) == 0x000534, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_Select_Default_10' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, CallFunc_Divide_IntInt_ReturnValue) == 0x000538, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, CallFunc_IsValid_ReturnValue_3) == 0x00053C, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, CallFunc_Not_PreBool_ReturnValue) == 0x00053D, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, CallFunc_GetMasterDataManager_IsValid) == 0x00053E, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, CallFunc_GetMasterDataManager_ReturnValue) == 0x000540, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, CallFunc_BP_GetCountryConfigMasterById_ReturnValue) == 0x000548, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::CallFunc_BP_GetCountryConfigMasterById_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CreateDelegate_OutputDelegate_13) == 0x000590, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CreateDelegate_OutputDelegate_13' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_MakeStruct_SBCountryConfigMasterData) == 0x0005A0, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_MakeStruct_SBCountryConfigMasterData' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CreateDelegate_OutputDelegate_14) == 0x0005E8, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CreateDelegate_OutputDelegate_14' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, CallFunc_Create_ReturnValue_4) == 0x0005F8, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::CallFunc_Create_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, CallFunc_IsValid_ReturnValue_4) == 0x000600, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CustomEvent_Result) == 0x000601, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CustomEvent_RetCode) == 0x000604, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CustomEvent_RetCode' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, CallFunc_GetSBRetMessage_ReturnValue_4) == 0x000608, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::CallFunc_GetSBRetMessage_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_SwitchEnum_CmpSuccess_2) == 0x000618, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_SwitchEnum_CmpSuccess_2' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, CallFunc_Conv_StringToText_ReturnValue_6) == 0x000620, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::CallFunc_Conv_StringToText_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, CallFunc_IsValid_ReturnValue_5) == 0x000638, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CreateDelegate_OutputDelegate_15) == 0x00063C, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CreateDelegate_OutputDelegate_15' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CustomEvent_Sender) == 0x000650, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CustomEvent_Sender' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_CustomEvent_Param) == 0x000658, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_CustomEvent_Param' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, CallFunc_GetSeasonPassComponent_ReturnValue_1) == 0x000660, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::CallFunc_GetSeasonPassComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, CallFunc_GetEventExecutor_ReturnValue) == 0x000668, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::CallFunc_GetEventExecutor_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, CallFunc_GetPoint_ReturnValue_1) == 0x000670, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::CallFunc_GetPoint_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, CallFunc_IsValid_ReturnValue_6) == 0x000674, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, CallFunc_GetMaintenanceAll_ReturnValue) == 0x000675, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::CallFunc_GetMaintenanceAll_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, Temp_byte_Variable_52) == 0x000676, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::Temp_byte_Variable_52' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ExecuteUbergraph_RmShopMenu, K2Node_Select_Default_11) == 0x000678, "Member 'RmShopMenu_C_ExecuteUbergraph_RmShopMenu::K2Node_Select_Default_11' has a wrong offset!");

// Function RmShopMenu.RmShopMenu_C.OnUpdateSeasonPassAnyInfo
// 0x0010 (0x0010 - 0x0000)
struct RmShopMenu_C_OnUpdateSeasonPassAnyInfo final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RmShopMenu_C_OnUpdateSeasonPassAnyInfo) == 0x000008, "Wrong alignment on RmShopMenu_C_OnUpdateSeasonPassAnyInfo");
static_assert(sizeof(RmShopMenu_C_OnUpdateSeasonPassAnyInfo) == 0x000010, "Wrong size on RmShopMenu_C_OnUpdateSeasonPassAnyInfo");
static_assert(offsetof(RmShopMenu_C_OnUpdateSeasonPassAnyInfo, Sender) == 0x000000, "Member 'RmShopMenu_C_OnUpdateSeasonPassAnyInfo::Sender' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_OnUpdateSeasonPassAnyInfo, Param) == 0x000008, "Member 'RmShopMenu_C_OnUpdateSeasonPassAnyInfo::Param' has a wrong offset!");

// Function RmShopMenu.RmShopMenu_C.CustomEvent_1
// 0x0008 (0x0008 - 0x0000)
struct RmShopMenu_C_CustomEvent_1 final
{
public:
	ESBRmShopErrorStatus                          Result;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8BDA[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         RetCode;                                           // 0x0004(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RmShopMenu_C_CustomEvent_1) == 0x000004, "Wrong alignment on RmShopMenu_C_CustomEvent_1");
static_assert(sizeof(RmShopMenu_C_CustomEvent_1) == 0x000008, "Wrong size on RmShopMenu_C_CustomEvent_1");
static_assert(offsetof(RmShopMenu_C_CustomEvent_1, Result) == 0x000000, "Member 'RmShopMenu_C_CustomEvent_1::Result' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_CustomEvent_1, RetCode) == 0x000004, "Member 'RmShopMenu_C_CustomEvent_1::RetCode' has a wrong offset!");

// Function RmShopMenu.RmShopMenu_C.OnRegist_BirthdayInfo
// 0x0008 (0x0008 - 0x0000)
struct RmShopMenu_C_OnRegist_BirthdayInfo final
{
public:
	int32                                         Year;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Month;                                             // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RmShopMenu_C_OnRegist_BirthdayInfo) == 0x000004, "Wrong alignment on RmShopMenu_C_OnRegist_BirthdayInfo");
static_assert(sizeof(RmShopMenu_C_OnRegist_BirthdayInfo) == 0x000008, "Wrong size on RmShopMenu_C_OnRegist_BirthdayInfo");
static_assert(offsetof(RmShopMenu_C_OnRegist_BirthdayInfo, Year) == 0x000000, "Member 'RmShopMenu_C_OnRegist_BirthdayInfo::Year' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_OnRegist_BirthdayInfo, Month) == 0x000004, "Member 'RmShopMenu_C_OnRegist_BirthdayInfo::Month' has a wrong offset!");

// Function RmShopMenu.RmShopMenu_C.OnUseCoupon_Event
// 0x0010 (0x0010 - 0x0000)
struct RmShopMenu_C_OnUseCoupon_Event final
{
public:
	class FString                                 CouponCode;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(RmShopMenu_C_OnUseCoupon_Event) == 0x000008, "Wrong alignment on RmShopMenu_C_OnUseCoupon_Event");
static_assert(sizeof(RmShopMenu_C_OnUseCoupon_Event) == 0x000010, "Wrong size on RmShopMenu_C_OnUseCoupon_Event");
static_assert(offsetof(RmShopMenu_C_OnUseCoupon_Event, CouponCode) == 0x000000, "Member 'RmShopMenu_C_OnUseCoupon_Event::CouponCode' has a wrong offset!");

// Function RmShopMenu.RmShopMenu_C.OnButtonClicked_Event
// 0x0002 (0x0002 - 0x0000)
struct RmShopMenu_C_OnButtonClicked_Event final
{
public:
	ERsDialogType                                 DialogType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ERsDialogButtonType                           ButtonType;                                        // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RmShopMenu_C_OnButtonClicked_Event) == 0x000001, "Wrong alignment on RmShopMenu_C_OnButtonClicked_Event");
static_assert(sizeof(RmShopMenu_C_OnButtonClicked_Event) == 0x000002, "Wrong size on RmShopMenu_C_OnButtonClicked_Event");
static_assert(offsetof(RmShopMenu_C_OnButtonClicked_Event, DialogType) == 0x000000, "Member 'RmShopMenu_C_OnButtonClicked_Event::DialogType' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_OnButtonClicked_Event, ButtonType) == 0x000001, "Member 'RmShopMenu_C_OnButtonClicked_Event::ButtonType' has a wrong offset!");

// Function RmShopMenu.RmShopMenu_C.OnGetCryptocurrency_Event
// 0x0030 (0x0030 - 0x0000)
struct RmShopMenu_C_OnGetCryptocurrency_Event final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8BDB[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         RetCode;                                           // 0x0004(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBCryptoCurrency                      Cryptocurrency;                                    // 0x0008(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(RmShopMenu_C_OnGetCryptocurrency_Event) == 0x000008, "Wrong alignment on RmShopMenu_C_OnGetCryptocurrency_Event");
static_assert(sizeof(RmShopMenu_C_OnGetCryptocurrency_Event) == 0x000030, "Wrong size on RmShopMenu_C_OnGetCryptocurrency_Event");
static_assert(offsetof(RmShopMenu_C_OnGetCryptocurrency_Event, Result) == 0x000000, "Member 'RmShopMenu_C_OnGetCryptocurrency_Event::Result' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_OnGetCryptocurrency_Event, RetCode) == 0x000004, "Member 'RmShopMenu_C_OnGetCryptocurrency_Event::RetCode' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_OnGetCryptocurrency_Event, Cryptocurrency) == 0x000008, "Member 'RmShopMenu_C_OnGetCryptocurrency_Event::Cryptocurrency' has a wrong offset!");

// Function RmShopMenu.RmShopMenu_C.OnRequestDel_BpHistory
// 0x0001 (0x0001 - 0x0000)
struct RmShopMenu_C_OnRequestDel_BpHistory final
{
public:
	ESBHistoryType                                Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RmShopMenu_C_OnRequestDel_BpHistory) == 0x000001, "Wrong alignment on RmShopMenu_C_OnRequestDel_BpHistory");
static_assert(sizeof(RmShopMenu_C_OnRequestDel_BpHistory) == 0x000001, "Wrong size on RmShopMenu_C_OnRequestDel_BpHistory");
static_assert(offsetof(RmShopMenu_C_OnRequestDel_BpHistory, Type) == 0x000000, "Member 'RmShopMenu_C_OnRequestDel_BpHistory::Type' has a wrong offset!");

// Function RmShopMenu.RmShopMenu_C.OnRequest_BpHistory
// 0x0010 (0x0010 - 0x0000)
struct RmShopMenu_C_OnRequest_BpHistory final
{
public:
	ESBHistoryType                                Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8BDC[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Year;                                              // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Month;                                             // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Count;                                             // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RmShopMenu_C_OnRequest_BpHistory) == 0x000004, "Wrong alignment on RmShopMenu_C_OnRequest_BpHistory");
static_assert(sizeof(RmShopMenu_C_OnRequest_BpHistory) == 0x000010, "Wrong size on RmShopMenu_C_OnRequest_BpHistory");
static_assert(offsetof(RmShopMenu_C_OnRequest_BpHistory, Type) == 0x000000, "Member 'RmShopMenu_C_OnRequest_BpHistory::Type' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_OnRequest_BpHistory, Year) == 0x000004, "Member 'RmShopMenu_C_OnRequest_BpHistory::Year' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_OnRequest_BpHistory, Month) == 0x000008, "Member 'RmShopMenu_C_OnRequest_BpHistory::Month' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_OnRequest_BpHistory, Count) == 0x00000C, "Member 'RmShopMenu_C_OnRequest_BpHistory::Count' has a wrong offset!");

// Function RmShopMenu.RmShopMenu_C.SwitchExtraWindow
// 0x0001 (0x0001 - 0x0000)
struct RmShopMenu_C_SwitchExtraWindow final
{
public:
	ESBRmShopMenuType                             NextShop;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RmShopMenu_C_SwitchExtraWindow) == 0x000001, "Wrong alignment on RmShopMenu_C_SwitchExtraWindow");
static_assert(sizeof(RmShopMenu_C_SwitchExtraWindow) == 0x000001, "Wrong size on RmShopMenu_C_SwitchExtraWindow");
static_assert(offsetof(RmShopMenu_C_SwitchExtraWindow, NextShop) == 0x000000, "Member 'RmShopMenu_C_SwitchExtraWindow::NextShop' has a wrong offset!");

// Function RmShopMenu.RmShopMenu_C.OpenExtraWindow
// 0x0001 (0x0001 - 0x0000)
struct RmShopMenu_C_OpenExtraWindow final
{
public:
	ESBRmShopMenuType                             ExtraType;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RmShopMenu_C_OpenExtraWindow) == 0x000001, "Wrong alignment on RmShopMenu_C_OpenExtraWindow");
static_assert(sizeof(RmShopMenu_C_OpenExtraWindow) == 0x000001, "Wrong size on RmShopMenu_C_OpenExtraWindow");
static_assert(offsetof(RmShopMenu_C_OpenExtraWindow, ExtraType) == 0x000000, "Member 'RmShopMenu_C_OpenExtraWindow::ExtraType' has a wrong offset!");

// Function RmShopMenu.RmShopMenu_C.SetEscIconVisibility
// 0x0001 (0x0001 - 0x0000)
struct RmShopMenu_C_SetEscIconVisibility final
{
public:
	bool                                          IsShow;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(RmShopMenu_C_SetEscIconVisibility) == 0x000001, "Wrong alignment on RmShopMenu_C_SetEscIconVisibility");
static_assert(sizeof(RmShopMenu_C_SetEscIconVisibility) == 0x000001, "Wrong size on RmShopMenu_C_SetEscIconVisibility");
static_assert(offsetof(RmShopMenu_C_SetEscIconVisibility, IsShow) == 0x000000, "Member 'RmShopMenu_C_SetEscIconVisibility::IsShow' has a wrong offset!");

// Function RmShopMenu.RmShopMenu_C.SetCertificationButton
// 0x0001 (0x0001 - 0x0000)
struct RmShopMenu_C_SetCertificationButton final
{
public:
	ESBRmShopMenuType                             ShopType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RmShopMenu_C_SetCertificationButton) == 0x000001, "Wrong alignment on RmShopMenu_C_SetCertificationButton");
static_assert(sizeof(RmShopMenu_C_SetCertificationButton) == 0x000001, "Wrong size on RmShopMenu_C_SetCertificationButton");
static_assert(offsetof(RmShopMenu_C_SetCertificationButton, ShopType) == 0x000000, "Member 'RmShopMenu_C_SetCertificationButton::ShopType' has a wrong offset!");

// Function RmShopMenu.RmShopMenu_C.SetCommerceButton
// 0x0001 (0x0001 - 0x0000)
struct RmShopMenu_C_SetCommerceButton final
{
public:
	ESBRmShopMenuType                             ShopType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RmShopMenu_C_SetCommerceButton) == 0x000001, "Wrong alignment on RmShopMenu_C_SetCommerceButton");
static_assert(sizeof(RmShopMenu_C_SetCommerceButton) == 0x000001, "Wrong size on RmShopMenu_C_SetCommerceButton");
static_assert(offsetof(RmShopMenu_C_SetCommerceButton, ShopType) == 0x000000, "Member 'RmShopMenu_C_SetCommerceButton::ShopType' has a wrong offset!");

// Function RmShopMenu.RmShopMenu_C.SetBpHistoryButton
// 0x0001 (0x0001 - 0x0000)
struct RmShopMenu_C_SetBpHistoryButton final
{
public:
	ESBRmShopMenuType                             ShopType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RmShopMenu_C_SetBpHistoryButton) == 0x000001, "Wrong alignment on RmShopMenu_C_SetBpHistoryButton");
static_assert(sizeof(RmShopMenu_C_SetBpHistoryButton) == 0x000001, "Wrong size on RmShopMenu_C_SetBpHistoryButton");
static_assert(offsetof(RmShopMenu_C_SetBpHistoryButton, ShopType) == 0x000000, "Member 'RmShopMenu_C_SetBpHistoryButton::ShopType' has a wrong offset!");

// Function RmShopMenu.RmShopMenu_C.SetSubButtonVisibility
// 0x0001 (0x0001 - 0x0000)
struct RmShopMenu_C_SetSubButtonVisibility final
{
public:
	ESBRmShopMenuType                             ShopType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RmShopMenu_C_SetSubButtonVisibility) == 0x000001, "Wrong alignment on RmShopMenu_C_SetSubButtonVisibility");
static_assert(sizeof(RmShopMenu_C_SetSubButtonVisibility) == 0x000001, "Wrong size on RmShopMenu_C_SetSubButtonVisibility");
static_assert(offsetof(RmShopMenu_C_SetSubButtonVisibility, ShopType) == 0x000000, "Member 'RmShopMenu_C_SetSubButtonVisibility::ShopType' has a wrong offset!");

// Function RmShopMenu.RmShopMenu_C.SetRoHistoryButton
// 0x0001 (0x0001 - 0x0000)
struct RmShopMenu_C_SetRoHistoryButton final
{
public:
	ESBRmShopMenuType                             ShopType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RmShopMenu_C_SetRoHistoryButton) == 0x000001, "Wrong alignment on RmShopMenu_C_SetRoHistoryButton");
static_assert(sizeof(RmShopMenu_C_SetRoHistoryButton) == 0x000001, "Wrong size on RmShopMenu_C_SetRoHistoryButton");
static_assert(offsetof(RmShopMenu_C_SetRoHistoryButton, ShopType) == 0x000000, "Member 'RmShopMenu_C_SetRoHistoryButton::ShopType' has a wrong offset!");

// Function RmShopMenu.RmShopMenu_C.OpenHistoryWindow
// 0x0001 (0x0001 - 0x0000)
struct RmShopMenu_C_OpenHistoryWindow final
{
public:
	ESBHistoryType                                Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RmShopMenu_C_OpenHistoryWindow) == 0x000001, "Wrong alignment on RmShopMenu_C_OpenHistoryWindow");
static_assert(sizeof(RmShopMenu_C_OpenHistoryWindow) == 0x000001, "Wrong size on RmShopMenu_C_OpenHistoryWindow");
static_assert(offsetof(RmShopMenu_C_OpenHistoryWindow, Type) == 0x000000, "Member 'RmShopMenu_C_OpenHistoryWindow::Type' has a wrong offset!");

// Function RmShopMenu.RmShopMenu_C.BndEvt__BpCertification_K2Node_ComponentBoundEvent_11_OnRequest__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct RmShopMenu_C_BndEvt__BpCertification_K2Node_ComponentBoundEvent_11_OnRequest__DelegateSignature final
{
public:
	int32                                         Year;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Month;                                             // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RmShopMenu_C_BndEvt__BpCertification_K2Node_ComponentBoundEvent_11_OnRequest__DelegateSignature) == 0x000004, "Wrong alignment on RmShopMenu_C_BndEvt__BpCertification_K2Node_ComponentBoundEvent_11_OnRequest__DelegateSignature");
static_assert(sizeof(RmShopMenu_C_BndEvt__BpCertification_K2Node_ComponentBoundEvent_11_OnRequest__DelegateSignature) == 0x000008, "Wrong size on RmShopMenu_C_BndEvt__BpCertification_K2Node_ComponentBoundEvent_11_OnRequest__DelegateSignature");
static_assert(offsetof(RmShopMenu_C_BndEvt__BpCertification_K2Node_ComponentBoundEvent_11_OnRequest__DelegateSignature, Year) == 0x000000, "Member 'RmShopMenu_C_BndEvt__BpCertification_K2Node_ComponentBoundEvent_11_OnRequest__DelegateSignature::Year' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_BndEvt__BpCertification_K2Node_ComponentBoundEvent_11_OnRequest__DelegateSignature, Month) == 0x000004, "Member 'RmShopMenu_C_BndEvt__BpCertification_K2Node_ComponentBoundEvent_11_OnRequest__DelegateSignature::Month' has a wrong offset!");

// Function RmShopMenu.RmShopMenu_C.StartChildShopMenu
// 0x0001 (0x0001 - 0x0000)
struct RmShopMenu_C_StartChildShopMenu final
{
public:
	ESBRmShopMenuType                             ShopType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RmShopMenu_C_StartChildShopMenu) == 0x000001, "Wrong alignment on RmShopMenu_C_StartChildShopMenu");
static_assert(sizeof(RmShopMenu_C_StartChildShopMenu) == 0x000001, "Wrong size on RmShopMenu_C_StartChildShopMenu");
static_assert(offsetof(RmShopMenu_C_StartChildShopMenu, ShopType) == 0x000000, "Member 'RmShopMenu_C_StartChildShopMenu::ShopType' has a wrong offset!");

// Function RmShopMenu.RmShopMenu_C.TryStartShopMenu
// 0x0002 (0x0002 - 0x0000)
struct RmShopMenu_C_TryStartShopMenu final
{
public:
	ESBRmShopMenuType                             ShopType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsReload;                                          // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(RmShopMenu_C_TryStartShopMenu) == 0x000001, "Wrong alignment on RmShopMenu_C_TryStartShopMenu");
static_assert(sizeof(RmShopMenu_C_TryStartShopMenu) == 0x000002, "Wrong size on RmShopMenu_C_TryStartShopMenu");
static_assert(offsetof(RmShopMenu_C_TryStartShopMenu, ShopType) == 0x000000, "Member 'RmShopMenu_C_TryStartShopMenu::ShopType' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_TryStartShopMenu, IsReload) == 0x000001, "Member 'RmShopMenu_C_TryStartShopMenu::IsReload' has a wrong offset!");

// Function RmShopMenu.RmShopMenu_C.LanchWebBrowser
// 0x0001 (0x0001 - 0x0000)
struct RmShopMenu_C_LanchWebBrowser final
{
public:
	ESBCashExchangeType                           Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RmShopMenu_C_LanchWebBrowser) == 0x000001, "Wrong alignment on RmShopMenu_C_LanchWebBrowser");
static_assert(sizeof(RmShopMenu_C_LanchWebBrowser) == 0x000001, "Wrong size on RmShopMenu_C_LanchWebBrowser");
static_assert(offsetof(RmShopMenu_C_LanchWebBrowser, Type) == 0x000000, "Member 'RmShopMenu_C_LanchWebBrowser::Type' has a wrong offset!");

// Function RmShopMenu.RmShopMenu_C.GetHistoryExpired_Event
// 0x0030 (0x0030 - 0x0000)
struct RmShopMenu_C_GetHistoryExpired_Event final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8BDD[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         RetCode;                                           // 0x0004(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBHistoryExpired                      HistoryExpired;                                    // 0x0008(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(RmShopMenu_C_GetHistoryExpired_Event) == 0x000008, "Wrong alignment on RmShopMenu_C_GetHistoryExpired_Event");
static_assert(sizeof(RmShopMenu_C_GetHistoryExpired_Event) == 0x000030, "Wrong size on RmShopMenu_C_GetHistoryExpired_Event");
static_assert(offsetof(RmShopMenu_C_GetHistoryExpired_Event, Result) == 0x000000, "Member 'RmShopMenu_C_GetHistoryExpired_Event::Result' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_GetHistoryExpired_Event, RetCode) == 0x000004, "Member 'RmShopMenu_C_GetHistoryExpired_Event::RetCode' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_GetHistoryExpired_Event, HistoryExpired) == 0x000008, "Member 'RmShopMenu_C_GetHistoryExpired_Event::HistoryExpired' has a wrong offset!");

// Function RmShopMenu.RmShopMenu_C.Request_GetHistoryExpired
// 0x0001 (0x0001 - 0x0000)
struct RmShopMenu_C_Request_GetHistoryExpired final
{
public:
	ESBHistoryType                                Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RmShopMenu_C_Request_GetHistoryExpired) == 0x000001, "Wrong alignment on RmShopMenu_C_Request_GetHistoryExpired");
static_assert(sizeof(RmShopMenu_C_Request_GetHistoryExpired) == 0x000001, "Wrong size on RmShopMenu_C_Request_GetHistoryExpired");
static_assert(offsetof(RmShopMenu_C_Request_GetHistoryExpired, Type) == 0x000000, "Member 'RmShopMenu_C_Request_GetHistoryExpired::Type' has a wrong offset!");

// Function RmShopMenu.RmShopMenu_C.OnGetHistory_Event
// 0x0018 (0x0018 - 0x0000)
struct RmShopMenu_C_OnGetHistory_Event final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8BDE[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         RetCode;                                           // 0x0004(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBCashHistory>                 HistoryData;                                       // 0x0008(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(RmShopMenu_C_OnGetHistory_Event) == 0x000008, "Wrong alignment on RmShopMenu_C_OnGetHistory_Event");
static_assert(sizeof(RmShopMenu_C_OnGetHistory_Event) == 0x000018, "Wrong size on RmShopMenu_C_OnGetHistory_Event");
static_assert(offsetof(RmShopMenu_C_OnGetHistory_Event, Result) == 0x000000, "Member 'RmShopMenu_C_OnGetHistory_Event::Result' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_OnGetHistory_Event, RetCode) == 0x000004, "Member 'RmShopMenu_C_OnGetHistory_Event::RetCode' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_OnGetHistory_Event, HistoryData) == 0x000008, "Member 'RmShopMenu_C_OnGetHistory_Event::HistoryData' has a wrong offset!");

// Function RmShopMenu.RmShopMenu_C.Request_GetHistory
// 0x0010 (0x0010 - 0x0000)
struct RmShopMenu_C_Request_GetHistory final
{
public:
	ESBHistoryType                                Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8BDF[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Year;                                              // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Month;                                             // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Count;                                             // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RmShopMenu_C_Request_GetHistory) == 0x000004, "Wrong alignment on RmShopMenu_C_Request_GetHistory");
static_assert(sizeof(RmShopMenu_C_Request_GetHistory) == 0x000010, "Wrong size on RmShopMenu_C_Request_GetHistory");
static_assert(offsetof(RmShopMenu_C_Request_GetHistory, Type) == 0x000000, "Member 'RmShopMenu_C_Request_GetHistory::Type' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_Request_GetHistory, Year) == 0x000004, "Member 'RmShopMenu_C_Request_GetHistory::Year' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_Request_GetHistory, Month) == 0x000008, "Member 'RmShopMenu_C_Request_GetHistory::Month' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_Request_GetHistory, Count) == 0x00000C, "Member 'RmShopMenu_C_Request_GetHistory::Count' has a wrong offset!");

// Function RmShopMenu.RmShopMenu_C.OnCertification_Event
// 0x0008 (0x0008 - 0x0000)
struct RmShopMenu_C_OnCertification_Event final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8BE0[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         RetCode;                                           // 0x0004(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RmShopMenu_C_OnCertification_Event) == 0x000004, "Wrong alignment on RmShopMenu_C_OnCertification_Event");
static_assert(sizeof(RmShopMenu_C_OnCertification_Event) == 0x000008, "Wrong size on RmShopMenu_C_OnCertification_Event");
static_assert(offsetof(RmShopMenu_C_OnCertification_Event, Result) == 0x000000, "Member 'RmShopMenu_C_OnCertification_Event::Result' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_OnCertification_Event, RetCode) == 0x000004, "Member 'RmShopMenu_C_OnCertification_Event::RetCode' has a wrong offset!");

// Function RmShopMenu.RmShopMenu_C.Request_Certification
// 0x0008 (0x0008 - 0x0000)
struct RmShopMenu_C_Request_Certification final
{
public:
	int32                                         Year;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Month;                                             // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RmShopMenu_C_Request_Certification) == 0x000004, "Wrong alignment on RmShopMenu_C_Request_Certification");
static_assert(sizeof(RmShopMenu_C_Request_Certification) == 0x000008, "Wrong size on RmShopMenu_C_Request_Certification");
static_assert(offsetof(RmShopMenu_C_Request_Certification, Year) == 0x000000, "Member 'RmShopMenu_C_Request_Certification::Year' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_Request_Certification, Month) == 0x000004, "Member 'RmShopMenu_C_Request_Certification::Month' has a wrong offset!");

// Function RmShopMenu.RmShopMenu_C.SetDiscountRate_SeasonPass
// 0x0004 (0x0004 - 0x0000)
struct RmShopMenu_C_SetDiscountRate_SeasonPass final
{
public:
	int32                                         Rate;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RmShopMenu_C_SetDiscountRate_SeasonPass) == 0x000004, "Wrong alignment on RmShopMenu_C_SetDiscountRate_SeasonPass");
static_assert(sizeof(RmShopMenu_C_SetDiscountRate_SeasonPass) == 0x000004, "Wrong size on RmShopMenu_C_SetDiscountRate_SeasonPass");
static_assert(offsetof(RmShopMenu_C_SetDiscountRate_SeasonPass, Rate) == 0x000000, "Member 'RmShopMenu_C_SetDiscountRate_SeasonPass::Rate' has a wrong offset!");

// Function RmShopMenu.RmShopMenu_C.SetSeasonPoint
// 0x0004 (0x0004 - 0x0000)
struct RmShopMenu_C_SetSeasonPoint final
{
public:
	int32                                         SP;                                                // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RmShopMenu_C_SetSeasonPoint) == 0x000004, "Wrong alignment on RmShopMenu_C_SetSeasonPoint");
static_assert(sizeof(RmShopMenu_C_SetSeasonPoint) == 0x000004, "Wrong size on RmShopMenu_C_SetSeasonPoint");
static_assert(offsetof(RmShopMenu_C_SetSeasonPoint, SP) == 0x000000, "Member 'RmShopMenu_C_SetSeasonPoint::SP' has a wrong offset!");

// Function RmShopMenu.RmShopMenu_C.SetBPPoint
// 0x0004 (0x0004 - 0x0000)
struct RmShopMenu_C_SetBPPoint final
{
public:
	int32                                         BP;                                                // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RmShopMenu_C_SetBPPoint) == 0x000004, "Wrong alignment on RmShopMenu_C_SetBPPoint");
static_assert(sizeof(RmShopMenu_C_SetBPPoint) == 0x000004, "Wrong size on RmShopMenu_C_SetBPPoint");
static_assert(offsetof(RmShopMenu_C_SetBPPoint, BP) == 0x000000, "Member 'RmShopMenu_C_SetBPPoint::BP' has a wrong offset!");

// Function RmShopMenu.RmShopMenu_C.SetRoseOrb
// 0x0018 (0x0018 - 0x0000)
struct RmShopMenu_C_SetRoseOrb final
{
public:
	int32                                         Free;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Paid;                                              // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              FreeExpired;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              PaidExpired;                                       // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RmShopMenu_C_SetRoseOrb) == 0x000008, "Wrong alignment on RmShopMenu_C_SetRoseOrb");
static_assert(sizeof(RmShopMenu_C_SetRoseOrb) == 0x000018, "Wrong size on RmShopMenu_C_SetRoseOrb");
static_assert(offsetof(RmShopMenu_C_SetRoseOrb, Free) == 0x000000, "Member 'RmShopMenu_C_SetRoseOrb::Free' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_SetRoseOrb, Paid) == 0x000004, "Member 'RmShopMenu_C_SetRoseOrb::Paid' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_SetRoseOrb, FreeExpired) == 0x000008, "Member 'RmShopMenu_C_SetRoseOrb::FreeExpired' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_SetRoseOrb, PaidExpired) == 0x000010, "Member 'RmShopMenu_C_SetRoseOrb::PaidExpired' has a wrong offset!");

// Function RmShopMenu.RmShopMenu_C.SetDiscountRate
// 0x0004 (0x0004 - 0x0000)
struct RmShopMenu_C_SetDiscountRate final
{
public:
	int32                                         Rate;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RmShopMenu_C_SetDiscountRate) == 0x000004, "Wrong alignment on RmShopMenu_C_SetDiscountRate");
static_assert(sizeof(RmShopMenu_C_SetDiscountRate) == 0x000004, "Wrong size on RmShopMenu_C_SetDiscountRate");
static_assert(offsetof(RmShopMenu_C_SetDiscountRate, Rate) == 0x000000, "Member 'RmShopMenu_C_SetDiscountRate::Rate' has a wrong offset!");

// Function RmShopMenu.RmShopMenu_C.AddItem_LimitCondition
// 0x0018 (0x0018 - 0x0000)
struct RmShopMenu_C_AddItem_LimitCondition final
{
public:
	bool                                          IsAchieve;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8BE1[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Text;                                              // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(RmShopMenu_C_AddItem_LimitCondition) == 0x000008, "Wrong alignment on RmShopMenu_C_AddItem_LimitCondition");
static_assert(sizeof(RmShopMenu_C_AddItem_LimitCondition) == 0x000018, "Wrong size on RmShopMenu_C_AddItem_LimitCondition");
static_assert(offsetof(RmShopMenu_C_AddItem_LimitCondition, IsAchieve) == 0x000000, "Member 'RmShopMenu_C_AddItem_LimitCondition::IsAchieve' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_AddItem_LimitCondition, Text) == 0x000008, "Member 'RmShopMenu_C_AddItem_LimitCondition::Text' has a wrong offset!");

// Function RmShopMenu.RmShopMenu_C.SetDialog_CommonInfo
// 0x0040 (0x0040 - 0x0000)
struct RmShopMenu_C_SetDialog_CommonInfo final
{
public:
	ERsDialogProductTitleType                     ProductTitleType;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8BE2[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ItemSetId;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   ProductName;                                       // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         RankFrom;                                          // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RankTo;                                            // 0x0024(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShowPurchaseNum;                                   // 0x0028(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8BE3[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         PurchaseNum;                                       // 0x002C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ERsDialogPaymentType                          PaymentType;                                       // 0x0030(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8BE4[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         PurchasePrice;                                     // 0x0034(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PaidOnly;                                          // 0x0038(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(RmShopMenu_C_SetDialog_CommonInfo) == 0x000008, "Wrong alignment on RmShopMenu_C_SetDialog_CommonInfo");
static_assert(sizeof(RmShopMenu_C_SetDialog_CommonInfo) == 0x000040, "Wrong size on RmShopMenu_C_SetDialog_CommonInfo");
static_assert(offsetof(RmShopMenu_C_SetDialog_CommonInfo, ProductTitleType) == 0x000000, "Member 'RmShopMenu_C_SetDialog_CommonInfo::ProductTitleType' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_SetDialog_CommonInfo, ItemSetId) == 0x000004, "Member 'RmShopMenu_C_SetDialog_CommonInfo::ItemSetId' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_SetDialog_CommonInfo, ProductName) == 0x000008, "Member 'RmShopMenu_C_SetDialog_CommonInfo::ProductName' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_SetDialog_CommonInfo, RankFrom) == 0x000020, "Member 'RmShopMenu_C_SetDialog_CommonInfo::RankFrom' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_SetDialog_CommonInfo, RankTo) == 0x000024, "Member 'RmShopMenu_C_SetDialog_CommonInfo::RankTo' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_SetDialog_CommonInfo, ShowPurchaseNum) == 0x000028, "Member 'RmShopMenu_C_SetDialog_CommonInfo::ShowPurchaseNum' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_SetDialog_CommonInfo, PurchaseNum) == 0x00002C, "Member 'RmShopMenu_C_SetDialog_CommonInfo::PurchaseNum' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_SetDialog_CommonInfo, PaymentType) == 0x000030, "Member 'RmShopMenu_C_SetDialog_CommonInfo::PaymentType' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_SetDialog_CommonInfo, PurchasePrice) == 0x000034, "Member 'RmShopMenu_C_SetDialog_CommonInfo::PurchasePrice' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_SetDialog_CommonInfo, PaidOnly) == 0x000038, "Member 'RmShopMenu_C_SetDialog_CommonInfo::PaidOnly' has a wrong offset!");

// Function RmShopMenu.RmShopMenu_C.ShowDialog_UseItem
// 0x0018 (0x0018 - 0x0000)
struct RmShopMenu_C_ShowDialog_UseItem final
{
public:
	class FText                                   EffectDescription;                                 // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(RmShopMenu_C_ShowDialog_UseItem) == 0x000008, "Wrong alignment on RmShopMenu_C_ShowDialog_UseItem");
static_assert(sizeof(RmShopMenu_C_ShowDialog_UseItem) == 0x000018, "Wrong size on RmShopMenu_C_ShowDialog_UseItem");
static_assert(offsetof(RmShopMenu_C_ShowDialog_UseItem, EffectDescription) == 0x000000, "Member 'RmShopMenu_C_ShowDialog_UseItem::EffectDescription' has a wrong offset!");

// Function RmShopMenu.RmShopMenu_C.ShowDialog_Completed
// 0x0002 (0x0002 - 0x0000)
struct RmShopMenu_C_ShowDialog_Completed final
{
public:
	bool                                          ShowMsgStoreLetter;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ERsDialogCurrencyPaidType                     PaidType;                                          // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RmShopMenu_C_ShowDialog_Completed) == 0x000001, "Wrong alignment on RmShopMenu_C_ShowDialog_Completed");
static_assert(sizeof(RmShopMenu_C_ShowDialog_Completed) == 0x000002, "Wrong size on RmShopMenu_C_ShowDialog_Completed");
static_assert(offsetof(RmShopMenu_C_ShowDialog_Completed, ShowMsgStoreLetter) == 0x000000, "Member 'RmShopMenu_C_ShowDialog_Completed::ShowMsgStoreLetter' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_ShowDialog_Completed, PaidType) == 0x000001, "Member 'RmShopMenu_C_ShowDialog_Completed::PaidType' has a wrong offset!");

// Function RmShopMenu.RmShopMenu_C.ShowDialog_ErrorMessage
// 0x0004 (0x0004 - 0x0000)
struct RmShopMenu_C_ShowDialog_ErrorMessage final
{
public:
	int32                                         ErrorCode;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RmShopMenu_C_ShowDialog_ErrorMessage) == 0x000004, "Wrong alignment on RmShopMenu_C_ShowDialog_ErrorMessage");
static_assert(sizeof(RmShopMenu_C_ShowDialog_ErrorMessage) == 0x000004, "Wrong size on RmShopMenu_C_ShowDialog_ErrorMessage");
static_assert(offsetof(RmShopMenu_C_ShowDialog_ErrorMessage, ErrorCode) == 0x000000, "Member 'RmShopMenu_C_ShowDialog_ErrorMessage::ErrorCode' has a wrong offset!");

// Function RmShopMenu.RmShopMenu_C.OnLoaded_41D74A5F49658128DFE26A8ECAB6D644
// 0x0008 (0x0008 - 0x0000)
struct RmShopMenu_C_OnLoaded_41D74A5F49658128DFE26A8ECAB6D644 final
{
public:
	TSubclassOf<class UObject>                    Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(RmShopMenu_C_OnLoaded_41D74A5F49658128DFE26A8ECAB6D644) == 0x000008, "Wrong alignment on RmShopMenu_C_OnLoaded_41D74A5F49658128DFE26A8ECAB6D644");
static_assert(sizeof(RmShopMenu_C_OnLoaded_41D74A5F49658128DFE26A8ECAB6D644) == 0x000008, "Wrong size on RmShopMenu_C_OnLoaded_41D74A5F49658128DFE26A8ECAB6D644");
static_assert(offsetof(RmShopMenu_C_OnLoaded_41D74A5F49658128DFE26A8ECAB6D644, Loaded) == 0x000000, "Member 'RmShopMenu_C_OnLoaded_41D74A5F49658128DFE26A8ECAB6D644::Loaded' has a wrong offset!");

// Function RmShopMenu.RmShopMenu_C.OnLoaded_A3A28D944CF4AB3840F5268CAA79CA55
// 0x0008 (0x0008 - 0x0000)
struct RmShopMenu_C_OnLoaded_A3A28D944CF4AB3840F5268CAA79CA55 final
{
public:
	TSubclassOf<class UObject>                    Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(RmShopMenu_C_OnLoaded_A3A28D944CF4AB3840F5268CAA79CA55) == 0x000008, "Wrong alignment on RmShopMenu_C_OnLoaded_A3A28D944CF4AB3840F5268CAA79CA55");
static_assert(sizeof(RmShopMenu_C_OnLoaded_A3A28D944CF4AB3840F5268CAA79CA55) == 0x000008, "Wrong size on RmShopMenu_C_OnLoaded_A3A28D944CF4AB3840F5268CAA79CA55");
static_assert(offsetof(RmShopMenu_C_OnLoaded_A3A28D944CF4AB3840F5268CAA79CA55, Loaded) == 0x000000, "Member 'RmShopMenu_C_OnLoaded_A3A28D944CF4AB3840F5268CAA79CA55::Loaded' has a wrong offset!");

// Function RmShopMenu.RmShopMenu_C.ExecSubWindow
// 0x0001 (0x0001 - 0x0000)
struct RmShopMenu_C_ExecSubWindow final
{
public:
	bool                                          IsOpen;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(RmShopMenu_C_ExecSubWindow) == 0x000001, "Wrong alignment on RmShopMenu_C_ExecSubWindow");
static_assert(sizeof(RmShopMenu_C_ExecSubWindow) == 0x000001, "Wrong size on RmShopMenu_C_ExecSubWindow");
static_assert(offsetof(RmShopMenu_C_ExecSubWindow, IsOpen) == 0x000000, "Member 'RmShopMenu_C_ExecSubWindow::IsOpen' has a wrong offset!");

// Function RmShopMenu.RmShopMenu_C.GetComponentRef
// 0x0028 (0x0028 - 0x0000)
struct RmShopMenu_C_GetComponentRef final
{
public:
	bool                                          Ret;                                               // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8BE5[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8BE6[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBRmShopComponent*                     CallFunc_GetRmShopComponent_ReturnValue;           // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RmShopMenu_C_GetComponentRef) == 0x000008, "Wrong alignment on RmShopMenu_C_GetComponentRef");
static_assert(sizeof(RmShopMenu_C_GetComponentRef) == 0x000028, "Wrong size on RmShopMenu_C_GetComponentRef");
static_assert(offsetof(RmShopMenu_C_GetComponentRef, Ret) == 0x000000, "Member 'RmShopMenu_C_GetComponentRef::Ret' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_GetComponentRef, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'RmShopMenu_C_GetComponentRef::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_GetComponentRef, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000010, "Member 'RmShopMenu_C_GetComponentRef::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_GetComponentRef, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'RmShopMenu_C_GetComponentRef::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_GetComponentRef, CallFunc_GetRmShopComponent_ReturnValue) == 0x000020, "Member 'RmShopMenu_C_GetComponentRef::CallFunc_GetRmShopComponent_ReturnValue' has a wrong offset!");

// Function RmShopMenu.RmShopMenu_C.SelectShopBtn
// 0x0010 (0x0010 - 0x0000)
struct RmShopMenu_C_SelectShopBtn final
{
public:
	class URmShopMenu_MenuItem_C*                 InShopBtn;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(RmShopMenu_C_SelectShopBtn) == 0x000008, "Wrong alignment on RmShopMenu_C_SelectShopBtn");
static_assert(sizeof(RmShopMenu_C_SelectShopBtn) == 0x000010, "Wrong size on RmShopMenu_C_SelectShopBtn");
static_assert(offsetof(RmShopMenu_C_SelectShopBtn, InShopBtn) == 0x000000, "Member 'RmShopMenu_C_SelectShopBtn::InShopBtn' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_SelectShopBtn, CallFunc_Not_PreBool_ReturnValue) == 0x000008, "Member 'RmShopMenu_C_SelectShopBtn::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function RmShopMenu.RmShopMenu_C.SetCommandMenuVisible
// 0x0001 (0x0001 - 0x0000)
struct RmShopMenu_C_SetCommandMenuVisible final
{
public:
	bool                                          IsVisivle;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(RmShopMenu_C_SetCommandMenuVisible) == 0x000001, "Wrong alignment on RmShopMenu_C_SetCommandMenuVisible");
static_assert(sizeof(RmShopMenu_C_SetCommandMenuVisible) == 0x000001, "Wrong size on RmShopMenu_C_SetCommandMenuVisible");
static_assert(offsetof(RmShopMenu_C_SetCommandMenuVisible, IsVisivle) == 0x000000, "Member 'RmShopMenu_C_SetCommandMenuVisible::IsVisivle' has a wrong offset!");

// Function RmShopMenu.RmShopMenu_C.InitButtonState
// 0x0018 (0x0018 - 0x0000)
struct RmShopMenu_C_InitButtonState final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ValidModifySeasonPass_ReturnValue;        // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8BE7[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerSeasonPassComponent*           CallFunc_GetSeasonPassComponent_ReturnValue;       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEnableSeasonPassRankPurchaseMenu_bResult; // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsSeasonValid_ReturnValue;                // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEnableSeasonPassPurchaseMenu_bResult;   // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(RmShopMenu_C_InitButtonState) == 0x000008, "Wrong alignment on RmShopMenu_C_InitButtonState");
static_assert(sizeof(RmShopMenu_C_InitButtonState) == 0x000018, "Wrong size on RmShopMenu_C_InitButtonState");
static_assert(offsetof(RmShopMenu_C_InitButtonState, Temp_bool_Variable) == 0x000000, "Member 'RmShopMenu_C_InitButtonState::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_InitButtonState, CallFunc_MakeLiteralByte_ReturnValue) == 0x000001, "Member 'RmShopMenu_C_InitButtonState::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_InitButtonState, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000002, "Member 'RmShopMenu_C_InitButtonState::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_InitButtonState, CallFunc_ValidModifySeasonPass_ReturnValue) == 0x000003, "Member 'RmShopMenu_C_InitButtonState::CallFunc_ValidModifySeasonPass_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_InitButtonState, CallFunc_GetSeasonPassComponent_ReturnValue) == 0x000008, "Member 'RmShopMenu_C_InitButtonState::CallFunc_GetSeasonPassComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_InitButtonState, CallFunc_IsEnableSeasonPassRankPurchaseMenu_bResult) == 0x000010, "Member 'RmShopMenu_C_InitButtonState::CallFunc_IsEnableSeasonPassRankPurchaseMenu_bResult' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_InitButtonState, CallFunc_IsValid_ReturnValue) == 0x000011, "Member 'RmShopMenu_C_InitButtonState::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_InitButtonState, CallFunc_IsSeasonValid_ReturnValue) == 0x000012, "Member 'RmShopMenu_C_InitButtonState::CallFunc_IsSeasonValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_InitButtonState, K2Node_Select_Default) == 0x000013, "Member 'RmShopMenu_C_InitButtonState::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_InitButtonState, CallFunc_IsEnableSeasonPassPurchaseMenu_bResult) == 0x000014, "Member 'RmShopMenu_C_InitButtonState::CallFunc_IsEnableSeasonPassPurchaseMenu_bResult' has a wrong offset!");

// Function RmShopMenu.RmShopMenu_C.SetBirthdayInfo
// 0x0068 (0x0068 - 0x0000)
struct RmShopMenu_C_SetBirthdayInfo final
{
public:
	int32                                         Year;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Month;                                             // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Count;                                             // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsRegister;                                        // 0x000C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8BE8[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         L_SBPS;                                            // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8BE9[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8BEA[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State;               // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8BEB[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_SBUtcNow_ReturnValue;                     // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8BEC[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetMonth_ReturnValue;                     // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetYear_ReturnValue;                      // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8BED[0x2];                                     // 0x0062(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_2;            // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RmShopMenu_C_SetBirthdayInfo) == 0x000008, "Wrong alignment on RmShopMenu_C_SetBirthdayInfo");
static_assert(sizeof(RmShopMenu_C_SetBirthdayInfo) == 0x000068, "Wrong size on RmShopMenu_C_SetBirthdayInfo");
static_assert(offsetof(RmShopMenu_C_SetBirthdayInfo, Year) == 0x000000, "Member 'RmShopMenu_C_SetBirthdayInfo::Year' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_SetBirthdayInfo, Month) == 0x000004, "Member 'RmShopMenu_C_SetBirthdayInfo::Month' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_SetBirthdayInfo, Count) == 0x000008, "Member 'RmShopMenu_C_SetBirthdayInfo::Count' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_SetBirthdayInfo, IsRegister) == 0x00000C, "Member 'RmShopMenu_C_SetBirthdayInfo::IsRegister' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_SetBirthdayInfo, L_SBPS) == 0x000010, "Member 'RmShopMenu_C_SetBirthdayInfo::L_SBPS' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_SetBirthdayInfo, CallFunc_Multiply_IntInt_ReturnValue) == 0x000018, "Member 'RmShopMenu_C_SetBirthdayInfo::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_SetBirthdayInfo, CallFunc_GetPlayerController_ReturnValue) == 0x000020, "Member 'RmShopMenu_C_SetBirthdayInfo::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_SetBirthdayInfo, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'RmShopMenu_C_SetBirthdayInfo::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_SetBirthdayInfo, K2Node_DynamicCast_AsSBPlayer_State) == 0x000030, "Member 'RmShopMenu_C_SetBirthdayInfo::K2Node_DynamicCast_AsSBPlayer_State' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_SetBirthdayInfo, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'RmShopMenu_C_SetBirthdayInfo::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_SetBirthdayInfo, CallFunc_SBUtcNow_ReturnValue) == 0x000040, "Member 'RmShopMenu_C_SetBirthdayInfo::CallFunc_SBUtcNow_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_SetBirthdayInfo, CallFunc_IsValid_ReturnValue) == 0x000048, "Member 'RmShopMenu_C_SetBirthdayInfo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_SetBirthdayInfo, CallFunc_GetMonth_ReturnValue) == 0x00004C, "Member 'RmShopMenu_C_SetBirthdayInfo::CallFunc_GetMonth_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_SetBirthdayInfo, CallFunc_GetYear_ReturnValue) == 0x000050, "Member 'RmShopMenu_C_SetBirthdayInfo::CallFunc_GetYear_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_SetBirthdayInfo, Temp_int_Variable) == 0x000054, "Member 'RmShopMenu_C_SetBirthdayInfo::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_SetBirthdayInfo, CallFunc_Subtract_IntInt_ReturnValue) == 0x000058, "Member 'RmShopMenu_C_SetBirthdayInfo::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_SetBirthdayInfo, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x00005C, "Member 'RmShopMenu_C_SetBirthdayInfo::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_SetBirthdayInfo, CallFunc_Less_IntInt_ReturnValue) == 0x000060, "Member 'RmShopMenu_C_SetBirthdayInfo::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_SetBirthdayInfo, CallFunc_Greater_IntInt_ReturnValue) == 0x000061, "Member 'RmShopMenu_C_SetBirthdayInfo::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_SetBirthdayInfo, CallFunc_Subtract_IntInt_ReturnValue_2) == 0x000064, "Member 'RmShopMenu_C_SetBirthdayInfo::CallFunc_Subtract_IntInt_ReturnValue_2' has a wrong offset!");

// Function RmShopMenu.RmShopMenu_C.SetShopBtn_ExtraWindow
// 0x0004 (0x0004 - 0x0000)
struct RmShopMenu_C_SetShopBtn_ExtraWindow final
{
public:
	bool                                          Open;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Close;                                             // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Swtich;                                            // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBRmShopMenuType                             NextShop;                                          // 0x0003(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RmShopMenu_C_SetShopBtn_ExtraWindow) == 0x000001, "Wrong alignment on RmShopMenu_C_SetShopBtn_ExtraWindow");
static_assert(sizeof(RmShopMenu_C_SetShopBtn_ExtraWindow) == 0x000004, "Wrong size on RmShopMenu_C_SetShopBtn_ExtraWindow");
static_assert(offsetof(RmShopMenu_C_SetShopBtn_ExtraWindow, Open) == 0x000000, "Member 'RmShopMenu_C_SetShopBtn_ExtraWindow::Open' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_SetShopBtn_ExtraWindow, Close) == 0x000001, "Member 'RmShopMenu_C_SetShopBtn_ExtraWindow::Close' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_SetShopBtn_ExtraWindow, Swtich) == 0x000002, "Member 'RmShopMenu_C_SetShopBtn_ExtraWindow::Swtich' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_SetShopBtn_ExtraWindow, NextShop) == 0x000003, "Member 'RmShopMenu_C_SetShopBtn_ExtraWindow::NextShop' has a wrong offset!");

// Function RmShopMenu.RmShopMenu_C.GetOutSiteURL
// 0x00E0 (0x00E0 - 0x0000)
struct RmShopMenu_C_GetOutSiteURL final
{
public:
	ESBCashExchangeType                           Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8BEE[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 URL;                                               // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	ESBCashExchangeType                           Temp_byte_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8BEF[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Temp_string_Variable;                              // 0x0020(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable_1;                            // 0x0030(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable_2;                            // 0x0040(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable_3;                            // 0x0050(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable_4;                            // 0x0060(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable_5;                            // 0x0070(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetGameConfigValueString_OutValue;        // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetGameConfigValueString_ReturnValue;     // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8BF0[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default;                             // 0x00A8(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetGameConfigValueString_OutValue_1;      // 0x00B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetGameConfigValueString_ReturnValue_1;   // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8BF1[0x7];                                     // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x00D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(RmShopMenu_C_GetOutSiteURL) == 0x000008, "Wrong alignment on RmShopMenu_C_GetOutSiteURL");
static_assert(sizeof(RmShopMenu_C_GetOutSiteURL) == 0x0000E0, "Wrong size on RmShopMenu_C_GetOutSiteURL");
static_assert(offsetof(RmShopMenu_C_GetOutSiteURL, Type) == 0x000000, "Member 'RmShopMenu_C_GetOutSiteURL::Type' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_GetOutSiteURL, URL) == 0x000008, "Member 'RmShopMenu_C_GetOutSiteURL::URL' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_GetOutSiteURL, Temp_byte_Variable) == 0x000018, "Member 'RmShopMenu_C_GetOutSiteURL::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_GetOutSiteURL, Temp_string_Variable) == 0x000020, "Member 'RmShopMenu_C_GetOutSiteURL::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_GetOutSiteURL, Temp_string_Variable_1) == 0x000030, "Member 'RmShopMenu_C_GetOutSiteURL::Temp_string_Variable_1' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_GetOutSiteURL, Temp_string_Variable_2) == 0x000040, "Member 'RmShopMenu_C_GetOutSiteURL::Temp_string_Variable_2' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_GetOutSiteURL, Temp_string_Variable_3) == 0x000050, "Member 'RmShopMenu_C_GetOutSiteURL::Temp_string_Variable_3' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_GetOutSiteURL, Temp_string_Variable_4) == 0x000060, "Member 'RmShopMenu_C_GetOutSiteURL::Temp_string_Variable_4' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_GetOutSiteURL, Temp_string_Variable_5) == 0x000070, "Member 'RmShopMenu_C_GetOutSiteURL::Temp_string_Variable_5' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_GetOutSiteURL, CallFunc_GetGameConfigValueString_OutValue) == 0x000080, "Member 'RmShopMenu_C_GetOutSiteURL::CallFunc_GetGameConfigValueString_OutValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_GetOutSiteURL, CallFunc_GetGameConfigValueString_ReturnValue) == 0x000090, "Member 'RmShopMenu_C_GetOutSiteURL::CallFunc_GetGameConfigValueString_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_GetOutSiteURL, CallFunc_Concat_StrStr_ReturnValue) == 0x000098, "Member 'RmShopMenu_C_GetOutSiteURL::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_GetOutSiteURL, K2Node_Select_Default) == 0x0000A8, "Member 'RmShopMenu_C_GetOutSiteURL::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_GetOutSiteURL, CallFunc_GetGameConfigValueString_OutValue_1) == 0x0000B8, "Member 'RmShopMenu_C_GetOutSiteURL::CallFunc_GetGameConfigValueString_OutValue_1' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_GetOutSiteURL, CallFunc_GetGameConfigValueString_ReturnValue_1) == 0x0000C8, "Member 'RmShopMenu_C_GetOutSiteURL::CallFunc_GetGameConfigValueString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_GetOutSiteURL, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0000D0, "Member 'RmShopMenu_C_GetOutSiteURL::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");

// Function RmShopMenu.RmShopMenu_C.SetIconCaution
// 0x0080 (0x0080 - 0x0000)
struct RmShopMenu_C_SetIconCaution final
{
public:
	struct FDateTime                              CallFunc_GetExpiredTimeBPPoint_ReturnValue;        // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_Now_ReturnValue;                          // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_Now_ReturnValue_1;                        // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                              CallFunc_Subtract_DateTimeDateTime_ReturnValue;    // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_GetExpiredTimeRoseOrb_Date;               // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetDays_ReturnValue;                      // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8BF2[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimespan                              CallFunc_Subtract_DateTimeDateTime_ReturnValue_1;  // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8BF3[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetDays_ReturnValue_1;                    // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8BF4[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_DateTimeMinValue_ReturnValue;             // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_DateTimeMinValue_ReturnValue_1;           // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_GetExpiredTimeBPPoint_ReturnValue_1;      // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_GetExpiredTimeRoseOrbFree_ReturnValue;    // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_DateTimeDateTime_ReturnValue;  // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_DateTimeDateTime_ReturnValue_1; // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x006A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8BF5[0x5];                                     // 0x006B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_GetExpiredTimeRoseOrbPaid_ReturnValue;    // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_DateTimeDateTime_ReturnValue_2; // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x007A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(RmShopMenu_C_SetIconCaution) == 0x000008, "Wrong alignment on RmShopMenu_C_SetIconCaution");
static_assert(sizeof(RmShopMenu_C_SetIconCaution) == 0x000080, "Wrong size on RmShopMenu_C_SetIconCaution");
static_assert(offsetof(RmShopMenu_C_SetIconCaution, CallFunc_GetExpiredTimeBPPoint_ReturnValue) == 0x000000, "Member 'RmShopMenu_C_SetIconCaution::CallFunc_GetExpiredTimeBPPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_SetIconCaution, CallFunc_Now_ReturnValue) == 0x000008, "Member 'RmShopMenu_C_SetIconCaution::CallFunc_Now_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_SetIconCaution, CallFunc_Now_ReturnValue_1) == 0x000010, "Member 'RmShopMenu_C_SetIconCaution::CallFunc_Now_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_SetIconCaution, CallFunc_Subtract_DateTimeDateTime_ReturnValue) == 0x000018, "Member 'RmShopMenu_C_SetIconCaution::CallFunc_Subtract_DateTimeDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_SetIconCaution, CallFunc_GetExpiredTimeRoseOrb_Date) == 0x000020, "Member 'RmShopMenu_C_SetIconCaution::CallFunc_GetExpiredTimeRoseOrb_Date' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_SetIconCaution, CallFunc_GetDays_ReturnValue) == 0x000028, "Member 'RmShopMenu_C_SetIconCaution::CallFunc_GetDays_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_SetIconCaution, CallFunc_Subtract_DateTimeDateTime_ReturnValue_1) == 0x000030, "Member 'RmShopMenu_C_SetIconCaution::CallFunc_Subtract_DateTimeDateTime_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_SetIconCaution, CallFunc_Less_IntInt_ReturnValue) == 0x000038, "Member 'RmShopMenu_C_SetIconCaution::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_SetIconCaution, CallFunc_GetDays_ReturnValue_1) == 0x00003C, "Member 'RmShopMenu_C_SetIconCaution::CallFunc_GetDays_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_SetIconCaution, CallFunc_Less_IntInt_ReturnValue_1) == 0x000040, "Member 'RmShopMenu_C_SetIconCaution::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_SetIconCaution, CallFunc_DateTimeMinValue_ReturnValue) == 0x000048, "Member 'RmShopMenu_C_SetIconCaution::CallFunc_DateTimeMinValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_SetIconCaution, CallFunc_DateTimeMinValue_ReturnValue_1) == 0x000050, "Member 'RmShopMenu_C_SetIconCaution::CallFunc_DateTimeMinValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_SetIconCaution, CallFunc_GetExpiredTimeBPPoint_ReturnValue_1) == 0x000058, "Member 'RmShopMenu_C_SetIconCaution::CallFunc_GetExpiredTimeBPPoint_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_SetIconCaution, CallFunc_GetExpiredTimeRoseOrbFree_ReturnValue) == 0x000060, "Member 'RmShopMenu_C_SetIconCaution::CallFunc_GetExpiredTimeRoseOrbFree_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_SetIconCaution, CallFunc_EqualEqual_DateTimeDateTime_ReturnValue) == 0x000068, "Member 'RmShopMenu_C_SetIconCaution::CallFunc_EqualEqual_DateTimeDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_SetIconCaution, CallFunc_EqualEqual_DateTimeDateTime_ReturnValue_1) == 0x000069, "Member 'RmShopMenu_C_SetIconCaution::CallFunc_EqualEqual_DateTimeDateTime_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_SetIconCaution, CallFunc_Not_PreBool_ReturnValue) == 0x00006A, "Member 'RmShopMenu_C_SetIconCaution::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_SetIconCaution, CallFunc_GetExpiredTimeRoseOrbPaid_ReturnValue) == 0x000070, "Member 'RmShopMenu_C_SetIconCaution::CallFunc_GetExpiredTimeRoseOrbPaid_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_SetIconCaution, CallFunc_EqualEqual_DateTimeDateTime_ReturnValue_2) == 0x000078, "Member 'RmShopMenu_C_SetIconCaution::CallFunc_EqualEqual_DateTimeDateTime_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_SetIconCaution, CallFunc_BooleanAND_ReturnValue) == 0x000079, "Member 'RmShopMenu_C_SetIconCaution::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_SetIconCaution, CallFunc_Not_PreBool_ReturnValue_1) == 0x00007A, "Member 'RmShopMenu_C_SetIconCaution::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");

// Function RmShopMenu.RmShopMenu_C.GetBpHistory
// 0x0050 (0x0050 - 0x0000)
struct RmShopMenu_C_GetBpHistory final
{
public:
	class UHistoryWindow_C*                       Widget;                                            // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(ESBHistoryType Type, int32 Year, int32 Month, int32 Count)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(ESBHistoryType Type)>          K2Node_CreateDelegate_OutputDelegate_2;            // 0x0028(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8BF6[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UHistoryWindow_C*                       CallFunc_Create_ReturnValue;                       // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RmShopMenu_C_GetBpHistory) == 0x000008, "Wrong alignment on RmShopMenu_C_GetBpHistory");
static_assert(sizeof(RmShopMenu_C_GetBpHistory) == 0x000050, "Wrong size on RmShopMenu_C_GetBpHistory");
static_assert(offsetof(RmShopMenu_C_GetBpHistory, Widget) == 0x000000, "Member 'RmShopMenu_C_GetBpHistory::Widget' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_GetBpHistory, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'RmShopMenu_C_GetBpHistory::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_GetBpHistory, K2Node_CreateDelegate_OutputDelegate_1) == 0x000018, "Member 'RmShopMenu_C_GetBpHistory::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_GetBpHistory, K2Node_CreateDelegate_OutputDelegate_2) == 0x000028, "Member 'RmShopMenu_C_GetBpHistory::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_GetBpHistory, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'RmShopMenu_C_GetBpHistory::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_GetBpHistory, CallFunc_Create_ReturnValue) == 0x000040, "Member 'RmShopMenu_C_GetBpHistory::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_GetBpHistory, CallFunc_AddChild_ReturnValue) == 0x000048, "Member 'RmShopMenu_C_GetBpHistory::CallFunc_AddChild_ReturnValue' has a wrong offset!");

// Function RmShopMenu.RmShopMenu_C.GetExpiredTimeRoseOrb
// 0x0068 (0x0068 - 0x0000)
struct RmShopMenu_C_GetExpiredTimeRoseOrb final
{
public:
	struct FDateTime                              Date;                                              // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_GetExpiredTimeRoseOrbFree_ReturnValue;    // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_GetExpiredTimeRoseOrbPaid_ReturnValue;    // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_GetExpiredTimeRoseOrbFree_ReturnValue_1;  // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DateTimeDateTime_ReturnValue;     // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8BF7[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_DateTimeMinValue_ReturnValue;             // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_GetExpiredTimeRoseOrbPaid_ReturnValue_1;  // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_DateTimeDateTime_ReturnValue;  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8BF8[0x6];                                     // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_DateTimeMinValue_ReturnValue_1;           // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              K2Node_Select_Default;                             // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_GetExpiredTimeRoseOrbFree_ReturnValue_2;  // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_GetExpiredTimeRoseOrbPaid_ReturnValue_2;  // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_DateTimeDateTime_ReturnValue_1; // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(RmShopMenu_C_GetExpiredTimeRoseOrb) == 0x000008, "Wrong alignment on RmShopMenu_C_GetExpiredTimeRoseOrb");
static_assert(sizeof(RmShopMenu_C_GetExpiredTimeRoseOrb) == 0x000068, "Wrong size on RmShopMenu_C_GetExpiredTimeRoseOrb");
static_assert(offsetof(RmShopMenu_C_GetExpiredTimeRoseOrb, Date) == 0x000000, "Member 'RmShopMenu_C_GetExpiredTimeRoseOrb::Date' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_GetExpiredTimeRoseOrb, CallFunc_GetExpiredTimeRoseOrbFree_ReturnValue) == 0x000008, "Member 'RmShopMenu_C_GetExpiredTimeRoseOrb::CallFunc_GetExpiredTimeRoseOrbFree_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_GetExpiredTimeRoseOrb, CallFunc_GetExpiredTimeRoseOrbPaid_ReturnValue) == 0x000010, "Member 'RmShopMenu_C_GetExpiredTimeRoseOrb::CallFunc_GetExpiredTimeRoseOrbPaid_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_GetExpiredTimeRoseOrb, CallFunc_GetExpiredTimeRoseOrbFree_ReturnValue_1) == 0x000018, "Member 'RmShopMenu_C_GetExpiredTimeRoseOrb::CallFunc_GetExpiredTimeRoseOrbFree_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_GetExpiredTimeRoseOrb, CallFunc_Greater_DateTimeDateTime_ReturnValue) == 0x000020, "Member 'RmShopMenu_C_GetExpiredTimeRoseOrb::CallFunc_Greater_DateTimeDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_GetExpiredTimeRoseOrb, CallFunc_DateTimeMinValue_ReturnValue) == 0x000028, "Member 'RmShopMenu_C_GetExpiredTimeRoseOrb::CallFunc_DateTimeMinValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_GetExpiredTimeRoseOrb, CallFunc_GetExpiredTimeRoseOrbPaid_ReturnValue_1) == 0x000030, "Member 'RmShopMenu_C_GetExpiredTimeRoseOrb::CallFunc_GetExpiredTimeRoseOrbPaid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_GetExpiredTimeRoseOrb, CallFunc_EqualEqual_DateTimeDateTime_ReturnValue) == 0x000038, "Member 'RmShopMenu_C_GetExpiredTimeRoseOrb::CallFunc_EqualEqual_DateTimeDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_GetExpiredTimeRoseOrb, Temp_bool_Variable) == 0x000039, "Member 'RmShopMenu_C_GetExpiredTimeRoseOrb::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_GetExpiredTimeRoseOrb, CallFunc_DateTimeMinValue_ReturnValue_1) == 0x000040, "Member 'RmShopMenu_C_GetExpiredTimeRoseOrb::CallFunc_DateTimeMinValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_GetExpiredTimeRoseOrb, K2Node_Select_Default) == 0x000048, "Member 'RmShopMenu_C_GetExpiredTimeRoseOrb::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_GetExpiredTimeRoseOrb, CallFunc_GetExpiredTimeRoseOrbFree_ReturnValue_2) == 0x000050, "Member 'RmShopMenu_C_GetExpiredTimeRoseOrb::CallFunc_GetExpiredTimeRoseOrbFree_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_GetExpiredTimeRoseOrb, CallFunc_GetExpiredTimeRoseOrbPaid_ReturnValue_2) == 0x000058, "Member 'RmShopMenu_C_GetExpiredTimeRoseOrb::CallFunc_GetExpiredTimeRoseOrbPaid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_GetExpiredTimeRoseOrb, CallFunc_EqualEqual_DateTimeDateTime_ReturnValue_1) == 0x000060, "Member 'RmShopMenu_C_GetExpiredTimeRoseOrb::CallFunc_EqualEqual_DateTimeDateTime_ReturnValue_1' has a wrong offset!");

// Function RmShopMenu.RmShopMenu_C.SetMaskBGVisibility
// 0x0005 (0x0005 - 0x0000)
struct RmShopMenu_C_SetMaskBGVisibility final
{
public:
	bool                                          IsVisibility;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RmShopMenu_C_SetMaskBGVisibility) == 0x000001, "Wrong alignment on RmShopMenu_C_SetMaskBGVisibility");
static_assert(sizeof(RmShopMenu_C_SetMaskBGVisibility) == 0x000005, "Wrong size on RmShopMenu_C_SetMaskBGVisibility");
static_assert(offsetof(RmShopMenu_C_SetMaskBGVisibility, IsVisibility) == 0x000000, "Member 'RmShopMenu_C_SetMaskBGVisibility::IsVisibility' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_SetMaskBGVisibility, CallFunc_MakeLiteralByte_ReturnValue) == 0x000001, "Member 'RmShopMenu_C_SetMaskBGVisibility::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_SetMaskBGVisibility, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000002, "Member 'RmShopMenu_C_SetMaskBGVisibility::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_SetMaskBGVisibility, Temp_bool_Variable) == 0x000003, "Member 'RmShopMenu_C_SetMaskBGVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_SetMaskBGVisibility, K2Node_Select_Default) == 0x000004, "Member 'RmShopMenu_C_SetMaskBGVisibility::K2Node_Select_Default' has a wrong offset!");

// Function RmShopMenu.RmShopMenu_C.Set Esc Extra
// 0x0004 (0x0004 - 0x0000)
struct RmShopMenu_C_Set_Esc_Extra final
{
public:
	bool                                          IsShow;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(RmShopMenu_C_Set_Esc_Extra) == 0x000001, "Wrong alignment on RmShopMenu_C_Set_Esc_Extra");
static_assert(sizeof(RmShopMenu_C_Set_Esc_Extra) == 0x000004, "Wrong size on RmShopMenu_C_Set_Esc_Extra");
static_assert(offsetof(RmShopMenu_C_Set_Esc_Extra, IsShow) == 0x000000, "Member 'RmShopMenu_C_Set_Esc_Extra::IsShow' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_Set_Esc_Extra, CallFunc_GetVisibility_ReturnValue) == 0x000001, "Member 'RmShopMenu_C_Set_Esc_Extra::CallFunc_GetVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_Set_Esc_Extra, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000002, "Member 'RmShopMenu_C_Set_Esc_Extra::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_C_Set_Esc_Extra, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000003, "Member 'RmShopMenu_C_Set_Esc_Extra::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");

}

