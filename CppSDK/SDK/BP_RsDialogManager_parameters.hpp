#pragma once

 

// Package: BP_RsDialogManager

#include "Basic.hpp"

#include "RsDialogButtonType_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "RsDialogProductTitleType_structs.hpp"
#include "RsDialogType_structs.hpp"
#include "RsDialogPaymentType_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "RsDialogCurrencyPaidType_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "ST_PaidTypeSound_structs.hpp"
#include "ST_RsDialogCommonInfo_structs.hpp"


namespace SDK::Params
{

// Function BP_RsDialogManager.BP_RsDialogManager_C.OnButtonClicked__DelegateSignature
// 0x0002 (0x0002 - 0x0000)
struct BP_RsDialogManager_C_OnButtonClicked__DelegateSignature final
{
public:
	ERsDialogType                                 RsDialogType;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ERsDialogButtonType                           ClickedButtonType;                                 // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RsDialogManager_C_OnButtonClicked__DelegateSignature) == 0x000001, "Wrong alignment on BP_RsDialogManager_C_OnButtonClicked__DelegateSignature");
static_assert(sizeof(BP_RsDialogManager_C_OnButtonClicked__DelegateSignature) == 0x000002, "Wrong size on BP_RsDialogManager_C_OnButtonClicked__DelegateSignature");
static_assert(offsetof(BP_RsDialogManager_C_OnButtonClicked__DelegateSignature, RsDialogType) == 0x000000, "Member 'BP_RsDialogManager_C_OnButtonClicked__DelegateSignature::RsDialogType' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_OnButtonClicked__DelegateSignature, ClickedButtonType) == 0x000001, "Member 'BP_RsDialogManager_C_OnButtonClicked__DelegateSignature::ClickedButtonType' has a wrong offset!");

// Function BP_RsDialogManager.BP_RsDialogManager_C.OnUseCoupon__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct BP_RsDialogManager_C_OnUseCoupon__DelegateSignature final
{
public:
	class FString                                 CouponCode;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RsDialogManager_C_OnUseCoupon__DelegateSignature) == 0x000008, "Wrong alignment on BP_RsDialogManager_C_OnUseCoupon__DelegateSignature");
static_assert(sizeof(BP_RsDialogManager_C_OnUseCoupon__DelegateSignature) == 0x000010, "Wrong size on BP_RsDialogManager_C_OnUseCoupon__DelegateSignature");
static_assert(offsetof(BP_RsDialogManager_C_OnUseCoupon__DelegateSignature, CouponCode) == 0x000000, "Member 'BP_RsDialogManager_C_OnUseCoupon__DelegateSignature::CouponCode' has a wrong offset!");

// Function BP_RsDialogManager.BP_RsDialogManager_C.ExecuteUbergraph_BP_RsDialogManager
// 0x02E8 (0x02E8 - 0x0000)
struct BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ERsDialogButtonType                           Temp_byte_Variable;                                // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ERsDialogButtonType                           K2Node_ComponentBoundEvent_Type_8;                 // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ERsDialogButtonType                           K2Node_ComponentBoundEvent_Type_7;                 // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_568C[0x5];                                     // 0x000B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_ComponentBoundEvent_Code;                   // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_568D[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Len_ReturnValue;                          // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ERsDialogButtonType                           K2Node_ComponentBoundEvent_Type_6;                 // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_2;                    // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_IsAchieve;                      // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_568E[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_Text;                           // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ERsDialogButtonType                           K2Node_ComponentBoundEvent_Type_5;                 // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_3;                    // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_568F[0x2];                                     // 0x0042(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_ErrorCode;                      // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URmShopMenu_C*                          K2Node_DynamicCast_AsRm_Shop_Menu;                 // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ERsDialogButtonType                           K2Node_ComponentBoundEvent_Type_4;                 // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_4;                    // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5690[0x5];                                     // 0x0053(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_CustomEvent_EffectDescription;              // 0x0058(0x0018)()
	ERsDialogButtonType                           K2Node_ComponentBoundEvent_Type_3;                 // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_5;                    // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_ShowMsgStoreLetter;             // 0x0072(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ERsDialogCurrencyPaidType                     K2Node_CustomEvent_PaidType;                       // 0x0073(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ERsDialogButtonType                           K2Node_ComponentBoundEvent_Type_2;                 // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_6;                    // 0x0075(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5691[0x2];                                     // 0x0076(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetEnumeratorName_ReturnValue;            // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_PaidTypeSound                      CallFunc_GetDataTableRowFromName_OutRow;           // 0x0080(0x0028)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ERsDialogButtonType                           K2Node_ComponentBoundEvent_Type_1;                 // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_7;                    // 0x00AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x00AB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ERsDialogButtonType                           K2Node_ComponentBoundEvent_Type;                   // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_8;                    // 0x00AD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5692[0x2];                                     // 0x00AE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_Rate_1;                         // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5693[0x3];                                     // 0x00B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_Rate;                           // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_1;            // 0x00BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_UpdateProductCostBySeasonPass_IsLack;     // 0x00BD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_UpdateProductCostByCoupon_IsLack;         // 0x00BE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5694[0x1];                                     // 0x00BF(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5695[0x6];                                     // 0x00DA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_3;              // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_3;                // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ERsDialogType                                 K2Node_CustomEvent_Type;                           // 0x00F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_4;                // 0x00F2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5696[0x5];                                     // 0x00F3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_4;              // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_5;              // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ERsDialogProductTitleType                     K2Node_CustomEvent_ProductTilteType;               // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5697[0x3];                                     // 0x0109(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_ItemSetId;                      // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_CustomEvent_ProductName;                    // 0x0110(0x0018)()
	int32                                         K2Node_CustomEvent_RankFrom;                       // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_RankTo;                         // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_ShowPurchaseNum;                // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5698[0x3];                                     // 0x0131(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_PurchaseNum;                    // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ERsDialogPaymentType                          K2Node_CustomEvent_PaymentType01;                  // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5699[0x3];                                     // 0x0139(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_PurchasePrice01;                // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ERsDialogPaymentType                          K2Node_CustomEvent_PaymentType02;                  // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_569A[0x3];                                     // 0x0141(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_PurchasePrice02;                // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_PaidOnly;                       // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_569B[0x7];                                     // 0x0149(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_RsDialogCommonInfo                 K2Node_MakeStruct_ST_RsDialogCommonInfo;           // 0x0150(0x0048)(HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0198(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x01D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x01D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x01D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_5;                // 0x01DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_569C[0x3];                                     // 0x01DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x01E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x01F0(0x0018)()
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_569D[0x7];                                     // 0x0209(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBShowYesNoDialog2Impl*                CallFunc_ShowYesNoDialog2_ReturnValue;             // 0x0210(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_9;                    // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_569E[0x3];                                     // 0x0219(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_3;                               // 0x021C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRmShopMenuType                             K2Node_CustomEvent_Shop;                           // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0221(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0222(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_569F[0x5];                                     // 0x0223(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class URmShopMenu_C*                          K2Node_DynamicCast_AsRm_Shop_Menu_1;               // 0x0228(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0230(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ERsDialogButtonType                           Temp_byte_Variable_1;                              // 0x0231(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_56A0[0x2];                                     // 0x0232(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0234(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ERsDialogPaymentType                          Temp_byte_Variable_2;                              // 0x0238(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_6;                // 0x0239(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ERsDialogPaymentType                          Temp_byte_Variable_3;                              // 0x023A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x023B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ERsDialogCurrencyPaidType                     Temp_byte_Variable_4;                              // 0x023C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_56A1[0x3];                                     // 0x023D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_Free;                           // 0x0240(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Paid;                           // 0x0244(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              K2Node_CustomEvent_FreeExpired;                    // 0x0248(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              K2Node_CustomEvent_PaidExpired;                    // 0x0250(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_BP;                             // 0x0258(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_56A2[0x4];                                     // 0x025C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          K2Node_Select_Default_1;                           // 0x0260(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_SP;                             // 0x0268(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x026C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56A3[0x3];                                     // 0x026D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0270(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_10;                   // 0x0274(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56A4[0x3];                                     // 0x0275(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PlaySE_ReturnValue_1;                     // 0x0278(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ERsDialogPaymentType                          Temp_byte_Variable_5;                              // 0x027C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_56A5[0x3];                                     // 0x027D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PlaySE_ReturnValue_2;                     // 0x0280(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0284(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_SetProductCost_bIsLack;                   // 0x0294(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPlayingAnimation_ReturnValue;           // 0x0295(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56A6[0x2];                                     // 0x0296(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetGameConfigValueString_OutValue;        // 0x0298(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetGameConfigValueString_ReturnValue;     // 0x02A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ERsDialogPaymentType                          Temp_byte_Variable_6;                              // 0x02A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_56A7[0x6];                                     // 0x02AA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x02B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetGameConfigValueString_OutValue_1;      // 0x02C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetGameConfigValueString_ReturnValue_1;   // 0x02D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ERsDialogPaymentType                          K2Node_Select_Default_2;                           // 0x02D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_56A8[0x6];                                     // 0x02D2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x02D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager) == 0x000008, "Wrong alignment on BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager");
static_assert(sizeof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager) == 0x0002E8, "Wrong size on BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, EntryPoint) == 0x000000, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, CallFunc_Not_PreBool_ReturnValue) == 0x000004, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000005, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, Temp_byte_Variable) == 0x000006, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, K2Node_ComponentBoundEvent_Type_8) == 0x000007, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::K2Node_ComponentBoundEvent_Type_8' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, K2Node_SwitchEnum_CmpSuccess) == 0x000008, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, K2Node_ComponentBoundEvent_Type_7) == 0x000009, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::K2Node_ComponentBoundEvent_Type_7' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, K2Node_SwitchEnum_CmpSuccess_1) == 0x00000A, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, K2Node_ComponentBoundEvent_Code) == 0x000010, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::K2Node_ComponentBoundEvent_Code' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000020, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, CallFunc_Len_ReturnValue) == 0x000024, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::CallFunc_Len_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000028, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, K2Node_ComponentBoundEvent_Type_6) == 0x000029, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::K2Node_ComponentBoundEvent_Type_6' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, K2Node_SwitchEnum_CmpSuccess_2) == 0x00002A, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::K2Node_SwitchEnum_CmpSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, K2Node_CustomEvent_IsAchieve) == 0x00002B, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::K2Node_CustomEvent_IsAchieve' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, K2Node_CustomEvent_Text) == 0x000030, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::K2Node_CustomEvent_Text' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, K2Node_ComponentBoundEvent_Type_5) == 0x000040, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::K2Node_ComponentBoundEvent_Type_5' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, K2Node_SwitchEnum_CmpSuccess_3) == 0x000041, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::K2Node_SwitchEnum_CmpSuccess_3' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, K2Node_CustomEvent_ErrorCode) == 0x000044, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::K2Node_CustomEvent_ErrorCode' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, K2Node_DynamicCast_AsRm_Shop_Menu) == 0x000048, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::K2Node_DynamicCast_AsRm_Shop_Menu' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, K2Node_ComponentBoundEvent_Type_4) == 0x000051, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::K2Node_ComponentBoundEvent_Type_4' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, K2Node_SwitchEnum_CmpSuccess_4) == 0x000052, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::K2Node_SwitchEnum_CmpSuccess_4' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, K2Node_CustomEvent_EffectDescription) == 0x000058, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::K2Node_CustomEvent_EffectDescription' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, K2Node_ComponentBoundEvent_Type_3) == 0x000070, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::K2Node_ComponentBoundEvent_Type_3' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, K2Node_SwitchEnum_CmpSuccess_5) == 0x000071, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::K2Node_SwitchEnum_CmpSuccess_5' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, K2Node_CustomEvent_ShowMsgStoreLetter) == 0x000072, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::K2Node_CustomEvent_ShowMsgStoreLetter' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, K2Node_CustomEvent_PaidType) == 0x000073, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::K2Node_CustomEvent_PaidType' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, K2Node_ComponentBoundEvent_Type_2) == 0x000074, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::K2Node_ComponentBoundEvent_Type_2' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, K2Node_SwitchEnum_CmpSuccess_6) == 0x000075, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::K2Node_SwitchEnum_CmpSuccess_6' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, CallFunc_GetEnumeratorName_ReturnValue) == 0x000078, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::CallFunc_GetEnumeratorName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, CallFunc_GetDataTableRowFromName_OutRow) == 0x000080, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0000A8, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, K2Node_ComponentBoundEvent_Type_1) == 0x0000A9, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::K2Node_ComponentBoundEvent_Type_1' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, K2Node_SwitchEnum_CmpSuccess_7) == 0x0000AA, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::K2Node_SwitchEnum_CmpSuccess_7' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x0000AB, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, K2Node_ComponentBoundEvent_Type) == 0x0000AC, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::K2Node_ComponentBoundEvent_Type' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, K2Node_SwitchEnum_CmpSuccess_8) == 0x0000AD, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::K2Node_SwitchEnum_CmpSuccess_8' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, K2Node_CustomEvent_Rate_1) == 0x0000B0, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::K2Node_CustomEvent_Rate_1' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, CallFunc_NotEqual_IntInt_ReturnValue) == 0x0000B4, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, K2Node_CustomEvent_Rate) == 0x0000B8, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::K2Node_CustomEvent_Rate' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, CallFunc_NotEqual_IntInt_ReturnValue_1) == 0x0000BC, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::CallFunc_NotEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, CallFunc_UpdateProductCostBySeasonPass_IsLack) == 0x0000BD, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::CallFunc_UpdateProductCostBySeasonPass_IsLack' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, CallFunc_UpdateProductCostByCoupon_IsLack) == 0x0000BE, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::CallFunc_UpdateProductCostByCoupon_IsLack' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, Temp_int_Variable) == 0x0000C0, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, Temp_int_Variable_1) == 0x0000C4, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, CallFunc_PlayAnimation_ReturnValue) == 0x0000C8, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, CallFunc_PlayAnimation_ReturnValue_1) == 0x0000D0, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, CallFunc_Not_PreBool_ReturnValue_1) == 0x0000D8, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, CallFunc_Not_PreBool_ReturnValue_2) == 0x0000D9, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, CallFunc_PlayAnimation_ReturnValue_2) == 0x0000E0, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, CallFunc_PlayAnimation_ReturnValue_3) == 0x0000E8, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::CallFunc_PlayAnimation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, CallFunc_Not_PreBool_ReturnValue_3) == 0x0000F0, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::CallFunc_Not_PreBool_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, K2Node_CustomEvent_Type) == 0x0000F1, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::K2Node_CustomEvent_Type' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, CallFunc_Not_PreBool_ReturnValue_4) == 0x0000F2, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::CallFunc_Not_PreBool_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, CallFunc_PlayAnimation_ReturnValue_4) == 0x0000F8, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::CallFunc_PlayAnimation_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, CallFunc_PlayAnimation_ReturnValue_5) == 0x000100, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::CallFunc_PlayAnimation_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, K2Node_CustomEvent_ProductTilteType) == 0x000108, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::K2Node_CustomEvent_ProductTilteType' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, K2Node_CustomEvent_ItemSetId) == 0x00010C, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::K2Node_CustomEvent_ItemSetId' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, K2Node_CustomEvent_ProductName) == 0x000110, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::K2Node_CustomEvent_ProductName' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, K2Node_CustomEvent_RankFrom) == 0x000128, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::K2Node_CustomEvent_RankFrom' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, K2Node_CustomEvent_RankTo) == 0x00012C, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::K2Node_CustomEvent_RankTo' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, K2Node_CustomEvent_ShowPurchaseNum) == 0x000130, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::K2Node_CustomEvent_ShowPurchaseNum' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, K2Node_CustomEvent_PurchaseNum) == 0x000134, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::K2Node_CustomEvent_PurchaseNum' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, K2Node_CustomEvent_PaymentType01) == 0x000138, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::K2Node_CustomEvent_PaymentType01' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, K2Node_CustomEvent_PurchasePrice01) == 0x00013C, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::K2Node_CustomEvent_PurchasePrice01' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, K2Node_CustomEvent_PaymentType02) == 0x000140, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::K2Node_CustomEvent_PaymentType02' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, K2Node_CustomEvent_PurchasePrice02) == 0x000144, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::K2Node_CustomEvent_PurchasePrice02' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, K2Node_CustomEvent_PaidOnly) == 0x000148, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::K2Node_CustomEvent_PaidOnly' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, K2Node_MakeStruct_ST_RsDialogCommonInfo) == 0x000150, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::K2Node_MakeStruct_ST_RsDialogCommonInfo' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, K2Node_Event_MyGeometry) == 0x000198, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, K2Node_Event_InDeltaTime) == 0x0001D0, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x0001D4, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, Temp_int_Variable_2) == 0x0001D8, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, CallFunc_Not_PreBool_ReturnValue_5) == 0x0001DC, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::CallFunc_Not_PreBool_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x0001E0, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, CallFunc_Conv_StringToText_ReturnValue) == 0x0001F0, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000208, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, CallFunc_ShowYesNoDialog2_ReturnValue) == 0x000210, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::CallFunc_ShowYesNoDialog2_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, K2Node_SwitchEnum_CmpSuccess_9) == 0x000218, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::K2Node_SwitchEnum_CmpSuccess_9' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, Temp_int_Variable_3) == 0x00021C, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, K2Node_CustomEvent_Shop) == 0x000220, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::K2Node_CustomEvent_Shop' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, CallFunc_IsValid_ReturnValue) == 0x000221, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000222, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, K2Node_DynamicCast_AsRm_Shop_Menu_1) == 0x000228, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::K2Node_DynamicCast_AsRm_Shop_Menu_1' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, K2Node_DynamicCast_bSuccess_1) == 0x000230, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, Temp_byte_Variable_1) == 0x000231, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, K2Node_Select_Default) == 0x000234, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, Temp_byte_Variable_2) == 0x000238, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, CallFunc_Not_PreBool_ReturnValue_6) == 0x000239, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::CallFunc_Not_PreBool_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, Temp_byte_Variable_3) == 0x00023A, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x00023B, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, Temp_byte_Variable_4) == 0x00023C, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, K2Node_CustomEvent_Free) == 0x000240, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::K2Node_CustomEvent_Free' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, K2Node_CustomEvent_Paid) == 0x000244, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::K2Node_CustomEvent_Paid' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, K2Node_CustomEvent_FreeExpired) == 0x000248, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::K2Node_CustomEvent_FreeExpired' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, K2Node_CustomEvent_PaidExpired) == 0x000250, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::K2Node_CustomEvent_PaidExpired' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, K2Node_CustomEvent_BP) == 0x000258, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::K2Node_CustomEvent_BP' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, K2Node_Select_Default_1) == 0x000260, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, K2Node_CustomEvent_SP) == 0x000268, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::K2Node_CustomEvent_SP' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, CallFunc_IsValid_ReturnValue_1) == 0x00026C, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, CallFunc_PlaySE_ReturnValue) == 0x000270, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, K2Node_SwitchEnum_CmpSuccess_10) == 0x000274, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::K2Node_SwitchEnum_CmpSuccess_10' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, CallFunc_PlaySE_ReturnValue_1) == 0x000278, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::CallFunc_PlaySE_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, Temp_byte_Variable_5) == 0x00027C, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, CallFunc_PlaySE_ReturnValue_2) == 0x000280, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::CallFunc_PlaySE_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, K2Node_CreateDelegate_OutputDelegate) == 0x000284, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, CallFunc_SetProductCost_bIsLack) == 0x000294, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::CallFunc_SetProductCost_bIsLack' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, CallFunc_IsPlayingAnimation_ReturnValue) == 0x000295, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::CallFunc_IsPlayingAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, CallFunc_GetGameConfigValueString_OutValue) == 0x000298, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::CallFunc_GetGameConfigValueString_OutValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, CallFunc_GetGameConfigValueString_ReturnValue) == 0x0002A8, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::CallFunc_GetGameConfigValueString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, Temp_byte_Variable_6) == 0x0002A9, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, CallFunc_Concat_StrStr_ReturnValue) == 0x0002B0, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, CallFunc_GetGameConfigValueString_OutValue_1) == 0x0002C0, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::CallFunc_GetGameConfigValueString_OutValue_1' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, CallFunc_GetGameConfigValueString_ReturnValue_1) == 0x0002D0, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::CallFunc_GetGameConfigValueString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, K2Node_Select_Default_2) == 0x0002D1, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0002D8, "Member 'BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");

// Function BP_RsDialogManager.BP_RsDialogManager_C.SetSeasonPoint
// 0x0004 (0x0004 - 0x0000)
struct BP_RsDialogManager_C_SetSeasonPoint final
{
public:
	int32                                         SP;                                                // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RsDialogManager_C_SetSeasonPoint) == 0x000004, "Wrong alignment on BP_RsDialogManager_C_SetSeasonPoint");
static_assert(sizeof(BP_RsDialogManager_C_SetSeasonPoint) == 0x000004, "Wrong size on BP_RsDialogManager_C_SetSeasonPoint");
static_assert(offsetof(BP_RsDialogManager_C_SetSeasonPoint, SP) == 0x000000, "Member 'BP_RsDialogManager_C_SetSeasonPoint::SP' has a wrong offset!");

// Function BP_RsDialogManager.BP_RsDialogManager_C.SetBPPoint
// 0x0004 (0x0004 - 0x0000)
struct BP_RsDialogManager_C_SetBPPoint final
{
public:
	int32                                         BP;                                                // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RsDialogManager_C_SetBPPoint) == 0x000004, "Wrong alignment on BP_RsDialogManager_C_SetBPPoint");
static_assert(sizeof(BP_RsDialogManager_C_SetBPPoint) == 0x000004, "Wrong size on BP_RsDialogManager_C_SetBPPoint");
static_assert(offsetof(BP_RsDialogManager_C_SetBPPoint, BP) == 0x000000, "Member 'BP_RsDialogManager_C_SetBPPoint::BP' has a wrong offset!");

// Function BP_RsDialogManager.BP_RsDialogManager_C.SetRoseOrb
// 0x0018 (0x0018 - 0x0000)
struct BP_RsDialogManager_C_SetRoseOrb final
{
public:
	int32                                         Free;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Paid;                                              // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              FreeExpired;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              PaidExpired;                                       // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RsDialogManager_C_SetRoseOrb) == 0x000008, "Wrong alignment on BP_RsDialogManager_C_SetRoseOrb");
static_assert(sizeof(BP_RsDialogManager_C_SetRoseOrb) == 0x000018, "Wrong size on BP_RsDialogManager_C_SetRoseOrb");
static_assert(offsetof(BP_RsDialogManager_C_SetRoseOrb, Free) == 0x000000, "Member 'BP_RsDialogManager_C_SetRoseOrb::Free' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_SetRoseOrb, Paid) == 0x000004, "Member 'BP_RsDialogManager_C_SetRoseOrb::Paid' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_SetRoseOrb, FreeExpired) == 0x000008, "Member 'BP_RsDialogManager_C_SetRoseOrb::FreeExpired' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_SetRoseOrb, PaidExpired) == 0x000010, "Member 'BP_RsDialogManager_C_SetRoseOrb::PaidExpired' has a wrong offset!");

// Function BP_RsDialogManager.BP_RsDialogManager_C.JumpShopMenu
// 0x0001 (0x0001 - 0x0000)
struct BP_RsDialogManager_C_JumpShopMenu final
{
public:
	ESBRmShopMenuType                             Shop;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RsDialogManager_C_JumpShopMenu) == 0x000001, "Wrong alignment on BP_RsDialogManager_C_JumpShopMenu");
static_assert(sizeof(BP_RsDialogManager_C_JumpShopMenu) == 0x000001, "Wrong size on BP_RsDialogManager_C_JumpShopMenu");
static_assert(offsetof(BP_RsDialogManager_C_JumpShopMenu, Shop) == 0x000000, "Member 'BP_RsDialogManager_C_JumpShopMenu::Shop' has a wrong offset!");

// Function BP_RsDialogManager.BP_RsDialogManager_C.Tick
// 0x003C (0x003C - 0x0000)
struct BP_RsDialogManager_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RsDialogManager_C_Tick) == 0x000004, "Wrong alignment on BP_RsDialogManager_C_Tick");
static_assert(sizeof(BP_RsDialogManager_C_Tick) == 0x00003C, "Wrong size on BP_RsDialogManager_C_Tick");
static_assert(offsetof(BP_RsDialogManager_C_Tick, MyGeometry) == 0x000000, "Member 'BP_RsDialogManager_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_Tick, InDeltaTime) == 0x000038, "Member 'BP_RsDialogManager_C_Tick::InDeltaTime' has a wrong offset!");

// Function BP_RsDialogManager.BP_RsDialogManager_C.SetCommonInfo
// 0x0048 (0x0048 - 0x0000)
struct BP_RsDialogManager_C_SetCommonInfo final
{
public:
	ERsDialogProductTitleType                     ProductTilteType;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_56A9[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ItemSetId;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   ProductName;                                       // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         RankFrom;                                          // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RankTo;                                            // 0x0024(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShowPurchaseNum;                                   // 0x0028(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56AA[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         PurchaseNum;                                       // 0x002C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ERsDialogPaymentType                          PaymentType01;                                     // 0x0030(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_56AB[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         PurchasePrice01;                                   // 0x0034(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ERsDialogPaymentType                          PaymentType02;                                     // 0x0038(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_56AC[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         PurchasePrice02;                                   // 0x003C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PaidOnly;                                          // 0x0040(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_RsDialogManager_C_SetCommonInfo) == 0x000008, "Wrong alignment on BP_RsDialogManager_C_SetCommonInfo");
static_assert(sizeof(BP_RsDialogManager_C_SetCommonInfo) == 0x000048, "Wrong size on BP_RsDialogManager_C_SetCommonInfo");
static_assert(offsetof(BP_RsDialogManager_C_SetCommonInfo, ProductTilteType) == 0x000000, "Member 'BP_RsDialogManager_C_SetCommonInfo::ProductTilteType' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_SetCommonInfo, ItemSetId) == 0x000004, "Member 'BP_RsDialogManager_C_SetCommonInfo::ItemSetId' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_SetCommonInfo, ProductName) == 0x000008, "Member 'BP_RsDialogManager_C_SetCommonInfo::ProductName' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_SetCommonInfo, RankFrom) == 0x000020, "Member 'BP_RsDialogManager_C_SetCommonInfo::RankFrom' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_SetCommonInfo, RankTo) == 0x000024, "Member 'BP_RsDialogManager_C_SetCommonInfo::RankTo' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_SetCommonInfo, ShowPurchaseNum) == 0x000028, "Member 'BP_RsDialogManager_C_SetCommonInfo::ShowPurchaseNum' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_SetCommonInfo, PurchaseNum) == 0x00002C, "Member 'BP_RsDialogManager_C_SetCommonInfo::PurchaseNum' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_SetCommonInfo, PaymentType01) == 0x000030, "Member 'BP_RsDialogManager_C_SetCommonInfo::PaymentType01' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_SetCommonInfo, PurchasePrice01) == 0x000034, "Member 'BP_RsDialogManager_C_SetCommonInfo::PurchasePrice01' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_SetCommonInfo, PaymentType02) == 0x000038, "Member 'BP_RsDialogManager_C_SetCommonInfo::PaymentType02' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_SetCommonInfo, PurchasePrice02) == 0x00003C, "Member 'BP_RsDialogManager_C_SetCommonInfo::PurchasePrice02' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_SetCommonInfo, PaidOnly) == 0x000040, "Member 'BP_RsDialogManager_C_SetCommonInfo::PaidOnly' has a wrong offset!");

// Function BP_RsDialogManager.BP_RsDialogManager_C.SwitchDialog
// 0x0001 (0x0001 - 0x0000)
struct BP_RsDialogManager_C_SwitchDialog final
{
public:
	ERsDialogType                                 Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RsDialogManager_C_SwitchDialog) == 0x000001, "Wrong alignment on BP_RsDialogManager_C_SwitchDialog");
static_assert(sizeof(BP_RsDialogManager_C_SwitchDialog) == 0x000001, "Wrong size on BP_RsDialogManager_C_SwitchDialog");
static_assert(offsetof(BP_RsDialogManager_C_SwitchDialog, Type) == 0x000000, "Member 'BP_RsDialogManager_C_SwitchDialog::Type' has a wrong offset!");

// Function BP_RsDialogManager.BP_RsDialogManager_C.SetDiscountRate_SeasonPass
// 0x0004 (0x0004 - 0x0000)
struct BP_RsDialogManager_C_SetDiscountRate_SeasonPass final
{
public:
	int32                                         Rate;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RsDialogManager_C_SetDiscountRate_SeasonPass) == 0x000004, "Wrong alignment on BP_RsDialogManager_C_SetDiscountRate_SeasonPass");
static_assert(sizeof(BP_RsDialogManager_C_SetDiscountRate_SeasonPass) == 0x000004, "Wrong size on BP_RsDialogManager_C_SetDiscountRate_SeasonPass");
static_assert(offsetof(BP_RsDialogManager_C_SetDiscountRate_SeasonPass, Rate) == 0x000000, "Member 'BP_RsDialogManager_C_SetDiscountRate_SeasonPass::Rate' has a wrong offset!");

// Function BP_RsDialogManager.BP_RsDialogManager_C.SetDiscountRate
// 0x0004 (0x0004 - 0x0000)
struct BP_RsDialogManager_C_SetDiscountRate final
{
public:
	int32                                         Rate;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RsDialogManager_C_SetDiscountRate) == 0x000004, "Wrong alignment on BP_RsDialogManager_C_SetDiscountRate");
static_assert(sizeof(BP_RsDialogManager_C_SetDiscountRate) == 0x000004, "Wrong size on BP_RsDialogManager_C_SetDiscountRate");
static_assert(offsetof(BP_RsDialogManager_C_SetDiscountRate, Rate) == 0x000000, "Member 'BP_RsDialogManager_C_SetDiscountRate::Rate' has a wrong offset!");

// Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__BP_RsDialog_Purchase_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct BP_RsDialogManager_C_BndEvt__BP_RsDialog_Purchase_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature final
{
public:
	ERsDialogButtonType                           Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RsDialogManager_C_BndEvt__BP_RsDialog_Purchase_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature) == 0x000001, "Wrong alignment on BP_RsDialogManager_C_BndEvt__BP_RsDialog_Purchase_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature");
static_assert(sizeof(BP_RsDialogManager_C_BndEvt__BP_RsDialog_Purchase_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature) == 0x000001, "Wrong size on BP_RsDialogManager_C_BndEvt__BP_RsDialog_Purchase_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature");
static_assert(offsetof(BP_RsDialogManager_C_BndEvt__BP_RsDialog_Purchase_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature, Type) == 0x000000, "Member 'BP_RsDialogManager_C_BndEvt__BP_RsDialog_Purchase_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature::Type' has a wrong offset!");

// Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__BP_RsDialog_Payment_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct BP_RsDialogManager_C_BndEvt__BP_RsDialog_Payment_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature final
{
public:
	ERsDialogButtonType                           Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RsDialogManager_C_BndEvt__BP_RsDialog_Payment_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature) == 0x000001, "Wrong alignment on BP_RsDialogManager_C_BndEvt__BP_RsDialog_Payment_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature");
static_assert(sizeof(BP_RsDialogManager_C_BndEvt__BP_RsDialog_Payment_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature) == 0x000001, "Wrong size on BP_RsDialogManager_C_BndEvt__BP_RsDialog_Payment_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature");
static_assert(offsetof(BP_RsDialogManager_C_BndEvt__BP_RsDialog_Payment_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature, Type) == 0x000000, "Member 'BP_RsDialogManager_C_BndEvt__BP_RsDialog_Payment_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature::Type' has a wrong offset!");

// Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__BP_RsDialog_Completed_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct BP_RsDialogManager_C_BndEvt__BP_RsDialog_Completed_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature final
{
public:
	ERsDialogButtonType                           Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RsDialogManager_C_BndEvt__BP_RsDialog_Completed_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature) == 0x000001, "Wrong alignment on BP_RsDialogManager_C_BndEvt__BP_RsDialog_Completed_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature");
static_assert(sizeof(BP_RsDialogManager_C_BndEvt__BP_RsDialog_Completed_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature) == 0x000001, "Wrong size on BP_RsDialogManager_C_BndEvt__BP_RsDialog_Completed_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature");
static_assert(offsetof(BP_RsDialogManager_C_BndEvt__BP_RsDialog_Completed_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature, Type) == 0x000000, "Member 'BP_RsDialogManager_C_BndEvt__BP_RsDialog_Completed_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature::Type' has a wrong offset!");

// Function BP_RsDialogManager.BP_RsDialogManager_C.ShowDialog_Completed
// 0x0002 (0x0002 - 0x0000)
struct BP_RsDialogManager_C_ShowDialog_Completed final
{
public:
	bool                                          ShowMsgStoreLetter;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ERsDialogCurrencyPaidType                     PaidType;                                          // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RsDialogManager_C_ShowDialog_Completed) == 0x000001, "Wrong alignment on BP_RsDialogManager_C_ShowDialog_Completed");
static_assert(sizeof(BP_RsDialogManager_C_ShowDialog_Completed) == 0x000002, "Wrong size on BP_RsDialogManager_C_ShowDialog_Completed");
static_assert(offsetof(BP_RsDialogManager_C_ShowDialog_Completed, ShowMsgStoreLetter) == 0x000000, "Member 'BP_RsDialogManager_C_ShowDialog_Completed::ShowMsgStoreLetter' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ShowDialog_Completed, PaidType) == 0x000001, "Member 'BP_RsDialogManager_C_ShowDialog_Completed::PaidType' has a wrong offset!");

// Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__BP_RsDialog_UseItem_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct BP_RsDialogManager_C_BndEvt__BP_RsDialog_UseItem_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature final
{
public:
	ERsDialogButtonType                           Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RsDialogManager_C_BndEvt__BP_RsDialog_UseItem_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature) == 0x000001, "Wrong alignment on BP_RsDialogManager_C_BndEvt__BP_RsDialog_UseItem_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature");
static_assert(sizeof(BP_RsDialogManager_C_BndEvt__BP_RsDialog_UseItem_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature) == 0x000001, "Wrong size on BP_RsDialogManager_C_BndEvt__BP_RsDialog_UseItem_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature");
static_assert(offsetof(BP_RsDialogManager_C_BndEvt__BP_RsDialog_UseItem_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature, Type) == 0x000000, "Member 'BP_RsDialogManager_C_BndEvt__BP_RsDialog_UseItem_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature::Type' has a wrong offset!");

// Function BP_RsDialogManager.BP_RsDialogManager_C.ShowDialog_UseItem
// 0x0018 (0x0018 - 0x0000)
struct BP_RsDialogManager_C_ShowDialog_UseItem final
{
public:
	class FText                                   EffectDescription;                                 // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(BP_RsDialogManager_C_ShowDialog_UseItem) == 0x000008, "Wrong alignment on BP_RsDialogManager_C_ShowDialog_UseItem");
static_assert(sizeof(BP_RsDialogManager_C_ShowDialog_UseItem) == 0x000018, "Wrong size on BP_RsDialogManager_C_ShowDialog_UseItem");
static_assert(offsetof(BP_RsDialogManager_C_ShowDialog_UseItem, EffectDescription) == 0x000000, "Member 'BP_RsDialogManager_C_ShowDialog_UseItem::EffectDescription' has a wrong offset!");

// Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__BP_RsDialog_ErrorCode_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct BP_RsDialogManager_C_BndEvt__BP_RsDialog_ErrorCode_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature final
{
public:
	ERsDialogButtonType                           Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RsDialogManager_C_BndEvt__BP_RsDialog_ErrorCode_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature) == 0x000001, "Wrong alignment on BP_RsDialogManager_C_BndEvt__BP_RsDialog_ErrorCode_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature");
static_assert(sizeof(BP_RsDialogManager_C_BndEvt__BP_RsDialog_ErrorCode_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature) == 0x000001, "Wrong size on BP_RsDialogManager_C_BndEvt__BP_RsDialog_ErrorCode_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature");
static_assert(offsetof(BP_RsDialogManager_C_BndEvt__BP_RsDialog_ErrorCode_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature, Type) == 0x000000, "Member 'BP_RsDialogManager_C_BndEvt__BP_RsDialog_ErrorCode_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature::Type' has a wrong offset!");

// Function BP_RsDialogManager.BP_RsDialogManager_C.ShowDialog_ErrorMessage
// 0x0004 (0x0004 - 0x0000)
struct BP_RsDialogManager_C_ShowDialog_ErrorMessage final
{
public:
	int32                                         ErrorCode;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RsDialogManager_C_ShowDialog_ErrorMessage) == 0x000004, "Wrong alignment on BP_RsDialogManager_C_ShowDialog_ErrorMessage");
static_assert(sizeof(BP_RsDialogManager_C_ShowDialog_ErrorMessage) == 0x000004, "Wrong size on BP_RsDialogManager_C_ShowDialog_ErrorMessage");
static_assert(offsetof(BP_RsDialogManager_C_ShowDialog_ErrorMessage, ErrorCode) == 0x000000, "Member 'BP_RsDialogManager_C_ShowDialog_ErrorMessage::ErrorCode' has a wrong offset!");

// Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__BP_RsDialog_ChargeRoseOrb_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct BP_RsDialogManager_C_BndEvt__BP_RsDialog_ChargeRoseOrb_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature final
{
public:
	ERsDialogButtonType                           Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RsDialogManager_C_BndEvt__BP_RsDialog_ChargeRoseOrb_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature) == 0x000001, "Wrong alignment on BP_RsDialogManager_C_BndEvt__BP_RsDialog_ChargeRoseOrb_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature");
static_assert(sizeof(BP_RsDialogManager_C_BndEvt__BP_RsDialog_ChargeRoseOrb_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature) == 0x000001, "Wrong size on BP_RsDialogManager_C_BndEvt__BP_RsDialog_ChargeRoseOrb_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature");
static_assert(offsetof(BP_RsDialogManager_C_BndEvt__BP_RsDialog_ChargeRoseOrb_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature, Type) == 0x000000, "Member 'BP_RsDialogManager_C_BndEvt__BP_RsDialog_ChargeRoseOrb_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature::Type' has a wrong offset!");

// Function BP_RsDialogManager.BP_RsDialogManager_C.AddItem_LimitCondition
// 0x0018 (0x0018 - 0x0000)
struct BP_RsDialogManager_C_AddItem_LimitCondition final
{
public:
	bool                                          IsAchieve;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56AD[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Text;                                              // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RsDialogManager_C_AddItem_LimitCondition) == 0x000008, "Wrong alignment on BP_RsDialogManager_C_AddItem_LimitCondition");
static_assert(sizeof(BP_RsDialogManager_C_AddItem_LimitCondition) == 0x000018, "Wrong size on BP_RsDialogManager_C_AddItem_LimitCondition");
static_assert(offsetof(BP_RsDialogManager_C_AddItem_LimitCondition, IsAchieve) == 0x000000, "Member 'BP_RsDialogManager_C_AddItem_LimitCondition::IsAchieve' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_AddItem_LimitCondition, Text) == 0x000008, "Member 'BP_RsDialogManager_C_AddItem_LimitCondition::Text' has a wrong offset!");

// Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__BP_RsDialog_LimitCondition_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct BP_RsDialogManager_C_BndEvt__BP_RsDialog_LimitCondition_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature final
{
public:
	ERsDialogButtonType                           Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RsDialogManager_C_BndEvt__BP_RsDialog_LimitCondition_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature) == 0x000001, "Wrong alignment on BP_RsDialogManager_C_BndEvt__BP_RsDialog_LimitCondition_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature");
static_assert(sizeof(BP_RsDialogManager_C_BndEvt__BP_RsDialog_LimitCondition_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature) == 0x000001, "Wrong size on BP_RsDialogManager_C_BndEvt__BP_RsDialog_LimitCondition_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature");
static_assert(offsetof(BP_RsDialogManager_C_BndEvt__BP_RsDialog_LimitCondition_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature, Type) == 0x000000, "Member 'BP_RsDialogManager_C_BndEvt__BP_RsDialog_LimitCondition_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature::Type' has a wrong offset!");

// Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__BP_RsDialog_InputCoupon_K2Node_ComponentBoundEvent_1_OnUseCoupon__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct BP_RsDialogManager_C_BndEvt__BP_RsDialog_InputCoupon_K2Node_ComponentBoundEvent_1_OnUseCoupon__DelegateSignature final
{
public:
	class FString                                 Code;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RsDialogManager_C_BndEvt__BP_RsDialog_InputCoupon_K2Node_ComponentBoundEvent_1_OnUseCoupon__DelegateSignature) == 0x000008, "Wrong alignment on BP_RsDialogManager_C_BndEvt__BP_RsDialog_InputCoupon_K2Node_ComponentBoundEvent_1_OnUseCoupon__DelegateSignature");
static_assert(sizeof(BP_RsDialogManager_C_BndEvt__BP_RsDialog_InputCoupon_K2Node_ComponentBoundEvent_1_OnUseCoupon__DelegateSignature) == 0x000010, "Wrong size on BP_RsDialogManager_C_BndEvt__BP_RsDialog_InputCoupon_K2Node_ComponentBoundEvent_1_OnUseCoupon__DelegateSignature");
static_assert(offsetof(BP_RsDialogManager_C_BndEvt__BP_RsDialog_InputCoupon_K2Node_ComponentBoundEvent_1_OnUseCoupon__DelegateSignature, Code) == 0x000000, "Member 'BP_RsDialogManager_C_BndEvt__BP_RsDialog_InputCoupon_K2Node_ComponentBoundEvent_1_OnUseCoupon__DelegateSignature::Code' has a wrong offset!");

// Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__BP_RsDialog_InputCoupon_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct BP_RsDialogManager_C_BndEvt__BP_RsDialog_InputCoupon_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature final
{
public:
	ERsDialogButtonType                           Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RsDialogManager_C_BndEvt__BP_RsDialog_InputCoupon_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature) == 0x000001, "Wrong alignment on BP_RsDialogManager_C_BndEvt__BP_RsDialog_InputCoupon_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature");
static_assert(sizeof(BP_RsDialogManager_C_BndEvt__BP_RsDialog_InputCoupon_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature) == 0x000001, "Wrong size on BP_RsDialogManager_C_BndEvt__BP_RsDialog_InputCoupon_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature");
static_assert(offsetof(BP_RsDialogManager_C_BndEvt__BP_RsDialog_InputCoupon_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature, Type) == 0x000000, "Member 'BP_RsDialogManager_C_BndEvt__BP_RsDialog_InputCoupon_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature::Type' has a wrong offset!");

// Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__BP_RsDialog_Caution_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct BP_RsDialogManager_C_BndEvt__BP_RsDialog_Caution_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature final
{
public:
	ERsDialogButtonType                           Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RsDialogManager_C_BndEvt__BP_RsDialog_Caution_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature) == 0x000001, "Wrong alignment on BP_RsDialogManager_C_BndEvt__BP_RsDialog_Caution_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature");
static_assert(sizeof(BP_RsDialogManager_C_BndEvt__BP_RsDialog_Caution_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature) == 0x000001, "Wrong size on BP_RsDialogManager_C_BndEvt__BP_RsDialog_Caution_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature");
static_assert(offsetof(BP_RsDialogManager_C_BndEvt__BP_RsDialog_Caution_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature, Type) == 0x000000, "Member 'BP_RsDialogManager_C_BndEvt__BP_RsDialog_Caution_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature::Type' has a wrong offset!");

// Function BP_RsDialogManager.BP_RsDialogManager_C.SetErrorMessage
// 0x0008 (0x0008 - 0x0000)
struct BP_RsDialogManager_C_SetErrorMessage final
{
public:
	int32                                         MessageId;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ErrorCode;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RsDialogManager_C_SetErrorMessage) == 0x000004, "Wrong alignment on BP_RsDialogManager_C_SetErrorMessage");
static_assert(sizeof(BP_RsDialogManager_C_SetErrorMessage) == 0x000008, "Wrong size on BP_RsDialogManager_C_SetErrorMessage");
static_assert(offsetof(BP_RsDialogManager_C_SetErrorMessage, MessageId) == 0x000000, "Member 'BP_RsDialogManager_C_SetErrorMessage::MessageId' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_SetErrorMessage, ErrorCode) == 0x000004, "Member 'BP_RsDialogManager_C_SetErrorMessage::ErrorCode' has a wrong offset!");

// Function BP_RsDialogManager.BP_RsDialogManager_C.Initialize
// 0x0044 (0x0044 - 0x0000)
struct BP_RsDialogManager_C_Initialize final
{
public:
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x0030(0x0010)(ZeroConstructor, NoDestructor)
	struct FSBCursorStateHandle                   CallFunc_ShowCursor_ReturnValue;                   // 0x0040(0x0004)(NoDestructor)
};
static_assert(alignof(BP_RsDialogManager_C_Initialize) == 0x000004, "Wrong alignment on BP_RsDialogManager_C_Initialize");
static_assert(sizeof(BP_RsDialogManager_C_Initialize) == 0x000044, "Wrong size on BP_RsDialogManager_C_Initialize");
static_assert(offsetof(BP_RsDialogManager_C_Initialize, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'BP_RsDialogManager_C_Initialize::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_Initialize, K2Node_CreateDelegate_OutputDelegate_1) == 0x000010, "Member 'BP_RsDialogManager_C_Initialize::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_Initialize, K2Node_CreateDelegate_OutputDelegate_2) == 0x000020, "Member 'BP_RsDialogManager_C_Initialize::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_Initialize, K2Node_CreateDelegate_OutputDelegate_3) == 0x000030, "Member 'BP_RsDialogManager_C_Initialize::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_Initialize, CallFunc_ShowCursor_ReturnValue) == 0x000040, "Member 'BP_RsDialogManager_C_Initialize::CallFunc_ShowCursor_ReturnValue' has a wrong offset!");

// Function BP_RsDialogManager.BP_RsDialogManager_C.Set Shop Type
// 0x0002 (0x0002 - 0x0000)
struct BP_RsDialogManager_C_Set_Shop_Type final
{
public:
	ESBRmShopMenuType                             Param_ShopType;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_RsDialogManager_C_Set_Shop_Type) == 0x000001, "Wrong alignment on BP_RsDialogManager_C_Set_Shop_Type");
static_assert(sizeof(BP_RsDialogManager_C_Set_Shop_Type) == 0x000002, "Wrong size on BP_RsDialogManager_C_Set_Shop_Type");
static_assert(offsetof(BP_RsDialogManager_C_Set_Shop_Type, Param_ShopType) == 0x000000, "Member 'BP_RsDialogManager_C_Set_Shop_Type::Param_ShopType' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_Set_Shop_Type, K2Node_SwitchEnum_CmpSuccess) == 0x000001, "Member 'BP_RsDialogManager_C_Set_Shop_Type::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function BP_RsDialogManager.BP_RsDialogManager_C.Set Next Dialog
// 0x0003 (0x0003 - 0x0000)
struct BP_RsDialogManager_C_Set_Next_Dialog final
{
public:
	ERsDialogType                                 Param_NextDialog;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_RsDialogManager_C_Set_Next_Dialog) == 0x000001, "Wrong alignment on BP_RsDialogManager_C_Set_Next_Dialog");
static_assert(sizeof(BP_RsDialogManager_C_Set_Next_Dialog) == 0x000003, "Wrong size on BP_RsDialogManager_C_Set_Next_Dialog");
static_assert(offsetof(BP_RsDialogManager_C_Set_Next_Dialog, Param_NextDialog) == 0x000000, "Member 'BP_RsDialogManager_C_Set_Next_Dialog::Param_NextDialog' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_Set_Next_Dialog, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000001, "Member 'BP_RsDialogManager_C_Set_Next_Dialog::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_Set_Next_Dialog, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x000002, "Member 'BP_RsDialogManager_C_Set_Next_Dialog::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");

// Function BP_RsDialogManager.BP_RsDialogManager_C.SwitchNextDialog
// 0x0020 (0x0020 - 0x0000)
struct BP_RsDialogManager_C_SwitchNextDialog final
{
public:
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56AE[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56AF[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_1;             // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0017(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56B0[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_2;             // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RsDialogManager_C_SwitchNextDialog) == 0x000004, "Wrong alignment on BP_RsDialogManager_C_SwitchNextDialog");
static_assert(sizeof(BP_RsDialogManager_C_SwitchNextDialog) == 0x000020, "Wrong size on BP_RsDialogManager_C_SwitchNextDialog");
static_assert(offsetof(BP_RsDialogManager_C_SwitchNextDialog, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000000, "Member 'BP_RsDialogManager_C_SwitchNextDialog::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_SwitchNextDialog, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000004, "Member 'BP_RsDialogManager_C_SwitchNextDialog::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_SwitchNextDialog, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000008, "Member 'BP_RsDialogManager_C_SwitchNextDialog::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_SwitchNextDialog, CallFunc_Conv_ByteToInt_ReturnValue_1) == 0x00000C, "Member 'BP_RsDialogManager_C_SwitchNextDialog::CallFunc_Conv_ByteToInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_SwitchNextDialog, K2Node_SwitchEnum_CmpSuccess) == 0x000010, "Member 'BP_RsDialogManager_C_SwitchNextDialog::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_SwitchNextDialog, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000011, "Member 'BP_RsDialogManager_C_SwitchNextDialog::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_SwitchNextDialog, CallFunc_BooleanOR_ReturnValue) == 0x000012, "Member 'BP_RsDialogManager_C_SwitchNextDialog::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_SwitchNextDialog, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000013, "Member 'BP_RsDialogManager_C_SwitchNextDialog::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_SwitchNextDialog, Temp_bool_Variable) == 0x000014, "Member 'BP_RsDialogManager_C_SwitchNextDialog::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_SwitchNextDialog, CallFunc_MakeLiteralByte_ReturnValue) == 0x000015, "Member 'BP_RsDialogManager_C_SwitchNextDialog::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_SwitchNextDialog, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000016, "Member 'BP_RsDialogManager_C_SwitchNextDialog::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_SwitchNextDialog, K2Node_Select_Default) == 0x000017, "Member 'BP_RsDialogManager_C_SwitchNextDialog::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_SwitchNextDialog, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000018, "Member 'BP_RsDialogManager_C_SwitchNextDialog::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_SwitchNextDialog, CallFunc_Conv_ByteToInt_ReturnValue_2) == 0x00001C, "Member 'BP_RsDialogManager_C_SwitchNextDialog::CallFunc_Conv_ByteToInt_ReturnValue_2' has a wrong offset!");

// Function BP_RsDialogManager.BP_RsDialogManager_C.ExitClickedEscBtn
// 0x0008 (0x0008 - 0x0000)
struct BP_RsDialogManager_C_ExitClickedEscBtn final
{
public:
	int32                                         CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_RsDialogManager_C_ExitClickedEscBtn) == 0x000004, "Wrong alignment on BP_RsDialogManager_C_ExitClickedEscBtn");
static_assert(sizeof(BP_RsDialogManager_C_ExitClickedEscBtn) == 0x000008, "Wrong size on BP_RsDialogManager_C_ExitClickedEscBtn");
static_assert(offsetof(BP_RsDialogManager_C_ExitClickedEscBtn, CallFunc_GetActiveWidgetIndex_ReturnValue) == 0x000000, "Member 'BP_RsDialogManager_C_ExitClickedEscBtn::CallFunc_GetActiveWidgetIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialogManager_C_ExitClickedEscBtn, K2Node_SwitchInteger_CmpSuccess) == 0x000004, "Member 'BP_RsDialogManager_C_ExitClickedEscBtn::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");

}

